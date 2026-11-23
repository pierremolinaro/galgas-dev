#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVariableDeclarationWithAssignmentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableDeclarationWithAssignmentAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_localVariableDeclarationWithAssignmentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_localVariableDeclarationWithAssignmentAST_2E_weak (const class GGS_localVariableDeclarationWithAssignmentAST & inSource) ;

  public: GGS_localVariableDeclarationWithAssignmentAST_2E_weak & operator = (const class GGS_localVariableDeclarationWithAssignmentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_localVariableDeclarationWithAssignmentAST_2E_weak init_nil (void) {
    GGS_localVariableDeclarationWithAssignmentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_localVariableDeclarationWithAssignmentAST bang_localVariableDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_localVariableDeclarationWithAssignmentAST unwrappedValue (void) const ;

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
  public: static class GGS_localVariableDeclarationWithAssignmentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableDeclarationWithAssignmentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVariableDeclarationNoAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableDeclarationNoAssignmentAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_localVariableDeclarationNoAssignmentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_localVariableDeclarationNoAssignmentAST (const class cPtr_localVariableDeclarationNoAssignmentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mVariableName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVariableDeclarationNoAssignmentAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               const class GGS_lstring & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableDeclarationNoAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @localVariableDeclarationNoAssignmentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_localVariableDeclarationNoAssignmentAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void localVariableDeclarationNoAssignmentAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_lstring & inOperand2,
                                                                         Compiler * inCompiler) ;


//--- Extension proc analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mVariableName ;


//--- Default constructor
  public: cPtr_localVariableDeclarationNoAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_localVariableDeclarationNoAssignmentAST (const GGS_location & in_mInstructionLocation,
                                                        const GGS_lstring & in_mTypeName,
                                                        const GGS_lstring & in_mVariableName,
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
// Phase 1: @localVariableDeclarationNoAssignmentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableDeclarationNoAssignmentAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_localVariableDeclarationNoAssignmentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_localVariableDeclarationNoAssignmentAST_2E_weak (const class GGS_localVariableDeclarationNoAssignmentAST & inSource) ;

  public: GGS_localVariableDeclarationNoAssignmentAST_2E_weak & operator = (const class GGS_localVariableDeclarationNoAssignmentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_localVariableDeclarationNoAssignmentAST_2E_weak init_nil (void) {
    GGS_localVariableDeclarationNoAssignmentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_localVariableDeclarationNoAssignmentAST bang_localVariableDeclarationNoAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_localVariableDeclarationNoAssignmentAST unwrappedValue (void) const ;

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
  public: static class GGS_localVariableDeclarationNoAssignmentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableDeclarationNoAssignmentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfAssignmentInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_selfAssignmentInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selfAssignmentInstructionAST (const class cPtr_selfAssignmentInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_assignmentSupplementAST readProperty_mSupplement (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfAssignmentInstructionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_assignmentSupplementAST & inOperand1,
                                                                    const class GGS_semanticExpressionAST & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfAssignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selfAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_selfAssignmentInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selfAssignmentInstructionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_assignmentSupplementAST & inOperand1,
                                                              const class GGS_semanticExpressionAST & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension proc analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_assignmentSupplementAST mProperty_mSupplement ;
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_selfAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                             const GGS_assignmentSupplementAST & in_mSupplement,
                                             const GGS_semanticExpressionAST & in_mSourceExpression,
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
// Phase 1: @selfAssignmentInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfAssignmentInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfAssignmentInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfAssignmentInstructionAST_2E_weak (const class GGS_selfAssignmentInstructionAST & inSource) ;

  public: GGS_selfAssignmentInstructionAST_2E_weak & operator = (const class GGS_selfAssignmentInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfAssignmentInstructionAST_2E_weak init_nil (void) {
    GGS_selfAssignmentInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfAssignmentInstructionAST bang_selfAssignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selfAssignmentInstructionAST unwrappedValue (void) const ;

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
  public: static class GGS_selfAssignmentInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfAssignmentInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAssignmentInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @superInitInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_superInitInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_superInitInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_superInitInstructionAST (const class cPtr_superInitInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS__5B_actualOutputArgumentAST_5D_ readProperty_mActualParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_superInitInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS__5B_actualOutputArgumentAST_5D_ & inOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superInitInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superInitInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @superInitInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_superInitInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void superInitInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                     const class GGS__5B_actualOutputArgumentAST_5D_ & inOperand1,
                                                     Compiler * inCompiler) ;


//--- Extension proc analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS__5B_actualOutputArgumentAST_5D_ mProperty_mActualParameterList ;


//--- Default constructor
  public: cPtr_superInitInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_superInitInstructionAST (const GGS_location & in_mInstructionLocation,
                                        const GGS__5B_actualOutputArgumentAST_5D_ & in_mActualParameterList,
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
// Phase 1: @superInitInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_superInitInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_superInitInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_superInitInstructionAST_2E_weak (const class GGS_superInitInstructionAST & inSource) ;

  public: GGS_superInitInstructionAST_2E_weak & operator = (const class GGS_superInitInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_superInitInstructionAST_2E_weak init_nil (void) {
    GGS_superInitInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_superInitInstructionAST bang_superInitInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_superInitInstructionAST unwrappedValue (void) const ;

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
  public: static class GGS_superInitInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superInitInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superInitInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeMethodCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_typeMethodCallInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_typeMethodCallInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_typeMethodCallInstructionAST (const class cPtr_typeMethodCallInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mMethodName (void) const ;

  public: class GGS__5B_actualParameterAST_5D_ readProperty_mActualParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeMethodCallInstructionAST init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS__5B_actualParameterAST_5D_ & inOperand3,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeMethodCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @typeMethodCallInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_typeMethodCallInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void typeMethodCallInstructionAST_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_lstring & inOperand2,
                                                                  const class GGS__5B_actualParameterAST_5D_ & inOperand3,
                                                                  Compiler * inCompiler) ;


//--- Extension proc analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mMethodName ;
  public: GGS__5B_actualParameterAST_5D_ mProperty_mActualParameterList ;


//--- Default constructor
  public: cPtr_typeMethodCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_typeMethodCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                             const GGS_lstring & in_mTypeName,
                                             const GGS_lstring & in_mMethodName,
                                             const GGS__5B_actualParameterAST_5D_ & in_mActualParameterList,
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
// Phase 1: @typeMethodCallInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_typeMethodCallInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_typeMethodCallInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_typeMethodCallInstructionAST_2E_weak (const class GGS_typeMethodCallInstructionAST & inSource) ;

  public: GGS_typeMethodCallInstructionAST_2E_weak & operator = (const class GGS_typeMethodCallInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_typeMethodCallInstructionAST_2E_weak init_nil (void) {
    GGS_typeMethodCallInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_typeMethodCallInstructionAST bang_typeMethodCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_typeMethodCallInstructionAST unwrappedValue (void) const ;

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
  public: static class GGS_typeMethodCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeMethodCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @assignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_assignmentInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_assignmentInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_assignmentInstructionAST (const class cPtr_assignmentInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetVariableName (void) const ;

  public: class GGS_assignmentSupplementAST readProperty_mSupplement (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_assignmentInstructionAST init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_assignmentSupplementAST & inOperand2,
                                                                    const class GGS_semanticExpressionAST & inOperand3,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @assignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_assignmentInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void assignmentInstructionAST_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              const class GGS_assignmentSupplementAST & inOperand2,
                                                              const class GGS_semanticExpressionAST & inOperand3,
                                                              Compiler * inCompiler) ;


//--- Extension proc analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetVariableName ;
  public: GGS_assignmentSupplementAST mProperty_mSupplement ;
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_assignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_assignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                         const GGS_lstring & in_mTargetVariableName,
                                         const GGS_assignmentSupplementAST & in_mSupplement,
                                         const GGS_semanticExpressionAST & in_mSourceExpression,
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
// Phase 1: @assignmentInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_assignmentInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_assignmentInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_assignmentInstructionAST_2E_weak (const class GGS_assignmentInstructionAST & inSource) ;

  public: GGS_assignmentInstructionAST_2E_weak & operator = (const class GGS_assignmentInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_assignmentInstructionAST_2E_weak init_nil (void) {
    GGS_assignmentInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_assignmentInstructionAST bang_assignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_assignmentInstructionAST unwrappedValue (void) const ;

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
  public: static class GGS_assignmentInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assignmentInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfPropertyAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfPropertyAssignmentInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_selfPropertyAssignmentInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selfPropertyAssignmentInstructionAST (const class cPtr_selfPropertyAssignmentInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetSelfPropertyName (void) const ;

  public: class GGS_assignmentSupplementAST readProperty_mSupplement (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfPropertyAssignmentInstructionAST init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_assignmentSupplementAST & inOperand2,
                                                                                const class GGS_semanticExpressionAST & inOperand3,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfPropertyAssignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selfPropertyAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_selfPropertyAssignmentInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selfPropertyAssignmentInstructionAST_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_assignmentSupplementAST & inOperand2,
                                                                          const class GGS_semanticExpressionAST & inOperand3,
                                                                          Compiler * inCompiler) ;


//--- Extension proc analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetSelfPropertyName ;
  public: GGS_assignmentSupplementAST mProperty_mSupplement ;
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_selfPropertyAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfPropertyAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                     const GGS_lstring & in_mTargetSelfPropertyName,
                                                     const GGS_assignmentSupplementAST & in_mSupplement,
                                                     const GGS_semanticExpressionAST & in_mSourceExpression,
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
// Phase 1: @selfPropertyAssignmentInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfPropertyAssignmentInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfPropertyAssignmentInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfPropertyAssignmentInstructionAST_2E_weak (const class GGS_selfPropertyAssignmentInstructionAST & inSource) ;

  public: GGS_selfPropertyAssignmentInstructionAST_2E_weak & operator = (const class GGS_selfPropertyAssignmentInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfPropertyAssignmentInstructionAST_2E_weak init_nil (void) {
    GGS_selfPropertyAssignmentInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfPropertyAssignmentInstructionAST bang_selfPropertyAssignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selfPropertyAssignmentInstructionAST unwrappedValue (void) const ;

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
  public: static class GGS_selfPropertyAssignmentInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfPropertyAssignmentInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexiqueComponentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexiqueComponentAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexiqueComponentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexiqueComponentAST_2E_weak (const class GGS_lexiqueComponentAST & inSource) ;

  public: GGS_lexiqueComponentAST_2E_weak & operator = (const class GGS_lexiqueComponentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexiqueComponentAST_2E_weak init_nil (void) {
    GGS_lexiqueComponentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexiqueComponentAST bang_lexiqueComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexiqueComponentAST unwrappedValue (void) const ;

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
  public: static class GGS_lexiqueComponentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexiqueComponentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueComponentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR projectComponentGrammar
//--------------------------------------------------------------------------------------------------

class cGrammar_projectComponentGrammar : public cParser_projectComponentSyntax {
//------------------------------------- 'project_component_start_symbol' non terminal
//--- 'parse' label
 /*  public: virtual void nt_project_5F_component_5F_start_5F_symbol_parse (Lexique_projectComponentScanner * inCompiler) ; */

//--- indexing
  public: virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (Lexique_projectComponentScanner * inCompiler) ;

//----------- '' label
  public: virtual void nt_project_5F_component_5F_start_5F_symbol_ (GGS_projectSettings & outArgument0,
                                                                    Lexique_projectComponentScanner * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_projectSettings & outArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_projectSettings & outArgument0
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

  public: virtual int32_t select_projectComponentSyntax_0 (Lexique_projectComponentScanner *) ;

  public: virtual int32_t select_projectComponentSyntax_1 (Lexique_projectComponentScanner *) ;

  public: virtual int32_t select_projectComponentSyntax_2 (Lexique_projectComponentScanner *) ;

  public: virtual int32_t select_projectComponentSyntax_3 (Lexique_projectComponentScanner *) ;

  public: virtual int32_t select_projectComponentSyntax_4 (Lexique_projectComponentScanner *) ;

  public: virtual int32_t select_projectComponentSyntax_5 (Lexique_projectComponentScanner *) ;

  public: virtual int32_t select_projectComponentSyntax_6 (Lexique_projectComponentScanner *) ;
} ;

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_grammarForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarForGeneration (const class cPtr_grammarForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mGrammarName (void) const ;

  public: class GGS_string readProperty_mLexiqueName (void) const ;

  public: class GGS_nonTerminalSymbolMapForGrammarAnalysis readProperty_mNonTerminalMapForGrammarAnalysis (void) const ;

  public: class GGS__5B_nonTerminalToAdd_5D_ readProperty_mNonTerminalToAddList (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mSyntaxComponents (void) const ;

  public: class GGS_string readProperty_mStartSymbolName (void) const ;

  public: class GGS_bool readProperty_mHasTranslateFeature (void) const ;

  public: class GGS_string readProperty_mCppFileContents (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarForGeneration init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                                              const class GGS_bool & inOperand1,
                                                                                                                                              const class GGS_string & inOperand2,
                                                                                                                                              const class GGS_string & inOperand3,
                                                                                                                                              const class GGS_string & inOperand4,
                                                                                                                                              const class GGS_nonTerminalSymbolMapForGrammarAnalysis & inOperand5,
                                                                                                                                              const class GGS__5B_nonTerminalToAdd_5D_ & inOperand6,
                                                                                                                                              const class GGS__5B_lstring_5D_ & inOperand7,
                                                                                                                                              const class GGS_string & inOperand8,
                                                                                                                                              const class GGS_bool & inOperand9,
                                                                                                                                              const class GGS_string & inOperand10,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarForGeneration_init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                                        const class GGS_bool & inOperand1,
                                                                                                                                        const class GGS_string & inOperand2,
                                                                                                                                        const class GGS_string & inOperand3,
                                                                                                                                        const class GGS_string & inOperand4,
                                                                                                                                        const class GGS_nonTerminalSymbolMapForGrammarAnalysis & inOperand5,
                                                                                                                                        const class GGS__5B_nonTerminalToAdd_5D_ & inOperand6,
                                                                                                                                        const class GGS__5B_lstring_5D_ & inOperand7,
                                                                                                                                        const class GGS_string & inOperand8,
                                                                                                                                        const class GGS_bool & inOperand9,
                                                                                                                                        const class GGS_string & inOperand10,
                                                                                                                                        Compiler * inCompiler) ;


//--- Extension func getImplementationCppFileName
  public: virtual class GGS_string getter_getImplementationCppFileName (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func hasCppHeaderFile
  public: virtual class GGS_bool getter_hasCppHeaderFile (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func isPredefined
  public: virtual class GGS_bool getter_isPredefined (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg__inUnifiedTypeMap,
           class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mGrammarName ;
  public: GGS_string mProperty_mLexiqueName ;
  public: GGS_nonTerminalSymbolMapForGrammarAnalysis mProperty_mNonTerminalMapForGrammarAnalysis ;
  public: GGS__5B_nonTerminalToAdd_5D_ mProperty_mNonTerminalToAddList ;
  public: GGS__5B_lstring_5D_ mProperty_mSyntaxComponents ;
  public: GGS_string mProperty_mStartSymbolName ;
  public: GGS_bool mProperty_mHasTranslateFeature ;
  public: GGS_string mProperty_mCppFileContents ;


//--- Default constructor
  public: cPtr_grammarForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarForGeneration (const GGS_string & in_infoMessage,
                                     const GGS_bool & in_generateHeader,
                                     const GGS_string & in_implementationCppFileName,
                                     const GGS_string & in_mGrammarName,
                                     const GGS_string & in_mLexiqueName,
                                     const GGS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                     const GGS__5B_nonTerminalToAdd_5D_ & in_mNonTerminalToAddList,
                                     const GGS__5B_lstring_5D_ & in_mSyntaxComponents,
                                     const GGS_string & in_mStartSymbolName,
                                     const GGS_bool & in_mHasTranslateFeature,
                                     const GGS_string & in_mCppFileContents,
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
// Phase 1: @semanticDeclarationWithHeaderForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticDeclarationWithHeaderForGeneration_2E_weak : public GGS_semanticDeclarationForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (const class GGS_semanticDeclarationWithHeaderForGeneration & inSource) ;

  public: GGS_semanticDeclarationWithHeaderForGeneration_2E_weak & operator = (const class GGS_semanticDeclarationWithHeaderForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_semanticDeclarationWithHeaderForGeneration_2E_weak init_nil (void) {
    GGS_semanticDeclarationWithHeaderForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_semanticDeclarationWithHeaderForGeneration bang_semanticDeclarationWithHeaderForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_semanticDeclarationWithHeaderForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_semanticDeclarationWithHeaderForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticDeclarationWithHeaderForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_syntaxDeclarationForGeneration : public GGS_semanticDeclarationForGeneration {
//--------------------------------- Default constructor
  public: GGS_syntaxDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_syntaxDeclarationForGeneration (const class cPtr_syntaxDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mSyntaxComponentName (void) const ;

  public: class GGS_string readProperty_mLexiqueName (void) const ;

  public: class GGS_nonterminalMap readProperty_mNonterminalDeclarationMap (void) const ;

  public: class GGS__5B_ruleDeclarationAST_5D_ readProperty_mRuleDeclarationList (void) const ;

  public: class GGS_u_33__32_ readProperty_mSelectMethodCount (void) const ;

  public: class GGS_bool readProperty_mHasIndexing (void) const ;

  public: class GGS_bool readProperty_mHasTranslateFeature (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxDeclarationForGeneration init_21_infoMessage_21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                     const class GGS_string & inOperand1,
                                                                                                     const class GGS_string & inOperand2,
                                                                                                     const class GGS_nonterminalMap & inOperand3,
                                                                                                     const class GGS__5B_ruleDeclarationAST_5D_ & inOperand4,
                                                                                                     const class GGS_u_33__32_ & inOperand5,
                                                                                                     const class GGS_bool & inOperand6,
                                                                                                     const class GGS_bool & inOperand7,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syntaxDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @syntaxDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_syntaxDeclarationForGeneration : public cPtr_semanticDeclarationForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void syntaxDeclarationForGeneration_init_21_infoMessage_21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                               const class GGS_string & inOperand1,
                                                                                               const class GGS_string & inOperand2,
                                                                                               const class GGS_nonterminalMap & inOperand3,
                                                                                               const class GGS__5B_ruleDeclarationAST_5D_ & inOperand4,
                                                                                               const class GGS_u_33__32_ & inOperand5,
                                                                                               const class GGS_bool & inOperand6,
                                                                                               const class GGS_bool & inOperand7,
                                                                                               Compiler * inCompiler) ;


//--- Extension func getImplementationCppFileName
  public: virtual class GGS_string getter_getImplementationCppFileName (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func hasCppHeaderFile
  public: virtual class GGS_bool getter_hasCppHeaderFile (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func isPredefined
  public: virtual class GGS_bool getter_isPredefined (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg__inUnifiedTypeMap,
           class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mSyntaxComponentName ;
  public: GGS_string mProperty_mLexiqueName ;
  public: GGS_nonterminalMap mProperty_mNonterminalDeclarationMap ;
  public: GGS__5B_ruleDeclarationAST_5D_ mProperty_mRuleDeclarationList ;
  public: GGS_u_33__32_ mProperty_mSelectMethodCount ;
  public: GGS_bool mProperty_mHasIndexing ;
  public: GGS_bool mProperty_mHasTranslateFeature ;


//--- Default constructor
  public: cPtr_syntaxDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syntaxDeclarationForGeneration (const GGS_string & in_infoMessage,
                                               const GGS_string & in_mSyntaxComponentName,
                                               const GGS_string & in_mLexiqueName,
                                               const GGS_nonterminalMap & in_mNonterminalDeclarationMap,
                                               const GGS__5B_ruleDeclarationAST_5D_ & in_mRuleDeclarationList,
                                               const GGS_u_33__32_ & in_mSelectMethodCount,
                                               const GGS_bool & in_mHasIndexing,
                                               const GGS_bool & in_mHasTranslateFeature,
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
// Phase 1: @syntaxDeclarationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_syntaxDeclarationForGeneration_2E_weak : public GGS_semanticDeclarationForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_syntaxDeclarationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_syntaxDeclarationForGeneration_2E_weak (const class GGS_syntaxDeclarationForGeneration & inSource) ;

  public: GGS_syntaxDeclarationForGeneration_2E_weak & operator = (const class GGS_syntaxDeclarationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_syntaxDeclarationForGeneration_2E_weak init_nil (void) {
    GGS_syntaxDeclarationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_syntaxDeclarationForGeneration bang_syntaxDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_syntaxDeclarationForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_syntaxDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syntaxDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexiqueDeclarationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexiqueDeclarationForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexiqueDeclarationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexiqueDeclarationForGeneration_2E_weak (const class GGS_lexiqueDeclarationForGeneration & inSource) ;

  public: GGS_lexiqueDeclarationForGeneration_2E_weak & operator = (const class GGS_lexiqueDeclarationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexiqueDeclarationForGeneration_2E_weak init_nil (void) {
    GGS_lexiqueDeclarationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexiqueDeclarationForGeneration bang_lexiqueDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexiqueDeclarationForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_lexiqueDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexiqueDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primitiveTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_primitiveTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_primitiveTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_primitiveTypeForGeneration (const class cPtr_primitiveTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mPredefinedTypeName (void) const ;

  public: class GGS_string readProperty_mCppDeclarationString (void) const ;

  public: class GGS_bool readProperty_isPackage (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primitiveTypeForGeneration init_21_infoMessage_21__21__21__21_isPackage (const class GGS_string & inOperand0,
                                                                                              const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                              const class GGS_string & inOperand2,
                                                                                              const class GGS_string & inOperand3,
                                                                                              const class GGS_bool & inOperand4,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_primitiveTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @primitiveTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_primitiveTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void primitiveTypeForGeneration_init_21_infoMessage_21__21__21__21_isPackage (const class GGS_string & inOperand0,
                                                                                        const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                        const class GGS_string & inOperand2,
                                                                                        const class GGS_string & inOperand3,
                                                                                        const class GGS_bool & inOperand4,
                                                                                        Compiler * inCompiler) ;


//--- Extension func appendPrimitiveTypeDeclaration
  public: virtual class GGS_string getter_appendPrimitiveTypeDeclaration (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_string mProperty_mPredefinedTypeName ;
  public: GGS_string mProperty_mCppDeclarationString ;
  public: GGS_bool mProperty_isPackage ;


//--- Default constructor
  public: cPtr_primitiveTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_primitiveTypeForGeneration (const GGS_string & in_infoMessage,
                                           const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                           const GGS_string & in_mPredefinedTypeName,
                                           const GGS_string & in_mCppDeclarationString,
                                           const GGS_bool & in_isPackage,
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
// Phase 1: @primitiveTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_primitiveTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_primitiveTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_primitiveTypeForGeneration_2E_weak (const class GGS_primitiveTypeForGeneration & inSource) ;

  public: GGS_primitiveTypeForGeneration_2E_weak & operator = (const class GGS_primitiveTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_primitiveTypeForGeneration_2E_weak init_nil (void) {
    GGS_primitiveTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_primitiveTypeForGeneration bang_primitiveTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_primitiveTypeForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_primitiveTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_primitiveTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@formalArgumentPassingModeAST correspondingEffectiveParameterString' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_correspondingEffectiveParameterString (const class GGS_formalArgumentPassingModeAST & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @overrideExtensionGetterForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_overrideExtensionGetterForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_overrideExtensionGetterForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_overrideExtensionGetterForGeneration_2E_weak (const class GGS_overrideExtensionGetterForGeneration & inSource) ;

  public: GGS_overrideExtensionGetterForGeneration_2E_weak & operator = (const class GGS_overrideExtensionGetterForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_overrideExtensionGetterForGeneration_2E_weak init_nil (void) {
    GGS_overrideExtensionGetterForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_overrideExtensionGetterForGeneration bang_overrideExtensionGetterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_overrideExtensionGetterForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_overrideExtensionGetterForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overrideExtensionGetterForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractExtensionMethodForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractExtensionMethodForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_abstractExtensionMethodForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractExtensionMethodForGeneration_2E_weak (const class GGS_abstractExtensionMethodForGeneration & inSource) ;

  public: GGS_abstractExtensionMethodForGeneration_2E_weak & operator = (const class GGS_abstractExtensionMethodForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractExtensionMethodForGeneration_2E_weak init_nil (void) {
    GGS_abstractExtensionMethodForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractExtensionMethodForGeneration bang_abstractExtensionMethodForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractExtensionMethodForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_abstractExtensionMethodForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractExtensionMethodForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionSetterForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_extensionSetterForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_extensionSetterForGeneration_2E_weak (const class GGS_extensionSetterForGeneration & inSource) ;

  public: GGS_extensionSetterForGeneration_2E_weak & operator = (const class GGS_extensionSetterForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_extensionSetterForGeneration_2E_weak init_nil (void) {
    GGS_extensionSetterForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_extensionSetterForGeneration bang_extensionSetterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_extensionSetterForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_extensionSetterForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionSetterForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionInitializerForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_extensionInitializerForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_extensionInitializerForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_extensionInitializerForGeneration_2E_weak (const class GGS_extensionInitializerForGeneration & inSource) ;

  public: GGS_extensionInitializerForGeneration_2E_weak & operator = (const class GGS_extensionInitializerForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_extensionInitializerForGeneration_2E_weak init_nil (void) {
    GGS_extensionInitializerForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_extensionInitializerForGeneration bang_extensionInitializerForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_extensionInitializerForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_extensionInitializerForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionInitializerForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionGetterForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_extensionGetterForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_extensionGetterForGeneration_2E_weak (const class GGS_extensionGetterForGeneration & inSource) ;

  public: GGS_extensionGetterForGeneration_2E_weak & operator = (const class GGS_extensionGetterForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_extensionGetterForGeneration_2E_weak init_nil (void) {
    GGS_extensionGetterForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_extensionGetterForGeneration bang_extensionGetterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_extensionGetterForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_extensionGetterForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionGetterForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @overridingExtensionMethodForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_overridingExtensionMethodForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_overridingExtensionMethodForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_overridingExtensionMethodForGeneration_2E_weak (const class GGS_overridingExtensionMethodForGeneration & inSource) ;

  public: GGS_overridingExtensionMethodForGeneration_2E_weak & operator = (const class GGS_overridingExtensionMethodForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_overridingExtensionMethodForGeneration_2E_weak init_nil (void) {
    GGS_overridingExtensionMethodForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_overridingExtensionMethodForGeneration bang_overridingExtensionMethodForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_overridingExtensionMethodForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_overridingExtensionMethodForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingExtensionMethodForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractExtensionGetterForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractExtensionGetterForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_abstractExtensionGetterForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractExtensionGetterForGeneration_2E_weak (const class GGS_abstractExtensionGetterForGeneration & inSource) ;

  public: GGS_abstractExtensionGetterForGeneration_2E_weak & operator = (const class GGS_abstractExtensionGetterForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractExtensionGetterForGeneration_2E_weak init_nil (void) {
    GGS_abstractExtensionGetterForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractExtensionGetterForGeneration bang_abstractExtensionGetterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractExtensionGetterForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_abstractExtensionGetterForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractExtensionGetterForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMethodForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_extensionMethodForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_extensionMethodForGeneration_2E_weak (const class GGS_extensionMethodForGeneration & inSource) ;

  public: GGS_extensionMethodForGeneration_2E_weak & operator = (const class GGS_extensionMethodForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_extensionMethodForGeneration_2E_weak init_nil (void) {
    GGS_extensionMethodForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_extensionMethodForGeneration bang_extensionMethodForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_extensionMethodForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_extensionMethodForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionMethodForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalStructuredSendInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalStructuredSendInstructionAST : public GGS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalStructuredSendInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalStructuredSendInstructionAST (const class cPtr_lexicalStructuredSendInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS__5B_lexicalSendSearchAST_5D_ readProperty_mLexicalSendSearchList (void) const ;

  public: class GGS_lexicalSendDefaultActionAST readProperty_mLexicalSendDefaultAction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalStructuredSendInstructionAST init_21__21_ (const class GGS__5B_lexicalSendSearchAST_5D_ & inOperand0,
                                                                       const class GGS_lexicalSendDefaultActionAST & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalStructuredSendInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalStructuredSendInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalStructuredSendInstructionAST : public cPtr_lexicalInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalStructuredSendInstructionAST_init_21__21_ (const class GGS__5B_lexicalSendSearchAST_5D_ & inOperand0,
                                                                 const class GGS_lexicalSendDefaultActionAST & inOperand1,
                                                                 Compiler * inCompiler) ;


//--- Extension func generateLexicalInstructionCode
  public: virtual class GGS_string getter_generateLexicalInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaInstructionCode
  public: virtual class GGS_string getter_generateSwiftCocoaInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func lexicalInstructionUsesLoopLocalVariable
  public: virtual class GGS_bool getter_lexicalInstructionUsesLoopLocalVariable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalInstruction
  public: virtual void method_checkLexicalInstruction (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           class GGS_lexicalTagMap & arg__ioTagMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS__5B_lexicalSendSearchAST_5D_ mProperty_mLexicalSendSearchList ;
  public: GGS_lexicalSendDefaultActionAST mProperty_mLexicalSendDefaultAction ;


//--- Default constructor
  public: cPtr_lexicalStructuredSendInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalStructuredSendInstructionAST (const GGS__5B_lexicalSendSearchAST_5D_ & in_mLexicalSendSearchList,
                                                    const GGS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction,
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
// Phase 1: @lexicalStructuredSendInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalStructuredSendInstructionAST_2E_weak : public GGS_lexicalInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalStructuredSendInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalStructuredSendInstructionAST_2E_weak (const class GGS_lexicalStructuredSendInstructionAST & inSource) ;

  public: GGS_lexicalStructuredSendInstructionAST_2E_weak & operator = (const class GGS_lexicalStructuredSendInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalStructuredSendInstructionAST_2E_weak init_nil (void) {
    GGS_lexicalStructuredSendInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalStructuredSendInstructionAST bang_lexicalStructuredSendInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalStructuredSendInstructionAST unwrappedValue (void) const ;

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
  public: static class GGS_lexicalStructuredSendInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalStructuredSendInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routinePrototypeDeclarationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_routinePrototypeDeclarationForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_routinePrototypeDeclarationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_routinePrototypeDeclarationForGeneration_2E_weak (const class GGS_routinePrototypeDeclarationForGeneration & inSource) ;

  public: GGS_routinePrototypeDeclarationForGeneration_2E_weak & operator = (const class GGS_routinePrototypeDeclarationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_routinePrototypeDeclarationForGeneration_2E_weak init_nil (void) {
    GGS_routinePrototypeDeclarationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_routinePrototypeDeclarationForGeneration bang_routinePrototypeDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_routinePrototypeDeclarationForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_routinePrototypeDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_routinePrototypeDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4ExpressionSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_ExpressionSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_ExpressionSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                  class GGS__5B_actualParameterAST_5D_ & outArgument1,
                                                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GGS_galgasDeclarationAST & ioArgument0,
                                          class GGS_semanticExpressionAST & outArgument1,
                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                 class GGS_semanticExpressionAST & outArgument1,
                                                 class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                class GGS_semanticExpressionAST & outArgument1,
                                                class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_factor_ (class GGS_galgasDeclarationAST & ioArgument0,
                                      class GGS_semanticExpressionAST & outArgument1,
                                      class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_factor_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                            class GGS__5B_actualOutputArgumentAST_5D_ & outArgument1,
                                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                            class GGS__5B_actualOutputArgumentAST_5D_ & outArgument1,
                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_primary_ (class GGS_galgasDeclarationAST & ioArgument0,
                                       class GGS_semanticExpressionAST & outArgument1,
                                       class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_primary_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_beginning_5F_by_5F_dot_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                 class GGS_semanticExpressionAST & outArgument1,
                                                                 class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_beginning_5F_by_5F_dot_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_beginning_5F_by_5F_type_ (const class GGS_lstring constinArgument0,
                                                                  class GGS_galgasDeclarationAST & ioArgument1,
                                                                  class GGS_semanticExpressionAST & outArgument2,
                                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_beginning_5F_by_5F_type_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_ (const class GGS_lstring constinArgument0,
                                                                                 const class GGS_lstring constinArgument1,
                                                                                 class GGS_galgasDeclarationAST & ioArgument2,
                                                                                 class GGS_semanticExpressionAST & outArgument3,
                                                                                 class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                  class GGS_semanticExpressionAST & outArgument1,
                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                    class GGS_semanticExpressionAST & outArgument1,
                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                            class GGS_lstring & outArgument1,
                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_ (const class GGS_lstring constinArgument0,
                                                                               class GGS_galgasDeclarationAST & ioArgument1,
                                                                               class GGS_semanticExpressionAST & outArgument2,
                                                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_term_ (class GGS_galgasDeclarationAST & ioArgument0,
                                    class GGS_semanticExpressionAST & outArgument1,
                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_term_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_ExpressionSyntax_primary_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i0_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_dot_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                         GGS_semanticExpressionAST & outArgument1,
                                                                                         Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_dot_i1_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_dot_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_i2_ (const GGS_lstring constinArgument0,
                                                                                                         const GGS_lstring constinArgument1,
                                                                                                         GGS_galgasDeclarationAST & ioArgument2,
                                                                                                         GGS_semanticExpressionAST & outArgument3,
                                                                                                         Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_i2_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i3_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i4_ (const GGS_lstring constinArgument0,
                                                                                          GGS_galgasDeclarationAST & ioArgument1,
                                                                                          GGS_semanticExpressionAST & outArgument2,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i4_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i4_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i5_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i5_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    GGS__5B_actualOutputArgumentAST_5D_ & outArgument1,
                                                                                    Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i6_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i6_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                    GGS__5B_actualOutputArgumentAST_5D_ & outArgument1,
                                                                                                    Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i7_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i7_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i8_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i8_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i9_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i9_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i10_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i10_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i10_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i11_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_factor_i11_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_factor_i11_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i12_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_factor_i12_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_factor_i12_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i13_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_factor_i13_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_factor_i13_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i14_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i14_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i14_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i15_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i15_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i15_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_i16_ (const GGS_lstring constinArgument0,
                                                                                                        GGS_galgasDeclarationAST & ioArgument1,
                                                                                                        GGS_semanticExpressionAST & outArgument2,
                                                                                                        Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_i16_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_i16_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i17_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i17_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i17_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i18_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i18_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i18_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i19_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           GGS_semanticExpressionAST & outArgument2,
                                                                                           Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i19_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i19_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i20_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i20_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i20_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_term_i21_ (GGS_galgasDeclarationAST & ioArgument0,
                                                             GGS_semanticExpressionAST & outArgument1,
                                                             Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_term_i21_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_term_i21_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i22_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i22_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i22_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i23_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i23_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i23_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i24_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i24_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i24_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i25_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_factor_i25_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_factor_i25_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i26_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i26_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i26_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_i27_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                   GGS_semanticExpressionAST & outArgument1,
                                                                   Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_expression_i27_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_expression_i27_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_simple_5F_expression_i28_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                             GGS_semanticExpressionAST & outArgument1,
                                                                             Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_simple_5F_expression_i28_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_simple_5F_expression_i28_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_or_i29_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         GGS_semanticExpressionAST & outArgument1,
                                                                         Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_or_i29_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_or_i29_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i30_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_factor_i30_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_factor_i30_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i31_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_factor_i31_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_factor_i31_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_relation_5F_factor_i32_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_relation_5F_factor_i32_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_relation_5F_factor_i32_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i33_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i33_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i33_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i34_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i34_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i34_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_and_i35_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_and_i35_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_and_i35_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i36_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i36_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i36_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i37_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i37_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i37_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_ExpressionSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_7 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_8 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_9 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_10 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_11 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_12 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_13 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_14 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_15 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_16 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_17 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_18 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_19 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_20 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_21 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_22 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_23 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeEmbeddedTypeLName (const class GGS_lstring & constinArgument0,
                                                  const class GGS_lstring & constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4ParameterArgumentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_ParameterArgumentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_ParameterArgumentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_parameter_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                   class GGS__5B_actualParameterAST_5D_ & ioArgument1,
                                                   class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                  class GGS__5B_actualParameterAST_5D_ & outArgument1,
                                                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GGS_galgasDeclarationAST & ioArgument0,
                                          class GGS_semanticExpressionAST & outArgument1,
                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                    class GGS__5B_formalInputParameterAST_5D_ & outArgument1,
                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                           class GGS__5B_formalParameterAST_5D_ & outArgument1,
                                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_poisoned_5F_var_5F_list_ (class GGS__5B_lstring_5D_ & outArgument0,
                                                       class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_poisoned_5F_var_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                            class GGS_lstring & outArgument1,
                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS__5B_formalParameterAST_5D_ & outArgument1,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                                 GGS__5B_actualParameterAST_5D_ & outArgument1,
                                                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_i1_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS__5B_actualParameterAST_5D_ & ioArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS__5B_actualParameterAST_5D_ & ioArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS__5B_actualParameterAST_5D_ & ioArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                   GGS__5B_formalInputParameterAST_5D_ & outArgument1,
                                                                                                   Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i5_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i5_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i6_ (GGS__5B_lstring_5D_ & outArgument0,
                                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i6_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i6_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i7_ (GGS__5B_lstring_5D_ & outArgument0,
                                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i7_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i7_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_7 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_8 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_9 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_10 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_11 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_12 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_13 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_14 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_15 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_16 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_17 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_18 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4InstructionsSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_InstructionsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_InstructionsSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                    class GGS__5B_actualInputParameterAST_5D_ & outArgument1,
                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                  class GGS__5B_actualParameterAST_5D_ & outArgument1,
                                                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_comma_5F_separated_5F_expression_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                class GGS__5B_CommaSeparatedExpressionElement_5D_ & outArgument1,
                                                                class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_comma_5F_separated_5F_expression_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GGS_galgasDeclarationAST & ioArgument0,
                                          class GGS_semanticExpressionAST & outArgument1,
                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                class GGS_semanticExpressionAST & outArgument1,
                                                class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & ioArgument1,
                                                             class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                    class GGS__5B_formalInputParameterAST_5D_ & outArgument1,
                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                           class GGS__5B_formalParameterAST_5D_ & outArgument1,
                                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                              const class GGS_location constinArgument1,
                                                              const class GGS__5B_actualParameterAST_5D_ constinArgument2,
                                                              const class GGS_lstring constinArgument3,
                                                              const class GGS_lstring constinArgument4,
                                                              class GGS_semanticInstructionAST & outArgument5,
                                                              class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                         class GGS_semanticInstructionAST & outArgument1,
                                                         class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_ (class GGS_galgasDeclarationAST & ioArgument0,
                                              class GGS__5B_fixitElementAST_5D_ & outArgument1,
                                              class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                            class GGS__5B_actualOutputArgumentAST_5D_ & outArgument1,
                                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                            class GGS__5B_actualOutputArgumentAST_5D_ & outArgument1,
                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                       class GGS_semanticInstructionAST & outArgument1,
                                                       class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                          const class GGS_bool constinArgument1,
                                                                                          class GGS_semanticInstructionAST & outArgument2,
                                                                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS__5B_semanticInstructionAST_5D_ & outArgument1,
                                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_ (class GGS_galgasDeclarationAST & ioArgument0,
                                              class GGS__5B_lstring_5D_ & outArgument1,
                                              class GGS__5B_switchExtractedValuesAST_5D_ & outArgument2,
                                              class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                           class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                         GGS__5B_semanticInstructionAST_5D_ & outArgument1,
                                                                                         Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_declaration_i1_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_declaration_i2_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_declaration_i3_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i4_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i4_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                              GGS__5B_actualInputParameterAST_5D_ & outArgument1,
                                                                                              Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i5_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i5_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 GGS_semanticInstructionAST & outArgument1,
                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i6_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i6_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                        GGS__5B_fixitElementAST_5D_ & outArgument1,
                                                                        Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i7_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i7_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 GGS_semanticInstructionAST & outArgument1,
                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i8_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i8_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 GGS_semanticInstructionAST & outArgument1,
                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i13_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i13_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i13_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i15_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                                     const GGS_bool constinArgument1,
                                                                                                                     GGS_semanticInstructionAST & outArgument2,
                                                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i15_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i15_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i16_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i16_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i16_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_comma_5F_separated_5F_expression_i17_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                           GGS__5B_CommaSeparatedExpressionElement_5D_ & outArgument1,
                                                                                           Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_comma_5F_separated_5F_expression_i17_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_comma_5F_separated_5F_expression_i17_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i18_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i18_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i18_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i19_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                         const GGS_location constinArgument1,
                                                                                         const GGS__5B_actualParameterAST_5D_ constinArgument2,
                                                                                         const GGS_lstring constinArgument3,
                                                                                         const GGS_lstring constinArgument4,
                                                                                         GGS_semanticInstructionAST & outArgument5,
                                                                                         Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i19_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i19_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i20_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                         const GGS_location constinArgument1,
                                                                                         const GGS__5B_actualParameterAST_5D_ constinArgument2,
                                                                                         const GGS_lstring constinArgument3,
                                                                                         const GGS_lstring constinArgument4,
                                                                                         GGS_semanticInstructionAST & outArgument5,
                                                                                         Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i20_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i20_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i21_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i21_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i21_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i22_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    GGS_semanticInstructionAST & outArgument1,
                                                                                    Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i22_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i22_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i24_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & ioArgument1,
                                                                                        Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i24_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i24_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i25_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & ioArgument1,
                                                                                        Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i25_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i25_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i26_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i26_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i26_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i27_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i27_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i27_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i28_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i28_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i28_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i29_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i29_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i29_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_switch_5F_case_i30_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         GGS__5B_lstring_5D_ & outArgument1,
                                                                         GGS__5B_switchExtractedValuesAST_5D_ & outArgument2,
                                                                         Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_switch_5F_case_i30_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_switch_5F_case_i30_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i43_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_declaration_i43_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i43_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i44_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_declaration_i44_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i44_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i45_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_declaration_i45_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i45_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i46_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_declaration_i46_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i46_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i47_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_declaration_i47_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i47_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_InstructionsSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_7 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_8 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_9 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_10 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_11 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_12 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_13 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_14 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_15 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_16 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_17 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_18 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_19 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_20 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_21 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_22 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_23 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_24 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_25 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_26 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_27 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_28 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_29 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_30 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_31 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_32 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_33 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_34 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_35 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_36 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_37 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_38 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_39 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_40 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_41 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_42 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_43 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_44 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_45 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_46 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_47 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_48 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_49 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_50 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_51 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_52 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_53 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_54 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_55 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_56 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_57 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_58 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_59 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_60 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_61 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_62 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

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

  public: class GGS__5B_actualParameterAST_5D_ readProperty_mActualParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_superMethodCallInstructionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS__5B_actualParameterAST_5D_ & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superMethodCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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
                                                               const class GGS__5B_actualParameterAST_5D_ & inOperand2,
                                                               Compiler * inCompiler) ;


//--- Extension proc analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mMethodName ;
  public: GGS__5B_actualParameterAST_5D_ mProperty_mActualParameterList ;


//--- Default constructor
  public: cPtr_superMethodCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_superMethodCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                              const GGS_lstring & in_mMethodName,
                                              const GGS__5B_actualParameterAST_5D_ & in_mActualParameterList,
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
//
//Parser class 'galgas4DeclarationsSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_DeclarationsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_DeclarationsSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_acces_5F_control_ (class GGS_AccessControlAST & outArgument0,
                                                class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_acces_5F_control_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GGS_galgasDeclarationAST & ioArgument0,
                                          class GGS_semanticExpressionAST & outArgument1,
                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                         class GGS__5B__5B_typeNameFormalParameterName_5D__5D_ & ioArgument1,
                                                         class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_ (class GGS_string & outArgument0,
                                                                     class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_ (class GGS_string & outArgument0,
                                                                   class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                    class GGS__5B_externTypeGetter_5D_ & ioArgument1,
                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                    class GGS__5B_externTypeMethod_5D_ & ioArgument1,
                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                    class GGS__5B_externTypeSetter_5D_ & ioArgument1,
                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_declaration_ (const class GGS_bool constinArgument0,
                                                          class GGS_galgasDeclarationAST & ioArgument1,
                                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                    class GGS__5B_formalInputParameterAST_5D_ & outArgument1,
                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                           class GGS__5B_formalParameterAST_5D_ & outArgument1,
                                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_ (class GGS__5B_location_5D_ & ioArgument0,
                                                                      class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_ (class GGS__5B_insertSetterAST_5D_ & ioArgument0,
                                                                      class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_ (const class GGS_lstring constinArgument0,
                                                     class GGS_galgasDeclarationAST & ioArgument1,
                                                     class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                       class GGS__5B_propertyInCollectionAST_5D_ & ioArgument1,
                                                       class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_setter_5F_declaration_ (class GGS__5B_mapAccessorAST_5D_ & ioArgument0,
                                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_setter_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_replace_5F_setter_5F_declaration_ (class GGS__5B_mapAccessorAST_5D_ & ioArgument0,
                                                                class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_replace_5F_setter_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_method_5F_declaration_ (class GGS__5B_mapAccessorAST_5D_ & ioArgument0,
                                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_method_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_subcript_5F_declaration_ (class GGS__5B_mapAccessorAST_5D_ & ioArgument0,
                                                                 class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_subcript_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS__5B_semanticInstructionAST_5D_ & outArgument1,
                                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                            class GGS_lstring & outArgument1,
                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_sorted_5F_array_5F_sort_5F_descriptor_ (class GGS__5B_sortedArraySortDescriptorAST_5D_ & ioArgument0,
                                                                     class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_sorted_5F_array_5F_sort_5F_descriptor_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GGS_galgasDeclarationAST & ioArgument0,
                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i1_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i2_ (const GGS_lstring constinArgument0,
                                                                               GGS_galgasDeclarationAST & ioArgument1,
                                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i2_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i3_ (const GGS_lstring constinArgument0,
                                                                               GGS_galgasDeclarationAST & ioArgument1,
                                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i3_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i4_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i4_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i5_ (const GGS_lstring constinArgument0,
                                                                               GGS_galgasDeclarationAST & ioArgument1,
                                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i5_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i5_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i6_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i6_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i7_ (const GGS_lstring constinArgument0,
                                                                               GGS_galgasDeclarationAST & ioArgument1,
                                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i7_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i7_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i8_ (const GGS_lstring constinArgument0,
                                                                               GGS_galgasDeclarationAST & ioArgument1,
                                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i8_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i8_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i9_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i9_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i10_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i10_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i10_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i11_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i11_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i11_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i12_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i12_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i12_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i13_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i13_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i13_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i14_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i14_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i14_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i15_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i15_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i15_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i16_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i16_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i16_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i17_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i17_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i17_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i18_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i18_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i18_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i19_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i19_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i19_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i20_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS__5B_propertyInCollectionAST_5D_ & ioArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i20_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i20_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i21_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i21_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i21_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i22_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i22_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i22_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i23_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i23_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i23_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_type_5F_definition_i24_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                             GGS_lstring & outArgument1,
                                                                             Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_type_5F_definition_i24_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_type_5F_definition_i24_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i25_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                       GGS_lstring & outArgument1,
                                                                                       Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i25_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i25_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i26_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                       GGS_lstring & outArgument1,
                                                                                       Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i26_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i26_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i27_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                       GGS_lstring & outArgument1,
                                                                                       Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i27_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i27_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i28_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i28_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i28_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_method_5F_declaration_i29_ (GGS__5B_mapAccessorAST_5D_ & ioArgument0,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_method_5F_declaration_i29_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_method_5F_declaration_i29_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_subcript_5F_declaration_i30_ (GGS__5B_mapAccessorAST_5D_ & ioArgument0,
                                                                                            Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_subcript_5F_declaration_i30_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_subcript_5F_declaration_i30_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_remove_5F_setter_5F_declaration_i31_ (GGS__5B_mapAccessorAST_5D_ & ioArgument0,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_remove_5F_setter_5F_declaration_i31_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_remove_5F_setter_5F_declaration_i31_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_replace_5F_setter_5F_declaration_i32_ (GGS__5B_mapAccessorAST_5D_ & ioArgument0,
                                                                                           Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_replace_5F_setter_5F_declaration_i32_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_replace_5F_setter_5F_declaration_i32_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i33_ (GGS__5B_location_5D_ & ioArgument0,
                                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i33_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i33_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i34_ (GGS__5B_insertSetterAST_5D_ & ioArgument0,
                                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i34_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i34_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i35_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i35_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i35_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i36_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i36_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i36_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_declaration_i37_ (const GGS_bool constinArgument0,
                                                                                     GGS_galgasDeclarationAST & ioArgument1,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_declaration_i37_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_declaration_i37_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i38_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i38_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i38_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_sorted_5F_array_5F_sort_5F_descriptor_i39_ (GGS__5B_sortedArraySortDescriptorAST_5D_ & ioArgument0,
                                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_sorted_5F_array_5F_sort_5F_descriptor_i39_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_sorted_5F_array_5F_sort_5F_descriptor_i39_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i40_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i40_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i40_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i41_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i41_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i41_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i42_ (GGS_string & outArgument0,
                                                                                              Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i42_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i42_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i43_ (GGS_string & outArgument0,
                                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i43_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i43_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i44_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    GGS__5B__5B_typeNameFormalParameterName_5D__5D_ & ioArgument1,
                                                                                    Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i44_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i44_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i45_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                               GGS__5B_externTypeGetter_5D_ & ioArgument1,
                                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i45_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i45_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i46_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                               GGS__5B_externTypeSetter_5D_ & ioArgument1,
                                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i46_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i46_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i47_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                               GGS__5B_externTypeMethod_5D_ & ioArgument1,
                                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i47_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i47_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_acces_5F_control_i48_ (GGS_AccessControlAST & outArgument0,
                                                                           Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_acces_5F_control_i48_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_acces_5F_control_i48_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_7 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_8 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_9 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_10 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_11 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_12 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_13 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_14 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_15 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_16 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_17 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_18 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_19 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_20 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_21 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_22 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_23 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_24 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_25 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_26 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_27 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_28 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_29 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_30 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_31 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_32 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_33 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_34 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_35 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_36 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_37 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_38 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_39 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_40 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_41 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_42 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_43 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_44 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_45 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_46 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_47 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_48 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_49 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_50 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_51 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_52 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_53 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_54 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_55 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeArrayTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeArrayTypeLName (const class GGS_lstring & constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeArrayTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_makeArrayTypeName (const class GGS_string & constinArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeDictionaryTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeDictionaryTypeLName (const class GGS_lstring & constinArgument0,
                                                    const class GGS_lstring & constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeWeakTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeWeakTypeLName (const class GGS_lstring & constinArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@galgasDeclarationAST getOptionalTypeName'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getOptionalTypeName (class GGS_galgasDeclarationAST & ioObject,
                                          class GGS_lstring & out_outOptionalTypeName,
                                          const class GGS_lstring constin_inTypeName,
                                          const class GGS_bool constin_inPredefined,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

