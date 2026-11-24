#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalDoubleExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalDoubleExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_literalDoubleExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalDoubleExpressionForGeneration (const class cPtr_literalDoubleExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_f_36__34_ readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalDoubleExpressionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GGS_location & inOperand1,
                                                                            const class GGS_f_36__34_ & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalDoubleExpressionForGeneration & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @literalDoubleExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_literalDoubleExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalDoubleExpressionForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                      const class GGS_location & inOperand1,
                                                                      const class GGS_f_36__34_ & inOperand2,
                                                                      Compiler * inCompiler) ;


//--- Extension proc generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_f_36__34_ mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalDoubleExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalDoubleExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_location & in_mLocation,
                                                     const GGS_f_36__34_ & in_mValue,
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
// Phase 1: @functionCallExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_functionCallExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_functionCallExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_functionCallExpressionAST (const class cPtr_functionCallExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFunctionName (void) const ;

  public: class GGS__5B_actualOutputArgumentAST_5D_ readProperty_mExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionCallExpressionAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS__5B_actualOutputArgumentAST_5D_ & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionCallExpressionAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionCallExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @functionCallExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_functionCallExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void functionCallExpressionAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                       const class GGS__5B_actualOutputArgumentAST_5D_ & inOperand1,
                                                       Compiler * inCompiler) ;


//--- Extension proc analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mFunctionName ;
  public: GGS__5B_actualOutputArgumentAST_5D_ mProperty_mExpressionList ;


//--- Default constructor
  public: cPtr_functionCallExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_functionCallExpressionAST (const GGS_lstring & in_mFunctionName,
                                          const GGS__5B_actualOutputArgumentAST_5D_ & in_mExpressionList,
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
// Phase 1: @functionCallExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_functionCallExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_functionCallExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_functionCallExpressionForGeneration (const class cPtr_functionCallExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mFunctionName (void) const ;

  public: class GGS__5B_semanticExpressionForGeneration_5D_ readProperty_mExpressions (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionCallExpressionForGeneration init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                               const class GGS_location & inOperand1,
                                                                               const class GGS_string & inOperand2,
                                                                               const class GGS__5B_semanticExpressionForGeneration_5D_ & inOperand3,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionCallExpressionForGeneration & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionCallExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @functionCallExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_functionCallExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void functionCallExpressionForGeneration_init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                         const class GGS_location & inOperand1,
                                                                         const class GGS_string & inOperand2,
                                                                         const class GGS__5B_semanticExpressionForGeneration_5D_ & inOperand3,
                                                                         Compiler * inCompiler) ;


//--- Extension proc generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mFunctionName ;
  public: GGS__5B_semanticExpressionForGeneration_5D_ mProperty_mExpressions ;


//--- Default constructor
  public: cPtr_functionCallExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_functionCallExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                    const GGS_location & in_mLocation,
                                                    const GGS_string & in_mFunctionName,
                                                    const GGS__5B_semanticExpressionForGeneration_5D_ & in_mExpressions,
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_andShortExpressionAST & inOperand) const ;

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


//--- Extension proc analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterExpressionInSemanticContext
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_andExpressionAST & inOperand) const ;

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


//--- Extension proc analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterExpressionInSemanticContext
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_andShortExpressionForGeneration & inOperand) const ;

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


//--- Extension proc generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg_ioTemporaryVariableIndex,
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
// Phase 1: @ifExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_ifExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ifExpressionAST (const class cPtr_ifExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mIfExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mThenExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mElseExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifExpressionAST init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_semanticExpressionAST & inOperand1,
                                                           const class GGS_semanticExpressionAST & inOperand2,
                                                           const class GGS_semanticExpressionAST & inOperand3,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifExpressionAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ifExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_ifExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ifExpressionAST_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                     const class GGS_semanticExpressionAST & inOperand1,
                                                     const class GGS_semanticExpressionAST & inOperand2,
                                                     const class GGS_semanticExpressionAST & inOperand3,
                                                     Compiler * inCompiler) ;


//--- Extension proc analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_semanticExpressionAST mProperty_mIfExpression ;
  public: GGS_semanticExpressionAST mProperty_mThenExpression ;
  public: GGS_semanticExpressionAST mProperty_mElseExpression ;


//--- Default constructor
  public: cPtr_ifExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ifExpressionAST (const GGS_location & in_mOperatorLocation,
                                const GGS_semanticExpressionAST & in_mIfExpression,
                                const GGS_semanticExpressionAST & in_mThenExpression,
                                const GGS_semanticExpressionAST & in_mElseExpression,
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifExpressionForGeneration & inOperand) const ;

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


//--- Extension proc generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg_ioTemporaryVariableIndex,
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nilExpressionAST & inOperand) const ;

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


//--- Extension proc analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterExpressionInSemanticContext
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nilExpressionForGeneration & inOperand) const ;

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


//--- Extension proc generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg_ioTemporaryVariableIndex,
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

  public: class GGS__5B_actualOutputArgumentAST_5D_ readProperty_mActualArgumentList (void) const ;

  public: class GGS_location readProperty_mExpressionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_getterCallExpressionAST init_21__21__21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   const class GGS__5B_actualOutputArgumentAST_5D_ & inOperand2,
                                                                   const class GGS_location & inOperand3,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getterCallExpressionAST & inOperand) const ;

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
                                                             const class GGS__5B_actualOutputArgumentAST_5D_ & inOperand2,
                                                             const class GGS_location & inOperand3,
                                                             Compiler * inCompiler) ;


//--- Extension proc analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mReceiver ;
  public: GGS_lstring mProperty_mGetterName ;
  public: GGS__5B_actualOutputArgumentAST_5D_ mProperty_mActualArgumentList ;
  public: GGS_location mProperty_mExpressionLocation ;


//--- Default constructor
  public: cPtr_getterCallExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_getterCallExpressionAST (const GGS_semanticExpressionAST & in_mReceiver,
                                        const GGS_lstring & in_mGetterName,
                                        const GGS__5B_actualOutputArgumentAST_5D_ & in_mActualArgumentList,
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

  public: class GGS__5B_string_5D_ readProperty_mFieldList (void) const ;

  public: class GGS_string readProperty_mGetterName (void) const ;

  public: class GGS__5B_semanticExpressionForGeneration_5D_ readProperty_mActualArgumentList (void) const ;

  public: class GGS_bool readProperty_mHasCompilerArgument (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_getterCallExpressionForGeneration init_21__21__21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                             const class GGS_location & inOperand1,
                                                                                             const class GGS_methodKind & inOperand2,
                                                                                             const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                             const class GGS__5B_string_5D_ & inOperand4,
                                                                                             const class GGS_string & inOperand5,
                                                                                             const class GGS__5B_semanticExpressionForGeneration_5D_ & inOperand6,
                                                                                             const class GGS_bool & inOperand7,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getterCallExpressionForGeneration & inOperand) const ;

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
                                                                                       const class GGS__5B_string_5D_ & inOperand4,
                                                                                       const class GGS_string & inOperand5,
                                                                                       const class GGS__5B_semanticExpressionForGeneration_5D_ & inOperand6,
                                                                                       const class GGS_bool & inOperand7,
                                                                                       Compiler * inCompiler) ;


//--- Extension proc generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_methodKind mProperty_mKind ;
  public: GGS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GGS__5B_string_5D_ mProperty_mFieldList ;
  public: GGS_string mProperty_mGetterName ;
  public: GGS__5B_semanticExpressionForGeneration_5D_ mProperty_mActualArgumentList ;
  public: GGS_bool mProperty_mHasCompilerArgument ;


//--- Default constructor
  public: cPtr_getterCallExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_getterCallExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                  const GGS_location & in_mLocation,
                                                  const GGS_methodKind & in_mKind,
                                                  const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                  const GGS__5B_string_5D_ & in_mFieldList,
                                                  const GGS_string & in_mGetterName,
                                                  const GGS__5B_semanticExpressionForGeneration_5D_ & in_mActualArgumentList,
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
//§Filewrapper§ 'libpmFileWrapper'
//--------------------------------------------------------------------------------------------------

extern const char * gWrapperFileContent_234_libpmFileWrapper ;
extern const char * gWrapperFileContent_240_libpmFileWrapper ;
extern const char * gWrapperFileContent_236_libpmFileWrapper ;
extern const char * gWrapperFileContent_241_libpmFileWrapper ;
extern const char * gWrapperFileContent_242_libpmFileWrapper ;
extern const char * gWrapperFileContent_239_libpmFileWrapper ;
extern const char * gWrapperFileContent_238_libpmFileWrapper ;
extern const char * gWrapperFileContent_235_libpmFileWrapper ;
extern const char * gWrapperFileContent_237_libpmFileWrapper ;
extern const char * gWrapperFileContent_225_libpmFileWrapper ;
extern const char * gWrapperFileContent_216_libpmFileWrapper ;
extern const char * gWrapperFileContent_227_libpmFileWrapper ;
extern const char * gWrapperFileContent_228_libpmFileWrapper ;
extern const char * gWrapperFileContent_206_libpmFileWrapper ;
extern const char * gWrapperFileContent_217_libpmFileWrapper ;
extern const char * gWrapperFileContent_226_libpmFileWrapper ;
extern const char * gWrapperFileContent_205_libpmFileWrapper ;
extern const char * gWrapperFileContent_210_libpmFileWrapper ;
extern const char * gWrapperFileContent_231_libpmFileWrapper ;
extern const char * gWrapperFileContent_232_libpmFileWrapper ;
extern const char * gWrapperFileContent_221_libpmFileWrapper ;
extern const char * gWrapperFileContent_211_libpmFileWrapper ;
extern const char * gWrapperFileContent_219_libpmFileWrapper ;
extern const char * gWrapperFileContent_213_libpmFileWrapper ;
extern const char * gWrapperFileContent_201_libpmFileWrapper ;
extern const char * gWrapperFileContent_230_libpmFileWrapper ;
extern const char * gWrapperFileContent_208_libpmFileWrapper ;
extern const char * gWrapperFileContent_224_libpmFileWrapper ;
extern const char * gWrapperFileContent_214_libpmFileWrapper ;
extern const char * gWrapperFileContent_209_libpmFileWrapper ;
extern const char * gWrapperFileContent_233_libpmFileWrapper ;
extern const char * gWrapperFileContent_215_libpmFileWrapper ;
extern const char * gWrapperFileContent_204_libpmFileWrapper ;
extern const char * gWrapperFileContent_198_libpmFileWrapper ;
extern const char * gWrapperFileContent_203_libpmFileWrapper ;
extern const char * gWrapperFileContent_200_libpmFileWrapper ;
extern const char * gWrapperFileContent_220_libpmFileWrapper ;
extern const char * gWrapperFileContent_223_libpmFileWrapper ;
extern const char * gWrapperFileContent_222_libpmFileWrapper ;
extern const char * gWrapperFileContent_202_libpmFileWrapper ;
extern const char * gWrapperFileContent_197_libpmFileWrapper ;
extern const char * gWrapperFileContent_212_libpmFileWrapper ;
extern const char * gWrapperFileContent_218_libpmFileWrapper ;
extern const char * gWrapperFileContent_207_libpmFileWrapper ;
extern const char * gWrapperFileContent_229_libpmFileWrapper ;
extern const char * gWrapperFileContent_199_libpmFileWrapper ;
extern const char * gWrapperFileContent_189_libpmFileWrapper ;
extern const char * gWrapperFileContent_192_libpmFileWrapper ;
extern const char * gWrapperFileContent_186_libpmFileWrapper ;
extern const char * gWrapperFileContent_196_libpmFileWrapper ;
extern const char * gWrapperFileContent_191_libpmFileWrapper ;
extern const char * gWrapperFileContent_194_libpmFileWrapper ;
extern const char * gWrapperFileContent_187_libpmFileWrapper ;
extern const char * gWrapperFileContent_193_libpmFileWrapper ;
extern const char * gWrapperFileContent_190_libpmFileWrapper ;
extern const char * gWrapperFileContent_188_libpmFileWrapper ;
extern const char * gWrapperFileContent_195_libpmFileWrapper ;
extern const char * gWrapperFileContent_185_libpmFileWrapper ;
extern const char * gWrapperFileContent_176_libpmFileWrapper ;
extern const char * gWrapperFileContent_179_libpmFileWrapper ;
extern const char * gWrapperFileContent_181_libpmFileWrapper ;
extern const char * gWrapperFileContent_178_libpmFileWrapper ;
extern const char * gWrapperFileContent_180_libpmFileWrapper ;
extern const char * gWrapperFileContent_175_libpmFileWrapper ;
extern const char * gWrapperFileContent_183_libpmFileWrapper ;
extern const char * gWrapperFileContent_184_libpmFileWrapper ;
extern const char * gWrapperFileContent_177_libpmFileWrapper ;
extern const char * gWrapperFileContent_182_libpmFileWrapper ;
extern const char * gWrapperFileContent_120_libpmFileWrapper ;
extern const char * gWrapperFileContent_142_libpmFileWrapper ;
extern const char * gWrapperFileContent_119_libpmFileWrapper ;
extern const char * gWrapperFileContent_101_libpmFileWrapper ;
extern const char * gWrapperFileContent_147_libpmFileWrapper ;
extern const char * gWrapperFileContent_139_libpmFileWrapper ;
extern const char * gWrapperFileContent_166_libpmFileWrapper ;
extern const char * gWrapperFileContent_150_libpmFileWrapper ;
extern const char * gWrapperFileContent_145_libpmFileWrapper ;
extern const char * gWrapperFileContent_138_libpmFileWrapper ;
extern const char * gWrapperFileContent_116_libpmFileWrapper ;
extern const char * gWrapperFileContent_162_libpmFileWrapper ;
extern const char * gWrapperFileContent_132_libpmFileWrapper ;
extern const char * gWrapperFileContent_117_libpmFileWrapper ;
extern const char * gWrapperFileContent_118_libpmFileWrapper ;
extern const char * gWrapperFileContent_115_libpmFileWrapper ;
extern const char * gWrapperFileContent_141_libpmFileWrapper ;
extern const char * gWrapperFileContent_124_libpmFileWrapper ;
extern const char * gWrapperFileContent_163_libpmFileWrapper ;
extern const char * gWrapperFileContent_149_libpmFileWrapper ;
extern const char * gWrapperFileContent_127_libpmFileWrapper ;
extern const char * gWrapperFileContent_168_libpmFileWrapper ;
extern const char * gWrapperFileContent_135_libpmFileWrapper ;
extern const char * gWrapperFileContent_153_libpmFileWrapper ;
extern const char * gWrapperFileContent_102_libpmFileWrapper ;
extern const char * gWrapperFileContent_131_libpmFileWrapper ;
extern const char * gWrapperFileContent_110_libpmFileWrapper ;
extern const char * gWrapperFileContent_155_libpmFileWrapper ;
extern const char * gWrapperFileContent_143_libpmFileWrapper ;
extern const char * gWrapperFileContent_136_libpmFileWrapper ;
extern const char * gWrapperFileContent_106_libpmFileWrapper ;
extern const char * gWrapperFileContent_121_libpmFileWrapper ;
extern const char * gWrapperFileContent_174_libpmFileWrapper ;
extern const char * gWrapperFileContent_130_libpmFileWrapper ;
extern const char * gWrapperFileContent_167_libpmFileWrapper ;
extern const char * gWrapperFileContent_129_libpmFileWrapper ;
extern const char * gWrapperFileContent_114_libpmFileWrapper ;
extern const char * gWrapperFileContent_133_libpmFileWrapper ;
extern const char * gWrapperFileContent_113_libpmFileWrapper ;
extern const char * gWrapperFileContent_159_libpmFileWrapper ;
extern const char * gWrapperFileContent_123_libpmFileWrapper ;
extern const char * gWrapperFileContent_157_libpmFileWrapper ;
extern const char * gWrapperFileContent_169_libpmFileWrapper ;
extern const char * gWrapperFileContent_140_libpmFileWrapper ;
extern const char * gWrapperFileContent_165_libpmFileWrapper ;
extern const char * gWrapperFileContent_152_libpmFileWrapper ;
extern const char * gWrapperFileContent_171_libpmFileWrapper ;
extern const char * gWrapperFileContent_170_libpmFileWrapper ;
extern const char * gWrapperFileContent_137_libpmFileWrapper ;
extern const char * gWrapperFileContent_103_libpmFileWrapper ;
extern const char * gWrapperFileContent_107_libpmFileWrapper ;
extern const char * gWrapperFileContent_158_libpmFileWrapper ;
extern const char * gWrapperFileContent_122_libpmFileWrapper ;
extern const char * gWrapperFileContent_172_libpmFileWrapper ;
extern const char * gWrapperFileContent_156_libpmFileWrapper ;
extern const char * gWrapperFileContent_104_libpmFileWrapper ;
extern const char * gWrapperFileContent_146_libpmFileWrapper ;
extern const char * gWrapperFileContent_112_libpmFileWrapper ;
extern const char * gWrapperFileContent_108_libpmFileWrapper ;
extern const char * gWrapperFileContent_128_libpmFileWrapper ;
extern const char * gWrapperFileContent_161_libpmFileWrapper ;
extern const char * gWrapperFileContent_144_libpmFileWrapper ;
extern const char * gWrapperFileContent_134_libpmFileWrapper ;
extern const char * gWrapperFileContent_151_libpmFileWrapper ;
extern const char * gWrapperFileContent_160_libpmFileWrapper ;
extern const char * gWrapperFileContent_109_libpmFileWrapper ;
extern const char * gWrapperFileContent_105_libpmFileWrapper ;
extern const char * gWrapperFileContent_126_libpmFileWrapper ;
extern const char * gWrapperFileContent_173_libpmFileWrapper ;
extern const char * gWrapperFileContent_148_libpmFileWrapper ;
extern const char * gWrapperFileContent_164_libpmFileWrapper ;
extern const char * gWrapperFileContent_125_libpmFileWrapper ;
extern const char * gWrapperFileContent_111_libpmFileWrapper ;
extern const char * gWrapperFileContent_154_libpmFileWrapper ;
extern const char * gWrapperFileContent_24_libpmFileWrapper ;
extern const char * gWrapperFileContent_26_libpmFileWrapper ;
extern const char * gWrapperFileContent_25_libpmFileWrapper ;
extern const char * gWrapperFileContent_20_libpmFileWrapper ;
extern const char * gWrapperFileContent_17_libpmFileWrapper ;
extern const char * gWrapperFileContent_19_libpmFileWrapper ;
extern const char * gWrapperFileContent_15_libpmFileWrapper ;
extern const char * gWrapperFileContent_21_libpmFileWrapper ;
extern const char * gWrapperFileContent_23_libpmFileWrapper ;
extern const char * gWrapperFileContent_18_libpmFileWrapper ;
extern const char * gWrapperFileContent_22_libpmFileWrapper ;
extern const char * gWrapperFileContent_16_libpmFileWrapper ;
extern const char * gWrapperFileContent_10_libpmFileWrapper ;
extern const char * gWrapperFileContent_14_libpmFileWrapper ;
extern const char * gWrapperFileContent_11_libpmFileWrapper ;
extern const char * gWrapperFileContent_13_libpmFileWrapper ;
extern const char * gWrapperFileContent_12_libpmFileWrapper ;
extern const char * gWrapperFileContent_9_libpmFileWrapper ;
extern const char * gWrapperFileContent_2_libpmFileWrapper ;
extern const char * gWrapperFileContent_0_libpmFileWrapper ;
extern const char * gWrapperFileContent_4_libpmFileWrapper ;
extern const char * gWrapperFileContent_6_libpmFileWrapper ;
extern const char * gWrapperFileContent_8_libpmFileWrapper ;
extern const char * gWrapperFileContent_7_libpmFileWrapper ;
extern const char * gWrapperFileContent_5_libpmFileWrapper ;
extern const char * gWrapperFileContent_3_libpmFileWrapper ;
extern const char * gWrapperFileContent_1_libpmFileWrapper ;
extern const char * gWrapperFileContent_28_libpmFileWrapper ;
extern const char * gWrapperFileContent_67_libpmFileWrapper ;
extern const char * gWrapperFileContent_29_libpmFileWrapper ;
extern const char * gWrapperFileContent_59_libpmFileWrapper ;
extern const char * gWrapperFileContent_40_libpmFileWrapper ;
extern const char * gWrapperFileContent_45_libpmFileWrapper ;
extern const char * gWrapperFileContent_35_libpmFileWrapper ;
extern const char * gWrapperFileContent_61_libpmFileWrapper ;
extern const char * gWrapperFileContent_62_libpmFileWrapper ;
extern const char * gWrapperFileContent_50_libpmFileWrapper ;
extern const char * gWrapperFileContent_32_libpmFileWrapper ;
extern const char * gWrapperFileContent_49_libpmFileWrapper ;
extern const char * gWrapperFileContent_53_libpmFileWrapper ;
extern const char * gWrapperFileContent_43_libpmFileWrapper ;
extern const char * gWrapperFileContent_39_libpmFileWrapper ;
extern const char * gWrapperFileContent_54_libpmFileWrapper ;
extern const char * gWrapperFileContent_52_libpmFileWrapper ;
extern const char * gWrapperFileContent_38_libpmFileWrapper ;
extern const char * gWrapperFileContent_42_libpmFileWrapper ;
extern const char * gWrapperFileContent_57_libpmFileWrapper ;
extern const char * gWrapperFileContent_44_libpmFileWrapper ;
extern const char * gWrapperFileContent_66_libpmFileWrapper ;
extern const char * gWrapperFileContent_55_libpmFileWrapper ;
extern const char * gWrapperFileContent_60_libpmFileWrapper ;
extern const char * gWrapperFileContent_33_libpmFileWrapper ;
extern const char * gWrapperFileContent_27_libpmFileWrapper ;
extern const char * gWrapperFileContent_51_libpmFileWrapper ;
extern const char * gWrapperFileContent_64_libpmFileWrapper ;
extern const char * gWrapperFileContent_63_libpmFileWrapper ;
extern const char * gWrapperFileContent_30_libpmFileWrapper ;
extern const char * gWrapperFileContent_31_libpmFileWrapper ;
extern const char * gWrapperFileContent_56_libpmFileWrapper ;
extern const char * gWrapperFileContent_36_libpmFileWrapper ;
extern const char * gWrapperFileContent_37_libpmFileWrapper ;
extern const char * gWrapperFileContent_41_libpmFileWrapper ;
extern const char * gWrapperFileContent_34_libpmFileWrapper ;
extern const char * gWrapperFileContent_65_libpmFileWrapper ;
extern const char * gWrapperFileContent_47_libpmFileWrapper ;
extern const char * gWrapperFileContent_48_libpmFileWrapper ;
extern const char * gWrapperFileContent_58_libpmFileWrapper ;
extern const char * gWrapperFileContent_46_libpmFileWrapper ;
extern const char * gWrapperFileContent_71_libpmFileWrapper ;
extern const char * gWrapperFileContent_69_libpmFileWrapper ;
extern const char * gWrapperFileContent_68_libpmFileWrapper ;
extern const char * gWrapperFileContent_70_libpmFileWrapper ;
extern const char * gWrapperFileContent_89_libpmFileWrapper ;
extern const char * gWrapperFileContent_98_libpmFileWrapper ;
extern const char * gWrapperFileContent_90_libpmFileWrapper ;
extern const char * gWrapperFileContent_85_libpmFileWrapper ;
extern const char * gWrapperFileContent_87_libpmFileWrapper ;
extern const char * gWrapperFileContent_95_libpmFileWrapper ;
extern const char * gWrapperFileContent_80_libpmFileWrapper ;
extern const char * gWrapperFileContent_99_libpmFileWrapper ;
extern const char * gWrapperFileContent_83_libpmFileWrapper ;
extern const char * gWrapperFileContent_86_libpmFileWrapper ;
extern const char * gWrapperFileContent_91_libpmFileWrapper ;
extern const char * gWrapperFileContent_72_libpmFileWrapper ;
extern const char * gWrapperFileContent_94_libpmFileWrapper ;
extern const char * gWrapperFileContent_84_libpmFileWrapper ;
extern const char * gWrapperFileContent_88_libpmFileWrapper ;
extern const char * gWrapperFileContent_78_libpmFileWrapper ;
extern const char * gWrapperFileContent_77_libpmFileWrapper ;
extern const char * gWrapperFileContent_92_libpmFileWrapper ;
extern const char * gWrapperFileContent_73_libpmFileWrapper ;
extern const char * gWrapperFileContent_81_libpmFileWrapper ;
extern const char * gWrapperFileContent_97_libpmFileWrapper ;
extern const char * gWrapperFileContent_93_libpmFileWrapper ;
extern const char * gWrapperFileContent_100_libpmFileWrapper ;
extern const char * gWrapperFileContent_74_libpmFileWrapper ;
extern const char * gWrapperFileContent_76_libpmFileWrapper ;
extern const char * gWrapperFileContent_96_libpmFileWrapper ;
extern const char * gWrapperFileContent_79_libpmFileWrapper ;
extern const char * gWrapperFileContent_75_libpmFileWrapper ;
extern const char * gWrapperFileContent_82_libpmFileWrapper ;

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const RegularFileWrapper gWrapperFile_0_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_1_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_2_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_3_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_4_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_5_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_6_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_7_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_8_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_9_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_10_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_11_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_12_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_13_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_14_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_15_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_16_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_17_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_18_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_19_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_20_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_21_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_22_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_23_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_24_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_25_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_26_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_27_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_28_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_29_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_30_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_31_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_32_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_33_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_34_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_35_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_36_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_37_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_38_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_39_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_40_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_41_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_42_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_43_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_44_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_45_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_46_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_47_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_48_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_49_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_50_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_51_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_52_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_53_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_54_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_55_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_56_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_57_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_58_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_59_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_60_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_61_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_62_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_63_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_64_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_65_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_66_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_67_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_68_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_69_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_70_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_71_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_72_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_73_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_74_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_75_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_76_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_77_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_78_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_79_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_80_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_81_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_82_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_83_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_84_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_85_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_86_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_87_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_88_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_89_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_90_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_91_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_92_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_93_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_94_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_95_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_96_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_97_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_98_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_99_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_100_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_101_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_102_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_103_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_104_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_105_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_106_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_107_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_108_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_109_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_110_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_111_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_112_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_113_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_114_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_115_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_116_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_117_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_118_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_119_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_120_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_121_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_122_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_123_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_124_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_125_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_126_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_127_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_128_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_129_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_130_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_131_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_132_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_133_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_134_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_135_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_136_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_137_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_138_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_139_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_140_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_141_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_142_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_143_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_144_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_145_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_146_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_147_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_148_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_149_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_150_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_151_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_152_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_153_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_154_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_155_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_156_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_157_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_158_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_159_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_160_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_161_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_162_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_163_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_164_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_165_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_166_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_167_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_168_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_169_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_170_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_171_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_172_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_173_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_174_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_175_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_176_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_177_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_178_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_179_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_180_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_181_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_182_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_183_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_184_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_185_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_186_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_187_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_188_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_189_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_190_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_191_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_192_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_193_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_194_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_195_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_196_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_197_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_198_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_199_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_200_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_201_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_202_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_203_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_204_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_205_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_206_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_207_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_208_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_209_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_210_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_211_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_212_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_213_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_214_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_215_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_216_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_217_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_218_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_219_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_220_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_221_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_222_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_223_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_224_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_225_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_226_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_227_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_228_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_229_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_230_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_231_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_232_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_233_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_234_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_235_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_236_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_237_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_238_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_239_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_240_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_241_libpmFileWrapper ;
extern const RegularFileWrapper gWrapperFile_242_libpmFileWrapper ;

//--------------------------------------------------------------------------------------------------

extern const DirectoryWrapper gWrapperDirectory_0_libpmFileWrapper ;
extern const DirectoryWrapper gWrapperDirectory_1_libpmFileWrapper ;
extern const DirectoryWrapper gWrapperDirectory_2_libpmFileWrapper ;
extern const DirectoryWrapper gWrapperDirectory_3_libpmFileWrapper ;
extern const DirectoryWrapper gWrapperDirectory_4_libpmFileWrapper ;
extern const DirectoryWrapper gWrapperDirectory_5_libpmFileWrapper ;
extern const DirectoryWrapper gWrapperDirectory_6_libpmFileWrapper ;
extern const DirectoryWrapper gWrapperDirectory_7_libpmFileWrapper ;
extern const DirectoryWrapper gWrapperDirectory_8_libpmFileWrapper ;
extern const DirectoryWrapper gWrapperDirectory_9_libpmFileWrapper ;
extern const DirectoryWrapper gWrapperDirectory_10_libpmFileWrapper ;
extern const DirectoryWrapper gWrapperDirectory_11_libpmFileWrapper ;
extern const DirectoryWrapper gWrapperDirectory_12_libpmFileWrapper ;
extern const DirectoryWrapper gWrapperDirectory_13_libpmFileWrapper ;
extern const DirectoryWrapper gWrapperDirectory_14_libpmFileWrapper ;
extern const DirectoryWrapper gWrapperDirectory_15_libpmFileWrapper ;
extern const DirectoryWrapper gWrapperDirectory_16_libpmFileWrapper ;

//--------------------------------------------------------------------------------------------------
// Phase 1: filewrapper @libpmFileWrapper
//--------------------------------------------------------------------------------------------------

class GGS_libpmFileWrapper final {

//-- Start of package generic part

//--------------------------------- GALGAS class getters
  public: static class GGS_filewrapper class_func_contents (LOCATION_ARGS) ;

//--------------------------------- Class Methods

} ;

