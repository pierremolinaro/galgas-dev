#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ifExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ifExpressionAST_2E_weak (const class GGS_ifExpressionAST & inSource) ;

  public: GGS_ifExpressionAST_2E_weak & operator = (const class GGS_ifExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ifExpressionAST_2E_weak init_nil (void) {
    GGS_ifExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ifExpressionAST bang_ifExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ifExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_ifExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_ifExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ifExpressionForGeneration (const class cPtr_ifExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mIfExpression (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mThenExpression (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mElseExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifExpressionForGeneration init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                         const class GGS_location & inOperand1,
                                                                         const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                         const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                         const class GGS_semanticExpressionForGeneration & inOperand4,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifExpressionForGeneration extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ifExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_ifExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ifExpressionForGeneration_init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                   const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                   const class GGS_semanticExpressionForGeneration & inOperand4,
                                                                   Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mIfExpression ;
  public: GGS_semanticExpressionForGeneration mProperty_mThenExpression ;
  public: GGS_semanticExpressionForGeneration mProperty_mElseExpression ;


//--- Default constructor
  public: cPtr_ifExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ifExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                          const GGS_location & in_mLocation,
                                          const GGS_semanticExpressionForGeneration & in_mIfExpression,
                                          const GGS_semanticExpressionForGeneration & in_mThenExpression,
                                          const GGS_semanticExpressionForGeneration & in_mElseExpression,
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
// Phase 1: @ifExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ifExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ifExpressionForGeneration_2E_weak (const class GGS_ifExpressionForGeneration & inSource) ;

  public: GGS_ifExpressionForGeneration_2E_weak & operator = (const class GGS_ifExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ifExpressionForGeneration_2E_weak init_nil (void) {
    GGS_ifExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ifExpressionForGeneration bang_ifExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ifExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_ifExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @andShortExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_andShortExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_andShortExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_andShortExpressionAST (const class cPtr_andShortExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_andShortExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_semanticExpressionAST & inOperand1,
                                                             const class GGS_semanticExpressionAST & inOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_andShortExpressionAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_andShortExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andShortExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @andShortExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_andShortExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void andShortExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                       const class GGS_semanticExpressionAST & inOperand1,
                                                       const class GGS_semanticExpressionAST & inOperand2,
                                                       Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GGS_semanticExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_andShortExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_andShortExpressionAST (const GGS_location & in_mOperatorLocation,
                                      const GGS_semanticExpressionAST & in_mLeftExpression,
                                      const GGS_semanticExpressionAST & in_mRightExpression,
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
// Phase 1: @andShortExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_andShortExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_andShortExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_andShortExpressionAST_2E_weak (const class GGS_andShortExpressionAST & inSource) ;

  public: GGS_andShortExpressionAST_2E_weak & operator = (const class GGS_andShortExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_andShortExpressionAST_2E_weak init_nil (void) {
    GGS_andShortExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_andShortExpressionAST bang_andShortExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_andShortExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_andShortExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_andShortExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_andShortExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andShortExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @andExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_andExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_andExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_andExpressionAST (const class cPtr_andExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_andExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                        const class GGS_semanticExpressionAST & inOperand1,
                                                        const class GGS_semanticExpressionAST & inOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_andExpressionAST extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_andExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @andExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_andExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void andExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                  const class GGS_semanticExpressionAST & inOperand1,
                                                  const class GGS_semanticExpressionAST & inOperand2,
                                                  Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GGS_semanticExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_andExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_andExpressionAST (const GGS_location & in_mOperatorLocation,
                                 const GGS_semanticExpressionAST & in_mLeftExpression,
                                 const GGS_semanticExpressionAST & in_mRightExpression,
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
// Phase 1: @andExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_andExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_andExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_andExpressionAST_2E_weak (const class GGS_andExpressionAST & inSource) ;

  public: GGS_andExpressionAST_2E_weak & operator = (const class GGS_andExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_andExpressionAST_2E_weak init_nil (void) {
    GGS_andExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_andExpressionAST bang_andExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_andExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_andExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_andExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_andExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @andShortExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_andShortExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_andShortExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_andShortExpressionForGeneration (const class cPtr_andShortExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_andShortExpressionForGeneration init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GGS_location & inOperand1,
                                                                           const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                           const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_andShortExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_andShortExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andShortExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @andShortExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_andShortExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void andShortExpressionForGeneration_init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                     const class GGS_location & inOperand1,
                                                                     const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                     const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                     Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public: GGS_semanticExpressionForGeneration mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_andShortExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_andShortExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                const GGS_location & in_mLocation,
                                                const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                const GGS_semanticExpressionForGeneration & in_mRightExpression,
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
// Phase 1: @andShortExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_andShortExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_andShortExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_andShortExpressionForGeneration_2E_weak (const class GGS_andShortExpressionForGeneration & inSource) ;

  public: GGS_andShortExpressionForGeneration_2E_weak & operator = (const class GGS_andShortExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_andShortExpressionForGeneration_2E_weak init_nil (void) {
    GGS_andShortExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_andShortExpressionForGeneration bang_andShortExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_andShortExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_andShortExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_andShortExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_andShortExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andShortExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @getterCallExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_getterCallExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_getterCallExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_getterCallExpressionAST (const class cPtr_getterCallExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mReceiver (void) const ;

  public: class GGS_lstring readProperty_mGetterName (void) const ;

  public: class GGS_actualOutputArgumentList readProperty_mActualArgumentList (void) const ;

  public: class GGS_location readProperty_mExpressionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_getterCallExpressionAST init_21__21__21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   const class GGS_actualOutputArgumentList & inOperand2,
                                                                   const class GGS_location & inOperand3,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_getterCallExpressionAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getterCallExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getterCallExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @getterCallExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_getterCallExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void getterCallExpressionAST_init_21__21__21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             const class GGS_actualOutputArgumentList & inOperand2,
                                                             const class GGS_location & inOperand3,
                                                             Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mReceiver ;
  public: GGS_lstring mProperty_mGetterName ;
  public: GGS_actualOutputArgumentList mProperty_mActualArgumentList ;
  public: GGS_location mProperty_mExpressionLocation ;


//--- Default constructor
  public: cPtr_getterCallExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_getterCallExpressionAST (const GGS_semanticExpressionAST & in_mReceiver,
                                        const GGS_lstring & in_mGetterName,
                                        const GGS_actualOutputArgumentList & in_mActualArgumentList,
                                        const GGS_location & in_mExpressionLocation,
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
// Phase 1: @getterCallExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_getterCallExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_getterCallExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_getterCallExpressionAST_2E_weak (const class GGS_getterCallExpressionAST & inSource) ;

  public: GGS_getterCallExpressionAST_2E_weak & operator = (const class GGS_getterCallExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_getterCallExpressionAST_2E_weak init_nil (void) {
    GGS_getterCallExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_getterCallExpressionAST bang_getterCallExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_getterCallExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_getterCallExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_getterCallExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getterCallExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getterCallExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @getterCallExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_getterCallExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_getterCallExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_getterCallExpressionForGeneration (const class cPtr_getterCallExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_methodKind readProperty_mKind (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GGS_stringlist readProperty_mFieldList (void) const ;

  public: class GGS_string readProperty_mGetterName (void) const ;

  public: class GGS_semanticExpressionListForGeneration readProperty_mActualArgumentList (void) const ;

  public: class GGS_bool readProperty_mHasCompilerArgument (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_getterCallExpressionForGeneration init_21__21__21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                             const class GGS_location & inOperand1,
                                                                                             const class GGS_methodKind & inOperand2,
                                                                                             const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                             const class GGS_stringlist & inOperand4,
                                                                                             const class GGS_string & inOperand5,
                                                                                             const class GGS_semanticExpressionListForGeneration & inOperand6,
                                                                                             const class GGS_bool & inOperand7,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_getterCallExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getterCallExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getterCallExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @getterCallExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_getterCallExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void getterCallExpressionForGeneration_init_21__21__21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                       const class GGS_location & inOperand1,
                                                                                       const class GGS_methodKind & inOperand2,
                                                                                       const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                       const class GGS_stringlist & inOperand4,
                                                                                       const class GGS_string & inOperand5,
                                                                                       const class GGS_semanticExpressionListForGeneration & inOperand6,
                                                                                       const class GGS_bool & inOperand7,
                                                                                       Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_methodKind mProperty_mKind ;
  public: GGS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GGS_stringlist mProperty_mFieldList ;
  public: GGS_string mProperty_mGetterName ;
  public: GGS_semanticExpressionListForGeneration mProperty_mActualArgumentList ;
  public: GGS_bool mProperty_mHasCompilerArgument ;


//--- Default constructor
  public: cPtr_getterCallExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_getterCallExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                  const GGS_location & in_mLocation,
                                                  const GGS_methodKind & in_mKind,
                                                  const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                  const GGS_stringlist & in_mFieldList,
                                                  const GGS_string & in_mGetterName,
                                                  const GGS_semanticExpressionListForGeneration & in_mActualArgumentList,
                                                  const GGS_bool & in_mHasCompilerArgument,
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
// Phase 1: @getterCallExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_getterCallExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_getterCallExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_getterCallExpressionForGeneration_2E_weak (const class GGS_getterCallExpressionForGeneration & inSource) ;

  public: GGS_getterCallExpressionForGeneration_2E_weak & operator = (const class GGS_getterCallExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_getterCallExpressionForGeneration_2E_weak init_nil (void) {
    GGS_getterCallExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_getterCallExpressionForGeneration bang_getterCallExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_getterCallExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_getterCallExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_getterCallExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getterCallExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getterCallExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nilExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_nilExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_nilExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_nilExpressionAST (const class cPtr_nilExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nilExpressionAST init_21_ (const class GGS_location & inOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nilExpressionAST extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nilExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nilExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @nilExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_nilExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void nilExpressionAST_init_21_ (const class GGS_location & inOperand0,
                                          Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_nilExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_nilExpressionAST (const GGS_location & in_mLocation,
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
// Phase 1: @nilExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_nilExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_nilExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_nilExpressionAST_2E_weak (const class GGS_nilExpressionAST & inSource) ;

  public: GGS_nilExpressionAST_2E_weak & operator = (const class GGS_nilExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_nilExpressionAST_2E_weak init_nil (void) {
    GGS_nilExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_nilExpressionAST bang_nilExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_nilExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_nilExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nilExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nilExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nilExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nilExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_nilExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_nilExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_nilExpressionForGeneration (const class cPtr_nilExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nilExpressionForGeneration init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                              const class GGS_location & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nilExpressionForGeneration extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nilExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nilExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @nilExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_nilExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void nilExpressionForGeneration_init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                        const class GGS_location & inOperand1,
                                                        Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_nilExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_nilExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                           const GGS_location & in_mLocation,
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
// Phase 1: @nilExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_nilExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_nilExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_nilExpressionForGeneration_2E_weak (const class GGS_nilExpressionForGeneration & inSource) ;

  public: GGS_nilExpressionForGeneration_2E_weak & operator = (const class GGS_nilExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_nilExpressionForGeneration_2E_weak init_nil (void) {
    GGS_nilExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_nilExpressionForGeneration bang_nilExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_nilExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_nilExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nilExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nilExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nilExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum lexicalTypeBaseName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_lexicalTypeBaseName (const class GGS_lexicalTypeEnum & inObject,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [galgasQualifiedFeature] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_galgasQualifiedFeature_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_galgasQualifiedFeature_5D_ (const class GGS__5B_galgasQualifiedFeature_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_galgasQualifiedFeature_5D_ (const DownEnumerator__5B_galgasQualifiedFeature_5D_ &) = delete ;
  private: DownEnumerator__5B_galgasQualifiedFeature_5D_ & operator = (const DownEnumerator__5B_galgasQualifiedFeature_5D_ &) = delete ;

//--- 
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//--- 
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

//--- Current element access
  public: class GGS_galgasQualifiedFeature current (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_galgasQualifiedFeature> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_galgasQualifiedFeature_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_galgasQualifiedFeature_5D_ (const class GGS__5B_galgasQualifiedFeature_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_galgasQualifiedFeature_5D_ (const UpEnumerator__5B_galgasQualifiedFeature_5D_ &) = delete ;
  private: UpEnumerator__5B_galgasQualifiedFeature_5D_ & operator = (const UpEnumerator__5B_galgasQualifiedFeature_5D_ &) = delete ;

//--- 
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }
  
//--- 
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

//--- Current element access
  public: class GGS_galgasQualifiedFeature current (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_galgasQualifiedFeature> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_galgasQualifiedFeature_5D_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_galgasQualifiedFeature> mSharedArray ;

//--------------------------------- Default constructor
  public: GGS__5B_galgasQualifiedFeature_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_galgasQualifiedFeature_5D_ (const GGS__5B_galgasQualifiedFeature_5D_ & inSource) ;
  public: GGS__5B_galgasQualifiedFeature_5D_ & operator = (const GGS__5B_galgasQualifiedFeature_5D_ & inSource) ;

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_galgasQualifiedFeature_5D_ ;
  friend class DownEnumerator__5B_galgasQualifiedFeature_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_galgasQualifiedFeature_5D_ init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__5B_galgasQualifiedFeature_5D_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_galgasQualifiedFeature_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_galgasQualifiedFeature & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_galgasQualifiedFeature_5D_ add_operation (const GGS__5B_galgasQualifiedFeature_5D_ & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_galgasQualifiedFeature constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_galgasQualifiedFeature constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_galgasQualifiedFeature & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_galgasQualifiedFeature & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_galgasQualifiedFeature & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_galgasQualifiedFeature & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_galgasQualifiedFeature & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_galgasQualifiedFeature readSubscript__3F_ (const class GGS_uint & in0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_galgasQualifiedFeature_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgasQualifiedFeature struct
//--------------------------------------------------------------------------------------------------

class GGS_galgasQualifiedFeature : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_featureName ;
  public: inline GGS_lstring readProperty_featureName (void) const {
    return mProperty_featureName ;
  }

  public: GGS_lstring mProperty_featureValue ;
  public: inline GGS_lstring readProperty_featureValue (void) const {
    return mProperty_featureValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_galgasQualifiedFeature (void) ;

//--------------------------------- Property setters
  public: inline void setter_setFeatureName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_featureName = inValue ;
  }

  public: inline void setter_setFeatureValue (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_featureValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_galgasQualifiedFeature (const GGS_lstring & in_featureName,
                                      const GGS_lstring & in_featureValue) ;

//--------------------------------- Copy constructor
  public: GGS_galgasQualifiedFeature (const GGS_galgasQualifiedFeature & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_galgasQualifiedFeature & operator = (const GGS_galgasQualifiedFeature & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgasQualifiedFeature init_21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_lstring & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgasQualifiedFeature extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgasQualifiedFeature ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ProjectSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_ProjectSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ProjectSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_project_5F_component_5F_start_5F_symbol_ (const class GGS_lstring constinArgument0,
                                                                       class GGS_galgas_33_ProjectComponentAST & outArgument1,
                                                                       class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_project_5F_header_ (class GGS_lbigint & outArgument0,
                                                 class GGS_lbigint & outArgument1,
                                                 class GGS_lbigint & outArgument2,
                                                 class GGS_lstring & outArgument3,
                                                 class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_project_5F_header_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ProjectSyntax_project_5F_header_i0_ (GGS_lbigint & outArgument0,
                                                                      GGS_lbigint & outArgument1,
                                                                      GGS_lbigint & outArgument2,
                                                                      GGS_lstring & outArgument3,
                                                                      Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ProjectSyntax_project_5F_header_i0_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ProjectSyntax_project_5F_header_i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_ (const GGS_lstring constinArgument0,
                                                                                            GGS_galgas_33_ProjectComponentAST & outArgument1,
                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ProjectSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgas_33_ProjectComponentAST struct
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_ProjectComponentAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_stringlist mProperty_mProjectSourceList ;
  public: inline GGS_stringlist readProperty_mProjectSourceList (void) const {
    return mProperty_mProjectSourceList ;
  }

  public: GGS_stringlist mProperty_mToolCppSourceList ;
  public: inline GGS_stringlist readProperty_mToolCppSourceList (void) const {
    return mProperty_mToolCppSourceList ;
  }

  public: GGS_lbigint mProperty_mMajorVersion ;
  public: inline GGS_lbigint readProperty_mMajorVersion (void) const {
    return mProperty_mMajorVersion ;
  }

  public: GGS_lbigint mProperty_mMinorVersion ;
  public: inline GGS_lbigint readProperty_mMinorVersion (void) const {
    return mProperty_mMinorVersion ;
  }

  public: GGS_lbigint mProperty_mRevisionVersion ;
  public: inline GGS_lbigint readProperty_mRevisionVersion (void) const {
    return mProperty_mRevisionVersion ;
  }

  public: GGS_lstringlist mProperty_mGenerationFeatureList ;
  public: inline GGS_lstringlist readProperty_mGenerationFeatureList (void) const {
    return mProperty_mGenerationFeatureList ;
  }

  public: GGS__5B_galgasQualifiedFeature_5D_ mProperty_mQualifiedFeatureList ;
  public: inline GGS__5B_galgasQualifiedFeature_5D_ readProperty_mQualifiedFeatureList (void) const {
    return mProperty_mQualifiedFeatureList ;
  }

  public: GGS_lstring mProperty_mTargetName ;
  public: inline GGS_lstring readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GGS_location mProperty_mEndOfSourceFile ;
  public: inline GGS_location readProperty_mEndOfSourceFile (void) const {
    return mProperty_mEndOfSourceFile ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_galgas_33_ProjectComponentAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProjectSourceList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectSourceList = inValue ;
  }

  public: inline void setter_setMToolCppSourceList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mToolCppSourceList = inValue ;
  }

  public: inline void setter_setMMajorVersion (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMajorVersion = inValue ;
  }

  public: inline void setter_setMMinorVersion (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMinorVersion = inValue ;
  }

  public: inline void setter_setMRevisionVersion (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRevisionVersion = inValue ;
  }

  public: inline void setter_setMGenerationFeatureList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerationFeatureList = inValue ;
  }

  public: inline void setter_setMQualifiedFeatureList (const GGS__5B_galgasQualifiedFeature_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifiedFeatureList = inValue ;
  }

  public: inline void setter_setMTargetName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMEndOfSourceFile (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfSourceFile = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_galgas_33_ProjectComponentAST (const GGS_stringlist & in_mProjectSourceList,
                                             const GGS_stringlist & in_mToolCppSourceList,
                                             const GGS_lbigint & in_mMajorVersion,
                                             const GGS_lbigint & in_mMinorVersion,
                                             const GGS_lbigint & in_mRevisionVersion,
                                             const GGS_lstringlist & in_mGenerationFeatureList,
                                             const GGS__5B_galgasQualifiedFeature_5D_ & in_mQualifiedFeatureList,
                                             const GGS_lstring & in_mTargetName,
                                             const GGS_location & in_mEndOfSourceFile) ;

//--------------------------------- Copy constructor
  public: GGS_galgas_33_ProjectComponentAST (const GGS_galgas_33_ProjectComponentAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_galgas_33_ProjectComponentAST & operator = (const GGS_galgas_33_ProjectComponentAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgas_33_ProjectComponentAST init_21__21__21__21__21__21__21__21__21_ (const class GGS_stringlist & inOperand0,
                                                                                             const class GGS_stringlist & inOperand1,
                                                                                             const class GGS_lbigint & inOperand2,
                                                                                             const class GGS_lbigint & inOperand3,
                                                                                             const class GGS_lbigint & inOperand4,
                                                                                             const class GGS_lstringlist & inOperand5,
                                                                                             const class GGS__5B_galgasQualifiedFeature_5D_ & inOperand6,
                                                                                             const class GGS_lstring & inOperand7,
                                                                                             const class GGS_location & inOperand8,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgas_33_ProjectComponentAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_ProjectComponentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateLexiqueComponentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLexiqueComponentAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_templateLexiqueComponentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLexiqueComponentAST (const class cPtr_templateLexiqueComponentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLexiqueComponentName (void) const ;

  public: class GGS_lstring readProperty_mLexiqueSuperComponentName (void) const ;

  public: class GGS_templateDelimitorListAST readProperty_mTemplateDelimitorList (void) const ;

  public: class GGS_templateReplacementListAST readProperty_mTemplateReplacementList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLexiqueComponentAST init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_lstring & inOperand2,
                                                                                       const class GGS_templateDelimitorListAST & inOperand3,
                                                                                       const class GGS_templateReplacementListAST & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLexiqueComponentAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLexiqueComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLexiqueComponentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateLexiqueComponentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateLexiqueComponentAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateLexiqueComponentAST_init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
                                                                                 const class GGS_templateDelimitorListAST & inOperand3,
                                                                                 const class GGS_templateReplacementListAST & inOperand4,
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
  public: GGS_lstring mProperty_mLexiqueSuperComponentName ;
  public: GGS_templateDelimitorListAST mProperty_mTemplateDelimitorList ;
  public: GGS_templateReplacementListAST mProperty_mTemplateReplacementList ;


//--- Default constructor
  public: cPtr_templateLexiqueComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLexiqueComponentAST (const GGS_bool & in_isPredefined,
                                            const GGS_lstring & in_mLexiqueComponentName,
                                            const GGS_lstring & in_mLexiqueSuperComponentName,
                                            const GGS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                            const GGS_templateReplacementListAST & in_mTemplateReplacementList,
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
// Phase 1: @templateLexiqueComponentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLexiqueComponentAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateLexiqueComponentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateLexiqueComponentAST_2E_weak (const class GGS_templateLexiqueComponentAST & inSource) ;

  public: GGS_templateLexiqueComponentAST_2E_weak & operator = (const class GGS_templateLexiqueComponentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateLexiqueComponentAST_2E_weak init_nil (void) {
    GGS_templateLexiqueComponentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateLexiqueComponentAST bang_templateLexiqueComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateLexiqueComponentAST unwrappedValue (void) const ;

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
  public: static GGS_templateLexiqueComponentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLexiqueComponentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLexiqueComponentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLexiqueComponentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum AccessControlAST
//--------------------------------------------------------------------------------------------------

class GGS_AccessControlAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_AccessControlAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_publicAccess,
    enum_protectedAccess,
    enum_protectedSetAccess,
    enum_privateAccess,
    enum_privateSetAccess,
    enum_fileprivateAccess,
    enum_fileprivateSetAccess
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fileprivateAccess (class GGS_location & out_declarationLocation) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fileprivateSetAccess (class GGS_location & out_declarationLocation) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControlAST extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_AccessControlAST class_func_fileprivateAccess (const class GGS_location & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControlAST class_func_fileprivateSetAccess (const class GGS_location & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControlAST class_func_privateAccess (LOCATION_ARGS) ;

  public: static class GGS_AccessControlAST class_func_privateSetAccess (LOCATION_ARGS) ;

  public: static class GGS_AccessControlAST class_func_protectedAccess (LOCATION_ARGS) ;

  public: static class GGS_AccessControlAST class_func_protectedSetAccess (LOCATION_ARGS) ;

  public: static class GGS_AccessControlAST class_func_publicAccess (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractFileprivateAccess (class GGS_location & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: void method_extractFileprivateSetAccess (class GGS_location & outArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_AccessControlAST_2E_fileprivateAccess_3F_ getter_getFileprivateAccess (LOCATION_ARGS) const ;

  public: class GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ getter_getFileprivateSetAccess (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isFileprivateAccess (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isFileprivateSetAccess (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isPrivateAccess (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isPrivateSetAccess (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isProtectedAccess (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isProtectedSetAccess (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isPublicAccess (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @AccessControlAST_2E_fileprivateAccess struct
//--------------------------------------------------------------------------------------------------

class GGS_AccessControlAST_2E_fileprivateAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_declarationLocation ;
  public: inline GGS_location readProperty_declarationLocation (void) const {
    return mProperty_declarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_AccessControlAST_2E_fileprivateAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declarationLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_AccessControlAST_2E_fileprivateAccess (const GGS_location & in_declarationLocation) ;

//--------------------------------- Copy constructor
  public: GGS_AccessControlAST_2E_fileprivateAccess (const GGS_AccessControlAST_2E_fileprivateAccess & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_AccessControlAST_2E_fileprivateAccess & operator = (const GGS_AccessControlAST_2E_fileprivateAccess & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AccessControlAST_2E_fileprivateAccess init_21_ (const class GGS_location & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControlAST_2E_fileprivateAccess extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess ;

//--------------------------------------------------------------------------------------------------
// Phase 1: AccessControlAST.fileprivateAccess? optional
//--------------------------------------------------------------------------------------------------

class GGS_AccessControlAST_2E_fileprivateAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_AccessControlAST_2E_fileprivateAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_AccessControlAST_2E_fileprivateAccess_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_AccessControlAST_2E_fileprivateAccess_3F_ (const GGS_AccessControlAST_2E_fileprivateAccess & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_AccessControlAST_2E_fileprivateAccess_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_AccessControlAST_2E_fileprivateAccess unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControlAST_2E_fileprivateAccess_3F_ extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @AccessControlAST_2E_fileprivateSetAccess struct
//--------------------------------------------------------------------------------------------------

class GGS_AccessControlAST_2E_fileprivateSetAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_declarationLocation ;
  public: inline GGS_location readProperty_declarationLocation (void) const {
    return mProperty_declarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_AccessControlAST_2E_fileprivateSetAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declarationLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_AccessControlAST_2E_fileprivateSetAccess (const GGS_location & in_declarationLocation) ;

//--------------------------------- Copy constructor
  public: GGS_AccessControlAST_2E_fileprivateSetAccess (const GGS_AccessControlAST_2E_fileprivateSetAccess & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_AccessControlAST_2E_fileprivateSetAccess & operator = (const GGS_AccessControlAST_2E_fileprivateSetAccess & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AccessControlAST_2E_fileprivateSetAccess init_21_ (const class GGS_location & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControlAST_2E_fileprivateSetAccess extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess ;

//--------------------------------------------------------------------------------------------------
// Phase 1: AccessControlAST.fileprivateSetAccess? optional
//--------------------------------------------------------------------------------------------------

class GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_AccessControlAST_2E_fileprivateSetAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ (const GGS_AccessControlAST_2E_fileprivateSetAccess & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_AccessControlAST_2E_fileprivateSetAccess unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@AccessControlAST accessControl' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl extensionGetter_accessControl (const class GGS_AccessControlAST & inObject,
                                                       const class GGS_unifiedTypeMapEntry & constinArgument0,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControl checkSetAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSetAccess (const class GGS_AccessControl inObject,
                                     const class GGS_selfAvailability constin_inOptionalCurrentType,
                                     const class GGS_location constin_inErrorLocation,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControl checkGetAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkGetAccess (const class GGS_AccessControl inObject,
                                     const class GGS_selfAvailability constin_inOptionalCurrentType,
                                     const class GGS_location constin_inErrorLocation,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @castInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_castInExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_castInExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_castInExpressionForGeneration (const class cPtr_castInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GGS_string readProperty_mTypeName (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mCastType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_castInExpressionForGeneration init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                             const class GGS_location & inOperand1,
                                                                             const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                             const class GGS_string & inOperand3,
                                                                             const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_castInExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_castInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_castInExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @castInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_castInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void castInExpressionForGeneration_init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                       const class GGS_location & inOperand1,
                                                                       const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                       const class GGS_string & inOperand3,
                                                                       const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                       Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GGS_string mProperty_mTypeName ;
  public: GGS_unifiedTypeMapEntry mProperty_mCastType ;


//--- Default constructor
  public: cPtr_castInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_castInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                              const GGS_location & in_mLocation,
                                              const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                              const GGS_string & in_mTypeName,
                                              const GGS_unifiedTypeMapEntry & in_mCastType,
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
// Phase 1: @castInExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_castInExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_castInExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_castInExpressionForGeneration_2E_weak (const class GGS_castInExpressionForGeneration & inSource) ;

  public: GGS_castInExpressionForGeneration_2E_weak & operator = (const class GGS_castInExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_castInExpressionForGeneration_2E_weak init_nil (void) {
    GGS_castInExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_castInExpressionForGeneration bang_castInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_castInExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_castInExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_castInExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_castInExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_castInExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actualParameterForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_actualParameterForGeneration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_actualParameterForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_actualParameterForGeneration_2E_weak (const class GGS_actualParameterForGeneration & inSource) ;

  public: GGS_actualParameterForGeneration_2E_weak & operator = (const class GGS_actualParameterForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_actualParameterForGeneration_2E_weak init_nil (void) {
    GGS_actualParameterForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_actualParameterForGeneration bang_actualParameterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_actualParameterForGeneration unwrappedValue (void) const ;

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
  public: static GGS_actualParameterForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actualParameterForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_actualParameterForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualParameterForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterForGeneration generateActualParameter'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateActualParameter (class cPtr_actualParameterForGeneration * inObject,
                                                  class GGS_stringset & io_ioInclusionSet,
                                                  class GGS_uint & io_ioTemporaryVariableIndex,
                                                  class GGS_string & io_ioImplementation,
                                                  class GGS_stringlist & io_ioJokerParametersToReleaseList,
                                                  class GGS_stringlist & io_ioOutputVariableList,
                                                  class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                                  class GGS_string & out_outCppName,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterForGeneration generatePoisonedVariables'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generatePoisonedVariables (class cPtr_actualParameterForGeneration * inObject,
                                                    class GGS_string & io_ioImplementation,
                                                    class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outputActualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_outputActualParameterForGeneration : public GGS_actualParameterForGeneration {
//--------------------------------- Default constructor
  public: GGS_outputActualParameterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_outputActualParameterForGeneration (const class cPtr_outputActualParameterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mOutputActualParameterExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outputActualParameterForGeneration init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                      const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outputActualParameterForGeneration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @outputActualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_outputActualParameterForGeneration : public cPtr_actualParameterForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void outputActualParameterForGeneration_init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                Compiler * inCompiler) ;


//--- Extension method generateActualParameter
  public: virtual void method_generateActualParameter (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_string & arg_ioImplementation,
           class GGS_stringlist & arg_ioJokerParametersToReleaseList,
           class GGS_stringlist & arg_ioOutputVariableList,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppName,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generatePoisonedVariables
  public: virtual void method_generatePoisonedVariables (class GGS_string & arg_ioImplementation,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mOutputActualParameterExpression ;


//--- Default constructor
  public: cPtr_outputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outputActualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                   const GGS_semanticExpressionForGeneration & in_mOutputActualParameterExpression,
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
// Phase 1: @outputActualParameterForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_outputActualParameterForGeneration_2E_weak : public GGS_actualParameterForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_outputActualParameterForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_outputActualParameterForGeneration_2E_weak (const class GGS_outputActualParameterForGeneration & inSource) ;

  public: GGS_outputActualParameterForGeneration_2E_weak & operator = (const class GGS_outputActualParameterForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_outputActualParameterForGeneration_2E_weak init_nil (void) {
    GGS_outputActualParameterForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_outputActualParameterForGeneration bang_outputActualParameterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_outputActualParameterForGeneration unwrappedValue (void) const ;

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
  public: static GGS_outputActualParameterForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outputActualParameterForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputActualParameterForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputActualParameterForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeMapEntryList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_unifiedTypeMapEntryList final {
  public: DownEnumerator_unifiedTypeMapEntryList (const class GGS_unifiedTypeMapEntryList & inList) ;

  public: ~ DownEnumerator_unifiedTypeMapEntryList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_unifiedTypeMapEntry current_mEntry (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_unifiedTypeMapEntryList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_unifiedTypeMapEntryList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_unifiedTypeMapEntryList (const DownEnumerator_unifiedTypeMapEntryList &) = delete ;
  private: DownEnumerator_unifiedTypeMapEntryList & operator = (const DownEnumerator_unifiedTypeMapEntryList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_unifiedTypeMapEntryList final {
  public: UpEnumerator_unifiedTypeMapEntryList (const class GGS_unifiedTypeMapEntryList & inList)  ;

  public: ~ UpEnumerator_unifiedTypeMapEntryList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_unifiedTypeMapEntry current_mEntry (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_unifiedTypeMapEntryList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_unifiedTypeMapEntryList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_unifiedTypeMapEntryList (const UpEnumerator_unifiedTypeMapEntryList &) = delete ;
  private: UpEnumerator_unifiedTypeMapEntryList & operator = (const UpEnumerator_unifiedTypeMapEntryList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @unifiedTypeMapEntryList list
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntryList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_unifiedTypeMapEntryList_2E_element> mArray ;

//--- Default constructor
  public: GGS_unifiedTypeMapEntryList (void) ;

//--- Destructor
  public: virtual ~ GGS_unifiedTypeMapEntryList (void) = default ;

//--- Copy
  public: GGS_unifiedTypeMapEntryList (const GGS_unifiedTypeMapEntryList &) = default ;
  public: GGS_unifiedTypeMapEntryList & operator = (const GGS_unifiedTypeMapEntryList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_unifiedTypeMapEntryList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_unifiedTypeMapEntryList subList (const int32_t inStart,
                                                const int32_t inLength,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_unifiedTypeMapEntryList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_unifiedTypeMapEntry & in_mEntry
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unifiedTypeMapEntryList init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unifiedTypeMapEntryList extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unifiedTypeMapEntryList class_func_listWithValue (const class GGS_unifiedTypeMapEntry & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_unifiedTypeMapEntryList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_unifiedTypeMapEntry & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_unifiedTypeMapEntryList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_unifiedTypeMapEntryList add_operation (const GGS_unifiedTypeMapEntryList & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unifiedTypeMapEntryList & inOperand) const ;

//--------------------------------- Setters
  public: void setter_append (class GGS_unifiedTypeMapEntry constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_unifiedTypeMapEntry & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_unifiedTypeMapEntry & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_unifiedTypeMapEntry & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMEntryAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                        class GGS_uint constinArgument1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_unifiedTypeMapEntry & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_unifiedTypeMapEntry & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry getter_mEntryAtIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntryList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntryList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntryList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_unifiedTypeMapEntryList ;
  friend class DownEnumerator_unifiedTypeMapEntryList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntryList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeMapEntryList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntryList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mEntry ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mEntry (void) const {
    return mProperty_mEntry ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeMapEntryList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEntry (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEntry = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_unifiedTypeMapEntryList_2E_element (const GGS_unifiedTypeMapEntry & in_mEntry) ;

//--------------------------------- Copy constructor
  public: GGS_unifiedTypeMapEntryList_2E_element (const GGS_unifiedTypeMapEntryList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_unifiedTypeMapEntryList_2E_element & operator = (const GGS_unifiedTypeMapEntryList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unifiedTypeMapEntryList_2E_element init_21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unifiedTypeMapEntryList_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unifiedTypeMapEntryList_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntryList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outputInputActualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_outputInputActualParameterForGeneration : public GGS_actualParameterForGeneration {
//--------------------------------- Default constructor
  public: GGS_outputInputActualParameterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_outputInputActualParameterForGeneration (const class cPtr_outputInputActualParameterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mOutputInputVariableCppName (void) const ;

  public: class GGS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GGS_unifiedTypeMapEntryList readProperty_mTypeList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outputInputActualParameterForGeneration init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_lstringlist & inOperand2,
                                                                                   const class GGS_unifiedTypeMapEntryList & inOperand3,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_outputInputActualParameterForGeneration extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputInputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @outputInputActualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_outputInputActualParameterForGeneration : public cPtr_actualParameterForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void outputInputActualParameterForGeneration_init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             const class GGS_lstringlist & inOperand2,
                                                                             const class GGS_unifiedTypeMapEntryList & inOperand3,
                                                                             Compiler * inCompiler) ;


//--- Extension method generateActualParameter
  public: virtual void method_generateActualParameter (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_string & arg_ioImplementation,
           class GGS_stringlist & arg_ioJokerParametersToReleaseList,
           class GGS_stringlist & arg_ioOutputVariableList,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppName,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generatePoisonedVariables
  public: virtual void method_generatePoisonedVariables (class GGS_string & arg_ioImplementation,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mOutputInputVariableCppName ;
  public: GGS_lstringlist mProperty_mStructAttributeList ;
  public: GGS_unifiedTypeMapEntryList mProperty_mTypeList ;


//--- Default constructor
  public: cPtr_outputInputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outputInputActualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                        const GGS_string & in_mOutputInputVariableCppName,
                                                        const GGS_lstringlist & in_mStructAttributeList,
                                                        const GGS_unifiedTypeMapEntryList & in_mTypeList,
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
// Phase 1: @outputInputActualParameterForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_outputInputActualParameterForGeneration_2E_weak : public GGS_actualParameterForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_outputInputActualParameterForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_outputInputActualParameterForGeneration_2E_weak (const class GGS_outputInputActualParameterForGeneration & inSource) ;

  public: GGS_outputInputActualParameterForGeneration_2E_weak & operator = (const class GGS_outputInputActualParameterForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_outputInputActualParameterForGeneration_2E_weak init_nil (void) {
    GGS_outputInputActualParameterForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_outputInputActualParameterForGeneration bang_outputInputActualParameterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_outputInputActualParameterForGeneration unwrappedValue (void) const ;

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
  public: static GGS_outputInputActualParameterForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_outputInputActualParameterForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputInputActualParameterForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @inputActualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputActualParameterForGeneration : public GGS_actualParameterForGeneration {
//--------------------------------- Default constructor
  public: GGS_inputActualParameterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputActualParameterForGeneration (const class cPtr_inputActualParameterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mInputActualCppName (void) const ;

  public: class GGS__32_stringlist readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputActualParameterForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS__32_stringlist & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inputActualParameterForGeneration extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inputActualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_inputActualParameterForGeneration : public cPtr_actualParameterForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputActualParameterForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                   const class GGS_string & inOperand1,
                                                                   const class GGS__32_stringlist & inOperand2,
                                                                   Compiler * inCompiler) ;


//--- Extension method generateActualParameter
  public: virtual void method_generateActualParameter (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_string & arg_ioImplementation,
           class GGS_stringlist & arg_ioJokerParametersToReleaseList,
           class GGS_stringlist & arg_ioOutputVariableList,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppName,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generatePoisonedVariables
  public: virtual void method_generatePoisonedVariables (class GGS_string & arg_ioImplementation,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mInputActualCppName ;
  public: GGS__32_stringlist mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputActualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                  const GGS_string & in_mInputActualCppName,
                                                  const GGS__32_stringlist & in_mPoisonedVarNameList,
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
// Phase 1: @inputActualParameterForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputActualParameterForGeneration_2E_weak : public GGS_actualParameterForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputActualParameterForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputActualParameterForGeneration_2E_weak (const class GGS_inputActualParameterForGeneration & inSource) ;

  public: GGS_inputActualParameterForGeneration_2E_weak & operator = (const class GGS_inputActualParameterForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_inputActualParameterForGeneration_2E_weak init_nil (void) {
    GGS_inputActualParameterForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inputActualParameterForGeneration bang_inputActualParameterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_inputActualParameterForGeneration unwrappedValue (void) const ;

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
  public: static GGS_inputActualParameterForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputActualParameterForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputActualParameterForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputActualParameterForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @inputJokerParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputJokerParameterForGeneration : public GGS_actualParameterForGeneration {
//--------------------------------- Default constructor
  public: GGS_inputJokerParameterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputJokerParameterForGeneration (const class cPtr_inputJokerParameterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mInputActualCppName (void) const ;

  public: class GGS__32_stringlist readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputJokerParameterForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        const class GGS__32_stringlist & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inputJokerParameterForGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputJokerParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inputJokerParameterForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_inputJokerParameterForGeneration : public cPtr_actualParameterForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputJokerParameterForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                  const class GGS_string & inOperand1,
                                                                  const class GGS__32_stringlist & inOperand2,
                                                                  Compiler * inCompiler) ;


//--- Extension method generateActualParameter
  public: virtual void method_generateActualParameter (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_string & arg_ioImplementation,
           class GGS_stringlist & arg_ioJokerParametersToReleaseList,
           class GGS_stringlist & arg_ioOutputVariableList,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppName,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generatePoisonedVariables
  public: virtual void method_generatePoisonedVariables (class GGS_string & arg_ioImplementation,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mInputActualCppName ;
  public: GGS__32_stringlist mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputJokerParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputJokerParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                 const GGS_string & in_mInputActualCppName,
                                                 const GGS__32_stringlist & in_mPoisonedVarNameList,
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
// Phase 1: @inputJokerParameterForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputJokerParameterForGeneration_2E_weak : public GGS_actualParameterForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputJokerParameterForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputJokerParameterForGeneration_2E_weak (const class GGS_inputJokerParameterForGeneration & inSource) ;

  public: GGS_inputJokerParameterForGeneration_2E_weak & operator = (const class GGS_inputJokerParameterForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_inputJokerParameterForGeneration_2E_weak init_nil (void) {
    GGS_inputJokerParameterForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inputJokerParameterForGeneration bang_inputJokerParameterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_inputJokerParameterForGeneration unwrappedValue (void) const ;

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
  public: static GGS_inputJokerParameterForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputJokerParameterForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputJokerParameterForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputJokerParameterForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateInstruction (class cPtr_semanticInstructionForGeneration * inObject,
                                              class GGS_stringset & io_ioInclusionSet,
                                              class GGS_uint & io_ioTemporaryVariableIndex,
                                              class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                              const class GGS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                              class GGS_string & io_ioGeneratedCode,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticBlockInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticBlockInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_semanticBlockInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_semanticBlockInstructionForGeneration (const class cPtr_semanticBlockInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticInstructionListForGeneration readProperty_mInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticBlockInstructionForGeneration init_21_ (const class GGS_semanticInstructionListForGeneration & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticBlockInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticBlockInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @semanticBlockInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_semanticBlockInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticBlockInstructionForGeneration_init_21_ (const class GGS_semanticInstructionListForGeneration & inOperand0,
                                                               Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticInstructionListForGeneration mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_semanticBlockInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_semanticBlockInstructionForGeneration (const GGS_semanticInstructionListForGeneration & in_mInstructionList,
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
// Phase 1: @semanticBlockInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticBlockInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_semanticBlockInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_semanticBlockInstructionForGeneration_2E_weak (const class GGS_semanticBlockInstructionForGeneration & inSource) ;

  public: GGS_semanticBlockInstructionForGeneration_2E_weak & operator = (const class GGS_semanticBlockInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_semanticBlockInstructionForGeneration_2E_weak init_nil (void) {
    GGS_semanticBlockInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_semanticBlockInstructionForGeneration bang_semanticBlockInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_semanticBlockInstructionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_semanticBlockInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticBlockInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticBlockInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticDeclarationForGeneration appendPrimitiveTypeDeclaration'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_appendPrimitiveTypeDeclaration (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendPrimitiveTypePreDeclaration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendPrimitiveTypePreDeclaration (class cPtr_semanticDeclarationForGeneration * inObject,
                                                            class GGS_string & io_ioHeader,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_getImplementationCppFileName (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_hasCppHeaderFile (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isPredefined (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

class GGS_headerKind callExtensionGetter_headerKind (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticDeclarationListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_semanticDeclarationListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_infoMessage ;
  public: inline GGS_string readProperty_infoMessage (void) const {
    return mProperty_infoMessage ;
  }

  public: GGS_semanticDeclarationForGeneration mProperty_mDeclaration ;
  public: inline GGS_semanticDeclarationForGeneration readProperty_mDeclaration (void) const {
    return mProperty_mDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_semanticDeclarationListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setInfoMessage (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_infoMessage = inValue ;
  }

  public: inline void setter_setMDeclaration (const GGS_semanticDeclarationForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaration = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_semanticDeclarationListForGeneration_2E_element (const GGS_string & in_infoMessage,
                                                               const GGS_semanticDeclarationForGeneration & in_mDeclaration) ;

//--------------------------------- Copy constructor
  public: GGS_semanticDeclarationListForGeneration_2E_element (const GGS_semanticDeclarationListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_semanticDeclarationListForGeneration_2E_element & operator = (const GGS_semanticDeclarationListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticDeclarationListForGeneration_2E_element init_21_infoMessage_21_ (const class GGS_string & inOperand0,
                                                                                              const class GGS_semanticDeclarationForGeneration & inOperand1,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticDeclarationListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @signatureForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_signatureForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_formalArgumentPassingModeAST mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
  public: inline GGS_formalArgumentPassingModeAST readProperty_mFormalArgumentPassingModeForGrammarAnalysis (void) const {
    return mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
  }

  public: GGS_lstring mProperty_mGalgasTypeNameForGrammarAnalysis ;
  public: inline GGS_lstring readProperty_mGalgasTypeNameForGrammarAnalysis (void) const {
    return mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_signatureForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalArgumentPassingModeForGrammarAnalysis (const GGS_formalArgumentPassingModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentPassingModeForGrammarAnalysis = inValue ;
  }

  public: inline void setter_setMGalgasTypeNameForGrammarAnalysis (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGalgasTypeNameForGrammarAnalysis = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_signatureForGrammarAnalysis_2E_element (const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                      const GGS_lstring & in_mGalgasTypeNameForGrammarAnalysis) ;

//--------------------------------- Copy constructor
  public: GGS_signatureForGrammarAnalysis_2E_element (const GGS_signatureForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_signatureForGrammarAnalysis_2E_element & operator = (const GGS_signatureForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_signatureForGrammarAnalysis_2E_element init_21__21_ (const class GGS_formalArgumentPassingModeAST & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_signatureForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_signatureForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperTemplateListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_filewrapperTemplateListForGeneration final {
  public: DownEnumerator_filewrapperTemplateListForGeneration (const class GGS_filewrapperTemplateListForGeneration & inList) ;

  public: ~ DownEnumerator_filewrapperTemplateListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mFilewrapperTemplateName (LOCATION_ARGS) const ;
  public: class GGS_formalInputParameterListForGeneration current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionListForGeneration current_mTemplateInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_filewrapperTemplateListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_filewrapperTemplateListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_filewrapperTemplateListForGeneration (const DownEnumerator_filewrapperTemplateListForGeneration &) = delete ;
  private: DownEnumerator_filewrapperTemplateListForGeneration & operator = (const DownEnumerator_filewrapperTemplateListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_filewrapperTemplateListForGeneration final {
  public: UpEnumerator_filewrapperTemplateListForGeneration (const class GGS_filewrapperTemplateListForGeneration & inList)  ;

  public: ~ UpEnumerator_filewrapperTemplateListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mFilewrapperTemplateName (LOCATION_ARGS) const ;
  public: class GGS_formalInputParameterListForGeneration current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionListForGeneration current_mTemplateInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_filewrapperTemplateListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_filewrapperTemplateListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_filewrapperTemplateListForGeneration (const UpEnumerator_filewrapperTemplateListForGeneration &) = delete ;
  private: UpEnumerator_filewrapperTemplateListForGeneration & operator = (const UpEnumerator_filewrapperTemplateListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @filewrapperTemplateListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperTemplateListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_filewrapperTemplateListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_filewrapperTemplateListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_filewrapperTemplateListForGeneration (void) = default ;

//--- Copy
  public: GGS_filewrapperTemplateListForGeneration (const GGS_filewrapperTemplateListForGeneration &) = default ;
  public: GGS_filewrapperTemplateListForGeneration & operator = (const GGS_filewrapperTemplateListForGeneration &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_filewrapperTemplateListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_filewrapperTemplateListForGeneration subList (const int32_t inStart,
                                                             const int32_t inLength,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_filewrapperTemplateListForGeneration (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_mFilewrapperTemplateName,
                                                 const class GGS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                 const class GGS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperTemplateListForGeneration init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperTemplateListForGeneration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperTemplateListForGeneration class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                          const class GGS_formalInputParameterListForGeneration & inOperand1,
                                                                                          const class GGS_templateInstructionListForGeneration & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_filewrapperTemplateListForGeneration inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_formalInputParameterListForGeneration & inOperand1,
                                   const class GGS_templateInstructionListForGeneration & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_filewrapperTemplateListForGeneration_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_filewrapperTemplateListForGeneration add_operation (const GGS_filewrapperTemplateListForGeneration & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_formalInputParameterListForGeneration constinArgument1,
                              class GGS_templateInstructionListForGeneration constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_formalInputParameterListForGeneration constinArgument1,
                                     class GGS_templateInstructionListForGeneration constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_formalInputParameterListForGeneration & outArgument1,
                                class GGS_templateInstructionListForGeneration & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_formalInputParameterListForGeneration & outArgument1,
                               class GGS_templateInstructionListForGeneration & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_formalInputParameterListForGeneration & outArgument1,
                                     class GGS_templateInstructionListForGeneration & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFilewrapperTemplateFormalInputParametersAtIndex (class GGS_formalInputParameterListForGeneration constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMFilewrapperTemplateNameAtIndex (class GGS_string constinArgument0,
                                                          class GGS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMTemplateInstructionListForGenerationAtIndex (class GGS_templateInstructionListForGeneration constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_formalInputParameterListForGeneration & outArgument1,
                             class GGS_templateInstructionListForGeneration & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_formalInputParameterListForGeneration & outArgument1,
                            class GGS_templateInstructionListForGeneration & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_formalInputParameterListForGeneration getter_mFilewrapperTemplateFormalInputParametersAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mFilewrapperTemplateNameAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionListForGeneration getter_mTemplateInstructionListForGenerationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_filewrapperTemplateListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_filewrapperTemplateListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_filewrapperTemplateListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_filewrapperTemplateListForGeneration ;
  friend class DownEnumerator_filewrapperTemplateListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperTemplateListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperTemplateListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mFilewrapperTemplateName ;
  public: inline GGS_string readProperty_mFilewrapperTemplateName (void) const {
    return mProperty_mFilewrapperTemplateName ;
  }

  public: GGS_formalInputParameterListForGeneration mProperty_mFilewrapperTemplateFormalInputParameters ;
  public: inline GGS_formalInputParameterListForGeneration readProperty_mFilewrapperTemplateFormalInputParameters (void) const {
    return mProperty_mFilewrapperTemplateFormalInputParameters ;
  }

  public: GGS_templateInstructionListForGeneration mProperty_mTemplateInstructionListForGeneration ;
  public: inline GGS_templateInstructionListForGeneration readProperty_mTemplateInstructionListForGeneration (void) const {
    return mProperty_mTemplateInstructionListForGeneration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_filewrapperTemplateListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFilewrapperTemplateName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplateName = inValue ;
  }

  public: inline void setter_setMFilewrapperTemplateFormalInputParameters (const GGS_formalInputParameterListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplateFormalInputParameters = inValue ;
  }

  public: inline void setter_setMTemplateInstructionListForGeneration (const GGS_templateInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTemplateInstructionListForGeneration = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_filewrapperTemplateListForGeneration_2E_element (const GGS_string & in_mFilewrapperTemplateName,
                                                               const GGS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                               const GGS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration) ;

//--------------------------------- Copy constructor
  public: GGS_filewrapperTemplateListForGeneration_2E_element (const GGS_filewrapperTemplateListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_filewrapperTemplateListForGeneration_2E_element & operator = (const GGS_filewrapperTemplateListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperTemplateListForGeneration_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                                       const class GGS_formalInputParameterListForGeneration & inOperand1,
                                                                                       const class GGS_templateInstructionListForGeneration & inOperand2,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperTemplateListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendDeclaration_31_ (class cPtr_semanticDeclarationForGeneration * inObject,
                                                class GGS_stringset & io_ioInclusionSet,
                                                class GGS_string & out_outHeader,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendDeclaration2'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendDeclaration_32_ (class cPtr_semanticDeclarationForGeneration * inObject,
                                                const class GGS_string constin_inOutputDirectory,
                                                class GGS_stringset & io_ioInclusionSet,
                                                class GGS_string & out_outHeader,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticDeclarationForGeneration appendTypeGenericImplementation'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_appendTypeGenericImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSpecificImplementation (class cPtr_semanticDeclarationForGeneration * inObject,
                                                       const class GGS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                       class GGS_stringset & io_ioInclusionSet,
                                                       class GGS_string & out_outImplementation,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendSpecificFiles'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSpecificFiles (class cPtr_semanticDeclarationForGeneration * inObject,
                                              const class GGS_string constin_inProductDirectory,
                                              class GGS_stringset & io_ioAllProductFileSet,
                                              class GGS_stringlist & io_ioSwiftAppProductFileList,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @genericExtensionMethodListMapDictionary_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_genericExtensionMethodListMapDictionary_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_key ;
  public: inline GGS_string readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GGS_lstringlist mProperty_mList ;
  public: inline GGS_lstringlist readProperty_mList (void) const {
    return mProperty_mList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_genericExtensionMethodListMapDictionary_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setMList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_genericExtensionMethodListMapDictionary_2E_element (const GGS_string & in_key,
                                                                  const GGS_lstringlist & in_mList) ;

//--------------------------------- Copy constructor
  public: GGS_genericExtensionMethodListMapDictionary_2E_element (const GGS_genericExtensionMethodListMapDictionary_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_genericExtensionMethodListMapDictionary_2E_element & operator = (const GGS_genericExtensionMethodListMapDictionary_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_genericExtensionMethodListMapDictionary_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                                      const class GGS_lstringlist & inOperand1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_genericExtensionMethodListMapDictionary_2E_element extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: genericExtensionMethodListMapDictionary.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_genericExtensionMethodListMapDictionary_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ (const GGS_genericExtensionMethodListMapDictionary_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_genericExtensionMethodListMapDictionary_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @genericExtensionMethodListMapDictionary dictionary enumerator
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericDictionary.h"

//--------------------------------------------------------------------------------------------------

class DownEnumerator_genericExtensionMethodListMapDictionary final {
  public: DownEnumerator_genericExtensionMethodListMapDictionary (const class GGS_genericExtensionMethodListMapDictionary & inOperand) ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_string current_key (UNUSED_LOCATION_ARGS) const ;

  public: class GGS_lstringlist current_mList (UNUSED_LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_genericExtensionMethodListMapDictionary_2E_element current (UNUSED_LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_genericExtensionMethodListMapDictionary_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_genericExtensionMethodListMapDictionary (const DownEnumerator_genericExtensionMethodListMapDictionary &) = delete ;
  private: DownEnumerator_genericExtensionMethodListMapDictionary & operator = (const DownEnumerator_genericExtensionMethodListMapDictionary &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_genericExtensionMethodListMapDictionary final {
  public: UpEnumerator_genericExtensionMethodListMapDictionary (const class GGS_genericExtensionMethodListMapDictionary & inOperand)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: class GGS_string current_key (UNUSED_LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mList (UNUSED_LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_genericExtensionMethodListMapDictionary_2E_element current (UNUSED_LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_genericExtensionMethodListMapDictionary_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_genericExtensionMethodListMapDictionary (const UpEnumerator_genericExtensionMethodListMapDictionary &) = delete ;
  private: UpEnumerator_genericExtensionMethodListMapDictionary & operator = (const UpEnumerator_genericExtensionMethodListMapDictionary &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @genericExtensionMethodListMapDictionary dict
//--------------------------------------------------------------------------------------------------

class GGS_genericExtensionMethodListMapDictionary final : public GenericDictionary <GGS_string, GGS_genericExtensionMethodListMapDictionary_2E_element> {

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_genericExtensionMethodListMapDictionary (void) = default ;

//--------------------------------- Build
  protected: static GGS_genericExtensionMethodListMapDictionary builtDictionary (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_genericExtensionMethodListMapDictionary init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_genericExtensionMethodListMapDictionary extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_lstringlist & inOperand1,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_genericExtensionMethodListMapDictionary_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: void setter_insert (class GGS_string constinArgument0,
                              class GGS_lstringlist constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeKey (class GGS_string constinArgument0,
                                 class GGS_lstringlist & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMListForKey (class GGS_lstringlist constinArgument0,
                                      class GGS_string constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_string constinArgument0,
                                 class GGS_lstringlist & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_mListForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_genericExtensionMethodListMapDictionary ;
  friend class DownEnumerator_genericExtensionMethodListMapDictionary ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @genericExtensionMethodListMap struct
//--------------------------------------------------------------------------------------------------

class GGS_genericExtensionMethodListMap : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_genericExtensionMethodListMapDictionary mProperty_dictionary ;
  public: inline GGS_genericExtensionMethodListMapDictionary readProperty_dictionary (void) const {
    return mProperty_dictionary ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_genericExtensionMethodListMap (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDictionary (const GGS_genericExtensionMethodListMapDictionary & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_dictionary = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_genericExtensionMethodListMap (const GGS_genericExtensionMethodListMapDictionary & in_dictionary) ;

//--------------------------------- Copy constructor
  public: GGS_genericExtensionMethodListMap (const GGS_genericExtensionMethodListMap & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_genericExtensionMethodListMap & operator = (const GGS_genericExtensionMethodListMap & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_genericExtensionMethodListMap init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_genericExtensionMethodListMap extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMap ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@genericExtensionMethodListMap listForKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_lstringlist extensionGetter_listForKey (const class GGS_genericExtensionMethodListMap & inObject,
                                                  const class GGS_string & constinArgument0,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildExtensionListMaps (class cPtr_semanticDeclarationAST * inObject,
                                                 class GGS_genericExtensionMethodListMap & io_ioAbstractExtensionSetterListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioExtensionSetterListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioOverridingExtensionSetterListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionSetterListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioAbstractExtensionMethodListMapAST,
                                                 class GGS_genericExtensionMethodListMap & io_ioExtensionMethodListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioOverridingExtensionMethodListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionMethodListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioAbstractExtensionGetterListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioExtensionGetterListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioOverridingExtensionGetterListMap,
                                                 class GGS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionGetterListMap,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @descendantClassListMapDictionary_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_descendantClassListMapDictionary_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_key ;
  public: inline GGS_string readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GGS_unifiedTypeMapEntryList mProperty_typeList ;
  public: inline GGS_unifiedTypeMapEntryList readProperty_typeList (void) const {
    return mProperty_typeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_descendantClassListMapDictionary_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setTypeList (const GGS_unifiedTypeMapEntryList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_descendantClassListMapDictionary_2E_element (const GGS_string & in_key,
                                                           const GGS_unifiedTypeMapEntryList & in_typeList) ;

//--------------------------------- Copy constructor
  public: GGS_descendantClassListMapDictionary_2E_element (const GGS_descendantClassListMapDictionary_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_descendantClassListMapDictionary_2E_element & operator = (const GGS_descendantClassListMapDictionary_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_descendantClassListMapDictionary_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                               const class GGS_unifiedTypeMapEntryList & inOperand1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_descendantClassListMapDictionary_2E_element extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: descendantClassListMapDictionary.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_descendantClassListMapDictionary_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_descendantClassListMapDictionary_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_descendantClassListMapDictionary_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_descendantClassListMapDictionary_2E_element_3F_ (const GGS_descendantClassListMapDictionary_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_descendantClassListMapDictionary_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_descendantClassListMapDictionary_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_descendantClassListMapDictionary_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @descendantClassListMapDictionary dictionary enumerator
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericDictionary.h"

//--------------------------------------------------------------------------------------------------

class DownEnumerator_descendantClassListMapDictionary final {
  public: DownEnumerator_descendantClassListMapDictionary (const class GGS_descendantClassListMapDictionary & inOperand) ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_string current_key (UNUSED_LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntryList current_typeList (UNUSED_LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_descendantClassListMapDictionary_2E_element current (UNUSED_LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_descendantClassListMapDictionary_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_descendantClassListMapDictionary (const DownEnumerator_descendantClassListMapDictionary &) = delete ;
  private: DownEnumerator_descendantClassListMapDictionary & operator = (const DownEnumerator_descendantClassListMapDictionary &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_descendantClassListMapDictionary final {
  public: UpEnumerator_descendantClassListMapDictionary (const class GGS_descendantClassListMapDictionary & inOperand)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: class GGS_string current_key (UNUSED_LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntryList current_typeList (UNUSED_LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_descendantClassListMapDictionary_2E_element current (UNUSED_LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_descendantClassListMapDictionary_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_descendantClassListMapDictionary (const UpEnumerator_descendantClassListMapDictionary &) = delete ;
  private: UpEnumerator_descendantClassListMapDictionary & operator = (const UpEnumerator_descendantClassListMapDictionary &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @descendantClassListMapDictionary dict
//--------------------------------------------------------------------------------------------------

class GGS_descendantClassListMapDictionary final : public GenericDictionary <GGS_string, GGS_descendantClassListMapDictionary_2E_element> {

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_descendantClassListMapDictionary (void) = default ;

//--------------------------------- Build
  protected: static GGS_descendantClassListMapDictionary builtDictionary (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_descendantClassListMapDictionary init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_descendantClassListMapDictionary extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_unifiedTypeMapEntryList & inOperand1,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_descendantClassListMapDictionary_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: void setter_insert (class GGS_string constinArgument0,
                              class GGS_unifiedTypeMapEntryList constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeKey (class GGS_string constinArgument0,
                                 class GGS_unifiedTypeMapEntryList & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setTypeListForKey (class GGS_unifiedTypeMapEntryList constinArgument0,
                                         class GGS_string constinArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_string constinArgument0,
                                 class GGS_unifiedTypeMapEntryList & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntryList getter_typeListForKey (const class GGS_string & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_descendantClassListMapDictionary_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_descendantClassListMapDictionary ;
  friend class DownEnumerator_descendantClassListMapDictionary ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_descendantClassListMapDictionary ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @descendantClassListMap struct
//--------------------------------------------------------------------------------------------------

class GGS_descendantClassListMap : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_descendantClassListMapDictionary mProperty_dictionary ;
  public: inline GGS_descendantClassListMapDictionary readProperty_dictionary (void) const {
    return mProperty_dictionary ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_descendantClassListMap (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDictionary (const GGS_descendantClassListMapDictionary & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_dictionary = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_descendantClassListMap (const GGS_descendantClassListMapDictionary & in_dictionary) ;

//--------------------------------- Copy constructor
  public: GGS_descendantClassListMap (const GGS_descendantClassListMap & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_descendantClassListMap & operator = (const GGS_descendantClassListMap & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_descendantClassListMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_descendantClassListMap extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_descendantClassListMap ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@descendantClassListMap listForKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntryList extensionGetter_listForKey (const class GGS_descendantClassListMap & inObject,
                                                              const class GGS_string & constinArgument0,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMethodMapForGlobalCheckings map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionMethodMapForGlobalCheckings final {

  public: DownEnumerator_extensionMethodMapForGlobalCheckings (const class GGS_extensionMethodMapForGlobalCheckings & inMap) ;

  public: ~ DownEnumerator_extensionMethodMapForGlobalCheckings (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_extensionMethodMapForGlobalCheckings_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForGlobalCheckings_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionMethodMapForGlobalCheckings (const DownEnumerator_extensionMethodMapForGlobalCheckings &) = delete ;
  private: DownEnumerator_extensionMethodMapForGlobalCheckings & operator = (const DownEnumerator_extensionMethodMapForGlobalCheckings &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionMethodMapForGlobalCheckings final {
  public: UpEnumerator_extensionMethodMapForGlobalCheckings (const class GGS_extensionMethodMapForGlobalCheckings & inMap)  ;

  public: ~ UpEnumerator_extensionMethodMapForGlobalCheckings (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_extensionMethodMapForGlobalCheckings_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForGlobalCheckings_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionMethodMapForGlobalCheckings (const UpEnumerator_extensionMethodMapForGlobalCheckings &) = delete ;
  private: UpEnumerator_extensionMethodMapForGlobalCheckings & operator = (const UpEnumerator_extensionMethodMapForGlobalCheckings &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForGlobalCheckings : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionMethodMapForGlobalCheckings_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionMethodMapForGlobalCheckings (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionMethodMapForGlobalCheckings (void) ;

//--- Handle copy
  public: GGS_extensionMethodMapForGlobalCheckings (const GGS_extensionMethodMapForGlobalCheckings & inSource) ;
  public: GGS_extensionMethodMapForGlobalCheckings & operator = (const GGS_extensionMethodMapForGlobalCheckings & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_extensionMethodMapForGlobalCheckings_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForGlobalCheckings_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForGlobalCheckings_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodMapForGlobalCheckings init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMethodMapForGlobalCheckings extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMethodMapForGlobalCheckings class_func_mapWithMapToOverride (const class GGS_extensionMethodMapForGlobalCheckings & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionMethodMapForGlobalCheckings getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionMethodMapForGlobalCheckings ;
  friend class DownEnumerator_extensionMethodMapForGlobalCheckings ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMethodMapForGlobalCheckings_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForGlobalCheckings_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForGlobalCheckings_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionMethodMapForGlobalCheckings_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_extensionMethodMapForGlobalCheckings_2E_element (const GGS_extensionMethodMapForGlobalCheckings_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionMethodMapForGlobalCheckings_2E_element & operator = (const GGS_extensionMethodMapForGlobalCheckings_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodMapForGlobalCheckings_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMethodMapForGlobalCheckings_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionMethodMapForGlobalCheckings.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionMethodMapForGlobalCheckings_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ (const GGS_extensionMethodMapForGlobalCheckings_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionMethodMapForGlobalCheckings_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionSetterMapForGlobalCheckings map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionSetterMapForGlobalCheckings final {

  public: DownEnumerator_extensionSetterMapForGlobalCheckings (const class GGS_extensionSetterMapForGlobalCheckings & inMap) ;

  public: ~ DownEnumerator_extensionSetterMapForGlobalCheckings (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_extensionSetterMapForGlobalCheckings_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForGlobalCheckings_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionSetterMapForGlobalCheckings (const DownEnumerator_extensionSetterMapForGlobalCheckings &) = delete ;
  private: DownEnumerator_extensionSetterMapForGlobalCheckings & operator = (const DownEnumerator_extensionSetterMapForGlobalCheckings &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionSetterMapForGlobalCheckings final {
  public: UpEnumerator_extensionSetterMapForGlobalCheckings (const class GGS_extensionSetterMapForGlobalCheckings & inMap)  ;

  public: ~ UpEnumerator_extensionSetterMapForGlobalCheckings (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_extensionSetterMapForGlobalCheckings_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForGlobalCheckings_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionSetterMapForGlobalCheckings (const UpEnumerator_extensionSetterMapForGlobalCheckings &) = delete ;
  private: UpEnumerator_extensionSetterMapForGlobalCheckings & operator = (const UpEnumerator_extensionSetterMapForGlobalCheckings &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForGlobalCheckings : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionSetterMapForGlobalCheckings_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionSetterMapForGlobalCheckings (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionSetterMapForGlobalCheckings (void) ;

//--- Handle copy
  public: GGS_extensionSetterMapForGlobalCheckings (const GGS_extensionSetterMapForGlobalCheckings & inSource) ;
  public: GGS_extensionSetterMapForGlobalCheckings & operator = (const GGS_extensionSetterMapForGlobalCheckings & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_extensionSetterMapForGlobalCheckings_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForGlobalCheckings_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForGlobalCheckings_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterMapForGlobalCheckings init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionSetterMapForGlobalCheckings extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionSetterMapForGlobalCheckings class_func_mapWithMapToOverride (const class GGS_extensionSetterMapForGlobalCheckings & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionSetterMapForGlobalCheckings getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionSetterMapForGlobalCheckings ;
  friend class DownEnumerator_extensionSetterMapForGlobalCheckings ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionSetterMapForGlobalCheckings_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForGlobalCheckings_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForGlobalCheckings_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionSetterMapForGlobalCheckings_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_extensionSetterMapForGlobalCheckings_2E_element (const GGS_extensionSetterMapForGlobalCheckings_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionSetterMapForGlobalCheckings_2E_element & operator = (const GGS_extensionSetterMapForGlobalCheckings_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterMapForGlobalCheckings_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionSetterMapForGlobalCheckings_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionSetterMapForGlobalCheckings.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionSetterMapForGlobalCheckings_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ (const GGS_extensionSetterMapForGlobalCheckings_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionSetterMapForGlobalCheckings_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionGetterMapForGlobalCheckings map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionGetterMapForGlobalCheckings final {

  public: DownEnumerator_extensionGetterMapForGlobalCheckings (const class GGS_extensionGetterMapForGlobalCheckings & inMap) ;

  public: ~ DownEnumerator_extensionGetterMapForGlobalCheckings (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_extensionGetterMapForGlobalCheckings_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForGlobalCheckings_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionGetterMapForGlobalCheckings (const DownEnumerator_extensionGetterMapForGlobalCheckings &) = delete ;
  private: DownEnumerator_extensionGetterMapForGlobalCheckings & operator = (const DownEnumerator_extensionGetterMapForGlobalCheckings &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionGetterMapForGlobalCheckings final {
  public: UpEnumerator_extensionGetterMapForGlobalCheckings (const class GGS_extensionGetterMapForGlobalCheckings & inMap)  ;

  public: ~ UpEnumerator_extensionGetterMapForGlobalCheckings (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_extensionGetterMapForGlobalCheckings_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForGlobalCheckings_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionGetterMapForGlobalCheckings (const UpEnumerator_extensionGetterMapForGlobalCheckings &) = delete ;
  private: UpEnumerator_extensionGetterMapForGlobalCheckings & operator = (const UpEnumerator_extensionGetterMapForGlobalCheckings &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForGlobalCheckings : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionGetterMapForGlobalCheckings_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionGetterMapForGlobalCheckings (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionGetterMapForGlobalCheckings (void) ;

//--- Handle copy
  public: GGS_extensionGetterMapForGlobalCheckings (const GGS_extensionGetterMapForGlobalCheckings & inSource) ;
  public: GGS_extensionGetterMapForGlobalCheckings & operator = (const GGS_extensionGetterMapForGlobalCheckings & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_extensionGetterMapForGlobalCheckings_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForGlobalCheckings_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForGlobalCheckings_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterMapForGlobalCheckings init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionGetterMapForGlobalCheckings extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionGetterMapForGlobalCheckings class_func_mapWithMapToOverride (const class GGS_extensionGetterMapForGlobalCheckings & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionGetterMapForGlobalCheckings getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionGetterMapForGlobalCheckings ;
  friend class DownEnumerator_extensionGetterMapForGlobalCheckings ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionGetterMapForGlobalCheckings_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForGlobalCheckings_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForGlobalCheckings_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionGetterMapForGlobalCheckings_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_extensionGetterMapForGlobalCheckings_2E_element (const GGS_extensionGetterMapForGlobalCheckings_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionGetterMapForGlobalCheckings_2E_element & operator = (const GGS_extensionGetterMapForGlobalCheckings_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterMapForGlobalCheckings_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionGetterMapForGlobalCheckings_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionGetterMapForGlobalCheckings.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionGetterMapForGlobalCheckings_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ (const GGS_extensionGetterMapForGlobalCheckings_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionGetterMapForGlobalCheckings_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyIndexMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_propertyIndexMap final {

  public: DownEnumerator_propertyIndexMap (const class GGS_propertyIndexMap & inMap) ;

  public: ~ DownEnumerator_propertyIndexMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry current_mPropertyTypeIndex (LOCATION_ARGS) const ;

  public: class GGS_propertyIndexMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_propertyIndexMap (const DownEnumerator_propertyIndexMap &) = delete ;
  private: DownEnumerator_propertyIndexMap & operator = (const DownEnumerator_propertyIndexMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_propertyIndexMap final {
  public: UpEnumerator_propertyIndexMap (const class GGS_propertyIndexMap & inMap)  ;

  public: ~ UpEnumerator_propertyIndexMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mPropertyTypeIndex (LOCATION_ARGS) const ;
  public: class GGS_propertyIndexMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_propertyIndexMap (const UpEnumerator_propertyIndexMap &) = delete ;
  private: UpEnumerator_propertyIndexMap & operator = (const UpEnumerator_propertyIndexMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_propertyIndexMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_propertyIndexMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_propertyIndexMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_propertyIndexMap (void) ;

//--- Handle copy
  public: GGS_propertyIndexMap (const GGS_propertyIndexMap & inSource) ;
  public: GGS_propertyIndexMap & operator = (const GGS_propertyIndexMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_propertyIndexMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyIndexMap init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyIndexMap extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyIndexMap class_func_mapWithMapToOverride (const class GGS_propertyIndexMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_unifiedTypeMapEntry constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMPropertyTypeIndexForKey (class GGS_unifiedTypeMapEntry constinArgument0,
                                                   class GGS_string constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_unifiedTypeMapEntry & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry getter_mPropertyTypeIndexForKey (const class GGS_string & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyIndexMap getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_propertyIndexMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_propertyIndexMap ;
  friend class DownEnumerator_propertyIndexMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyIndexMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyIndexMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyIndexMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mPropertyTypeIndex ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mPropertyTypeIndex (void) const {
    return mProperty_mPropertyTypeIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyIndexMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMPropertyTypeIndex (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyTypeIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyIndexMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_unifiedTypeMapEntry & in_mPropertyTypeIndex) ;

//--------------------------------- Copy constructor
  public: GGS_propertyIndexMap_2E_element (const GGS_propertyIndexMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyIndexMap_2E_element & operator = (const GGS_propertyIndexMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyIndexMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_unifiedTypeMapEntry & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyIndexMap_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyIndexMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyIndexMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyIndexMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyIndexMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyIndexMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyIndexMap_2E_element_3F_ (const GGS_propertyIndexMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyIndexMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyIndexMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyIndexMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyIndexMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonterminalLabelMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_nonterminalLabelMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_formalParameterListForGeneration mProperty_mSignatureForGeneration ;
  public: inline GGS_formalParameterListForGeneration readProperty_mSignatureForGeneration (void) const {
    return mProperty_mSignatureForGeneration ;
  }

  public: GGS_formalParameterSignature mProperty_mSignature ;
  public: inline GGS_formalParameterSignature readProperty_mSignature (void) const {
    return mProperty_mSignature ;
  }

  public: GGS_location mProperty_mEndOfArgumentLocation ;
  public: inline GGS_location readProperty_mEndOfArgumentLocation (void) const {
    return mProperty_mEndOfArgumentLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_nonterminalLabelMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSignatureForGeneration (const GGS_formalParameterListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignatureForGeneration = inValue ;
  }

  public: inline void setter_setMSignature (const GGS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignature = inValue ;
  }

  public: inline void setter_setMEndOfArgumentLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfArgumentLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_nonterminalLabelMap_2E_element (const GGS_lstring & in_lkey,
                                              const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                              const GGS_formalParameterSignature & in_mSignature,
                                              const GGS_location & in_mEndOfArgumentLocation) ;

//--------------------------------- Copy constructor
  public: GGS_nonterminalLabelMap_2E_element (const GGS_nonterminalLabelMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_nonterminalLabelMap_2E_element & operator = (const GGS_nonterminalLabelMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonterminalLabelMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_formalParameterListForGeneration & inOperand1,
                                                                          const class GGS_formalParameterSignature & inOperand2,
                                                                          const class GGS_location & inOperand3,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonterminalLabelMap_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalLabelMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: nonterminalLabelMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_nonterminalLabelMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_nonterminalLabelMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_nonterminalLabelMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_nonterminalLabelMap_2E_element_3F_ (const GGS_nonterminalLabelMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_nonterminalLabelMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_nonterminalLabelMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonterminalLabelMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalLabelMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ruleLabelImplementationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_ruleLabelImplementationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mLabelName ;
  public: inline GGS_lstring readProperty_mLabelName (void) const {
    return mProperty_mLabelName ;
  }

  public: GGS_formalParameterListForGeneration mProperty_mSignatureForGeneration ;
  public: inline GGS_formalParameterListForGeneration readProperty_mSignatureForGeneration (void) const {
    return mProperty_mSignatureForGeneration ;
  }

  public: GGS_formalParameterSignature mProperty_mSignature ;
  public: inline GGS_formalParameterSignature readProperty_mSignature (void) const {
    return mProperty_mSignature ;
  }

  public: GGS_location mProperty_mEndOfArgumentLocation ;
  public: inline GGS_location readProperty_mEndOfArgumentLocation (void) const {
    return mProperty_mEndOfArgumentLocation ;
  }

  public: GGS_semanticInstructionListForGeneration mProperty_mInstructionListForGeneration ;
  public: inline GGS_semanticInstructionListForGeneration readProperty_mInstructionListForGeneration (void) const {
    return mProperty_mInstructionListForGeneration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ruleLabelImplementationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLabelName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelName = inValue ;
  }

  public: inline void setter_setMSignatureForGeneration (const GGS_formalParameterListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignatureForGeneration = inValue ;
  }

  public: inline void setter_setMSignature (const GGS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignature = inValue ;
  }

  public: inline void setter_setMEndOfArgumentLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfArgumentLocation = inValue ;
  }

  public: inline void setter_setMInstructionListForGeneration (const GGS_semanticInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionListForGeneration = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ruleLabelImplementationList_2E_element (const GGS_lstring & in_mLabelName,
                                                      const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                      const GGS_formalParameterSignature & in_mSignature,
                                                      const GGS_location & in_mEndOfArgumentLocation,
                                                      const GGS_semanticInstructionListForGeneration & in_mInstructionListForGeneration) ;

//--------------------------------- Copy constructor
  public: GGS_ruleLabelImplementationList_2E_element (const GGS_ruleLabelImplementationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ruleLabelImplementationList_2E_element & operator = (const GGS_ruleLabelImplementationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ruleLabelImplementationList_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_formalParameterListForGeneration & inOperand1,
                                                                                      const class GGS_formalParameterSignature & inOperand2,
                                                                                      const class GGS_location & inOperand3,
                                                                                      const class GGS_semanticInstructionListForGeneration & inOperand4,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ruleLabelImplementationList_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ruleLabelImplementationList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@syntaxInstructionAST analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSyntaxInstruction (class cPtr_syntaxInstructionAST * inObject,
                                                   const class GGS_lstring constin_inUsefulnessCallerEntityName,
                                                   class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                   const class GGS_analysisContext constin_inAnalysisContext,
                                                   class GGS_unifiedTypeMap & io_ioTypeMap,
                                                   const class GGS_bool constin_inHasTranslateFeature,
                                                   const class GGS_terminalMap constin_inTerminalMap,
                                                   const class GGS_string constin_inLexiqueName,
                                                   const class GGS_nonterminalMap constin_inNonterminalMap,
                                                   const class GGS_string constin_inComponentName,
                                                   const class GGS_stringset constin_inIndexNameSet,
                                                   class GGS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                   class GGS_localVarManager & io_ioVariableMap,
                                                   class GGS_uint & io_ioSelectMethodCount,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractInputParameter analyzeInputParameter'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeInputParameter (class cPtr_abstractInputParameter * inObject,
                                                const class GGS_analysisContext constin_inAnalysisContext,
                                                class GGS_unifiedTypeMap & io_ioTypeMap,
                                                const class GGS_lexicalTypeEnum constin_inRequiredLexicalType,
                                                const class GGS_string constin_inLexicalAttributeName,
                                                class GGS_terminalCheckAssignementList & io_ioTerminalCheckAssignementList,
                                                class GGS_localVarManager & io_ioVariableMap,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeSDT'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSDT (class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                     const class GGS_analysisContext constin_inAnalysisContext,
                                     class GGS_unifiedTypeMap & io_ioTypeMap,
                                     const class GGS_bool constin_inHasTranslateFeature,
                                     class GGS_localVarManager & io_ioVariableMap,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                       const class GGS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                       const class GGS_string constin_inAccessMethodName,
                                       class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                       class GGS_string & io_ioGeneratedCode,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @arrayTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_arrayTypeDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_arrayTypeDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_arrayTypeDeclarationAST (const class cPtr_arrayTypeDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_arrayTypeName (void) const ;

  public: class GGS_lstring readProperty_elementTypeName (void) const ;

  public: class GGS_bool readProperty_isUsefull (void) const ;

  public: class GGS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_arrayTypeDeclarationAST init_21_isPredefined_21__21__21_isUsefull_21_equatable (const class GGS_bool & inOperand0,
                                                                                                     const class GGS_lstring & inOperand1,
                                                                                                     const class GGS_lstring & inOperand2,
                                                                                                     const class GGS_bool & inOperand3,
                                                                                                     const class GGS_bool & inOperand4,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayTypeDeclarationAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_arrayTypeDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayTypeDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @arrayTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_arrayTypeDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void arrayTypeDeclarationAST_init_21_isPredefined_21__21__21_isUsefull_21_equatable (const class GGS_bool & inOperand0,
                                                                                               const class GGS_lstring & inOperand1,
                                                                                               const class GGS_lstring & inOperand2,
                                                                                               const class GGS_bool & inOperand3,
                                                                                               const class GGS_bool & inOperand4,
                                                                                               Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: GGS_lstring mProperty_arrayTypeName ;
  public: GGS_lstring mProperty_elementTypeName ;
  public: GGS_bool mProperty_isUsefull ;
  public: GGS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_arrayTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_arrayTypeDeclarationAST (const GGS_bool & in_isPredefined,
                                        const GGS_lstring & in_arrayTypeName,
                                        const GGS_lstring & in_elementTypeName,
                                        const GGS_bool & in_isUsefull,
                                        const GGS_bool & in_equatable,
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
// Phase 1: @arrayTypeDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_arrayTypeDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_arrayTypeDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_arrayTypeDeclarationAST_2E_weak (const class GGS_arrayTypeDeclarationAST & inSource) ;

  public: GGS_arrayTypeDeclarationAST_2E_weak & operator = (const class GGS_arrayTypeDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_arrayTypeDeclarationAST_2E_weak init_nil (void) {
    GGS_arrayTypeDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_arrayTypeDeclarationAST bang_arrayTypeDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_arrayTypeDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_arrayTypeDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_arrayTypeDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_arrayTypeDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayTypeDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @arrayTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_arrayTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_arrayTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_arrayTypeForGeneration (const class cPtr_arrayTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_elementType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_arrayTypeForGeneration init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                          const class GGS_unifiedTypeMapEntry & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arrayTypeForGeneration extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_arrayTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @arrayTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_arrayTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void arrayTypeForGeneration_init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                    const class GGS_unifiedTypeMapEntry & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_elementType ;


//--- Default constructor
  public: cPtr_arrayTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_arrayTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                       const GGS_unifiedTypeMapEntry & in_elementType,
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
// Phase 1: @arrayTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_arrayTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_arrayTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_arrayTypeForGeneration_2E_weak (const class GGS_arrayTypeForGeneration & inSource) ;

  public: GGS_arrayTypeForGeneration_2E_weak & operator = (const class GGS_arrayTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_arrayTypeForGeneration_2E_weak init_nil (void) {
    GGS_arrayTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_arrayTypeForGeneration bang_arrayTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_arrayTypeForGeneration unwrappedValue (void) const ;

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
  public: static GGS_arrayTypeForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_arrayTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_arrayTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [formalInputParameterListAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_formalInputParameterListAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_formalInputParameterListAST_5D_ (const class GGS__5B_formalInputParameterListAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_formalInputParameterListAST_5D_ (const DownEnumerator__5B_formalInputParameterListAST_5D_ &) = delete ;
  private: DownEnumerator__5B_formalInputParameterListAST_5D_ & operator = (const DownEnumerator__5B_formalInputParameterListAST_5D_ &) = delete ;

//--- 
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//--- 
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

//--- Current element access
  public: class GGS_formalInputParameterListAST current (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_formalInputParameterListAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_formalInputParameterListAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_formalInputParameterListAST_5D_ (const class GGS__5B_formalInputParameterListAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_formalInputParameterListAST_5D_ (const UpEnumerator__5B_formalInputParameterListAST_5D_ &) = delete ;
  private: UpEnumerator__5B_formalInputParameterListAST_5D_ & operator = (const UpEnumerator__5B_formalInputParameterListAST_5D_ &) = delete ;

//--- 
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }
  
//--- 
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

//--- Current element access
  public: class GGS_formalInputParameterListAST current (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_formalInputParameterListAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_formalInputParameterListAST_5D_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_formalInputParameterListAST> mSharedArray ;

//--------------------------------- Default constructor
  public: GGS__5B_formalInputParameterListAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_formalInputParameterListAST_5D_ (const GGS__5B_formalInputParameterListAST_5D_ & inSource) ;
  public: GGS__5B_formalInputParameterListAST_5D_ & operator = (const GGS__5B_formalInputParameterListAST_5D_ & inSource) ;

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_formalInputParameterListAST_5D_ ;
  friend class DownEnumerator__5B_formalInputParameterListAST_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_formalInputParameterListAST_5D_ init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__5B_formalInputParameterListAST_5D_ extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_formalInputParameterListAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_formalInputParameterListAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_formalInputParameterListAST_5D_ add_operation (const GGS__5B_formalInputParameterListAST_5D_ & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_formalInputParameterListAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_formalInputParameterListAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_formalInputParameterListAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_formalInputParameterListAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_formalInputParameterListAST & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_formalInputParameterListAST & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_formalInputParameterListAST & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_formalInputParameterListAST readSubscript__3F_ (const class GGS_uint & in0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_formalInputParameterListAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @predefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_predefinedTypeAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_predefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_predefinedTypeAST (const class cPtr_predefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mPredefinedTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_predefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                 const class GGS_string & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_predefinedTypeAST extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_predefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_predefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @predefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_predefinedTypeAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void predefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                           const class GGS_string & inOperand1,
                                                           Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter initializers
  public: virtual class GGS__5B_formalInputParameterListAST_5D_ getter_initializers (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter supportsCollectionValue
  public: virtual class GGS_bool getter_supportsCollectionValue (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter typeKind
  public: virtual class GGS_typeKindEnum getter_typeKind (Compiler * COMMA_LOCATION_ARGS) const ;

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

//--- Extension method getAddAssignArgumentList
  public: virtual void method_getAddAssignArgumentList (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_functionSignature & arg_outAddAssignArgumentList,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method getClassMethodMap
  public: virtual void method_getClassMethodMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classMethodMap & arg_outClassMethodMap,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method getEnumerationList
  public: virtual void method_getEnumerationList (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_enumerationDescriptorList & arg_outEnumerationList,
           class GGS_string & arg_outEnumeratedType,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method getInstanceMethodMap
  public: virtual void method_getInstanceMethodMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_instanceMethodMap & arg_outInstanceMethodMap,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method getSetterMap
  public: virtual void method_getSetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_setterMap & arg_outSetterMap,
           Compiler * COMMA_LOCATION_ARGS) ;

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
  public: GGS_string mProperty_mPredefinedTypeName ;


//--- Default constructor
  public: cPtr_predefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_predefinedTypeAST (const GGS_bool & in_isPredefined,
                                  const GGS_string & in_mPredefinedTypeName,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @predefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_predefinedTypeAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_predefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_predefinedTypeAST_2E_weak (const class GGS_predefinedTypeAST & inSource) ;

  public: GGS_predefinedTypeAST_2E_weak & operator = (const class GGS_predefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_predefinedTypeAST_2E_weak init_nil (void) {
    GGS_predefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_predefinedTypeAST bang_predefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_predefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_predefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_predefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_predefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @timerPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_timerPredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_timerPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_timerPredefinedTypeAST (const class cPtr_timerPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_timerPredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                      const class GGS_string & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_timerPredefinedTypeAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_timerPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_timerPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @timerPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_timerPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void timerPredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                const class GGS_string & inOperand1,
                                                                Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initializers
  public: virtual class GGS__5B_formalInputParameterListAST_5D_ getter_initializers (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getSetterMap
  public: virtual void method_getSetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_setterMap & arg_outSetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_timerPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_timerPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                       const GGS_string & in_mPredefinedTypeName,
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
// Phase 1: @timerPredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_timerPredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_timerPredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_timerPredefinedTypeAST_2E_weak (const class GGS_timerPredefinedTypeAST & inSource) ;

  public: GGS_timerPredefinedTypeAST_2E_weak & operator = (const class GGS_timerPredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_timerPredefinedTypeAST_2E_weak init_nil (void) {
    GGS_timerPredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_timerPredefinedTypeAST bang_timerPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_timerPredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_timerPredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_timerPredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_timerPredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_timerPredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typePredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_typePredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_typePredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_typePredefinedTypeAST (const class cPtr_typePredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typePredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typePredefinedTypeAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typePredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @typePredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_typePredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void typePredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_typePredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_typePredefinedTypeAST (const GGS_bool & in_isPredefined,
                                      const GGS_string & in_mPredefinedTypeName,
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
// Phase 1: @typePredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_typePredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_typePredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_typePredefinedTypeAST_2E_weak (const class GGS_typePredefinedTypeAST & inSource) ;

  public: GGS_typePredefinedTypeAST_2E_weak & operator = (const class GGS_typePredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_typePredefinedTypeAST_2E_weak init_nil (void) {
    GGS_typePredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_typePredefinedTypeAST bang_typePredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_typePredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_typePredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typePredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typePredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum structComparison
//--------------------------------------------------------------------------------------------------

class GGS_structComparison : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_structComparison (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_equatable,
    enum_comparable
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structComparison extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structComparison class_func_comparable (LOCATION_ARGS) ;

  public: static class GGS_structComparison class_func_equatable (LOCATION_ARGS) ;

  public: static class GGS_structComparison class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isComparable (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isEquatable (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structComparison ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyInCollectionListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_propertyInCollectionListAST final {
  public: DownEnumerator_propertyInCollectionListAST (const class GGS_propertyInCollectionListAST & inList) ;

  public: ~ DownEnumerator_propertyInCollectionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_propertyMutability current_mutability (LOCATION_ARGS) const ;
  public: class GGS_lstring current_typeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_name (LOCATION_ARGS) const ;
  public: class GGS_AccessControlAST current_accessControl (LOCATION_ARGS) const ;
  public: class GGS_bool current_hasSelector (LOCATION_ARGS) const ;
  public: class GGS_propertyInCollectionInitializationAST current_initialization (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyInCollectionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_propertyInCollectionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_propertyInCollectionListAST (const DownEnumerator_propertyInCollectionListAST &) = delete ;
  private: DownEnumerator_propertyInCollectionListAST & operator = (const DownEnumerator_propertyInCollectionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_propertyInCollectionListAST final {
  public: UpEnumerator_propertyInCollectionListAST (const class GGS_propertyInCollectionListAST & inList)  ;

  public: ~ UpEnumerator_propertyInCollectionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_propertyMutability current_mutability (LOCATION_ARGS) const ;
  public: class GGS_lstring current_typeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_name (LOCATION_ARGS) const ;
  public: class GGS_AccessControlAST current_accessControl (LOCATION_ARGS) const ;
  public: class GGS_bool current_hasSelector (LOCATION_ARGS) const ;
  public: class GGS_propertyInCollectionInitializationAST current_initialization (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyInCollectionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_propertyInCollectionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_propertyInCollectionListAST (const UpEnumerator_propertyInCollectionListAST &) = delete ;
  private: UpEnumerator_propertyInCollectionListAST & operator = (const UpEnumerator_propertyInCollectionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @propertyInCollectionListAST list
//--------------------------------------------------------------------------------------------------

class GGS_propertyInCollectionListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_propertyInCollectionListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_propertyInCollectionListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_propertyInCollectionListAST (void) = default ;

//--- Copy
  public: GGS_propertyInCollectionListAST (const GGS_propertyInCollectionListAST &) = default ;
  public: GGS_propertyInCollectionListAST & operator = (const GGS_propertyInCollectionListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_propertyInCollectionListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_propertyInCollectionListAST subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_propertyInCollectionListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_propertyMutability & in_mutability,
                                                 const class GGS_lstring & in_typeName,
                                                 const class GGS_lstring & in_name,
                                                 const class GGS_AccessControlAST & in_accessControl,
                                                 const class GGS_bool & in_hasSelector,
                                                 const class GGS_propertyInCollectionInitializationAST & in_initialization
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyInCollectionListAST init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyInCollectionListAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyInCollectionListAST class_func_listWithValue (const class GGS_propertyMutability & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
                                                                                 const class GGS_AccessControlAST & inOperand3,
                                                                                 const class GGS_bool & inOperand4,
                                                                                 const class GGS_propertyInCollectionInitializationAST & inOperand5
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_propertyInCollectionListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_propertyMutability & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS_lstring & inOperand2,
                                   const class GGS_AccessControlAST & inOperand3,
                                   const class GGS_bool & inOperand4,
                                   const class GGS_propertyInCollectionInitializationAST & inOperand5
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_propertyInCollectionListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_propertyInCollectionListAST add_operation (const GGS_propertyInCollectionListAST & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_propertyMutability constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS_lstring constinArgument2,
                              class GGS_AccessControlAST constinArgument3,
                              class GGS_bool constinArgument4,
                              class GGS_propertyInCollectionInitializationAST constinArgument5,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_propertyMutability constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_lstring constinArgument2,
                                     class GGS_AccessControlAST constinArgument3,
                                     class GGS_bool constinArgument4,
                                     class GGS_propertyInCollectionInitializationAST constinArgument5,
                                     class GGS_uint constinArgument6,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_propertyMutability & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS_lstring & outArgument2,
                                class GGS_AccessControlAST & outArgument3,
                                class GGS_bool & outArgument4,
                                class GGS_propertyInCollectionInitializationAST & outArgument5,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_propertyMutability & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS_lstring & outArgument2,
                               class GGS_AccessControlAST & outArgument3,
                               class GGS_bool & outArgument4,
                               class GGS_propertyInCollectionInitializationAST & outArgument5,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_propertyMutability & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_lstring & outArgument2,
                                     class GGS_AccessControlAST & outArgument3,
                                     class GGS_bool & outArgument4,
                                     class GGS_propertyInCollectionInitializationAST & outArgument5,
                                     class GGS_uint constinArgument6,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setAccessControlAtIndex (class GGS_AccessControlAST constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setHasSelectorAtIndex (class GGS_bool constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setInitializationAtIndex (class GGS_propertyInCollectionInitializationAST constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMutabilityAtIndex (class GGS_propertyMutability constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setNameAtIndex (class GGS_lstring constinArgument0,
                                      class GGS_uint constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setTypeNameAtIndex (class GGS_lstring constinArgument0,
                                          class GGS_uint constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_propertyMutability & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS_lstring & outArgument2,
                             class GGS_AccessControlAST & outArgument3,
                             class GGS_bool & outArgument4,
                             class GGS_propertyInCollectionInitializationAST & outArgument5,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_propertyMutability & outArgument0,
                            class GGS_lstring & outArgument1,
                            class GGS_lstring & outArgument2,
                            class GGS_AccessControlAST & outArgument3,
                            class GGS_bool & outArgument4,
                            class GGS_propertyInCollectionInitializationAST & outArgument5,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_AccessControlAST getter_accessControlAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyInCollectionInitializationAST getter_initializationAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyMutability getter_mutabilityAtIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_nameAtIndex (const class GGS_uint & constinOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_propertyInCollectionListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyInCollectionListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyInCollectionListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_typeNameAtIndex (const class GGS_uint & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_propertyInCollectionListAST ;
  friend class DownEnumerator_propertyInCollectionListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyInCollectionListAST ;

//--------------------------------------------------------------------------------------------------
//   enum propertyMutability
//--------------------------------------------------------------------------------------------------

class GGS_propertyMutability : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_propertyMutability (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_constantProperty,
    enum_mutableProperty,
    enum_weakProperty
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyMutability extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyMutability class_func_constantProperty (LOCATION_ARGS) ;

  public: static class GGS_propertyMutability class_func_mutableProperty (LOCATION_ARGS) ;

  public: static class GGS_propertyMutability class_func_weakProperty (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isConstantProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMutableProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isWeakProperty (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMutability ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyInCollectionListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyInCollectionListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_propertyMutability mProperty_mutability ;
  public: inline GGS_propertyMutability readProperty_mutability (void) const {
    return mProperty_mutability ;
  }

  public: GGS_lstring mProperty_typeName ;
  public: inline GGS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

  public: GGS_AccessControlAST mProperty_accessControl ;
  public: inline GGS_AccessControlAST readProperty_accessControl (void) const {
    return mProperty_accessControl ;
  }

  public: GGS_bool mProperty_hasSelector ;
  public: inline GGS_bool readProperty_hasSelector (void) const {
    return mProperty_hasSelector ;
  }

  public: GGS_propertyInCollectionInitializationAST mProperty_initialization ;
  public: inline GGS_propertyInCollectionInitializationAST readProperty_initialization (void) const {
    return mProperty_initialization ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyInCollectionListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMutability (const GGS_propertyMutability & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mutability = inValue ;
  }

  public: inline void setter_setTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

  public: inline void setter_setAccessControl (const GGS_AccessControlAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_accessControl = inValue ;
  }

  public: inline void setter_setHasSelector (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_hasSelector = inValue ;
  }

  public: inline void setter_setInitialization (const GGS_propertyInCollectionInitializationAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_initialization = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyInCollectionListAST_2E_element (const GGS_propertyMutability & in_mutability,
                                                      const GGS_lstring & in_typeName,
                                                      const GGS_lstring & in_name,
                                                      const GGS_AccessControlAST & in_accessControl,
                                                      const GGS_bool & in_hasSelector,
                                                      const GGS_propertyInCollectionInitializationAST & in_initialization) ;

//--------------------------------- Copy constructor
  public: GGS_propertyInCollectionListAST_2E_element (const GGS_propertyInCollectionListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyInCollectionListAST_2E_element & operator = (const GGS_propertyInCollectionListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyInCollectionListAST_2E_element init_21_mutability_21__21__21__21_hasSelector_21_initialization (const class GGS_propertyMutability & inOperand0,
                                                                                                                             const class GGS_lstring & inOperand1,
                                                                                                                             const class GGS_lstring & inOperand2,
                                                                                                                             const class GGS_AccessControlAST & inOperand3,
                                                                                                                             const class GGS_bool & inOperand4,
                                                                                                                             const class GGS_propertyInCollectionInitializationAST & inOperand5,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyInCollectionListAST_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyInCollectionListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @structDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_structDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_structDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_structDeclarationAST (const class cPtr_structDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_structTypeName (void) const ;

  public: class GGS_propertyInCollectionListAST readProperty_mStructurePropertyListAST (void) const ;

  public: class GGS_string readProperty_enumeratedElementTypeName (void) const ;

  public: class GGS_structComparison readProperty_comparison (void) const ;

  public: class GGS_bool readProperty_isUsefullStruct (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_structDeclarationAST init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (const class GGS_bool & inOperand0,
                                                                                                                                      const class GGS_lstring & inOperand1,
                                                                                                                                      const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                                                                      const class GGS_string & inOperand3,
                                                                                                                                      const class GGS_structComparison & inOperand4,
                                                                                                                                      const class GGS_bool & inOperand5,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structDeclarationAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @structDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_structDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void structDeclarationAST_init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (const class GGS_bool & inOperand0,
                                                                                                                                const class GGS_lstring & inOperand1,
                                                                                                                                const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                                                                const class GGS_string & inOperand3,
                                                                                                                                const class GGS_structComparison & inOperand4,
                                                                                                                                const class GGS_bool & inOperand5,
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
  public: GGS_lstring mProperty_structTypeName ;
  public: GGS_propertyInCollectionListAST mProperty_mStructurePropertyListAST ;
  public: GGS_string mProperty_enumeratedElementTypeName ;
  public: GGS_structComparison mProperty_comparison ;
  public: GGS_bool mProperty_isUsefullStruct ;


//--- Default constructor
  public: cPtr_structDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_structDeclarationAST (const GGS_bool & in_isPredefined,
                                     const GGS_lstring & in_structTypeName,
                                     const GGS_propertyInCollectionListAST & in_mStructurePropertyListAST,
                                     const GGS_string & in_enumeratedElementTypeName,
                                     const GGS_structComparison & in_comparison,
                                     const GGS_bool & in_isUsefullStruct,
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
// Phase 1: @structDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_structDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_structDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_structDeclarationAST_2E_weak (const class GGS_structDeclarationAST & inSource) ;

  public: GGS_structDeclarationAST_2E_weak & operator = (const class GGS_structDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_structDeclarationAST_2E_weak init_nil (void) {
    GGS_structDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_structDeclarationAST bang_structDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_structDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_structDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @structTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_structTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_structTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_structTypeForGeneration (const class cPtr_structTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_typedPropertyList readProperty_mTypedPropertyList (void) const ;

  public: class GGS_typedPropertyList readProperty_mConstructorArgumentList (void) const ;

  public: class GGS_string readProperty_mConstructorInitializationCode (void) const ;

  public: class GGS_bool readProperty_mConstructorNeedsCompilerVar (void) const ;

  public: class GGS_bool readProperty_synthetizeAnInitializer (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_structTypeForGeneration init_21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GGS_typedPropertyList & inOperand1,
                                                                           const class GGS_typedPropertyList & inOperand2,
                                                                           const class GGS_string & inOperand3,
                                                                           const class GGS_bool & inOperand4,
                                                                           const class GGS_bool & inOperand5,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structTypeForGeneration extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @structTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_structTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void structTypeForGeneration_init_21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                     const class GGS_typedPropertyList & inOperand1,
                                                                     const class GGS_typedPropertyList & inOperand2,
                                                                     const class GGS_string & inOperand3,
                                                                     const class GGS_bool & inOperand4,
                                                                     const class GGS_bool & inOperand5,
                                                                     Compiler * inCompiler) ;


//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_typedPropertyList mProperty_mTypedPropertyList ;
  public: GGS_typedPropertyList mProperty_mConstructorArgumentList ;
  public: GGS_string mProperty_mConstructorInitializationCode ;
  public: GGS_bool mProperty_mConstructorNeedsCompilerVar ;
  public: GGS_bool mProperty_synthetizeAnInitializer ;


//--- Default constructor
  public: cPtr_structTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_structTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                        const GGS_typedPropertyList & in_mTypedPropertyList,
                                        const GGS_typedPropertyList & in_mConstructorArgumentList,
                                        const GGS_string & in_mConstructorInitializationCode,
                                        const GGS_bool & in_mConstructorNeedsCompilerVar,
                                        const GGS_bool & in_synthetizeAnInitializer,
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
// Phase 1: @structTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_structTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_structTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_structTypeForGeneration_2E_weak (const class GGS_structTypeForGeneration & inSource) ;

  public: GGS_structTypeForGeneration_2E_weak & operator = (const class GGS_structTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_structTypeForGeneration_2E_weak init_nil (void) {
    GGS_structTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_structTypeForGeneration bang_structTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_structTypeForGeneration unwrappedValue (void) const ;

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
  public: static GGS_structTypeForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @stringPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_stringPredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_stringPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_stringPredefinedTypeAST (const class cPtr_stringPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_stringPredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                       const class GGS_string & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_stringPredefinedTypeAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_stringPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_stringPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @stringPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_stringPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void stringPredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                 const class GGS_string & inOperand1,
                                                                 Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getClassMethodMap
  public: virtual void method_getClassMethodMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classMethodMap & arg_outClassMethodMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getInstanceMethodMap
  public: virtual void method_getInstanceMethodMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_instanceMethodMap & arg_outInstanceMethodMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getSetterMap
  public: virtual void method_getSetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_setterMap & arg_outSetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_stringPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_stringPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                        const GGS_string & in_mPredefinedTypeName,
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
// Phase 1: @stringPredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_stringPredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_stringPredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_stringPredefinedTypeAST_2E_weak (const class GGS_stringPredefinedTypeAST & inSource) ;

  public: GGS_stringPredefinedTypeAST_2E_weak & operator = (const class GGS_stringPredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_stringPredefinedTypeAST_2E_weak init_nil (void) {
    GGS_stringPredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_stringPredefinedTypeAST bang_stringPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_stringPredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_stringPredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_stringPredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_stringPredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_stringPredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bigintPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_bigintPredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_bigintPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bigintPredefinedTypeAST (const class cPtr_bigintPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bigintPredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                       const class GGS_string & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bigintPredefinedTypeAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bigintPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @bigintPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_bigintPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bigintPredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                 const class GGS_string & inOperand1,
                                                                 Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getInstanceMethodMap
  public: virtual void method_getInstanceMethodMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_instanceMethodMap & arg_outInstanceMethodMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getSetterMap
  public: virtual void method_getSetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_setterMap & arg_outSetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_bigintPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_bigintPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                        const GGS_string & in_mPredefinedTypeName,
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
// Phase 1: @bigintPredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_bigintPredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_bigintPredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bigintPredefinedTypeAST_2E_weak (const class GGS_bigintPredefinedTypeAST & inSource) ;

  public: GGS_bigintPredefinedTypeAST_2E_weak & operator = (const class GGS_bigintPredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bigintPredefinedTypeAST_2E_weak init_nil (void) {
    GGS_bigintPredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bigintPredefinedTypeAST bang_bigintPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_bigintPredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_bigintPredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bigintPredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bigintPredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bigintPredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @locationPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_locationPredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_locationPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_locationPredefinedTypeAST (const class cPtr_locationPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_locationPredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_locationPredefinedTypeAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_locationPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_locationPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @locationPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_locationPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void locationPredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                   const class GGS_string & inOperand1,
                                                                   Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_locationPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_locationPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                          const GGS_string & in_mPredefinedTypeName,
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
// Phase 1: @locationPredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_locationPredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_locationPredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_locationPredefinedTypeAST_2E_weak (const class GGS_locationPredefinedTypeAST & inSource) ;

  public: GGS_locationPredefinedTypeAST_2E_weak & operator = (const class GGS_locationPredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_locationPredefinedTypeAST_2E_weak init_nil (void) {
    GGS_locationPredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_locationPredefinedTypeAST bang_locationPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_locationPredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_locationPredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_locationPredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_locationPredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_locationPredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @listDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_listDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_listDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_listDeclarationAST (const class cPtr_listDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mListTypeName (void) const ;

  public: class GGS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GGS_bool readProperty_usefullList (void) const ;

  public: class GGS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_listDeclarationAST init_21_isPredefined_21__21__21_usefullList_21_equatable (const class GGS_bool & inOperand0,
                                                                                                  const class GGS_lstring & inOperand1,
                                                                                                  const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                                  const class GGS_bool & inOperand3,
                                                                                                  const class GGS_bool & inOperand4,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_listDeclarationAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_listDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @listDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_listDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void listDeclarationAST_init_21_isPredefined_21__21__21_usefullList_21_equatable (const class GGS_bool & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                            const class GGS_bool & inOperand3,
                                                                                            const class GGS_bool & inOperand4,
                                                                                            Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: GGS_lstring mProperty_mListTypeName ;
  public: GGS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GGS_bool mProperty_usefullList ;
  public: GGS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_listDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_listDeclarationAST (const GGS_bool & in_isPredefined,
                                   const GGS_lstring & in_mListTypeName,
                                   const GGS_propertyInCollectionListAST & in_mPropertyList,
                                   const GGS_bool & in_usefullList,
                                   const GGS_bool & in_equatable,
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
// Phase 1: @listDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_listDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_listDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_listDeclarationAST_2E_weak (const class GGS_listDeclarationAST & inSource) ;

  public: GGS_listDeclarationAST_2E_weak & operator = (const class GGS_listDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_listDeclarationAST_2E_weak init_nil (void) {
    GGS_listDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_listDeclarationAST bang_listDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_listDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_listDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_listDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_listDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @listTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_listTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_listTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_listTypeForGeneration (const class cPtr_listTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mListElementTypeIndex (void) const ;

  public: class GGS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_listTypeForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                             const class GGS_unifiedTypeMapEntry & inOperand1,
                                                             const class GGS_typedPropertyList & inOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_listTypeForGeneration extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_listTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @listTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_listTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void listTypeForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                       const class GGS_unifiedTypeMapEntry & inOperand1,
                                                       const class GGS_typedPropertyList & inOperand2,
                                                       Compiler * inCompiler) ;


//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mListElementTypeIndex ;
  public: GGS_typedPropertyList mProperty_mTypedAttributeList ;


//--- Default constructor
  public: cPtr_listTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_listTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                      const GGS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                      const GGS_typedPropertyList & in_mTypedAttributeList,
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
// Phase 1: @listTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_listTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_listTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_listTypeForGeneration_2E_weak (const class GGS_listTypeForGeneration & inSource) ;

  public: GGS_listTypeForGeneration_2E_weak & operator = (const class GGS_listTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_listTypeForGeneration_2E_weak init_nil (void) {
    GGS_listTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_listTypeForGeneration bang_listTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_listTypeForGeneration unwrappedValue (void) const ;

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
  public: static GGS_listTypeForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_listTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_listTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @weakReferenceDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_weakReferenceDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_weakReferenceDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_weakReferenceDeclarationAST (const class cPtr_weakReferenceDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mClassTypeName (void) const ;

  public: class GGS_lstring readProperty_mWeakReferenceTypeName (void) const ;

  public: class GGS_lstring readProperty_mSuperWeakReferenceTypeName (void) const ;

  public: class GGS_bool readProperty_mGenerateInSeparateFile (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_weakReferenceDeclarationAST init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_lstring & inOperand2,
                                                                                       const class GGS_lstring & inOperand3,
                                                                                       const class GGS_bool & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_weakReferenceDeclarationAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_weakReferenceDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @weakReferenceDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_weakReferenceDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void weakReferenceDeclarationAST_init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
                                                                                 const class GGS_lstring & inOperand3,
                                                                                 const class GGS_bool & inOperand4,
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
  public: GGS_lstring mProperty_mClassTypeName ;
  public: GGS_lstring mProperty_mWeakReferenceTypeName ;
  public: GGS_lstring mProperty_mSuperWeakReferenceTypeName ;
  public: GGS_bool mProperty_mGenerateInSeparateFile ;


//--- Default constructor
  public: cPtr_weakReferenceDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_weakReferenceDeclarationAST (const GGS_bool & in_isPredefined,
                                            const GGS_lstring & in_mClassTypeName,
                                            const GGS_lstring & in_mWeakReferenceTypeName,
                                            const GGS_lstring & in_mSuperWeakReferenceTypeName,
                                            const GGS_bool & in_mGenerateInSeparateFile,
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
// Phase 1: @weakReferenceDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_weakReferenceDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_weakReferenceDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_weakReferenceDeclarationAST_2E_weak (const class GGS_weakReferenceDeclarationAST & inSource) ;

  public: GGS_weakReferenceDeclarationAST_2E_weak & operator = (const class GGS_weakReferenceDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_weakReferenceDeclarationAST_2E_weak init_nil (void) {
    GGS_weakReferenceDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_weakReferenceDeclarationAST bang_weakReferenceDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_weakReferenceDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_weakReferenceDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_weakReferenceDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_weakReferenceDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_weakReferenceDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @weakReferenceTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_weakReferenceTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_weakReferenceTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_weakReferenceTypeForGeneration (const class cPtr_weakReferenceTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mReferenceClassType (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mSuperClass (void) const ;

  public: class GGS_bool readProperty_generateHeaderInSeparateFile (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_optionalClassTypeOrNull (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_weakReferenceTypeForGeneration init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                              const class GGS_bool & inOperand3,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_weakReferenceTypeForGeneration extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_weakReferenceTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @weakReferenceTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_weakReferenceTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void weakReferenceTypeForGeneration_init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                        const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                        const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                        const class GGS_bool & inOperand3,
                                                                        const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                        Compiler * inCompiler) ;


//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mReferenceClassType ;
  public: GGS_unifiedTypeMapEntry mProperty_mSuperClass ;
  public: GGS_bool mProperty_generateHeaderInSeparateFile ;
  public: GGS_unifiedTypeMapEntry mProperty_optionalClassTypeOrNull ;


//--- Default constructor
  public: cPtr_weakReferenceTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_weakReferenceTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                               const GGS_unifiedTypeMapEntry & in_mReferenceClassType,
                                               const GGS_unifiedTypeMapEntry & in_mSuperClass,
                                               const GGS_bool & in_generateHeaderInSeparateFile,
                                               const GGS_unifiedTypeMapEntry & in_optionalClassTypeOrNull,
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
// Phase 1: @weakReferenceTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_weakReferenceTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_weakReferenceTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_weakReferenceTypeForGeneration_2E_weak (const class GGS_weakReferenceTypeForGeneration & inSource) ;

  public: GGS_weakReferenceTypeForGeneration_2E_weak & operator = (const class GGS_weakReferenceTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_weakReferenceTypeForGeneration_2E_weak init_nil (void) {
    GGS_weakReferenceTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_weakReferenceTypeForGeneration bang_weakReferenceTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_weakReferenceTypeForGeneration unwrappedValue (void) const ;

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
  public: static GGS_weakReferenceTypeForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_weakReferenceTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_weakReferenceTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@propertyInCollectionListAST buildPropertyInitializationCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildPropertyInitializationCode (const class GGS_propertyInCollectionListAST inObject,
                                                      const class GGS_lstring constin_inTypeNameForUsefulness,
                                                      const class GGS_semanticContext constin_inSemanticContext,
                                                      const class GGS_predefinedTypes constin_inPredefinedTypes,
                                                      class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                      class GGS_unifiedTypeMap & io_ioTypeMap,
                                                      class GGS_stringset & out_outUnusedVariableCppNameSet,
                                                      class GGS_string & out_outInitializationCode,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'compilerCppName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_compilerCppName (class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypeWithImplicitGetterCall???&'
//
//--------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (const class GGS_unifiedTypeMapEntry constinArgument0,
                                                                        const class GGS_unifiedTypeMapEntry constinArgument1,
                                                                        const class GGS_location constinArgument2,
                                                                        class GGS_semanticExpressionForGeneration & ioArgument3,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

