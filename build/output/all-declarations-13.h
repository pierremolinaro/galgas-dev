#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

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

//--------------------------------------------------------------------------------------------------
// Phase 1: @messageInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_messageInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_messageInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_messageInstructionAST (const class cPtr_messageInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_messageInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                         const class GGS_semanticExpressionAST & inOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_messageInstructionAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_messageInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_messageInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @messageInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_messageInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void messageInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
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
  public: cPtr_messageInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_messageInstructionAST (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @messageInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_messageInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_messageInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_messageInstructionAST_2E_weak (const class GGS_messageInstructionAST & inSource) ;

  public: GGS_messageInstructionAST_2E_weak & operator = (const class GGS_messageInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_messageInstructionAST_2E_weak init_nil (void) {
    GGS_messageInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_messageInstructionAST bang_messageInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_messageInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_messageInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_messageInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_messageInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_messageInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @setterCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_setterCallInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_setterCallInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_setterCallInstructionAST (const class cPtr_setterCallInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GGS_lstring readProperty_mReceiverName (void) const ;

  public: class GGS_lstringlist readProperty_mReceiverStructProperties (void) const ;

  public: class GGS_lstring readProperty_mTypeNameForCasting (void) const ;

  public: class GGS_lstring readProperty_mSetterName (void) const ;

  public: class GGS_actualParameterListAST readProperty_mActualParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_setterCallInstructionAST init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                const class GGS_bool & inOperand1,
                                                                                const class GGS_lstring & inOperand2,
                                                                                const class GGS_lstringlist & inOperand3,
                                                                                const class GGS_lstring & inOperand4,
                                                                                const class GGS_lstring & inOperand5,
                                                                                const class GGS_actualParameterListAST & inOperand6,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_setterCallInstructionAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_setterCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_setterCallInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @setterCallInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_setterCallInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void setterCallInstructionAST_init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                          const class GGS_bool & inOperand1,
                                                                          const class GGS_lstring & inOperand2,
                                                                          const class GGS_lstringlist & inOperand3,
                                                                          const class GGS_lstring & inOperand4,
                                                                          const class GGS_lstring & inOperand5,
                                                                          const class GGS_actualParameterListAST & inOperand6,
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
  public: GGS_lstringlist mProperty_mReceiverStructProperties ;
  public: GGS_lstring mProperty_mTypeNameForCasting ;
  public: GGS_lstring mProperty_mSetterName ;
  public: GGS_actualParameterListAST mProperty_mActualParameterList ;


//--- Default constructor
  public: cPtr_setterCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_setterCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                         const GGS_bool & in_mPrefixedBySelf,
                                         const GGS_lstring & in_mReceiverName,
                                         const GGS_lstringlist & in_mReceiverStructProperties,
                                         const GGS_lstring & in_mTypeNameForCasting,
                                         const GGS_lstring & in_mSetterName,
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
// Phase 1: @setterCallInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_setterCallInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_setterCallInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_setterCallInstructionAST_2E_weak (const class GGS_setterCallInstructionAST & inSource) ;

  public: GGS_setterCallInstructionAST_2E_weak & operator = (const class GGS_setterCallInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_setterCallInstructionAST_2E_weak init_nil (void) {
    GGS_setterCallInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_setterCallInstructionAST bang_setterCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_setterCallInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_setterCallInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_setterCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_setterCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_setterCallInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfSetterCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfSetterCallInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_selfSetterCallInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selfSetterCallInstructionAST (const class cPtr_selfSetterCallInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mSetterName (void) const ;

  public: class GGS_actualParameterListAST readProperty_mActualParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfSetterCallInstructionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_actualParameterListAST & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfSetterCallInstructionAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfSetterCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selfSetterCallInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_selfSetterCallInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selfSetterCallInstructionAST_init_21__21__21_ (const class GGS_location & inOperand0,
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
  public: GGS_lstring mProperty_mSetterName ;
  public: GGS_actualParameterListAST mProperty_mActualParameterList ;


//--- Default constructor
  public: cPtr_selfSetterCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfSetterCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                             const GGS_lstring & in_mSetterName,
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
// Phase 1: @selfSetterCallInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfSetterCallInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfSetterCallInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfSetterCallInstructionAST_2E_weak (const class GGS_selfSetterCallInstructionAST & inSource) ;

  public: GGS_selfSetterCallInstructionAST_2E_weak & operator = (const class GGS_selfSetterCallInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfSetterCallInstructionAST_2E_weak init_nil (void) {
    GGS_selfSetterCallInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfSetterCallInstructionAST bang_selfSetterCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selfSetterCallInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_selfSetterCallInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfSetterCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfSetterCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @loopInstructionWithoutVariantAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithoutVariantAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithoutVariantAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_loopInstructionWithoutVariantAST (const class cPtr_loopInstructionWithoutVariantAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticInstructionListAST readProperty_mFirstInstructions (void) const ;

  public: class GGS_location readProperty_mEndOfFirstInstructions (void) const ;

  public: class GGS_CommaSeparatedExpressionList readProperty_mLoopExpression (void) const ;

  public: class GGS_location readProperty_mEndOfLoopExpression (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mSecondInstructions (void) const ;

  public: class GGS_location readProperty_mEndOfSecondInstructions (void) const ;

  public: class GGS_location readProperty_mEndOfLoopInstruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_loopInstructionWithoutVariantAST init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                            const class GGS_semanticInstructionListAST & inOperand1,
                                                                                            const class GGS_location & inOperand2,
                                                                                            const class GGS_CommaSeparatedExpressionList & inOperand3,
                                                                                            const class GGS_location & inOperand4,
                                                                                            const class GGS_semanticInstructionListAST & inOperand5,
                                                                                            const class GGS_location & inOperand6,
                                                                                            const class GGS_location & inOperand7,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loopInstructionWithoutVariantAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithoutVariantAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @loopInstructionWithoutVariantAST class
//--------------------------------------------------------------------------------------------------

class cPtr_loopInstructionWithoutVariantAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void loopInstructionWithoutVariantAST_init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                      const class GGS_semanticInstructionListAST & inOperand1,
                                                                                      const class GGS_location & inOperand2,
                                                                                      const class GGS_CommaSeparatedExpressionList & inOperand3,
                                                                                      const class GGS_location & inOperand4,
                                                                                      const class GGS_semanticInstructionListAST & inOperand5,
                                                                                      const class GGS_location & inOperand6,
                                                                                      const class GGS_location & inOperand7,
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
  public: GGS_semanticInstructionListAST mProperty_mFirstInstructions ;
  public: GGS_location mProperty_mEndOfFirstInstructions ;
  public: GGS_CommaSeparatedExpressionList mProperty_mLoopExpression ;
  public: GGS_location mProperty_mEndOfLoopExpression ;
  public: GGS_semanticInstructionListAST mProperty_mSecondInstructions ;
  public: GGS_location mProperty_mEndOfSecondInstructions ;
  public: GGS_location mProperty_mEndOfLoopInstruction ;


//--- Default constructor
  public: cPtr_loopInstructionWithoutVariantAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_loopInstructionWithoutVariantAST (const GGS_location & in_mInstructionLocation,
                                                 const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                 const GGS_location & in_mEndOfFirstInstructions,
                                                 const GGS_CommaSeparatedExpressionList & in_mLoopExpression,
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
// Phase 1: @loopInstructionWithoutVariantAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithoutVariantAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithoutVariantAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_loopInstructionWithoutVariantAST_2E_weak (const class GGS_loopInstructionWithoutVariantAST & inSource) ;

  public: GGS_loopInstructionWithoutVariantAST_2E_weak & operator = (const class GGS_loopInstructionWithoutVariantAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_loopInstructionWithoutVariantAST_2E_weak init_nil (void) {
    GGS_loopInstructionWithoutVariantAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_loopInstructionWithoutVariantAST bang_loopInstructionWithoutVariantAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_loopInstructionWithoutVariantAST unwrappedValue (void) const ;

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
  public: static GGS_loopInstructionWithoutVariantAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_loopInstructionWithoutVariantAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithoutVariantAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVariableOrConstantDeclarationWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableOrConstantDeclarationWithAssignmentAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_localVariableOrConstantDeclarationWithAssignmentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_localVariableOrConstantDeclarationWithAssignmentAST (const class cPtr_localVariableOrConstantDeclarationWithAssignmentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsConstant (void) const ;

  public: class GGS_lstring readProperty_mOptionalTypeName (void) const ;

  public: class GGS_lstring readProperty_mVariableName (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVariableOrConstantDeclarationWithAssignmentAST init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                   const class GGS_bool & inOperand1,
                                                                                                   const class GGS_lstring & inOperand2,
                                                                                                   const class GGS_lstring & inOperand3,
                                                                                                   const class GGS_semanticExpressionAST & inOperand4,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVariableOrConstantDeclarationWithAssignmentAST extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableOrConstantDeclarationWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @localVariableOrConstantDeclarationWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_localVariableOrConstantDeclarationWithAssignmentAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void localVariableOrConstantDeclarationWithAssignmentAST_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                             const class GGS_bool & inOperand1,
                                                                                             const class GGS_lstring & inOperand2,
                                                                                             const class GGS_lstring & inOperand3,
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
  public: GGS_bool mProperty_mIsConstant ;
  public: GGS_lstring mProperty_mOptionalTypeName ;
  public: GGS_lstring mProperty_mVariableName ;
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_localVariableOrConstantDeclarationWithAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_localVariableOrConstantDeclarationWithAssignmentAST (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_bool & in_mIsConstant,
                                                                    const GGS_lstring & in_mOptionalTypeName,
                                                                    const GGS_lstring & in_mVariableName,
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
// Phase 1: @localVariableOrConstantDeclarationWithAssignmentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (const class GGS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) ;

  public: GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak & operator = (const class GGS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak init_nil (void) {
    GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_localVariableOrConstantDeclarationWithAssignmentAST bang_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_localVariableOrConstantDeclarationWithAssignmentAST unwrappedValue (void) const ;

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
  public: static GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @undefinedLocalConstantDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_undefinedLocalConstantDeclarationAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_undefinedLocalConstantDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_undefinedLocalConstantDeclarationAST (const class cPtr_undefinedLocalConstantDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mConstantTypeName (void) const ;

  public: class GGS_lstring readProperty_mConstantName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_undefinedLocalConstantDeclarationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_lstring & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_undefinedLocalConstantDeclarationAST extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_undefinedLocalConstantDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @undefinedLocalConstantDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_undefinedLocalConstantDeclarationAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void undefinedLocalConstantDeclarationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_lstring & inOperand2,
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
  public: GGS_lstring mProperty_mConstantTypeName ;
  public: GGS_lstring mProperty_mConstantName ;


//--- Default constructor
  public: cPtr_undefinedLocalConstantDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_undefinedLocalConstantDeclarationAST (const GGS_location & in_mInstructionLocation,
                                                     const GGS_lstring & in_mConstantTypeName,
                                                     const GGS_lstring & in_mConstantName,
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
// Phase 1: @undefinedLocalConstantDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_undefinedLocalConstantDeclarationAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_undefinedLocalConstantDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_undefinedLocalConstantDeclarationAST_2E_weak (const class GGS_undefinedLocalConstantDeclarationAST & inSource) ;

  public: GGS_undefinedLocalConstantDeclarationAST_2E_weak & operator = (const class GGS_undefinedLocalConstantDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_undefinedLocalConstantDeclarationAST_2E_weak init_nil (void) {
    GGS_undefinedLocalConstantDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_undefinedLocalConstantDeclarationAST bang_undefinedLocalConstantDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_undefinedLocalConstantDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_undefinedLocalConstantDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_undefinedLocalConstantDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_undefinedLocalConstantDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localConstantDeclarationWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_localConstantDeclarationWithAssignmentAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_localConstantDeclarationWithAssignmentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_localConstantDeclarationWithAssignmentAST (const class cPtr_localConstantDeclarationWithAssignmentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mVariableName (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localConstantDeclarationWithAssignmentAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_semanticExpressionAST & inOperand2,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localConstantDeclarationWithAssignmentAST extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localConstantDeclarationWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @localConstantDeclarationWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_localConstantDeclarationWithAssignmentAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void localConstantDeclarationWithAssignmentAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_semanticExpressionAST & inOperand2,
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
  public: GGS_lstring mProperty_mVariableName ;
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_localConstantDeclarationWithAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_localConstantDeclarationWithAssignmentAST (const GGS_location & in_mInstructionLocation,
                                                          const GGS_lstring & in_mVariableName,
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
// Phase 1: @localConstantDeclarationWithAssignmentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_localConstantDeclarationWithAssignmentAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_localConstantDeclarationWithAssignmentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_localConstantDeclarationWithAssignmentAST_2E_weak (const class GGS_localConstantDeclarationWithAssignmentAST & inSource) ;

  public: GGS_localConstantDeclarationWithAssignmentAST_2E_weak & operator = (const class GGS_localConstantDeclarationWithAssignmentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_localConstantDeclarationWithAssignmentAST_2E_weak init_nil (void) {
    GGS_localConstantDeclarationWithAssignmentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_localConstantDeclarationWithAssignmentAST bang_localConstantDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_localConstantDeclarationWithAssignmentAST unwrappedValue (void) const ;

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
  public: static GGS_localConstantDeclarationWithAssignmentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localConstantDeclarationWithAssignmentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localConstantDeclarationWithAssignmentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dropInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_dropInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_dropInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_dropInstructionAST (const class cPtr_dropInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstringlist readProperty_mDropList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dropInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                      const class GGS_lstringlist & inOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dropInstructionAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dropInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dropInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @dropInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_dropInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dropInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                const class GGS_lstringlist & inOperand1,
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
  public: GGS_lstringlist mProperty_mDropList ;


//--- Default constructor
  public: cPtr_dropInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dropInstructionAST (const GGS_location & in_mInstructionLocation,
                                   const GGS_lstringlist & in_mDropList,
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
// Phase 1: @dropInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_dropInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dropInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dropInstructionAST_2E_weak (const class GGS_dropInstructionAST & inSource) ;

  public: GGS_dropInstructionAST_2E_weak & operator = (const class GGS_dropInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_dropInstructionAST_2E_weak init_nil (void) {
    GGS_dropInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_dropInstructionAST bang_dropInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_dropInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_dropInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dropInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dropInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dropInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVariableDeclarationWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableDeclarationWithAssignmentAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_localVariableDeclarationWithAssignmentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_localVariableDeclarationWithAssignmentAST (const class cPtr_localVariableDeclarationWithAssignmentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mVariableName (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVariableDeclarationWithAssignmentAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_semanticExpressionAST & inOperand2,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVariableDeclarationWithAssignmentAST extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableDeclarationWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @localVariableDeclarationWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_localVariableDeclarationWithAssignmentAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void localVariableDeclarationWithAssignmentAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_semanticExpressionAST & inOperand2,
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
  public: GGS_lstring mProperty_mVariableName ;
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_localVariableDeclarationWithAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_localVariableDeclarationWithAssignmentAST (const GGS_location & in_mInstructionLocation,
                                                          const GGS_lstring & in_mVariableName,
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVariableDeclarationWithAssignmentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVariableDeclarationWithAssignmentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableDeclarationWithAssignmentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVariableDeclarationNoAssignmentAST extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableDeclarationNoAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVariableDeclarationNoAssignmentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVariableDeclarationNoAssignmentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableDeclarationNoAssignmentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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
  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfAssignmentInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_semanticExpressionAST & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfAssignmentInstructionAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfAssignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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
  public: void selfAssignmentInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
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
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_selfAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfAssignmentInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfAssignmentInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfAssignmentInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAssignmentInstructionAST_2E_weak ;

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

  public: class GGS_actualParameterListAST readProperty_mActualParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeMethodCallInstructionAST init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS_actualParameterListAST & inOperand3,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeMethodCallInstructionAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeMethodCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mMethodName ;
  public: GGS_actualParameterListAST mProperty_mActualParameterList ;


//--- Default constructor
  public: cPtr_typeMethodCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_typeMethodCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                             const GGS_lstring & in_mTypeName,
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeMethodCallInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeMethodCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeMethodCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @superInitInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_superInitInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_superInitInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_superInitInstructionAST (const class cPtr_superInitInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_actualOutputArgumentList readProperty_mActualParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_superInitInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_actualOutputArgumentList & inOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_superInitInstructionAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superInitInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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
  public: GGS_actualOutputArgumentList mProperty_mActualParameterList ;


//--- Default constructor
  public: cPtr_superInitInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_superInitInstructionAST (const GGS_location & in_mInstructionLocation,
                                        const GGS_actualOutputArgumentList & in_mActualParameterList,
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_superInitInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_superInitInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superInitInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superInitInstructionAST_2E_weak ;

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

  public: class GGS_lstring readProperty_mOptionalProperty (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_assignmentInstructionAST init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_lstring & inOperand2,
                                                                    const class GGS_semanticExpressionAST & inOperand3,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assignmentInstructionAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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
                                                              const class GGS_lstring & inOperand2,
                                                              const class GGS_semanticExpressionAST & inOperand3,
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
  public: GGS_lstring mProperty_mTargetVariableName ;
  public: GGS_lstring mProperty_mOptionalProperty ;
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_assignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_assignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                         const GGS_lstring & in_mTargetVariableName,
                                         const GGS_lstring & in_mOptionalProperty,
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assignmentInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assignmentInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assignmentInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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

  public: class GGS_lstring readProperty_mOptionalProperty (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfPropertyAssignmentInstructionAST init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_lstring & inOperand2,
                                                                                const class GGS_semanticExpressionAST & inOperand3,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfPropertyAssignmentInstructionAST extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfPropertyAssignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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
                                                                          const class GGS_lstring & inOperand2,
                                                                          const class GGS_semanticExpressionAST & inOperand3,
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
  public: GGS_lstring mProperty_mTargetSelfPropertyName ;
  public: GGS_lstring mProperty_mOptionalProperty ;
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_selfPropertyAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfPropertyAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                     const GGS_lstring & in_mTargetSelfPropertyName,
                                                     const GGS_lstring & in_mOptionalProperty,
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfPropertyAssignmentInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfPropertyAssignmentInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfPropertyAssignmentInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexiqueComponentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexiqueComponentAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_lexiqueComponentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexiqueComponentAST (const class cPtr_lexiqueComponentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLexiqueComponentName (void) const ;

  public: class GGS_bool readProperty_mIsTemplate (void) const ;

  public: class GGS_templateDelimitorListAST readProperty_mTemplateDelimitorListAST (void) const ;

  public: class GGS_templateReplacementListAST readProperty_mTemplateReplacementListAST (void) const ;

  public: class GGS_lexicalAttributeListAST readProperty_mLexicalAttributeListAST (void) const ;

  public: class GGS_lexicalStyleListAST readProperty_mLexicalStyleListAST (void) const ;

  public: class GGS_terminalDeclarationListAST readProperty_mTerminalDeclarationListAST (void) const ;

  public: class GGS_lexicalMessageDeclarationListAST readProperty_mLexicalMessageDeclarationListAST (void) const ;

  public: class GGS_lexicalListDeclarationListAST readProperty_mLexicalListDeclarationListAST (void) const ;

  public: class GGS_lexicalRuleListAST readProperty_mLexicalRuleListAST (void) const ;

  public: class GGS_indexingListAST readProperty_mIndexingListAST (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexiqueComponentAST init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                           const class GGS_lstring & inOperand1,
                                                                                                           const class GGS_bool & inOperand2,
                                                                                                           const class GGS_templateDelimitorListAST & inOperand3,
                                                                                                           const class GGS_templateReplacementListAST & inOperand4,
                                                                                                           const class GGS_lexicalAttributeListAST & inOperand5,
                                                                                                           const class GGS_lexicalStyleListAST & inOperand6,
                                                                                                           const class GGS_terminalDeclarationListAST & inOperand7,
                                                                                                           const class GGS_lexicalMessageDeclarationListAST & inOperand8,
                                                                                                           const class GGS_lexicalListDeclarationListAST & inOperand9,
                                                                                                           const class GGS_lexicalRuleListAST & inOperand10,
                                                                                                           const class GGS_indexingListAST & inOperand11,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexiqueComponentAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexiqueComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueComponentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexiqueComponentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexiqueComponentAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexiqueComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                     const class GGS_lstring & inOperand1,
                                                                                                     const class GGS_bool & inOperand2,
                                                                                                     const class GGS_templateDelimitorListAST & inOperand3,
                                                                                                     const class GGS_templateReplacementListAST & inOperand4,
                                                                                                     const class GGS_lexicalAttributeListAST & inOperand5,
                                                                                                     const class GGS_lexicalStyleListAST & inOperand6,
                                                                                                     const class GGS_terminalDeclarationListAST & inOperand7,
                                                                                                     const class GGS_lexicalMessageDeclarationListAST & inOperand8,
                                                                                                     const class GGS_lexicalListDeclarationListAST & inOperand9,
                                                                                                     const class GGS_lexicalRuleListAST & inOperand10,
                                                                                                     const class GGS_indexingListAST & inOperand11,
                                                                                                     Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLexiqueComponentName ;
  public: GGS_bool mProperty_mIsTemplate ;
  public: GGS_templateDelimitorListAST mProperty_mTemplateDelimitorListAST ;
  public: GGS_templateReplacementListAST mProperty_mTemplateReplacementListAST ;
  public: GGS_lexicalAttributeListAST mProperty_mLexicalAttributeListAST ;
  public: GGS_lexicalStyleListAST mProperty_mLexicalStyleListAST ;
  public: GGS_terminalDeclarationListAST mProperty_mTerminalDeclarationListAST ;
  public: GGS_lexicalMessageDeclarationListAST mProperty_mLexicalMessageDeclarationListAST ;
  public: GGS_lexicalListDeclarationListAST mProperty_mLexicalListDeclarationListAST ;
  public: GGS_lexicalRuleListAST mProperty_mLexicalRuleListAST ;
  public: GGS_indexingListAST mProperty_mIndexingListAST ;


//--- Default constructor
  public: cPtr_lexiqueComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexiqueComponentAST (const GGS_bool & in_isPredefined,
                                    const GGS_lstring & in_mLexiqueComponentName,
                                    const GGS_bool & in_mIsTemplate,
                                    const GGS_templateDelimitorListAST & in_mTemplateDelimitorListAST,
                                    const GGS_templateReplacementListAST & in_mTemplateReplacementListAST,
                                    const GGS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
                                    const GGS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                    const GGS_terminalDeclarationListAST & in_mTerminalDeclarationListAST,
                                    const GGS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationListAST,
                                    const GGS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST,
                                    const GGS_lexicalRuleListAST & in_mLexicalRuleListAST,
                                    const GGS_indexingListAST & in_mIndexingListAST,
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

