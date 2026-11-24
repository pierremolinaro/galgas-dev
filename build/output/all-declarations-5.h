#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @outputInputActualParameterAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_outputInputActualParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_outputInputActualParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_outputInputActualParameterAST (const class cPtr_outputInputActualParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

  public: class GGS_lstring readProperty_mOutputInputActualParameterName (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mStructAttributeList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outputInputActualParameterAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS__5B_lstring_5D_ & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputInputActualParameterAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputInputActualParameterAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @outputInputActualParameterAST class
//--------------------------------------------------------------------------------------------------

class cPtr_outputInputActualParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void outputInputActualParameterAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_lstring & inOperand1,
                                                               const class GGS__5B_lstring_5D_ & inOperand2,
                                                               Compiler * inCompiler) ;


//--- Extension func isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST _inFormalPassingMode,
           const class GGS_string _inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS__5B_actualParameterForGeneration_5D_ & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS__5B_actualOutputArgumentAST_5D_ & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: GGS_lstring mProperty_mOutputInputActualParameterName ;
  public: GGS__5B_lstring_5D_ mProperty_mStructAttributeList ;


//--- Default constructor
  public: cPtr_outputInputActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outputInputActualParameterAST (const GGS_lstring & in_mActualSelector,
                                              const GGS_lstring & in_mOutputInputActualParameterName,
                                              const GGS__5B_lstring_5D_ & in_mStructAttributeList,
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
// Phase 1: @outputInputJokerParameterAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_outputInputJokerParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_outputInputJokerParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_outputInputJokerParameterAST (const class cPtr_outputInputJokerParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

  public: class GGS_semanticExpressionAST readProperty_expression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outputInputJokerParameterAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_semanticExpressionAST & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputInputJokerParameterAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputInputJokerParameterAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @outputInputJokerParameterAST class
//--------------------------------------------------------------------------------------------------

class cPtr_outputInputJokerParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void outputInputJokerParameterAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_semanticExpressionAST & inOperand1,
                                                          Compiler * inCompiler) ;


//--- Extension func isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST _inFormalPassingMode,
           const class GGS_string _inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS__5B_actualParameterForGeneration_5D_ & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS__5B_actualOutputArgumentAST_5D_ & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: GGS_semanticExpressionAST mProperty_expression ;


//--- Default constructor
  public: cPtr_outputInputJokerParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outputInputJokerParameterAST (const GGS_lstring & in_mActualSelector,
                                             const GGS_semanticExpressionAST & in_expression,
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
// Phase 1: @outputInputSelfParameterAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_outputInputSelfParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_outputInputSelfParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_outputInputSelfParameterAST (const class cPtr_outputInputSelfParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outputInputSelfParameterAST init_21_ (const class GGS_lstring & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputInputSelfParameterAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputInputSelfParameterAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @outputInputSelfParameterAST class
//--------------------------------------------------------------------------------------------------

class cPtr_outputInputSelfParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void outputInputSelfParameterAST_init_21_ (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler) ;


//--- Extension func isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST _inFormalPassingMode,
           const class GGS_string _inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS__5B_actualParameterForGeneration_5D_ & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS__5B_actualOutputArgumentAST_5D_ & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualSelector ;


//--- Default constructor
  public: cPtr_outputInputSelfParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outputInputSelfParameterAST (const GGS_lstring & in_mActualSelector,
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
// Phase 1: @inputActualExistingVariableParameterAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputActualExistingVariableParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_inputActualExistingVariableParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputActualExistingVariableParameterAST (const class cPtr_inputActualExistingVariableParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

  public: class GGS_lstring readProperty_mInputActualParameterName (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputActualExistingVariableParameterAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               const class GGS__5B_lstring_5D_ & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputActualExistingVariableParameterAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inputActualExistingVariableParameterAST class
//--------------------------------------------------------------------------------------------------

class cPtr_inputActualExistingVariableParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputActualExistingVariableParameterAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS__5B_lstring_5D_ & inOperand2,
                                                                         Compiler * inCompiler) ;


//--- Extension func isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST _inFormalPassingMode,
           const class GGS_string _inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS__5B_actualParameterForGeneration_5D_ & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS__5B_actualOutputArgumentAST_5D_ & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: GGS_lstring mProperty_mInputActualParameterName ;
  public: GGS__5B_lstring_5D_ mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputActualExistingVariableParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputActualExistingVariableParameterAST (const GGS_lstring & in_mActualSelector,
                                                        const GGS_lstring & in_mInputActualParameterName,
                                                        const GGS__5B_lstring_5D_ & in_mPoisonedVarNameList,
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
// Phase 1: @inputActualSelfPropertyParameterAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputActualSelfPropertyParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_inputActualSelfPropertyParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputActualSelfPropertyParameterAST (const class cPtr_inputActualSelfPropertyParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

  public: class GGS_lstring readProperty_mInputActualSelfPropertyName (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputActualSelfPropertyParameterAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS__5B_lstring_5D_ & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputActualSelfPropertyParameterAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inputActualSelfPropertyParameterAST class
//--------------------------------------------------------------------------------------------------

class cPtr_inputActualSelfPropertyParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputActualSelfPropertyParameterAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS__5B_lstring_5D_ & inOperand2,
                                                                     Compiler * inCompiler) ;


//--- Extension func isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST _inFormalPassingMode,
           const class GGS_string _inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS__5B_actualParameterForGeneration_5D_ & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS__5B_actualOutputArgumentAST_5D_ & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: GGS_lstring mProperty_mInputActualSelfPropertyName ;
  public: GGS__5B_lstring_5D_ mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputActualSelfPropertyParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputActualSelfPropertyParameterAST (const GGS_lstring & in_mActualSelector,
                                                    const GGS_lstring & in_mInputActualSelfPropertyName,
                                                    const GGS__5B_lstring_5D_ & in_mPoisonedVarNameList,
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
// Phase 1: @inputActualSelfParameterAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputActualSelfParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_inputActualSelfParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputActualSelfParameterAST (const class cPtr_inputActualSelfParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

  public: class GGS_location readProperty_mSelfLocation (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputActualSelfParameterAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   const class GGS__5B_lstring_5D_ & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputActualSelfParameterAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputActualSelfParameterAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inputActualSelfParameterAST class
//--------------------------------------------------------------------------------------------------

class cPtr_inputActualSelfParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputActualSelfParameterAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_location & inOperand1,
                                                             const class GGS__5B_lstring_5D_ & inOperand2,
                                                             Compiler * inCompiler) ;


//--- Extension func isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST _inFormalPassingMode,
           const class GGS_string _inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS__5B_actualParameterForGeneration_5D_ & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS__5B_actualOutputArgumentAST_5D_ & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: GGS_location mProperty_mSelfLocation ;
  public: GGS__5B_lstring_5D_ mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputActualSelfParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputActualSelfParameterAST (const GGS_lstring & in_mActualSelector,
                                            const GGS_location & in_mSelfLocation,
                                            const GGS__5B_lstring_5D_ & in_mPoisonedVarNameList,
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
// Phase 1: @inputActualNewVariableParameterAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputActualNewVariableParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_inputActualNewVariableParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputActualNewVariableParameterAST (const class cPtr_inputActualNewVariableParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

  public: class GGS_lstring readProperty_mInputOptionalActualTypeName (void) const ;

  public: class GGS_lstring readProperty_mInputActualParameterName (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputActualNewVariableParameterAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_lstring & inOperand2,
                                                                              const class GGS__5B_lstring_5D_ & inOperand3,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputActualNewVariableParameterAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inputActualNewVariableParameterAST class
//--------------------------------------------------------------------------------------------------

class cPtr_inputActualNewVariableParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputActualNewVariableParameterAST_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS__5B_lstring_5D_ & inOperand3,
                                                                        Compiler * inCompiler) ;


//--- Extension func isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST _inFormalPassingMode,
           const class GGS_string _inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS__5B_actualParameterForGeneration_5D_ & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS__5B_actualOutputArgumentAST_5D_ & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: GGS_lstring mProperty_mInputOptionalActualTypeName ;
  public: GGS_lstring mProperty_mInputActualParameterName ;
  public: GGS__5B_lstring_5D_ mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputActualNewVariableParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputActualNewVariableParameterAST (const GGS_lstring & in_mActualSelector,
                                                   const GGS_lstring & in_mInputOptionalActualTypeName,
                                                   const GGS_lstring & in_mInputActualParameterName,
                                                   const GGS__5B_lstring_5D_ & in_mPoisonedVarNameList,
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
// Phase 1: @inputActualNewConstantParameterAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputActualNewConstantParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_inputActualNewConstantParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputActualNewConstantParameterAST (const class cPtr_inputActualNewConstantParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

  public: class GGS_lstring readProperty_mInputOptionalActualTypeName (void) const ;

  public: class GGS_lstring readProperty_mInputActualParameterName (void) const ;

  public: class GGS_bool readProperty_mMarkedAsUnused (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputActualNewConstantParameterAST init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_lstring & inOperand2,
                                                                                  const class GGS_bool & inOperand3,
                                                                                  const class GGS__5B_lstring_5D_ & inOperand4,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputActualNewConstantParameterAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inputActualNewConstantParameterAST class
//--------------------------------------------------------------------------------------------------

class cPtr_inputActualNewConstantParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputActualNewConstantParameterAST_init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_lstring & inOperand2,
                                                                            const class GGS_bool & inOperand3,
                                                                            const class GGS__5B_lstring_5D_ & inOperand4,
                                                                            Compiler * inCompiler) ;


//--- Extension func isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST _inFormalPassingMode,
           const class GGS_string _inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS__5B_actualParameterForGeneration_5D_ & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS__5B_actualOutputArgumentAST_5D_ & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: GGS_lstring mProperty_mInputOptionalActualTypeName ;
  public: GGS_lstring mProperty_mInputActualParameterName ;
  public: GGS_bool mProperty_mMarkedAsUnused ;
  public: GGS__5B_lstring_5D_ mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputActualNewConstantParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputActualNewConstantParameterAST (const GGS_lstring & in_mActualSelector,
                                                   const GGS_lstring & in_mInputOptionalActualTypeName,
                                                   const GGS_lstring & in_mInputActualParameterName,
                                                   const GGS_bool & in_mMarkedAsUnused,
                                                   const GGS__5B_lstring_5D_ & in_mPoisonedVarNameList,
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
// Phase 1: @inputSingleJokerActualParameterAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputSingleJokerActualParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_inputSingleJokerActualParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputSingleJokerActualParameterAST (const class cPtr_inputSingleJokerActualParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputSingleJokerActualParameterAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS__5B_lstring_5D_ & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputSingleJokerActualParameterAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inputSingleJokerActualParameterAST class
//--------------------------------------------------------------------------------------------------

class cPtr_inputSingleJokerActualParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputSingleJokerActualParameterAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS__5B_lstring_5D_ & inOperand1,
                                                                Compiler * inCompiler) ;


//--- Extension func isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST _inFormalPassingMode,
           const class GGS_string _inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS__5B_actualParameterForGeneration_5D_ & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS__5B_actualOutputArgumentAST_5D_ & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: GGS__5B_lstring_5D_ mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputSingleJokerActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputSingleJokerActualParameterAST (const GGS_lstring & in_mActualSelector,
                                                   const GGS__5B_lstring_5D_ & in_mPoisonedVarNameList,
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
// Phase 1: @inputJokerActualParameterAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputJokerActualParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_inputJokerActualParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputJokerActualParameterAST (const class cPtr_inputJokerActualParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mQualifierLocation (void) const ;

  public: class GGS_u_33__32_ readProperty_mJokerIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputJokerActualParameterAST init_21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_u_33__32_ & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputJokerActualParameterAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputJokerActualParameterAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inputJokerActualParameterAST class
//--------------------------------------------------------------------------------------------------

class cPtr_inputJokerActualParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputJokerActualParameterAST_init_21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_u_33__32_ & inOperand1,
                                                          Compiler * inCompiler) ;


//--- Extension func isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST _inFormalPassingMode,
           const class GGS_string _inSelector,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkAgainstFormalArgument
  public: virtual void method_checkAgainstFormalArgument (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lstring arg_inFormalSelector,
           const class GGS_unifiedTypeMapEntry arg_inFormalArgumentType,
           const class GGS_formalArgumentPassingModeAST arg_inFormalArgumentPassingMode,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS__5B_actualParameterForGeneration_5D_ & arg_ioActualParameterListForGeneration,
           class GGS_stringset & arg_ioExclusiveVariableSet,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS__5B_actualOutputArgumentAST_5D_ & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mQualifierLocation ;
  public: GGS_u_33__32_ mProperty_mJokerIndex ;


//--- Default constructor
  public: cPtr_inputJokerActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputJokerActualParameterAST (const GGS_location & in_mQualifierLocation,
                                             const GGS_u_33__32_ & in_mJokerIndex,
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
// Phase 1: @guiSimpleAttributeAST struct
//--------------------------------------------------------------------------------------------------

class GGS_guiSimpleAttributeAST final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mKey ;
  public: inline GGS_lstring readProperty_mKey (void) const {
    return mProperty_mKey ;
  }

  public: GGS_lstring mProperty_mValue ;
  public: inline GGS_lstring readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guiSimpleAttributeAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMKey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKey = inValue ;
  }

  public: inline void setter_setMValue (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guiSimpleAttributeAST (const GGS_lstring & in_mKey,
                                     const GGS_lstring & in_mValue) ;

//--------------------------------- Copy constructor
  public: GGS_guiSimpleAttributeAST (const GGS_guiSimpleAttributeAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guiSimpleAttributeAST & operator = (const GGS_guiSimpleAttributeAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guiSimpleAttributeAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                         const class GGS_lstring & inOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiSimpleAttributeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guiCompoundAttributeAST struct
//--------------------------------------------------------------------------------------------------

class GGS_guiCompoundAttributeAST final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mKey ;
  public: inline GGS_lstring readProperty_mKey (void) const {
    return mProperty_mKey ;
  }

  public: GGS_lstring mProperty_mAttributeName ;
  public: inline GGS_lstring readProperty_mAttributeName (void) const {
    return mProperty_mAttributeName ;
  }

  public: GGS_lstring mProperty_mValue ;
  public: inline GGS_lstring readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guiCompoundAttributeAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMKey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKey = inValue ;
  }

  public: inline void setter_setMAttributeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeName = inValue ;
  }

  public: inline void setter_setMValue (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guiCompoundAttributeAST (const GGS_lstring & in_mKey,
                                       const GGS_lstring & in_mAttributeName,
                                       const GGS_lstring & in_mValue) ;

//--------------------------------- Copy constructor
  public: GGS_guiCompoundAttributeAST (const GGS_guiCompoundAttributeAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guiCompoundAttributeAST & operator = (const GGS_guiCompoundAttributeAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guiCompoundAttributeAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_lstring & inOperand1,
                                                               const class GGS_lstring & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiCompoundAttributeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalLabelAST struct
//--------------------------------------------------------------------------------------------------

class GGS_terminalLabelAST final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mTerminal ;
  public: inline GGS_lstring readProperty_mTerminal (void) const {
    return mProperty_mTerminal ;
  }

  public: GGS_u_33__32_ mProperty_mDisplayFlags ;
  public: inline GGS_u_33__32_ readProperty_mDisplayFlags (void) const {
    return mProperty_mDisplayFlags ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_terminalLabelAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTerminal (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminal = inValue ;
  }

  public: inline void setter_setMDisplayFlags (const GGS_u_33__32_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDisplayFlags = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_terminalLabelAST (const GGS_lstring & in_mTerminal,
                                const GGS_u_33__32_ & in_mDisplayFlags) ;

//--------------------------------- Copy constructor
  public: GGS_terminalLabelAST (const GGS_terminalLabelAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_terminalLabelAST & operator = (const GGS_terminalLabelAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalLabelAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                    const class GGS_u_33__32_ & inOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalLabelAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [terminalLabelAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_terminalLabelAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_terminalLabelAST_5D_ (const class GGS__5B_terminalLabelAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_terminalLabelAST_5D_ (const DownEnumerator__5B_terminalLabelAST_5D_ &) = delete ;
  private: DownEnumerator__5B_terminalLabelAST_5D_ & operator = (const DownEnumerator__5B_terminalLabelAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_terminalLabelAST current (LOCATION_ARGS) const ;
  public: class GGS_terminalLabelAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_terminalLabelAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_terminalLabelAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_terminalLabelAST_5D_ (const class GGS__5B_terminalLabelAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_terminalLabelAST_5D_ (const UpEnumerator__5B_terminalLabelAST_5D_ &) = delete ;
  private: UpEnumerator__5B_terminalLabelAST_5D_ & operator = (const UpEnumerator__5B_terminalLabelAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_terminalLabelAST current (LOCATION_ARGS) const ;
  public: class GGS_terminalLabelAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_terminalLabelAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_terminalLabelAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_terminalLabelAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_terminalLabelAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_terminalLabelAST_5D_ (const GGS__5B_terminalLabelAST_5D_ & inSource) ;
  public: GGS__5B_terminalLabelAST_5D_ & operator = (const GGS__5B_terminalLabelAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_terminalLabelAST_5D_ init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_terminalLabelAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_terminalLabelAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_terminalLabelAST_5D_ add_operation (const GGS__5B_terminalLabelAST_5D_ & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_terminalLabelAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_terminalLabelAST constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_terminalLabelAST & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_terminalLabelAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_terminalLabelAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_terminalLabelAST getter_first (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_terminalLabelAST getter_last (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_terminalLabelAST_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_terminalLabelAST_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                             const class GGS_u_33__32_ & constinOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_terminalLabelAST readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_terminalLabelAST inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_terminalLabelAST_5D_ ;
  friend class DownEnumerator__5B_terminalLabelAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_terminalLabelAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guiLabelAST struct
//--------------------------------------------------------------------------------------------------

class GGS_guiLabelAST final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_u_33__32_ mProperty_mLeadingCharacterStrippedCount ;
  public: inline GGS_u_33__32_ readProperty_mLeadingCharacterStrippedCount (void) const {
    return mProperty_mLeadingCharacterStrippedCount ;
  }

  public: GGS__5B_terminalLabelAST_5D_ mProperty_mTerminalList ;
  public: inline GGS__5B_terminalLabelAST_5D_ readProperty_mTerminalList (void) const {
    return mProperty_mTerminalList ;
  }

  public: GGS_location mProperty_mLocation ;
  public: inline GGS_location readProperty_mLocation (void) const {
    return mProperty_mLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guiLabelAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLeadingCharacterStrippedCount (const GGS_u_33__32_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLeadingCharacterStrippedCount = inValue ;
  }

  public: inline void setter_setMTerminalList (const GGS__5B_terminalLabelAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalList = inValue ;
  }

  public: inline void setter_setMLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guiLabelAST (const GGS_u_33__32_ & in_mLeadingCharacterStrippedCount,
                           const GGS__5B_terminalLabelAST_5D_ & in_mTerminalList,
                           const GGS_location & in_mLocation) ;

//--------------------------------- Copy constructor
  public: GGS_guiLabelAST (const GGS_guiLabelAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guiLabelAST & operator = (const GGS_guiLabelAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guiLabelAST init_21__21__21_ (const class GGS_u_33__32_ & inOperand0,
                                                   const class GGS__5B_terminalLabelAST_5D_ & inOperand1,
                                                   const class GGS_location & inOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiLabelAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [guiLabelAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_guiLabelAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_guiLabelAST_5D_ (const class GGS__5B_guiLabelAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_guiLabelAST_5D_ (const DownEnumerator__5B_guiLabelAST_5D_ &) = delete ;
  private: DownEnumerator__5B_guiLabelAST_5D_ & operator = (const DownEnumerator__5B_guiLabelAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_guiLabelAST current (LOCATION_ARGS) const ;
  public: class GGS_guiLabelAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_guiLabelAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_guiLabelAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_guiLabelAST_5D_ (const class GGS__5B_guiLabelAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_guiLabelAST_5D_ (const UpEnumerator__5B_guiLabelAST_5D_ &) = delete ;
  private: UpEnumerator__5B_guiLabelAST_5D_ & operator = (const UpEnumerator__5B_guiLabelAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_guiLabelAST current (LOCATION_ARGS) const ;
  public: class GGS_guiLabelAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_guiLabelAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_guiLabelAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_guiLabelAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_guiLabelAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_guiLabelAST_5D_ (const GGS__5B_guiLabelAST_5D_ & inSource) ;
  public: GGS__5B_guiLabelAST_5D_ & operator = (const GGS__5B_guiLabelAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_guiLabelAST_5D_ init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_guiLabelAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_guiLabelAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_guiLabelAST_5D_ add_operation (const GGS__5B_guiLabelAST_5D_ & inOperand,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_guiLabelAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_guiLabelAST constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_guiLabelAST & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_guiLabelAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_guiLabelAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_guiLabelAST getter_first (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_guiLabelAST getter_last (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_guiLabelAST_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_guiLabelAST_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                        const class GGS_u_33__32_ & constinOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_guiLabelAST readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_guiLabelAST inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_guiLabelAST_5D_ ;
  friend class DownEnumerator__5B_guiLabelAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_guiLabelAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [guiSimpleAttributeAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_guiSimpleAttributeAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_guiSimpleAttributeAST_5D_ (const class GGS__5B_guiSimpleAttributeAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_guiSimpleAttributeAST_5D_ (const DownEnumerator__5B_guiSimpleAttributeAST_5D_ &) = delete ;
  private: DownEnumerator__5B_guiSimpleAttributeAST_5D_ & operator = (const DownEnumerator__5B_guiSimpleAttributeAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_guiSimpleAttributeAST current (LOCATION_ARGS) const ;
  public: class GGS_guiSimpleAttributeAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_guiSimpleAttributeAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_guiSimpleAttributeAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_guiSimpleAttributeAST_5D_ (const class GGS__5B_guiSimpleAttributeAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_guiSimpleAttributeAST_5D_ (const UpEnumerator__5B_guiSimpleAttributeAST_5D_ &) = delete ;
  private: UpEnumerator__5B_guiSimpleAttributeAST_5D_ & operator = (const UpEnumerator__5B_guiSimpleAttributeAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_guiSimpleAttributeAST current (LOCATION_ARGS) const ;
  public: class GGS_guiSimpleAttributeAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_guiSimpleAttributeAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_guiSimpleAttributeAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_guiSimpleAttributeAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_guiSimpleAttributeAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_guiSimpleAttributeAST_5D_ (const GGS__5B_guiSimpleAttributeAST_5D_ & inSource) ;
  public: GGS__5B_guiSimpleAttributeAST_5D_ & operator = (const GGS__5B_guiSimpleAttributeAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_guiSimpleAttributeAST_5D_ init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_guiSimpleAttributeAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_guiSimpleAttributeAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_guiSimpleAttributeAST_5D_ add_operation (const GGS__5B_guiSimpleAttributeAST_5D_ & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_guiSimpleAttributeAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_guiSimpleAttributeAST constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_guiSimpleAttributeAST & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_guiSimpleAttributeAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_guiSimpleAttributeAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_guiSimpleAttributeAST getter_first (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_guiSimpleAttributeAST getter_last (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_guiSimpleAttributeAST_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_guiSimpleAttributeAST_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                                  const class GGS_u_33__32_ & constinOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_guiSimpleAttributeAST readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_guiSimpleAttributeAST inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_guiSimpleAttributeAST_5D_ ;
  friend class DownEnumerator__5B_guiSimpleAttributeAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_guiSimpleAttributeAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [guiCompoundAttributeAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_guiCompoundAttributeAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_guiCompoundAttributeAST_5D_ (const class GGS__5B_guiCompoundAttributeAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_guiCompoundAttributeAST_5D_ (const DownEnumerator__5B_guiCompoundAttributeAST_5D_ &) = delete ;
  private: DownEnumerator__5B_guiCompoundAttributeAST_5D_ & operator = (const DownEnumerator__5B_guiCompoundAttributeAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_guiCompoundAttributeAST current (LOCATION_ARGS) const ;
  public: class GGS_guiCompoundAttributeAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_guiCompoundAttributeAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_guiCompoundAttributeAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_guiCompoundAttributeAST_5D_ (const class GGS__5B_guiCompoundAttributeAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_guiCompoundAttributeAST_5D_ (const UpEnumerator__5B_guiCompoundAttributeAST_5D_ &) = delete ;
  private: UpEnumerator__5B_guiCompoundAttributeAST_5D_ & operator = (const UpEnumerator__5B_guiCompoundAttributeAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_guiCompoundAttributeAST current (LOCATION_ARGS) const ;
  public: class GGS_guiCompoundAttributeAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_guiCompoundAttributeAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_guiCompoundAttributeAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_guiCompoundAttributeAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_guiCompoundAttributeAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_guiCompoundAttributeAST_5D_ (const GGS__5B_guiCompoundAttributeAST_5D_ & inSource) ;
  public: GGS__5B_guiCompoundAttributeAST_5D_ & operator = (const GGS__5B_guiCompoundAttributeAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_guiCompoundAttributeAST_5D_ init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_guiCompoundAttributeAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_guiCompoundAttributeAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_guiCompoundAttributeAST_5D_ add_operation (const GGS__5B_guiCompoundAttributeAST_5D_ & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_guiCompoundAttributeAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_guiCompoundAttributeAST constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_guiCompoundAttributeAST & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_guiCompoundAttributeAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_guiCompoundAttributeAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_guiCompoundAttributeAST getter_first (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_guiCompoundAttributeAST getter_last (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_guiCompoundAttributeAST_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_guiCompoundAttributeAST_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                                    const class GGS_u_33__32_ & constinOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_guiCompoundAttributeAST readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_guiCompoundAttributeAST inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_guiCompoundAttributeAST_5D_ ;
  friend class DownEnumerator__5B_guiCompoundAttributeAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_guiCompoundAttributeAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @withLexiqueAST struct
//--------------------------------------------------------------------------------------------------

class GGS_withLexiqueAST final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mLexiqueFileName ;
  public: inline GGS_lstring readProperty_mLexiqueFileName (void) const {
    return mProperty_mLexiqueFileName ;
  }

  public: GGS__5B_guiLabelAST_5D_ mProperty_mLabels ;
  public: inline GGS__5B_guiLabelAST_5D_ readProperty_mLabels (void) const {
    return mProperty_mLabels ;
  }

  public: GGS__5B_guiSimpleAttributeAST_5D_ mProperty_mSimpleAttributes ;
  public: inline GGS__5B_guiSimpleAttributeAST_5D_ readProperty_mSimpleAttributes (void) const {
    return mProperty_mSimpleAttributes ;
  }

  public: GGS__5B_guiCompoundAttributeAST_5D_ mProperty_mCompoundAttributes ;
  public: inline GGS__5B_guiCompoundAttributeAST_5D_ readProperty_mCompoundAttributes (void) const {
    return mProperty_mCompoundAttributes ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_withLexiqueAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexiqueFileName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexiqueFileName = inValue ;
  }

  public: inline void setter_setMLabels (const GGS__5B_guiLabelAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabels = inValue ;
  }

  public: inline void setter_setMSimpleAttributes (const GGS__5B_guiSimpleAttributeAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSimpleAttributes = inValue ;
  }

  public: inline void setter_setMCompoundAttributes (const GGS__5B_guiCompoundAttributeAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCompoundAttributes = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_withLexiqueAST (const GGS_lstring & in_mLexiqueFileName,
                              const GGS__5B_guiLabelAST_5D_ & in_mLabels,
                              const GGS__5B_guiSimpleAttributeAST_5D_ & in_mSimpleAttributes,
                              const GGS__5B_guiCompoundAttributeAST_5D_ & in_mCompoundAttributes) ;

//--------------------------------- Copy constructor
  public: GGS_withLexiqueAST (const GGS_withLexiqueAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_withLexiqueAST & operator = (const GGS_withLexiqueAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_withLexiqueAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS__5B_guiLabelAST_5D_ & inOperand1,
                                                          const class GGS__5B_guiSimpleAttributeAST_5D_ & inOperand2,
                                                          const class GGS__5B_guiCompoundAttributeAST_5D_ & inOperand3,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_withLexiqueAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMap map
//--------------------------------------------------------------------------------------------------

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionMap final {

  public: DownEnumerator_extensionMap (const class GGS_extensionMap & inMap) ;

  public: ~ DownEnumerator_extensionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_string current_mLexiqueName (LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ current_mIndex (LOCATION_ARGS) const ;

  public: class GGS_extensionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionMap (const DownEnumerator_extensionMap &) = delete ;
  private: DownEnumerator_extensionMap & operator = (const DownEnumerator_extensionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionMap final {
  public: UpEnumerator_extensionMap (const class GGS_extensionMap & inMap)  ;

  public: ~ UpEnumerator_extensionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mLexiqueName (LOCATION_ARGS) const ;
  public: class GGS_u_33__32_ current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_extensionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionMap (const UpEnumerator_extensionMap &) = delete ;
  private: UpEnumerator_extensionMap & operator = (const UpEnumerator_extensionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionMap final : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionMap (void) ;

//--- Handle copy
  public: GGS_extensionMap (const GGS_extensionMap & inSource) ;
  public: GGS_extensionMap & operator = (const GGS_extensionMap & inSource) ;

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
  protected: void performInsert (const class GGS_extensionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> infoForKey (const String & inKey) const ;

//--- Count
  public: int32_t count (void) const ;

//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMap init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMap class_func_mapWithMapToOverride (const class GGS_extensionMap & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_string constinArgument1,
                                 class GGS_u_33__32_ constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMIndexForKey (class GGS_u_33__32_ constinArgument0,
                                       class GGS_string constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexiqueNameForKey (class GGS_string constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_u_33__32_ & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_mIndexForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mLexiqueNameForKey (const class GGS_string & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionMap getter_overriddenMap (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_extensionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionMap ;
  friend class DownEnumerator_extensionMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionMap_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_string mProperty_mLexiqueName ;
  public: inline GGS_string readProperty_mLexiqueName (void) const {
    return mProperty_mLexiqueName ;
  }

  public: GGS_u_33__32_ mProperty_mIndex ;
  public: inline GGS_u_33__32_ readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexiqueName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexiqueName = inValue ;
  }

  public: inline void setter_setMIndex (const GGS_u_33__32_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionMap_2E_element (const GGS_lstring & in_lkey,
                                       const GGS_string & in_mLexiqueName,
                                       const GGS_u_33__32_ & in_mIndex) ;

//--------------------------------- Copy constructor
  public: GGS_extensionMap_2E_element (const GGS_extensionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionMap_2E_element & operator = (const GGS_extensionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               const class GGS_u_33__32_ & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionMap_2E_element_3F_ (const GGS_extensionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionMap_2E_element unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @textMacroAST struct
//--------------------------------------------------------------------------------------------------

class GGS_textMacroAST final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mKey ;
  public: inline GGS_string readProperty_mKey (void) const {
    return mProperty_mKey ;
  }

  public: GGS_string mProperty_mContents ;
  public: inline GGS_string readProperty_mContents (void) const {
    return mProperty_mContents ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_textMacroAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMKey (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKey = inValue ;
  }

  public: inline void setter_setMContents (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mContents = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_textMacroAST (const GGS_string & in_mKey,
                            const GGS_string & in_mContents) ;

//--------------------------------- Copy constructor
  public: GGS_textMacroAST (const GGS_textMacroAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_textMacroAST & operator = (const GGS_textMacroAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_textMacroAST init_21__21_ (const class GGS_string & inOperand0,
                                                const class GGS_string & inOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_textMacroAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [textMacroAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_textMacroAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_textMacroAST_5D_ (const class GGS__5B_textMacroAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_textMacroAST_5D_ (const DownEnumerator__5B_textMacroAST_5D_ &) = delete ;
  private: DownEnumerator__5B_textMacroAST_5D_ & operator = (const DownEnumerator__5B_textMacroAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_textMacroAST current (LOCATION_ARGS) const ;
  public: class GGS_textMacroAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_textMacroAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_textMacroAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_textMacroAST_5D_ (const class GGS__5B_textMacroAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_textMacroAST_5D_ (const UpEnumerator__5B_textMacroAST_5D_ &) = delete ;
  private: UpEnumerator__5B_textMacroAST_5D_ & operator = (const UpEnumerator__5B_textMacroAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_textMacroAST current (LOCATION_ARGS) const ;
  public: class GGS_textMacroAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_textMacroAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_textMacroAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_textMacroAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_textMacroAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_textMacroAST_5D_ (const GGS__5B_textMacroAST_5D_ & inSource) ;
  public: GGS__5B_textMacroAST_5D_ & operator = (const GGS__5B_textMacroAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_textMacroAST_5D_ init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_textMacroAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_textMacroAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_textMacroAST_5D_ add_operation (const GGS__5B_textMacroAST_5D_ & inOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_textMacroAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_textMacroAST constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_textMacroAST & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_textMacroAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_textMacroAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_textMacroAST getter_first (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_textMacroAST getter_last (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_textMacroAST_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_textMacroAST_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                         const class GGS_u_33__32_ & constinOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_textMacroAST readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_textMacroAST inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_textMacroAST_5D_ ;
  friend class DownEnumerator__5B_textMacroAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_textMacroAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @importedLexiqueAST struct
//--------------------------------------------------------------------------------------------------

class GGS_importedLexiqueAST final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mLexiqueClassName ;
  public: inline GGS_string readProperty_mLexiqueClassName (void) const {
    return mProperty_mLexiqueClassName ;
  }

  public: GGS_u_33__32_ mProperty_mIndex ;
  public: inline GGS_u_33__32_ readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GGS_string mProperty_mBlockComment ;
  public: inline GGS_string readProperty_mBlockComment (void) const {
    return mProperty_mBlockComment ;
  }

  public: GGS_string mProperty_mTitle ;
  public: inline GGS_string readProperty_mTitle (void) const {
    return mProperty_mTitle ;
  }

  public: GGS__5B_textMacroAST_5D_ mProperty_mTextMacroList ;
  public: inline GGS__5B_textMacroAST_5D_ readProperty_mTextMacroList (void) const {
    return mProperty_mTextMacroList ;
  }

  public: GGS__5B_guiLabelAST_5D_ mProperty_mLabels ;
  public: inline GGS__5B_guiLabelAST_5D_ readProperty_mLabels (void) const {
    return mProperty_mLabels ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_importedLexiqueAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexiqueClassName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexiqueClassName = inValue ;
  }

  public: inline void setter_setMIndex (const GGS_u_33__32_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMBlockComment (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBlockComment = inValue ;
  }

  public: inline void setter_setMTitle (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTitle = inValue ;
  }

  public: inline void setter_setMTextMacroList (const GGS__5B_textMacroAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTextMacroList = inValue ;
  }

  public: inline void setter_setMLabels (const GGS__5B_guiLabelAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabels = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_importedLexiqueAST (const GGS_string & in_mLexiqueClassName,
                                  const GGS_u_33__32_ & in_mIndex,
                                  const GGS_string & in_mBlockComment,
                                  const GGS_string & in_mTitle,
                                  const GGS__5B_textMacroAST_5D_ & in_mTextMacroList,
                                  const GGS__5B_guiLabelAST_5D_ & in_mLabels) ;

//--------------------------------- Copy constructor
  public: GGS_importedLexiqueAST (const GGS_importedLexiqueAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_importedLexiqueAST & operator = (const GGS_importedLexiqueAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_importedLexiqueAST init_21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                      const class GGS_u_33__32_ & inOperand1,
                                                                      const class GGS_string & inOperand2,
                                                                      const class GGS_string & inOperand3,
                                                                      const class GGS__5B_textMacroAST_5D_ & inOperand4,
                                                                      const class GGS__5B_guiLabelAST_5D_ & inOperand5,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_importedLexiqueAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @projectIndexingDescriptorAST struct
//--------------------------------------------------------------------------------------------------

class GGS_projectIndexingDescriptorAST final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mProjectFileExtension ;
  public: inline GGS_lstring readProperty_mProjectFileExtension (void) const {
    return mProperty_mProjectFileExtension ;
  }

  public: GGS_lstring mProperty_indexingPathSuffix ;
  public: inline GGS_lstring readProperty_indexingPathSuffix (void) const {
    return mProperty_indexingPathSuffix ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_projectIndexingDescriptorAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProjectFileExtension (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectFileExtension = inValue ;
  }

  public: inline void setter_setIndexingPathSuffix (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_indexingPathSuffix = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_projectIndexingDescriptorAST (const GGS_lstring & in_mProjectFileExtension,
                                            const GGS_lstring & in_indexingPathSuffix) ;

//--------------------------------- Copy constructor
  public: GGS_projectIndexingDescriptorAST (const GGS_projectIndexingDescriptorAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_projectIndexingDescriptorAST & operator = (const GGS_projectIndexingDescriptorAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_projectIndexingDescriptorAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_projectIndexingDescriptorAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [withLexiqueAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_withLexiqueAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_withLexiqueAST_5D_ (const class GGS__5B_withLexiqueAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_withLexiqueAST_5D_ (const DownEnumerator__5B_withLexiqueAST_5D_ &) = delete ;
  private: DownEnumerator__5B_withLexiqueAST_5D_ & operator = (const DownEnumerator__5B_withLexiqueAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_withLexiqueAST current (LOCATION_ARGS) const ;
  public: class GGS_withLexiqueAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_withLexiqueAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_withLexiqueAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_withLexiqueAST_5D_ (const class GGS__5B_withLexiqueAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_withLexiqueAST_5D_ (const UpEnumerator__5B_withLexiqueAST_5D_ &) = delete ;
  private: UpEnumerator__5B_withLexiqueAST_5D_ & operator = (const UpEnumerator__5B_withLexiqueAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_withLexiqueAST current (LOCATION_ARGS) const ;
  public: class GGS_withLexiqueAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_withLexiqueAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_withLexiqueAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_withLexiqueAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_withLexiqueAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_withLexiqueAST_5D_ (const GGS__5B_withLexiqueAST_5D_ & inSource) ;
  public: GGS__5B_withLexiqueAST_5D_ & operator = (const GGS__5B_withLexiqueAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_withLexiqueAST_5D_ init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_withLexiqueAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_withLexiqueAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_withLexiqueAST_5D_ add_operation (const GGS__5B_withLexiqueAST_5D_ & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_withLexiqueAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_withLexiqueAST constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_withLexiqueAST & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_withLexiqueAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_withLexiqueAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_withLexiqueAST getter_first (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_withLexiqueAST getter_last (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_withLexiqueAST_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_withLexiqueAST_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                           const class GGS_u_33__32_ & constinOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_withLexiqueAST readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_withLexiqueAST inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_withLexiqueAST_5D_ ;
  friend class DownEnumerator__5B_withLexiqueAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_withLexiqueAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [projectIndexingDescriptorAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_projectIndexingDescriptorAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_projectIndexingDescriptorAST_5D_ (const class GGS__5B_projectIndexingDescriptorAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_projectIndexingDescriptorAST_5D_ (const DownEnumerator__5B_projectIndexingDescriptorAST_5D_ &) = delete ;
  private: DownEnumerator__5B_projectIndexingDescriptorAST_5D_ & operator = (const DownEnumerator__5B_projectIndexingDescriptorAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_projectIndexingDescriptorAST current (LOCATION_ARGS) const ;
  public: class GGS_projectIndexingDescriptorAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_projectIndexingDescriptorAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_projectIndexingDescriptorAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_projectIndexingDescriptorAST_5D_ (const class GGS__5B_projectIndexingDescriptorAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_projectIndexingDescriptorAST_5D_ (const UpEnumerator__5B_projectIndexingDescriptorAST_5D_ &) = delete ;
  private: UpEnumerator__5B_projectIndexingDescriptorAST_5D_ & operator = (const UpEnumerator__5B_projectIndexingDescriptorAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_projectIndexingDescriptorAST current (LOCATION_ARGS) const ;
  public: class GGS_projectIndexingDescriptorAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_projectIndexingDescriptorAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_projectIndexingDescriptorAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_projectIndexingDescriptorAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_projectIndexingDescriptorAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_projectIndexingDescriptorAST_5D_ (const GGS__5B_projectIndexingDescriptorAST_5D_ & inSource) ;
  public: GGS__5B_projectIndexingDescriptorAST_5D_ & operator = (const GGS__5B_projectIndexingDescriptorAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_projectIndexingDescriptorAST_5D_ init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_projectIndexingDescriptorAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_projectIndexingDescriptorAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_projectIndexingDescriptorAST_5D_ add_operation (const GGS__5B_projectIndexingDescriptorAST_5D_ & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_projectIndexingDescriptorAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_projectIndexingDescriptorAST constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_projectIndexingDescriptorAST & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_projectIndexingDescriptorAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_projectIndexingDescriptorAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_projectIndexingDescriptorAST getter_first (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_projectIndexingDescriptorAST getter_last (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_projectIndexingDescriptorAST_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_projectIndexingDescriptorAST_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                                         const class GGS_u_33__32_ & constinOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_projectIndexingDescriptorAST readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_projectIndexingDescriptorAST inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_projectIndexingDescriptorAST_5D_ ;
  friend class DownEnumerator__5B_projectIndexingDescriptorAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_projectIndexingDescriptorAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgasGUIComponentAST struct
//--------------------------------------------------------------------------------------------------

class GGS_galgasGUIComponentAST final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mGUIComponentName ;
  public: inline GGS_lstring readProperty_mGUIComponentName (void) const {
    return mProperty_mGUIComponentName ;
  }

  public: GGS__5B_guiSimpleAttributeAST_5D_ mProperty_mGlobalSimpleAttributeList ;
  public: inline GGS__5B_guiSimpleAttributeAST_5D_ readProperty_mGlobalSimpleAttributeList (void) const {
    return mProperty_mGlobalSimpleAttributeList ;
  }

  public: GGS__5B_withLexiqueAST_5D_ mProperty_mWithLexiqueList ;
  public: inline GGS__5B_withLexiqueAST_5D_ readProperty_mWithLexiqueList (void) const {
    return mProperty_mWithLexiqueList ;
  }

  public: GGS__5B_projectIndexingDescriptorAST_5D_ mProperty_mProjectIndexingDescriptorList ;
  public: inline GGS__5B_projectIndexingDescriptorAST_5D_ readProperty_mProjectIndexingDescriptorList (void) const {
    return mProperty_mProjectIndexingDescriptorList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_galgasGUIComponentAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGUIComponentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGUIComponentName = inValue ;
  }

  public: inline void setter_setMGlobalSimpleAttributeList (const GGS__5B_guiSimpleAttributeAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGlobalSimpleAttributeList = inValue ;
  }

  public: inline void setter_setMWithLexiqueList (const GGS__5B_withLexiqueAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWithLexiqueList = inValue ;
  }

  public: inline void setter_setMProjectIndexingDescriptorList (const GGS__5B_projectIndexingDescriptorAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectIndexingDescriptorList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_galgasGUIComponentAST (const GGS_lstring & in_mGUIComponentName,
                                     const GGS__5B_guiSimpleAttributeAST_5D_ & in_mGlobalSimpleAttributeList,
                                     const GGS__5B_withLexiqueAST_5D_ & in_mWithLexiqueList,
                                     const GGS__5B_projectIndexingDescriptorAST_5D_ & in_mProjectIndexingDescriptorList) ;

//--------------------------------- Copy constructor
  public: GGS_galgasGUIComponentAST (const GGS_galgasGUIComponentAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_galgasGUIComponentAST & operator = (const GGS_galgasGUIComponentAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgasGUIComponentAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS__5B_guiSimpleAttributeAST_5D_ & inOperand1,
                                                                 const class GGS__5B_withLexiqueAST_5D_ & inOperand2,
                                                                 const class GGS__5B_projectIndexingDescriptorAST_5D_ & inOperand3,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgasGUIComponentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [importedLexiqueAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_importedLexiqueAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_importedLexiqueAST_5D_ (const class GGS__5B_importedLexiqueAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_importedLexiqueAST_5D_ (const DownEnumerator__5B_importedLexiqueAST_5D_ &) = delete ;
  private: DownEnumerator__5B_importedLexiqueAST_5D_ & operator = (const DownEnumerator__5B_importedLexiqueAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_importedLexiqueAST current (LOCATION_ARGS) const ;
  public: class GGS_importedLexiqueAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_importedLexiqueAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_importedLexiqueAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_importedLexiqueAST_5D_ (const class GGS__5B_importedLexiqueAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_importedLexiqueAST_5D_ (const UpEnumerator__5B_importedLexiqueAST_5D_ &) = delete ;
  private: UpEnumerator__5B_importedLexiqueAST_5D_ & operator = (const UpEnumerator__5B_importedLexiqueAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_importedLexiqueAST current (LOCATION_ARGS) const ;
  public: class GGS_importedLexiqueAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_importedLexiqueAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_importedLexiqueAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_importedLexiqueAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_importedLexiqueAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_importedLexiqueAST_5D_ (const GGS__5B_importedLexiqueAST_5D_ & inSource) ;
  public: GGS__5B_importedLexiqueAST_5D_ & operator = (const GGS__5B_importedLexiqueAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_importedLexiqueAST_5D_ init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_importedLexiqueAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_importedLexiqueAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_importedLexiqueAST_5D_ add_operation (const GGS__5B_importedLexiqueAST_5D_ & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_importedLexiqueAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_importedLexiqueAST constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_importedLexiqueAST & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_importedLexiqueAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_importedLexiqueAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_importedLexiqueAST getter_first (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_importedLexiqueAST getter_last (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_importedLexiqueAST_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_importedLexiqueAST_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                               const class GGS_u_33__32_ & constinOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_importedLexiqueAST readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_importedLexiqueAST inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_importedLexiqueAST_5D_ ;
  friend class DownEnumerator__5B_importedLexiqueAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_importedLexiqueAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guiAnalysisContext struct
//--------------------------------------------------------------------------------------------------

class GGS_guiAnalysisContext final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_string_5D_ mProperty_mImportedOptionComponentList ;
  public: inline GGS__5B_string_5D_ readProperty_mImportedOptionComponentList (void) const {
    return mProperty_mImportedOptionComponentList ;
  }

  public: GGS__5B_string_5D_ mProperty_mNibAndClassList ;
  public: inline GGS__5B_string_5D_ readProperty_mNibAndClassList (void) const {
    return mProperty_mNibAndClassList ;
  }

  public: GGS_extensionMap mProperty_mExtensionMap ;
  public: inline GGS_extensionMap readProperty_mExtensionMap (void) const {
    return mProperty_mExtensionMap ;
  }

  public: GGS__5B_importedLexiqueAST_5D_ mProperty_mWithLexiqueList ;
  public: inline GGS__5B_importedLexiqueAST_5D_ readProperty_mWithLexiqueList (void) const {
    return mProperty_mWithLexiqueList ;
  }

  public: GGS_string mProperty_mBuildRunOption ;
  public: inline GGS_string readProperty_mBuildRunOption (void) const {
    return mProperty_mBuildRunOption ;
  }

  public: GGS__5B_projectIndexingDescriptorAST_5D_ mProperty_mProjectIndexingDescriptorList ;
  public: inline GGS__5B_projectIndexingDescriptorAST_5D_ readProperty_mProjectIndexingDescriptorList (void) const {
    return mProperty_mProjectIndexingDescriptorList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guiAnalysisContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMImportedOptionComponentList (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImportedOptionComponentList = inValue ;
  }

  public: inline void setter_setMNibAndClassList (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNibAndClassList = inValue ;
  }

  public: inline void setter_setMExtensionMap (const GGS_extensionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtensionMap = inValue ;
  }

  public: inline void setter_setMWithLexiqueList (const GGS__5B_importedLexiqueAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWithLexiqueList = inValue ;
  }

  public: inline void setter_setMBuildRunOption (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildRunOption = inValue ;
  }

  public: inline void setter_setMProjectIndexingDescriptorList (const GGS__5B_projectIndexingDescriptorAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectIndexingDescriptorList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guiAnalysisContext (const GGS__5B_string_5D_ & in_mImportedOptionComponentList,
                                  const GGS__5B_string_5D_ & in_mNibAndClassList,
                                  const GGS_extensionMap & in_mExtensionMap,
                                  const GGS__5B_importedLexiqueAST_5D_ & in_mWithLexiqueList,
                                  const GGS_string & in_mBuildRunOption,
                                  const GGS__5B_projectIndexingDescriptorAST_5D_ & in_mProjectIndexingDescriptorList) ;

//--------------------------------- Copy constructor
  public: GGS_guiAnalysisContext (const GGS_guiAnalysisContext & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guiAnalysisContext & operator = (const GGS_guiAnalysisContext & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guiAnalysisContext init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiAnalysisContext ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionComponentMapForGeneration map
//--------------------------------------------------------------------------------------------------

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_optionComponentMapForGeneration final {

  public: DownEnumerator_optionComponentMapForGeneration (const class GGS_optionComponentMapForGeneration & inMap) ;

  public: ~ DownEnumerator_optionComponentMapForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_guiAnalysisContext current_mGuiComponentContext (LOCATION_ARGS) const ;

  public: class GGS_optionComponentMapForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_optionComponentMapForGeneration (const DownEnumerator_optionComponentMapForGeneration &) = delete ;
  private: DownEnumerator_optionComponentMapForGeneration & operator = (const DownEnumerator_optionComponentMapForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_optionComponentMapForGeneration final {
  public: UpEnumerator_optionComponentMapForGeneration (const class GGS_optionComponentMapForGeneration & inMap)  ;

  public: ~ UpEnumerator_optionComponentMapForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_guiAnalysisContext current_mGuiComponentContext (LOCATION_ARGS) const ;
  public: class GGS_optionComponentMapForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_optionComponentMapForGeneration (const UpEnumerator_optionComponentMapForGeneration &) = delete ;
  private: UpEnumerator_optionComponentMapForGeneration & operator = (const UpEnumerator_optionComponentMapForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_optionComponentMapForGeneration final : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_optionComponentMapForGeneration_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_optionComponentMapForGeneration (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_optionComponentMapForGeneration (void) ;

//--- Handle copy
  public: GGS_optionComponentMapForGeneration (const GGS_optionComponentMapForGeneration & inSource) ;
  public: GGS_optionComponentMapForGeneration & operator = (const GGS_optionComponentMapForGeneration & inSource) ;

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
  protected: void performInsert (const class GGS_optionComponentMapForGeneration_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element> infoForKey (const String & inKey) const ;

//--- Count
  public: int32_t count (void) const ;

//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForGeneration_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionComponentMapForGeneration init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_optionComponentMapForGeneration class_func_mapWithMapToOverride (const class GGS_optionComponentMapForGeneration & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_guiAnalysisContext constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMGuiComponentContextForKey (class GGS_guiAnalysisContext constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_u_33__32_ & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_guiAnalysisContext getter_mGuiComponentContextForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_optionComponentMapForGeneration getter_overriddenMap (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_optionComponentMapForGeneration_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_optionComponentMapForGeneration ;
  friend class DownEnumerator_optionComponentMapForGeneration ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentMapForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionComponentMapForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_optionComponentMapForGeneration_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_guiAnalysisContext mProperty_mGuiComponentContext ;
  public: inline GGS_guiAnalysisContext readProperty_mGuiComponentContext (void) const {
    return mProperty_mGuiComponentContext ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_optionComponentMapForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMGuiComponentContext (const GGS_guiAnalysisContext & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGuiComponentContext = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_optionComponentMapForGeneration_2E_element (const GGS_lstring & in_lkey,
                                                          const GGS_guiAnalysisContext & in_mGuiComponentContext) ;

//--------------------------------- Copy constructor
  public: GGS_optionComponentMapForGeneration_2E_element (const GGS_optionComponentMapForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_optionComponentMapForGeneration_2E_element & operator = (const GGS_optionComponentMapForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionComponentMapForGeneration_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_guiAnalysisContext & inOperand1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentMapForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: optionComponentMapForGeneration.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_optionComponentMapForGeneration_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_optionComponentMapForGeneration_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_optionComponentMapForGeneration_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_optionComponentMapForGeneration_2E_element_3F_ (const GGS_optionComponentMapForGeneration_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_optionComponentMapForGeneration_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_optionComponentMapForGeneration_2E_element unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentMapForGeneration_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [galgasGUIComponentAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_galgasGUIComponentAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_galgasGUIComponentAST_5D_ (const class GGS__5B_galgasGUIComponentAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_galgasGUIComponentAST_5D_ (const DownEnumerator__5B_galgasGUIComponentAST_5D_ &) = delete ;
  private: DownEnumerator__5B_galgasGUIComponentAST_5D_ & operator = (const DownEnumerator__5B_galgasGUIComponentAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_galgasGUIComponentAST current (LOCATION_ARGS) const ;
  public: class GGS_galgasGUIComponentAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_galgasGUIComponentAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_galgasGUIComponentAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_galgasGUIComponentAST_5D_ (const class GGS__5B_galgasGUIComponentAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_galgasGUIComponentAST_5D_ (const UpEnumerator__5B_galgasGUIComponentAST_5D_ &) = delete ;
  private: UpEnumerator__5B_galgasGUIComponentAST_5D_ & operator = (const UpEnumerator__5B_galgasGUIComponentAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_galgasGUIComponentAST current (LOCATION_ARGS) const ;
  public: class GGS_galgasGUIComponentAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_galgasGUIComponentAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_galgasGUIComponentAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_galgasGUIComponentAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_galgasGUIComponentAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_galgasGUIComponentAST_5D_ (const GGS__5B_galgasGUIComponentAST_5D_ & inSource) ;
  public: GGS__5B_galgasGUIComponentAST_5D_ & operator = (const GGS__5B_galgasGUIComponentAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_galgasGUIComponentAST_5D_ init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_galgasGUIComponentAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_galgasGUIComponentAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_galgasGUIComponentAST_5D_ add_operation (const GGS__5B_galgasGUIComponentAST_5D_ & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_galgasGUIComponentAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_galgasGUIComponentAST constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_galgasGUIComponentAST & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_galgasGUIComponentAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_galgasGUIComponentAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_galgasGUIComponentAST getter_first (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_galgasGUIComponentAST getter_last (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_galgasGUIComponentAST_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_galgasGUIComponentAST_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                                  const class GGS_u_33__32_ & constinOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_galgasGUIComponentAST readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_galgasGUIComponentAST inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_galgasGUIComponentAST_5D_ ;
  friend class DownEnumerator__5B_galgasGUIComponentAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_galgasGUIComponentAST_5D_ ;

//--------------------------------------------------------------------------------------------------
//§Filewrapper§ 'guiGenerationTemplates'
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const DirectoryWrapper gWrapperDirectory_0_guiGenerationTemplates ;

//--------------------------------------------------------------------------------------------------
// Phase 1: filewrapper @guiGenerationTemplates
//--------------------------------------------------------------------------------------------------

class GGS_guiGenerationTemplates final {

//-- Start of package generic part

//--------------------------------- GALGAS class getters
  public: static class GGS_filewrapper class_func_contents (LOCATION_ARGS) ;

  public: static class GGS_string class_func_swiftui_5F_gui_5F_implementation (const class GGS_guiAnalysisContext & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Class Methods

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonterminalCallInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_nonterminalCallInstruction : public GGS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GGS_nonterminalCallInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_nonterminalCallInstruction (const class cPtr_nonterminalCallInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mNonterminalName (void) const ;

  public: class GGS__5B_actualParameterAST_5D_ readProperty_mActualParameterList (void) const ;

  public: class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationResult (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonterminalCallInstruction init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS__5B_actualParameterAST_5D_ & inOperand2,
                                                                      const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand3,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nonterminalCallInstruction & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalCallInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @nonterminalCallInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_nonterminalCallInstruction : public cPtr_syntaxInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void nonterminalCallInstruction_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                const class GGS__5B_actualParameterAST_5D_ & inOperand2,
                                                                const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand3,
                                                                Compiler * inCompiler) ;


//--- Extension proc analyzeSyntaxInstruction
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
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_u_33__32_ & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc transformInstructionForGrammarAnalysis
  public: virtual void method_transformInstructionForGrammarAnalysis (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_u_33__32_ & arg_ioAddedNonTerminalIndex,
           class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mNonterminalName ;
  public: GGS__5B_actualParameterAST_5D_ mProperty_mActualParameterList ;
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationResult ;


//--- Default constructor
  public: cPtr_nonterminalCallInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_nonterminalCallInstruction (const GGS_location & in_mInstructionLocation,
                                           const GGS_lstring & in_mNonterminalName,
                                           const GGS__5B_actualParameterAST_5D_ & in_mActualParameterList,
                                           const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
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
// Phase 1: @nonterminalInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_nonterminalInstructionForGeneration : public GGS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_nonterminalInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_nonterminalInstructionForGeneration (const class cPtr_nonterminalInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mNonterminalName (void) const ;

  public: class GGS_string readProperty_mLabelName (void) const ;

  public: class GGS__5B_actualParameterForGeneration_5D_ readProperty_mActualParameterList (void) const ;

  public: class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationResult (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonterminalInstructionForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_string & inOperand2,
                                                                                   const class GGS__5B_actualParameterForGeneration_5D_ & inOperand3,
                                                                                   const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand4,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nonterminalInstructionForGeneration & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @nonterminalInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_nonterminalInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void nonterminalInstructionForGeneration_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             const class GGS_string & inOperand2,
                                                                             const class GGS__5B_actualParameterForGeneration_5D_ & inOperand3,
                                                                             const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand4,
                                                                             Compiler * inCompiler) ;


//--- Extension func compareInstructionSyntaxSignature
  public: virtual class GGS_bool getter_compareInstructionSyntaxSignature (const class GGS_semanticInstructionForGeneration _inTestedInstruction,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GGS_string arg__inPosfix,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg__ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mNonterminalName ;
  public: GGS_string mProperty_mLabelName ;
  public: GGS__5B_actualParameterForGeneration_5D_ mProperty_mActualParameterList ;
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationResult ;


//--- Default constructor
  public: cPtr_nonterminalInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_nonterminalInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                    const GGS_string & in_mNonterminalName,
                                                    const GGS_string & in_mLabelName,
                                                    const GGS__5B_actualParameterForGeneration_5D_ & in_mActualParameterList,
                                                    const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
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
// Phase 1: [2lstring] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B__32_lstring_5D_ final {
//--- Constructor
  public: DownEnumerator__5B__32_lstring_5D_ (const class GGS__5B__32_lstring_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B__32_lstring_5D_ (const DownEnumerator__5B__32_lstring_5D_ &) = delete ;
  private: DownEnumerator__5B__32_lstring_5D_ & operator = (const DownEnumerator__5B__32_lstring_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS__32_lstring current (LOCATION_ARGS) const ;
  public: class GGS__32_lstring current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS__32_lstring> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B__32_lstring_5D_ final {
//--- Constructor
  public: UpEnumerator__5B__32_lstring_5D_ (const class GGS__5B__32_lstring_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B__32_lstring_5D_ (const UpEnumerator__5B__32_lstring_5D_ &) = delete ;
  private: UpEnumerator__5B__32_lstring_5D_ & operator = (const UpEnumerator__5B__32_lstring_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS__32_lstring current (LOCATION_ARGS) const ;
  public: class GGS__32_lstring current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS__32_lstring> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B__32_lstring_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS__32_lstring> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B__32_lstring_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B__32_lstring_5D_ (const GGS__5B__32_lstring_5D_ & inSource) ;
  public: GGS__5B__32_lstring_5D_ & operator = (const GGS__5B__32_lstring_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B__32_lstring_5D_ init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B__32_lstring_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS__32_lstring & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B__32_lstring_5D_ add_operation (const GGS__5B__32_lstring_5D_ & inOperand,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS__32_lstring constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS__32_lstring constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS__32_lstring & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS__32_lstring & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS__32_lstring & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS__32_lstring getter_first (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__32_lstring getter_last (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B__32_lstring_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B__32_lstring_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                        const class GGS_u_33__32_ & constinOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS__32_lstring readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS__32_lstring inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B__32_lstring_5D_ ;
  friend class DownEnumerator__5B__32_lstring_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B__32_lstring_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @_32_lstring struct
//--------------------------------------------------------------------------------------------------

class GGS__32_lstring final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mValue_30_ ;
  public: inline GGS_lstring readProperty_mValue_30_ (void) const {
    return mProperty_mValue_30_ ;
  }

  public: GGS_lstring mProperty_mValue_31_ ;
  public: inline GGS_lstring readProperty_mValue_31_ (void) const {
    return mProperty_mValue_31_ ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS__32_lstring (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue_30_ (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_30_ = inValue ;
  }

  public: inline void setter_setMValue_31_ (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_31_ = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS__32_lstring (const GGS_lstring & in_mValue_30_,
                           const GGS_lstring & in_mValue_31_) ;

//--------------------------------- Copy constructor
  public: GGS__32_lstring (const GGS__32_lstring & inSource) ;

//--------------------------------- Assignment operator
  public: GGS__32_lstring & operator = (const GGS__32_lstring & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__32_lstring init_21__21_ (const class GGS_lstring & inOperand0,
                                               const class GGS_lstring & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstring ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [terminalCheckAssignement] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_terminalCheckAssignement_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_terminalCheckAssignement_5D_ (const class GGS__5B_terminalCheckAssignement_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_terminalCheckAssignement_5D_ (const DownEnumerator__5B_terminalCheckAssignement_5D_ &) = delete ;
  private: DownEnumerator__5B_terminalCheckAssignement_5D_ & operator = (const DownEnumerator__5B_terminalCheckAssignement_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_terminalCheckAssignement current (LOCATION_ARGS) const ;
  public: class GGS_terminalCheckAssignement current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_terminalCheckAssignement> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_terminalCheckAssignement_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_terminalCheckAssignement_5D_ (const class GGS__5B_terminalCheckAssignement_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_terminalCheckAssignement_5D_ (const UpEnumerator__5B_terminalCheckAssignement_5D_ &) = delete ;
  private: UpEnumerator__5B_terminalCheckAssignement_5D_ & operator = (const UpEnumerator__5B_terminalCheckAssignement_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_terminalCheckAssignement current (LOCATION_ARGS) const ;
  public: class GGS_terminalCheckAssignement current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_terminalCheckAssignement> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_terminalCheckAssignement_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_terminalCheckAssignement> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_terminalCheckAssignement_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_terminalCheckAssignement_5D_ (const GGS__5B_terminalCheckAssignement_5D_ & inSource) ;
  public: GGS__5B_terminalCheckAssignement_5D_ & operator = (const GGS__5B_terminalCheckAssignement_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_terminalCheckAssignement_5D_ init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_terminalCheckAssignement_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_terminalCheckAssignement & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_terminalCheckAssignement_5D_ add_operation (const GGS__5B_terminalCheckAssignement_5D_ & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_terminalCheckAssignement constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_terminalCheckAssignement constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_terminalCheckAssignement & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_terminalCheckAssignement & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_terminalCheckAssignement & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_terminalCheckAssignement getter_first (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_terminalCheckAssignement getter_last (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_terminalCheckAssignement_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_terminalCheckAssignement_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                                     const class GGS_u_33__32_ & constinOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_terminalCheckAssignement readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_terminalCheckAssignement inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_terminalCheckAssignement_5D_ ;
  friend class DownEnumerator__5B_terminalCheckAssignement_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_terminalCheckAssignement_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalCheckAssignement struct
//--------------------------------------------------------------------------------------------------

class GGS_terminalCheckAssignement final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mTypeName ;
  public: inline GGS_string readProperty_mTypeName (void) const {
    return mProperty_mTypeName ;
  }

  public: GGS_string mProperty_mTargetVarCppName ;
  public: inline GGS_string readProperty_mTargetVarCppName (void) const {
    return mProperty_mTargetVarCppName ;
  }

  public: GGS_string mProperty_mSourceLexicalAttributeName ;
  public: inline GGS_string readProperty_mSourceLexicalAttributeName (void) const {
    return mProperty_mSourceLexicalAttributeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_terminalCheckAssignement (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeName = inValue ;
  }

  public: inline void setter_setMTargetVarCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetVarCppName = inValue ;
  }

  public: inline void setter_setMSourceLexicalAttributeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceLexicalAttributeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_terminalCheckAssignement (const GGS_string & in_mTypeName,
                                        const GGS_string & in_mTargetVarCppName,
                                        const GGS_string & in_mSourceLexicalAttributeName) ;

//--------------------------------- Copy constructor
  public: GGS_terminalCheckAssignement (const GGS_terminalCheckAssignement & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_terminalCheckAssignement & operator = (const GGS_terminalCheckAssignement & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalCheckAssignement init_21__21__21_ (const class GGS_string & inOperand0,
                                                                const class GGS_string & inOperand1,
                                                                const class GGS_string & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckAssignement ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalCheckInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_terminalCheckInstructionAST : public GGS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GGS_terminalCheckInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_terminalCheckInstructionAST (const class cPtr_terminalCheckInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTerminalName (void) const ;

  public: class GGS__5B_actualInputParameterAST_5D_ readProperty_mActualInputParameterList (void) const ;

  public: class GGS__5B__32_lstring_5D_ readProperty_mIndexingKeyList (void) const ;

  public: class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (void) const ;

  public: class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalCheckInstructionAST init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               const class GGS__5B_actualInputParameterAST_5D_ & inOperand2,
                                                                               const class GGS__5B__32_lstring_5D_ & inOperand3,
                                                                               const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand4,
                                                                               const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand5,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_terminalCheckInstructionAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @terminalCheckInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_terminalCheckInstructionAST : public cPtr_syntaxInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void terminalCheckInstructionAST_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS__5B_actualInputParameterAST_5D_ & inOperand2,
                                                                         const class GGS__5B__32_lstring_5D_ & inOperand3,
                                                                         const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand4,
                                                                         const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand5,
                                                                         Compiler * inCompiler) ;


//--- Extension proc analyzeSyntaxInstruction
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
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_u_33__32_ & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc transformInstructionForGrammarAnalysis
  public: virtual void method_transformInstructionForGrammarAnalysis (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_u_33__32_ & arg_ioAddedNonTerminalIndex,
           class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTerminalName ;
  public: GGS__5B_actualInputParameterAST_5D_ mProperty_mActualInputParameterList ;
  public: GGS__5B__32_lstring_5D_ mProperty_mIndexingKeyList ;
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationToken ;


//--- Default constructor
  public: cPtr_terminalCheckInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_terminalCheckInstructionAST (const GGS_location & in_mInstructionLocation,
                                            const GGS_lstring & in_mTerminalName,
                                            const GGS__5B_actualInputParameterAST_5D_ & in_mActualInputParameterList,
                                            const GGS__5B__32_lstring_5D_ & in_mIndexingKeyList,
                                            const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                            const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
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
// Phase 1: @terminalInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

class GGS_terminalInstructionForGrammarAnalysis : public GGS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GGS_terminalInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_terminalInstructionForGrammarAnalysis (const class cPtr_terminalInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTerminalSymbolName (void) const ;

  public: class GGS_u_33__32_ readProperty_mTerminalSymbolIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalInstructionForGrammarAnalysis init_21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_u_33__32_ & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_terminalInstructionForGrammarAnalysis & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_terminalInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalCheckInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_terminalCheckInstructionForGeneration : public GGS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_terminalCheckInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_terminalCheckInstructionForGeneration (const class cPtr_terminalCheckInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTerminalName (void) const ;

  public: class GGS_string readProperty_mLexiqueIdentifier (void) const ;

  public: class GGS__5B_terminalCheckAssignement_5D_ readProperty_mTerminalCheckAssignementList (void) const ;

  public: class GGS__5B__32_lstring_5D_ readProperty_mIndexingKeyList (void) const ;

  public: class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (void) const ;

  public: class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalCheckInstructionForGeneration init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_string & inOperand2,
                                                                                             const class GGS__5B_terminalCheckAssignement_5D_ & inOperand3,
                                                                                             const class GGS__5B__32_lstring_5D_ & inOperand4,
                                                                                             const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand5,
                                                                                             const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_terminalCheckInstructionForGeneration & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @terminalCheckInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_terminalCheckInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void terminalCheckInstructionForGeneration_init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_string & inOperand2,
                                                                                       const class GGS__5B_terminalCheckAssignement_5D_ & inOperand3,
                                                                                       const class GGS__5B__32_lstring_5D_ & inOperand4,
                                                                                       const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand5,
                                                                                       const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6,
                                                                                       Compiler * inCompiler) ;


//--- Extension func compareInstructionSyntaxSignature
  public: virtual class GGS_bool getter_compareInstructionSyntaxSignature (const class GGS_semanticInstructionForGeneration _inTestedInstruction,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GGS_string arg__inPosfix,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg__ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTerminalName ;
  public: GGS_string mProperty_mLexiqueIdentifier ;
  public: GGS__5B_terminalCheckAssignement_5D_ mProperty_mTerminalCheckAssignementList ;
  public: GGS__5B__32_lstring_5D_ mProperty_mIndexingKeyList ;
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationToken ;


//--- Default constructor
  public: cPtr_terminalCheckInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_terminalCheckInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                      const GGS_lstring & in_mTerminalName,
                                                      const GGS_string & in_mLexiqueIdentifier,
                                                      const GGS__5B_terminalCheckAssignement_5D_ & in_mTerminalCheckAssignementList,
                                                      const GGS__5B__32_lstring_5D_ & in_mIndexingKeyList,
                                                      const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                      const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
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
// Phase 1: [SyntaxInstructionListAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_SyntaxInstructionListAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_SyntaxInstructionListAST_5D_ (const class GGS__5B_SyntaxInstructionListAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_SyntaxInstructionListAST_5D_ (const DownEnumerator__5B_SyntaxInstructionListAST_5D_ &) = delete ;
  private: DownEnumerator__5B_SyntaxInstructionListAST_5D_ & operator = (const DownEnumerator__5B_SyntaxInstructionListAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_SyntaxInstructionListAST current (LOCATION_ARGS) const ;
  public: class GGS_SyntaxInstructionListAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_SyntaxInstructionListAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_SyntaxInstructionListAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_SyntaxInstructionListAST_5D_ (const class GGS__5B_SyntaxInstructionListAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_SyntaxInstructionListAST_5D_ (const UpEnumerator__5B_SyntaxInstructionListAST_5D_ &) = delete ;
  private: UpEnumerator__5B_SyntaxInstructionListAST_5D_ & operator = (const UpEnumerator__5B_SyntaxInstructionListAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_SyntaxInstructionListAST current (LOCATION_ARGS) const ;
  public: class GGS_SyntaxInstructionListAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_SyntaxInstructionListAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_SyntaxInstructionListAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_SyntaxInstructionListAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_SyntaxInstructionListAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_SyntaxInstructionListAST_5D_ (const GGS__5B_SyntaxInstructionListAST_5D_ & inSource) ;
  public: GGS__5B_SyntaxInstructionListAST_5D_ & operator = (const GGS__5B_SyntaxInstructionListAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_SyntaxInstructionListAST_5D_ init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_SyntaxInstructionListAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_SyntaxInstructionListAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_SyntaxInstructionListAST_5D_ add_operation (const GGS__5B_SyntaxInstructionListAST_5D_ & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_SyntaxInstructionListAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_SyntaxInstructionListAST constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_SyntaxInstructionListAST & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_SyntaxInstructionListAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_SyntaxInstructionListAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_SyntaxInstructionListAST getter_first (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_SyntaxInstructionListAST getter_last (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_SyntaxInstructionListAST_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_SyntaxInstructionListAST_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                                     const class GGS_u_33__32_ & constinOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_SyntaxInstructionListAST readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_SyntaxInstructionListAST inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_SyntaxInstructionListAST_5D_ ;
  friend class DownEnumerator__5B_SyntaxInstructionListAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_SyntaxInstructionListAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @SyntaxInstructionListAST struct
//--------------------------------------------------------------------------------------------------

class GGS_SyntaxInstructionListAST final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_syntaxInstructionAST_5D_ mProperty_mSyntaxInstructionList ;
  public: inline GGS__5B_syntaxInstructionAST_5D_ readProperty_mSyntaxInstructionList (void) const {
    return mProperty_mSyntaxInstructionList ;
  }

  public: GGS_location mProperty_mEndOf_5F_instructions ;
  public: inline GGS_location readProperty_mEndOf_5F_instructions (void) const {
    return mProperty_mEndOf_5F_instructions ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_SyntaxInstructionListAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxInstructionList (const GGS__5B_syntaxInstructionAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxInstructionList = inValue ;
  }

  public: inline void setter_setMEndOf_5F_instructions (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOf_5F_instructions = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_SyntaxInstructionListAST (const GGS__5B_syntaxInstructionAST_5D_ & in_mSyntaxInstructionList,
                                        const GGS_location & in_mEndOf_5F_instructions) ;

//--------------------------------- Copy constructor
  public: GGS_SyntaxInstructionListAST (const GGS_SyntaxInstructionListAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_SyntaxInstructionListAST & operator = (const GGS_SyntaxInstructionListAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_SyntaxInstructionListAST init_21__21_ (const class GGS__5B_syntaxInstructionAST_5D_ & inOperand0,
                                                            const class GGS_location & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_SyntaxInstructionListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectInstruction : public GGS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GGS_selectInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selectInstruction (const class cPtr_selectInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS__5B_SyntaxInstructionListAST_5D_ readProperty_mSelectBranchList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_select_5F_instruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selectInstruction init_21__21__21_ (const class GGS_location & inOperand0,
                                                         const class GGS__5B_SyntaxInstructionListAST_5D_ & inOperand1,
                                                         const class GGS_location & inOperand2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectInstruction & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selectInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_selectInstruction : public cPtr_syntaxInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selectInstruction_init_21__21__21_ (const class GGS_location & inOperand0,
                                                   const class GGS__5B_SyntaxInstructionListAST_5D_ & inOperand1,
                                                   const class GGS_location & inOperand2,
                                                   Compiler * inCompiler) ;


//--- Extension proc analyzeSyntaxInstruction
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
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_u_33__32_ & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc transformInstructionForGrammarAnalysis
  public: virtual void method_transformInstructionForGrammarAnalysis (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_u_33__32_ & arg_ioAddedNonTerminalIndex,
           class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS__5B_SyntaxInstructionListAST_5D_ mProperty_mSelectBranchList ;
  public: GGS_location mProperty_mEndOf_5F_select_5F_instruction ;


//--- Default constructor
  public: cPtr_selectInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selectInstruction (const GGS_location & in_mInstructionLocation,
                                  const GGS__5B_SyntaxInstructionListAST_5D_ & in_mSelectBranchList,
                                  const GGS_location & in_mEndOf_5F_select_5F_instruction,
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
// Phase 1: [[abstractSyntaxInstructionForGrammarAnalysis]] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ final {
//--- Constructor
  public: DownEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ (const class GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ (const DownEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ &) = delete ;
  private: DownEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & operator = (const DownEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ current (LOCATION_ARGS) const ;
  public: class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ final {
//--- Constructor
  public: UpEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ (const class GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ (const UpEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ &) = delete ;
  private: UpEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & operator = (const UpEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ current (LOCATION_ARGS) const ;
  public: class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ (const GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & inSource) ;
  public: GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & operator = (const GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ init (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ add_operation (const GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & inOperand,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ getter_first (Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ getter_last (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                                                                const class GGS_u_33__32_ & constinOperand1,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ ;
  friend class DownEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [semanticInstructionListForGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_semanticInstructionListForGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_semanticInstructionListForGeneration_5D_ (const class GGS__5B_semanticInstructionListForGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_semanticInstructionListForGeneration_5D_ (const DownEnumerator__5B_semanticInstructionListForGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_semanticInstructionListForGeneration_5D_ & operator = (const DownEnumerator__5B_semanticInstructionListForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_semanticInstructionListForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_semanticInstructionListForGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_semanticInstructionListForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_semanticInstructionListForGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_semanticInstructionListForGeneration_5D_ (const class GGS__5B_semanticInstructionListForGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_semanticInstructionListForGeneration_5D_ (const UpEnumerator__5B_semanticInstructionListForGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_semanticInstructionListForGeneration_5D_ & operator = (const UpEnumerator__5B_semanticInstructionListForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_semanticInstructionListForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_semanticInstructionListForGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_semanticInstructionListForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_semanticInstructionListForGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_semanticInstructionListForGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_semanticInstructionListForGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_semanticInstructionListForGeneration_5D_ (const GGS__5B_semanticInstructionListForGeneration_5D_ & inSource) ;
  public: GGS__5B_semanticInstructionListForGeneration_5D_ & operator = (const GGS__5B_semanticInstructionListForGeneration_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_semanticInstructionListForGeneration_5D_ init (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_semanticInstructionListForGeneration_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_semanticInstructionListForGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_semanticInstructionListForGeneration_5D_ add_operation (const GGS__5B_semanticInstructionListForGeneration_5D_ & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_semanticInstructionListForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_semanticInstructionListForGeneration constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_semanticInstructionListForGeneration & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_semanticInstructionListForGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_semanticInstructionListForGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_semanticInstructionListForGeneration getter_first (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_semanticInstructionListForGeneration getter_last (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_semanticInstructionListForGeneration_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_semanticInstructionListForGeneration_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                                                 const class GGS_u_33__32_ & constinOperand1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_semanticInstructionListForGeneration readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_semanticInstructionListForGeneration inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_semanticInstructionListForGeneration_5D_ ;
  friend class DownEnumerator__5B_semanticInstructionListForGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_semanticInstructionListForGeneration_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticInstructionListForGeneration struct
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionListForGeneration final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_semanticInstructionForGeneration_5D_ mProperty_mInstructionList ;
  public: inline GGS__5B_semanticInstructionForGeneration_5D_ readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_location mProperty_mEndOfInstructionList ;
  public: inline GGS_location readProperty_mEndOfInstructionList (void) const {
    return mProperty_mEndOfInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_semanticInstructionListForGeneration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstructionList (const GGS__5B_semanticInstructionForGeneration_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfInstructionList (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_semanticInstructionListForGeneration (const GGS__5B_semanticInstructionForGeneration_5D_ & in_mInstructionList,
                                                    const GGS_location & in_mEndOfInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_semanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_semanticInstructionListForGeneration & operator = (const GGS_semanticInstructionListForGeneration & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticInstructionListForGeneration init_21__21_ (const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand0,
                                                                        const class GGS_location & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticInstructionListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectInstructionForGeneration : public GGS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_selectInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selectInstructionForGeneration (const class cPtr_selectInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mSyntaxComponentName (void) const ;

  public: class GGS_u_33__32_ readProperty_mChoiceIndex (void) const ;

  public: class GGS__5B_semanticInstructionListForGeneration_5D_ readProperty_mListOfSemanticInstructionListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selectInstructionForGeneration init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                          const class GGS_string & inOperand1,
                                                                          const class GGS_u_33__32_ & inOperand2,
                                                                          const class GGS__5B_semanticInstructionListForGeneration_5D_ & inOperand3,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectInstructionForGeneration & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selectInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_selectInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selectInstructionForGeneration_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    const class GGS_u_33__32_ & inOperand2,
                                                                    const class GGS__5B_semanticInstructionListForGeneration_5D_ & inOperand3,
                                                                    Compiler * inCompiler) ;


//--- Extension func compareInstructionSyntaxSignature
  public: virtual class GGS_bool getter_compareInstructionSyntaxSignature (const class GGS_semanticInstructionForGeneration _inTestedInstruction,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GGS_string arg__inPosfix,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg__ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mSyntaxComponentName ;
  public: GGS_u_33__32_ mProperty_mChoiceIndex ;
  public: GGS__5B_semanticInstructionListForGeneration_5D_ mProperty_mListOfSemanticInstructionListForGeneration ;


//--- Default constructor
  public: cPtr_selectInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selectInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                               const GGS_string & in_mSyntaxComponentName,
                                               const GGS_u_33__32_ & in_mChoiceIndex,
                                               const GGS__5B_semanticInstructionListForGeneration_5D_ & in_mListOfSemanticInstructionListForGeneration,
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
// Phase 1: @repeatInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_repeatInstruction : public GGS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GGS_repeatInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_repeatInstruction (const class cPtr_repeatInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS__5B_syntaxInstructionAST_5D_ readProperty_mRepeatedInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (void) const ;

  public: class GGS__5B_SyntaxInstructionListAST_5D_ readProperty_mRepeatBranchList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_repeat_5F_instruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_repeatInstruction init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS__5B_syntaxInstructionAST_5D_ & inOperand1,
                                                                 const class GGS_location & inOperand2,
                                                                 const class GGS__5B_SyntaxInstructionListAST_5D_ & inOperand3,
                                                                 const class GGS_location & inOperand4,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_repeatInstruction & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @repeatInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_repeatInstruction : public cPtr_syntaxInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void repeatInstruction_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS__5B_syntaxInstructionAST_5D_ & inOperand1,
                                                           const class GGS_location & inOperand2,
                                                           const class GGS__5B_SyntaxInstructionListAST_5D_ & inOperand3,
                                                           const class GGS_location & inOperand4,
                                                           Compiler * inCompiler) ;


//--- Extension proc analyzeSyntaxInstruction
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
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_u_33__32_ & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc transformInstructionForGrammarAnalysis
  public: virtual void method_transformInstructionForGrammarAnalysis (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_u_33__32_ & arg_ioAddedNonTerminalIndex,
           class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS__5B_syntaxInstructionAST_5D_ mProperty_mRepeatedInstructionList ;
  public: GGS_location mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch ;
  public: GGS__5B_SyntaxInstructionListAST_5D_ mProperty_mRepeatBranchList ;
  public: GGS_location mProperty_mEndOf_5F_repeat_5F_instruction ;


//--- Default constructor
  public: cPtr_repeatInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_repeatInstruction (const GGS_location & in_mInstructionLocation,
                                  const GGS__5B_syntaxInstructionAST_5D_ & in_mRepeatedInstructionList,
                                  const GGS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                  const GGS__5B_SyntaxInstructionListAST_5D_ & in_mRepeatBranchList,
                                  const GGS_location & in_mEndOf_5F_repeat_5F_instruction,
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
// Phase 1: @repeatInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_repeatInstructionForGeneration : public GGS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_repeatInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_repeatInstructionForGeneration (const class cPtr_repeatInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mSyntaxComponentName (void) const ;

  public: class GGS_u_33__32_ readProperty_mChoiceIndex (void) const ;

  public: class GGS__5B_semanticInstructionForGeneration_5D_ readProperty_m_5F_repeated_5F_instructionList (void) const ;

  public: class GGS_location readProperty_mEndOfRepeatedInstructions (void) const ;

  public: class GGS__5B_semanticInstructionListForGeneration_5D_ readProperty_mListOfSemanticInstructionListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_repeatInstructionForGeneration init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_string & inOperand1,
                                                                                  const class GGS_u_33__32_ & inOperand2,
                                                                                  const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand3,
                                                                                  const class GGS_location & inOperand4,
                                                                                  const class GGS__5B_semanticInstructionListForGeneration_5D_ & inOperand5,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_repeatInstructionForGeneration & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @repeatInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_repeatInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void repeatInstructionForGeneration_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_string & inOperand1,
                                                                            const class GGS_u_33__32_ & inOperand2,
                                                                            const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand3,
                                                                            const class GGS_location & inOperand4,
                                                                            const class GGS__5B_semanticInstructionListForGeneration_5D_ & inOperand5,
                                                                            Compiler * inCompiler) ;


//--- Extension func compareInstructionSyntaxSignature
  public: virtual class GGS_bool getter_compareInstructionSyntaxSignature (const class GGS_semanticInstructionForGeneration _inTestedInstruction,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GGS_string arg__inPosfix,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg__ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mSyntaxComponentName ;
  public: GGS_u_33__32_ mProperty_mChoiceIndex ;
  public: GGS__5B_semanticInstructionForGeneration_5D_ mProperty_m_5F_repeated_5F_instructionList ;
  public: GGS_location mProperty_mEndOfRepeatedInstructions ;
  public: GGS__5B_semanticInstructionListForGeneration_5D_ mProperty_mListOfSemanticInstructionListForGeneration ;


//--- Default constructor
  public: cPtr_repeatInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_repeatInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                               const GGS_string & in_mSyntaxComponentName,
                                               const GGS_u_33__32_ & in_mChoiceIndex,
                                               const GGS__5B_semanticInstructionForGeneration_5D_ & in_m_5F_repeated_5F_instructionList,
                                               const GGS_location & in_mEndOfRepeatedInstructions,
                                               const GGS__5B_semanticInstructionListForGeneration_5D_ & in_mListOfSemanticInstructionListForGeneration,
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
//Abstract extension proc '@semanticDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDeclarationInGraph (class cPtr_semanticDeclarationAST * inObject,
                                                  class GGS_semanticTypePrecedenceGraph & io_ioSemanticTypePrecedenceGraph,
                                                  class GGS_equatableExtensionMap & io_ioEquatableExtensionMap,
                                                  class GGS_extensionInitializerForBuildingContext & io_ioExtensionInitializerForBuildingContext,
                                                  class GGS_extensionMethodMapForBuildingContext & io_ioExtensionMethodMapForBuildingContext,
                                                  class GGS_extensionGetterMapForBuildingContext & io_ioExtensionGetterMapForBuildingContext,
                                                  class GGS_extensionSetterMapForBuildingContext & io_ioExtensionSetterMapForBuildingContext,
                                                  class GGS__5B_semanticDeclarationAST_5D_ & io_ioExtensionOverrideDefinitionList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticTypePrecedenceGraph graph
//--------------------------------------------------------------------------------------------------

class GGS_semanticTypePrecedenceGraph final : public AC_GALGAS_root {
//--- Private Data member
  private: class SharedGraph_semanticTypePrecedenceGraph * mSharedGraph ;

//--- Default constructor
  public: GGS_semanticTypePrecedenceGraph (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_semanticTypePrecedenceGraph (void) ;

//--- count
  public: uint32_t count (void) const ;

//--- isValid
  public: inline bool isValid (void) const override {
    return mSharedGraph != nullptr ;
  }

//--- drop
  public: void drop (void) override ;

//--- Handle copy
  public: GGS_semanticTypePrecedenceGraph (const GGS_semanticTypePrecedenceGraph & inSource) ;
  public: GGS_semanticTypePrecedenceGraph & operator = (const GGS_semanticTypePrecedenceGraph & inSource) ;

//--- Create a new list
  protected: void makeNewEmptyGraph (LOCATION_ARGS) ;

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNodeDefined (const GGS_string & inKey COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_string_5D_ getter_keyList (LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_lkeyList (LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_undefinedNodeCount (LOCATION_ARGS) const ;

  public: class GGS__5B_string_5D_ getter_undefinedNodeKeyList (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const GGS_string & inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: GGS_string getter_graphviz (UNUSED_LOCATION_ARGS) const ;

  public: GGS__5B_stringString_5D_ getter_edges (UNUSED_LOCATION_ARGS) const ;

//--------------------------------- Setters
  public: void setter_addEdge (const class GGS_lstring & inSourceNodeKey,
                               const class GGS_lstring & inTargetNodeKey
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeEdgesToNode (const GGS_string & inNodeName,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

  public: void setter_removeEdgesToDominators (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticTypePrecedenceGraph & inOperand) const ;

//--- Description
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--- Internal methods for handling graph
  protected: void reversedGraphFromGraph (const GGS_semanticTypePrecedenceGraph & inGraph
                                          COMMA_LOCATION_ARGS) ;

  protected: void subGraph (GGS_semanticTypePrecedenceGraph & outResultingGraph,
                            const class GGS__5B_lstring_5D_ & inStartNodes,
                            const class GGS_stringset & inNodesToExclude,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;


  protected: GGS__5B_semanticDeclarationAST_5D_ graph (void) const ;

  private: void insulateGraph (LOCATION_ARGS) ;

  protected: void internalAddNode (const GGS_lstring & inKey,
                                   const char * inErrorMessage,
                                   const GGS_semanticDeclarationAST & inElement,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_noteNode (const GGS_lstring & inKey
                                COMMA_LOCATION_ARGS) ;

  public: GGS__5B_lstring_5D_ getter_undefinedNodeReferenceList (LOCATION_ARGS) const ;

  protected: void internalTopologicalSort (GGS__5B_semanticDeclarationAST_5D_ & outSortedList,
                                           GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                           GGS__5B_semanticDeclarationAST_5D_ & outUnsortedList,
                                           GGS__5B_lstring_5D_ & outUnsortedNodeKeyList,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;

  protected: void internalFindCircularities (GGS__5B_semanticDeclarationAST_5D_ & outInfoList,
                                             GGS__5B_lstring_5D_ & outNodeKeyList
                                             COMMA_UNUSED_LOCATION_ARGS) const ;

  protected: void internalNodesWithNoPredecessor (GGS__5B_semanticDeclarationAST_5D_ & outSortedList,
                                                  GGS__5B_lstring_5D_ & outSortedNodeKeyList
                                                  COMMA_LOCATION_ARGS) const ;

  protected: void internalNodesWithNoSuccessor (GGS__5B_semanticDeclarationAST_5D_ & outSortedList,
                                                GGS__5B_lstring_5D_ & outSortedNodeKeyList
                                                COMMA_LOCATION_ARGS) const ;


  protected: void internalDepthFirstTopologicalSort (GGS__5B_semanticDeclarationAST_5D_ & outSortedList,
                                                     GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                                     GGS__5B_semanticDeclarationAST_5D_ & outUnsortedList,
                                                     GGS__5B_lstring_5D_ & outUnsortedNodeKeyList,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  friend class SharedGraph_semanticTypePrecedenceGraph ;


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticTypePrecedenceGraph init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: void setter_addNode (class GGS_lstring inArgument0,
                               class GGS_semanticDeclarationAST inArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_circularities (class GGS__5B_semanticDeclarationAST_5D_ & outArgument0,
                                     class GGS__5B_lstring_5D_ & outArgument1
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_depthFirstTopologicalSort (class GGS__5B_semanticDeclarationAST_5D_ & outArgument0,
                                                 class GGS__5B_lstring_5D_ & outArgument1,
                                                 class GGS__5B_semanticDeclarationAST_5D_ & outArgument2,
                                                 class GGS__5B_lstring_5D_ & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: void method_nodesWithNoPredecessor (class GGS__5B_semanticDeclarationAST_5D_ & outArgument0,
                                              class GGS__5B_lstring_5D_ & outArgument1
                                              COMMA_LOCATION_ARGS) const ;

  public: void method_nodesWithNoSuccessor (class GGS__5B_semanticDeclarationAST_5D_ & outArgument0,
                                            class GGS__5B_lstring_5D_ & outArgument1
                                            COMMA_LOCATION_ARGS) const ;

  public: void method_topologicalSort (class GGS__5B_semanticDeclarationAST_5D_ & outArgument0,
                                       class GGS__5B_lstring_5D_ & outArgument1,
                                       class GGS__5B_semanticDeclarationAST_5D_ & outArgument2,
                                       class GGS__5B_lstring_5D_ & outArgument3,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS__5B_lstring_5D_ getter_accessibleNodesFrom (const class GGS__5B_lstring_5D_ & constinOperand0,
                                                                const class GGS_stringset & constinOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_semanticDeclarationAST_5D_ getter_nodeList (LOCATION_ARGS) const ;

  public: class GGS_semanticTypePrecedenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: class GGS_semanticTypePrecedenceGraph getter_subgraphFromNodes (const class GGS__5B_lstring_5D_ & constinOperand0,
                                                                          const class GGS_stringset & constinOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionGetterMapForBuildingContext map
//--------------------------------------------------------------------------------------------------

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionGetterMapForBuildingContext final {

  public: DownEnumerator_extensionGetterMapForBuildingContext (const class GGS_extensionGetterMapForBuildingContext & inMap) ;

  public: ~ DownEnumerator_extensionGetterMapForBuildingContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_extensionGetterMapForType current_mExtensionGetterMapForType (LOCATION_ARGS) const ;

  public: class GGS_extensionGetterMapForBuildingContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionGetterMapForBuildingContext (const DownEnumerator_extensionGetterMapForBuildingContext &) = delete ;
  private: DownEnumerator_extensionGetterMapForBuildingContext & operator = (const DownEnumerator_extensionGetterMapForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionGetterMapForBuildingContext final {
  public: UpEnumerator_extensionGetterMapForBuildingContext (const class GGS_extensionGetterMapForBuildingContext & inMap)  ;

  public: ~ UpEnumerator_extensionGetterMapForBuildingContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_extensionGetterMapForType current_mExtensionGetterMapForType (LOCATION_ARGS) const ;
  public: class GGS_extensionGetterMapForBuildingContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionGetterMapForBuildingContext (const UpEnumerator_extensionGetterMapForBuildingContext &) = delete ;
  private: UpEnumerator_extensionGetterMapForBuildingContext & operator = (const UpEnumerator_extensionGetterMapForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForBuildingContext final : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionGetterMapForBuildingContext_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionGetterMapForBuildingContext (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionGetterMapForBuildingContext (void) ;

//--- Handle copy
  public: GGS_extensionGetterMapForBuildingContext (const GGS_extensionGetterMapForBuildingContext & inSource) ;
  public: GGS_extensionGetterMapForBuildingContext & operator = (const GGS_extensionGetterMapForBuildingContext & inSource) ;

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
  protected: void performInsert (const class GGS_extensionGetterMapForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element> infoForKey (const String & inKey) const ;

//--- Count
  public: int32_t count (void) const ;

//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterMapForBuildingContext init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_extensionGetterMapForBuildingContext class_func_mapWithMapToOverride (const class GGS_extensionGetterMapForBuildingContext & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_extensionGetterMapForType constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_replaceKey (class GGS_extensionGetterMapForBuildingContext_2E_element constinArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMExtensionGetterMapForTypeForKey (class GGS_extensionGetterMapForType constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_extensionGetterMapForType & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_u_33__32_ & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionGetterMapForType getter_mExtensionGetterMapForTypeForKey (const class GGS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionGetterMapForBuildingContext getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_extensionGetterMapForBuildingContext_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionGetterMapForBuildingContext_2E_element readSubscript__3F_searchKey (const class GGS_lstring & in0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionGetterMapForBuildingContext ;
  friend class DownEnumerator_extensionGetterMapForBuildingContext ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionInitializerForBuildingContext map
//--------------------------------------------------------------------------------------------------

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionInitializerForBuildingContext final {

  public: DownEnumerator_extensionInitializerForBuildingContext (const class GGS_extensionInitializerForBuildingContext & inMap) ;

  public: ~ DownEnumerator_extensionInitializerForBuildingContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_extensionInitializerMapForType current_mExtensionInitializerMapForType (LOCATION_ARGS) const ;

  public: class GGS_extensionInitializerForBuildingContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionInitializerForBuildingContext (const DownEnumerator_extensionInitializerForBuildingContext &) = delete ;
  private: DownEnumerator_extensionInitializerForBuildingContext & operator = (const DownEnumerator_extensionInitializerForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionInitializerForBuildingContext final {
  public: UpEnumerator_extensionInitializerForBuildingContext (const class GGS_extensionInitializerForBuildingContext & inMap)  ;

  public: ~ UpEnumerator_extensionInitializerForBuildingContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_extensionInitializerMapForType current_mExtensionInitializerMapForType (LOCATION_ARGS) const ;
  public: class GGS_extensionInitializerForBuildingContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionInitializerForBuildingContext (const UpEnumerator_extensionInitializerForBuildingContext &) = delete ;
  private: UpEnumerator_extensionInitializerForBuildingContext & operator = (const UpEnumerator_extensionInitializerForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionInitializerForBuildingContext final : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionInitializerForBuildingContext_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionInitializerForBuildingContext (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionInitializerForBuildingContext (void) ;

//--- Handle copy
  public: GGS_extensionInitializerForBuildingContext (const GGS_extensionInitializerForBuildingContext & inSource) ;
  public: GGS_extensionInitializerForBuildingContext & operator = (const GGS_extensionInitializerForBuildingContext & inSource) ;

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
  protected: void performInsert (const class GGS_extensionInitializerForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element> infoForKey (const String & inKey) const ;

//--- Count
  public: int32_t count (void) const ;

//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionInitializerForBuildingContext init (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_extensionInitializerForBuildingContext class_func_mapWithMapToOverride (const class GGS_extensionInitializerForBuildingContext & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_extensionInitializerMapForType constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_replaceKey (class GGS_extensionInitializerForBuildingContext_2E_element constinArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMExtensionInitializerMapForTypeForKey (class GGS_extensionInitializerMapForType constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_extensionInitializerMapForType & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_u_33__32_ & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionInitializerMapForType getter_mExtensionInitializerMapForTypeForKey (const class GGS_string & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionInitializerForBuildingContext getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_extensionInitializerForBuildingContext_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionInitializerForBuildingContext_2E_element readSubscript__3F_searchKey (const class GGS_lstring & in0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionInitializerForBuildingContext ;
  friend class DownEnumerator_extensionInitializerForBuildingContext ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMethodMapForBuildingContext map
//--------------------------------------------------------------------------------------------------

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionMethodMapForBuildingContext final {

  public: DownEnumerator_extensionMethodMapForBuildingContext (const class GGS_extensionMethodMapForBuildingContext & inMap) ;

  public: ~ DownEnumerator_extensionMethodMapForBuildingContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_extensionMethodMapForType current_mExtensionMethodMapForType (LOCATION_ARGS) const ;

  public: class GGS_extensionMethodMapForBuildingContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionMethodMapForBuildingContext (const DownEnumerator_extensionMethodMapForBuildingContext &) = delete ;
  private: DownEnumerator_extensionMethodMapForBuildingContext & operator = (const DownEnumerator_extensionMethodMapForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionMethodMapForBuildingContext final {
  public: UpEnumerator_extensionMethodMapForBuildingContext (const class GGS_extensionMethodMapForBuildingContext & inMap)  ;

  public: ~ UpEnumerator_extensionMethodMapForBuildingContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_extensionMethodMapForType current_mExtensionMethodMapForType (LOCATION_ARGS) const ;
  public: class GGS_extensionMethodMapForBuildingContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionMethodMapForBuildingContext (const UpEnumerator_extensionMethodMapForBuildingContext &) = delete ;
  private: UpEnumerator_extensionMethodMapForBuildingContext & operator = (const UpEnumerator_extensionMethodMapForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForBuildingContext final : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionMethodMapForBuildingContext_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionMethodMapForBuildingContext (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionMethodMapForBuildingContext (void) ;

//--- Handle copy
  public: GGS_extensionMethodMapForBuildingContext (const GGS_extensionMethodMapForBuildingContext & inSource) ;
  public: GGS_extensionMethodMapForBuildingContext & operator = (const GGS_extensionMethodMapForBuildingContext & inSource) ;

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
  protected: void performInsert (const class GGS_extensionMethodMapForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element> infoForKey (const String & inKey) const ;

//--- Count
  public: int32_t count (void) const ;

//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodMapForBuildingContext init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMethodMapForBuildingContext class_func_mapWithMapToOverride (const class GGS_extensionMethodMapForBuildingContext & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_extensionMethodMapForType constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_replaceKey (class GGS_extensionMethodMapForBuildingContext_2E_element constinArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMExtensionMethodMapForTypeForKey (class GGS_extensionMethodMapForType constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_extensionMethodMapForType & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_u_33__32_ & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionMethodMapForType getter_mExtensionMethodMapForTypeForKey (const class GGS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionMethodMapForBuildingContext getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_extensionMethodMapForBuildingContext_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionMethodMapForBuildingContext_2E_element readSubscript__3F_searchKey (const class GGS_lstring & in0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionMethodMapForBuildingContext ;
  friend class DownEnumerator_extensionMethodMapForBuildingContext ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionSetterMapForBuildingContext map
//--------------------------------------------------------------------------------------------------

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionSetterMapForBuildingContext final {

  public: DownEnumerator_extensionSetterMapForBuildingContext (const class GGS_extensionSetterMapForBuildingContext & inMap) ;

  public: ~ DownEnumerator_extensionSetterMapForBuildingContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_extensionSetterMapForType current_mExtensionSetterMapForType (LOCATION_ARGS) const ;

  public: class GGS_extensionSetterMapForBuildingContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionSetterMapForBuildingContext (const DownEnumerator_extensionSetterMapForBuildingContext &) = delete ;
  private: DownEnumerator_extensionSetterMapForBuildingContext & operator = (const DownEnumerator_extensionSetterMapForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionSetterMapForBuildingContext final {
  public: UpEnumerator_extensionSetterMapForBuildingContext (const class GGS_extensionSetterMapForBuildingContext & inMap)  ;

  public: ~ UpEnumerator_extensionSetterMapForBuildingContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_extensionSetterMapForType current_mExtensionSetterMapForType (LOCATION_ARGS) const ;
  public: class GGS_extensionSetterMapForBuildingContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionSetterMapForBuildingContext (const UpEnumerator_extensionSetterMapForBuildingContext &) = delete ;
  private: UpEnumerator_extensionSetterMapForBuildingContext & operator = (const UpEnumerator_extensionSetterMapForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForBuildingContext final : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionSetterMapForBuildingContext_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionSetterMapForBuildingContext (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionSetterMapForBuildingContext (void) ;

//--- Handle copy
  public: GGS_extensionSetterMapForBuildingContext (const GGS_extensionSetterMapForBuildingContext & inSource) ;
  public: GGS_extensionSetterMapForBuildingContext & operator = (const GGS_extensionSetterMapForBuildingContext & inSource) ;

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
  protected: void performInsert (const class GGS_extensionSetterMapForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element> infoForKey (const String & inKey) const ;

//--- Count
  public: int32_t count (void) const ;

//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterMapForBuildingContext init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_extensionSetterMapForBuildingContext class_func_mapWithMapToOverride (const class GGS_extensionSetterMapForBuildingContext & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_extensionSetterMapForType constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_replaceKey (class GGS_extensionSetterMapForBuildingContext_2E_element constinArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMExtensionSetterMapForTypeForKey (class GGS_extensionSetterMapForType constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_extensionSetterMapForType & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_u_33__32_ & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionSetterMapForType getter_mExtensionSetterMapForTypeForKey (const class GGS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionSetterMapForBuildingContext getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_extensionSetterMapForBuildingContext_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionSetterMapForBuildingContext_2E_element readSubscript__3F_searchKey (const class GGS_lstring & in0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionSetterMapForBuildingContext ;
  friend class DownEnumerator_extensionSetterMapForBuildingContext ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@semanticDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDeclarationInSemanticContext (class cPtr_semanticDeclarationAST * inObject,
                                                            class GGS_equatableExtensionMap & io__5F_ioEquatableExtensionMap,
                                                            const class GGS_extensionInitializerForBuildingContext constin__5F_inExtensionInitializerMapForBuildingContext,
                                                            const class GGS_extensionMethodMapForBuildingContext constin__5F_inExtensionMethodMapForBuildingContext,
                                                            const class GGS_extensionGetterMapForBuildingContext constin__5F_inExtensionGetterMapForBuildingContext,
                                                            const class GGS_extensionSetterMapForBuildingContext constin__5F_inExtensionSetterMapForBuildingContext,
                                                            class GGS_unifiedTypeMap & io_ioTypeMap,
                                                            class GGS_semanticContext & io__5F_ioSemanticContext,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@semanticDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_semanticAnalysis (class cPtr_semanticDeclarationAST * inObject,
                                           class GGS__5B_lstring_5D_ & io_ioUsefulnessRootEntities,
                                           class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                           const class GGS_string constin_inProductDirectory,
                                           const class GGS_semanticContext constin__5F_inSemanticContext,
                                           class GGS_unifiedTypeMap & io__5F_ioTypeMap,
                                           const class GGS_predefinedTypes constin__5F_inPredefinedTypes,
                                           class GGS__5B_semanticDeclarationForGeneration_5D_ & io__5F_ioSemanticDeclarationListForGeneration,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_predefinedTypeAST & inOperand) const ;

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


//--- Extension func cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension func getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension func initializers
  public: virtual class GGS__5B__5B_formalInputParameterAST_5D__5D_ getter_initializers (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension func keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func supportsCollectionValue
  public: virtual class GGS_bool getter_supportsCollectionValue (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension func typeKind
  public: virtual class GGS_typeKindEnum getter_typeKind (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension proc enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS__5B_semanticDeclarationAST_5D_ & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg__ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg__inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg__inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg__inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg__inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg__ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc getClassMethodMap
  public: virtual void method_getClassMethodMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_classMethodMap & arg_outClassMethodMap,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc getEnumerationList
  public: virtual void method_getEnumerationList (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS__5B_enumerationDescriptor_5D_ & arg_outEnumerationList,
           class GGS_string & arg_outEnumeratedType,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc getInstanceMethodMap
  public: virtual void method_getInstanceMethodMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_instanceMethodMap & arg_outInstanceMethodMap,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc getSetterMap
  public: virtual void method_getSetterMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_setterMap & arg_outSetterMap,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS__5B_lstring_5D_ & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg__inSemanticContext,
           class GGS_unifiedTypeMap & arg__ioTypeMap,
           const class GGS_predefinedTypes arg__inPredefinedTypes,
           class GGS__5B_semanticDeclarationForGeneration_5D_ & arg__ioSemanticDeclarationListForGeneration,
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
// Phase 1: [[formalInputParameterAST]] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B__5B_formalInputParameterAST_5D__5D_ final {
//--- Constructor
  public: DownEnumerator__5B__5B_formalInputParameterAST_5D__5D_ (const class GGS__5B__5B_formalInputParameterAST_5D__5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B__5B_formalInputParameterAST_5D__5D_ (const DownEnumerator__5B__5B_formalInputParameterAST_5D__5D_ &) = delete ;
  private: DownEnumerator__5B__5B_formalInputParameterAST_5D__5D_ & operator = (const DownEnumerator__5B__5B_formalInputParameterAST_5D__5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS__5B_formalInputParameterAST_5D_ current (LOCATION_ARGS) const ;
  public: class GGS__5B_formalInputParameterAST_5D_ current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS__5B_formalInputParameterAST_5D_> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B__5B_formalInputParameterAST_5D__5D_ final {
//--- Constructor
  public: UpEnumerator__5B__5B_formalInputParameterAST_5D__5D_ (const class GGS__5B__5B_formalInputParameterAST_5D__5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B__5B_formalInputParameterAST_5D__5D_ (const UpEnumerator__5B__5B_formalInputParameterAST_5D__5D_ &) = delete ;
  private: UpEnumerator__5B__5B_formalInputParameterAST_5D__5D_ & operator = (const UpEnumerator__5B__5B_formalInputParameterAST_5D__5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS__5B_formalInputParameterAST_5D_ current (LOCATION_ARGS) const ;
  public: class GGS__5B_formalInputParameterAST_5D_ current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS__5B_formalInputParameterAST_5D_> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B__5B_formalInputParameterAST_5D__5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS__5B_formalInputParameterAST_5D_> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B__5B_formalInputParameterAST_5D__5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B__5B_formalInputParameterAST_5D__5D_ (const GGS__5B__5B_formalInputParameterAST_5D__5D_ & inSource) ;
  public: GGS__5B__5B_formalInputParameterAST_5D__5D_ & operator = (const GGS__5B__5B_formalInputParameterAST_5D__5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B__5B_formalInputParameterAST_5D__5D_ init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B__5B_formalInputParameterAST_5D__5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS__5B_formalInputParameterAST_5D_ & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B__5B_formalInputParameterAST_5D__5D_ add_operation (const GGS__5B__5B_formalInputParameterAST_5D__5D_ & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS__5B_formalInputParameterAST_5D_ constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS__5B_formalInputParameterAST_5D_ constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS__5B_formalInputParameterAST_5D_ & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS__5B_formalInputParameterAST_5D_ & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS__5B_formalInputParameterAST_5D_ & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS__5B_formalInputParameterAST_5D_ getter_first (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_formalInputParameterAST_5D_ getter_last (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B__5B_formalInputParameterAST_5D__5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B__5B_formalInputParameterAST_5D__5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                                            const class GGS_u_33__32_ & constinOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS__5B_formalInputParameterAST_5D_ readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS__5B_formalInputParameterAST_5D_ inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B__5B_formalInputParameterAST_5D__5D_ ;
  friend class DownEnumerator__5B__5B_formalInputParameterAST_5D__5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B__5B_formalInputParameterAST_5D__5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @binarysetPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_binarysetPredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_binarysetPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_binarysetPredefinedTypeAST (const class cPtr_binarysetPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_binarysetPredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                          const class GGS_string & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_binarysetPredefinedTypeAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @binarysetPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_binarysetPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void binarysetPredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    Compiler * inCompiler) ;


//--- Extension func cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func initializers
  public: virtual class GGS__5B__5B_formalInputParameterAST_5D__5D_ getter_initializers (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getClassMethodMap
  public: virtual void method_getClassMethodMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_classMethodMap & arg_outClassMethodMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_binarysetPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_binarysetPredefinedTypeAST (const GGS_bool & in_isPredefined,
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_timerPredefinedTypeAST & inOperand) const ;

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


//--- Extension func cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func initializers
  public: virtual class GGS__5B__5B_formalInputParameterAST_5D__5D_ getter_initializers (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getSetterMap
  public: virtual void method_getSetterMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_stringPredefinedTypeAST & inOperand) const ;

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


//--- Extension func cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg__ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getClassMethodMap
  public: virtual void method_getClassMethodMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_classMethodMap & arg_outClassMethodMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getInstanceMethodMap
  public: virtual void method_getInstanceMethodMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_instanceMethodMap & arg_outInstanceMethodMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getSetterMap
  public: virtual void method_getSetterMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bigintPredefinedTypeAST & inOperand) const ;

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


//--- Extension func cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getInstanceMethodMap
  public: virtual void method_getInstanceMethodMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_instanceMethodMap & arg_outInstanceMethodMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getSetterMap
  public: virtual void method_getSetterMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_locationPredefinedTypeAST & inOperand) const ;

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


//--- Extension func cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
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
// Phase 1: @buildOptionValueDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_buildOptionValueDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_buildOptionValueDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_buildOptionValueDeclarationAST (const class cPtr_buildOptionValueDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_buildOptionValueName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_buildOptionValueDeclarationAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_buildOptionValueDeclarationAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_buildOptionValueDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @buildOptionValueDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_buildOptionValueDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void buildOptionValueDeclarationAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        Compiler * inCompiler) ;


//--- Extension func keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS__5B_semanticDeclarationAST_5D_ & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg__ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg__inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg__inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg__inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg__inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg__ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS__5B_lstring_5D_ & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg__inSemanticContext,
           class GGS_unifiedTypeMap & arg__ioTypeMap,
           const class GGS_predefinedTypes arg__inPredefinedTypes,
           class GGS__5B_semanticDeclarationForGeneration_5D_ & arg__ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_buildOptionValueName ;


//--- Default constructor
  public: cPtr_buildOptionValueDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_buildOptionValueDeclarationAST (const GGS_bool & in_isPredefined,
                                               const GGS_lstring & in_buildOptionValueName,
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
// Phase 1: @buildOptionTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_buildOptionTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_buildOptionTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_buildOptionTypeForGeneration (const class cPtr_buildOptionTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS__5B_projectBuildOption_5D_ readProperty_boolBuildOptionArray (void) const ;

  public: class GGS__5B_projectBuildOption_5D_ readProperty_u_33__32_BuildOptionArray (void) const ;

  public: class GGS__5B_projectBuildOption_5D_ readProperty_stringBuildOptionArray (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_buildOptionTypeForGeneration init_21_infoMessage_21__21_boolBuildOptionArray_21_u_33__32_BuildOptionArray_21_stringBuildOptionArray (const class GGS_string & inOperand0,
                                                                                                                                                          const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                                                                                          const class GGS__5B_projectBuildOption_5D_ & inOperand2,
                                                                                                                                                          const class GGS__5B_projectBuildOption_5D_ & inOperand3,
                                                                                                                                                          const class GGS__5B_projectBuildOption_5D_ & inOperand4,
                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_buildOptionTypeForGeneration & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_buildOptionTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @buildOptionTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_buildOptionTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void buildOptionTypeForGeneration_init_21_infoMessage_21__21_boolBuildOptionArray_21_u_33__32_BuildOptionArray_21_stringBuildOptionArray (const class GGS_string & inOperand0,
                                                                                                                                                    const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                                                                                    const class GGS__5B_projectBuildOption_5D_ & inOperand2,
                                                                                                                                                    const class GGS__5B_projectBuildOption_5D_ & inOperand3,
                                                                                                                                                    const class GGS__5B_projectBuildOption_5D_ & inOperand4,
                                                                                                                                                    Compiler * inCompiler) ;


//--- Extension proc appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc appendSpecificFiles
  public: virtual void method_appendSpecificFiles (const class GGS_string arg__inProductDirectory,
           class GGS_stringset & arg__ioAllProductFileSet,
           class GGS__5B_string_5D_ & arg__ioSwiftAppProductFileList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg__inUnifiedTypeMap,
           class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS__5B_projectBuildOption_5D_ mProperty_boolBuildOptionArray ;
  public: GGS__5B_projectBuildOption_5D_ mProperty_u_33__32_BuildOptionArray ;
  public: GGS__5B_projectBuildOption_5D_ mProperty_stringBuildOptionArray ;


//--- Default constructor
  public: cPtr_buildOptionTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_buildOptionTypeForGeneration (const GGS_string & in_infoMessage,
                                             const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                             const GGS__5B_projectBuildOption_5D_ & in_boolBuildOptionArray,
                                             const GGS__5B_projectBuildOption_5D_ & in_u_33__32_BuildOptionArray,
                                             const GGS__5B_projectBuildOption_5D_ & in_stringBuildOptionArray,
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
//§Filewrapper§ 'buildOptionGenerationTemplate'
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const DirectoryWrapper gWrapperDirectory_0_buildOptionGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
// Phase 1: filewrapper @buildOptionGenerationTemplate
//--------------------------------------------------------------------------------------------------

class GGS_buildOptionGenerationTemplate final {

//-- Start of package generic part

//--------------------------------- GALGAS class getters
  public: static class GGS_string class_func_buildOptionTypeHeader_31_ (const class GGS_string & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        const class GGS__5B_projectBuildOption_5D_ & inOperand2,
                                                                        const class GGS__5B_projectBuildOption_5D_ & inOperand3,
                                                                        const class GGS__5B_projectBuildOption_5D_ & inOperand4,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_buildOptionTypeSpecificImplementation (const class GGS_string & inOperand0,
                                                                                    const class GGS_string & inOperand1,
                                                                                    const class GGS__5B_projectBuildOption_5D_ & inOperand2,
                                                                                    const class GGS__5B_projectBuildOption_5D_ & inOperand3,
                                                                                    const class GGS__5B_projectBuildOption_5D_ & inOperand4,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GGS_filewrapper class_func_contents (LOCATION_ARGS) ;

  public: static class GGS_string class_func_optionImplementationSwiftUI (const class GGS__5B_projectBuildOption_5D_ & inOperand0,
                                                                          const class GGS__5B_projectBuildOption_5D_ & inOperand1,
                                                                          const class GGS__5B_projectBuildOption_5D_ & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Class Methods

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @u_31__36_PredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_u_31__36_PredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_u_31__36_PredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_u_31__36_PredefinedTypeAST (const class cPtr_u_31__36_PredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_u_31__36_PredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                          const class GGS_string & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_u_31__36_PredefinedTypeAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_u_31__36_PredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @u16PredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_u_31__36_PredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void u_31__36_PredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    Compiler * inCompiler) ;


//--- Extension func cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getClassMethodMap
  public: virtual void method_getClassMethodMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_classMethodMap & arg_outClassMethodMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_u_31__36_PredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_u_31__36_PredefinedTypeAST (const GGS_bool & in_isPredefined,
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
// Phase 1: @buildOptionInvocationStringDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_buildOptionInvocationStringDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_buildOptionInvocationStringDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_buildOptionInvocationStringDeclarationAST (const class cPtr_buildOptionInvocationStringDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_buildOptionStringName (void) const ;

  public: class GGS_string readProperty_buildOptionValueName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_buildOptionInvocationStringDeclarationAST init_21_isPredefined_21_buildOptionStringName_21_buildOptionValueName (const class GGS_bool & inOperand0,
                                                                                                                                      const class GGS_lstring & inOperand1,
                                                                                                                                      const class GGS_string & inOperand2,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_buildOptionInvocationStringDeclarationAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_buildOptionInvocationStringDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @buildOptionInvocationStringDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_buildOptionInvocationStringDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void buildOptionInvocationStringDeclarationAST_init_21_isPredefined_21_buildOptionStringName_21_buildOptionValueName (const class GGS_bool & inOperand0,
                                                                                                                                const class GGS_lstring & inOperand1,
                                                                                                                                const class GGS_string & inOperand2,
                                                                                                                                Compiler * inCompiler) ;


//--- Extension func keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS__5B_semanticDeclarationAST_5D_ & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg__ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg__inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg__inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg__inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg__inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg__ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS__5B_lstring_5D_ & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg__inSemanticContext,
           class GGS_unifiedTypeMap & arg__ioTypeMap,
           const class GGS_predefinedTypes arg__inPredefinedTypes,
           class GGS__5B_semanticDeclarationForGeneration_5D_ & arg__ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_buildOptionStringName ;
  public: GGS_string mProperty_buildOptionValueName ;


//--- Default constructor
  public: cPtr_buildOptionInvocationStringDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_buildOptionInvocationStringDeclarationAST (const GGS_bool & in_isPredefined,
                                                          const GGS_lstring & in_buildOptionStringName,
                                                          const GGS_string & in_buildOptionValueName,
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
// Phase 1: @buildOptionStringTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_buildOptionStringTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_buildOptionStringTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_buildOptionStringTypeForGeneration (const class cPtr_buildOptionStringTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS__5B_projectBuildOption_5D_ readProperty_boolBuildOptionArray (void) const ;

  public: class GGS__5B_projectBuildOption_5D_ readProperty_u_33__32_BuildOptionArray (void) const ;

  public: class GGS__5B_projectBuildOption_5D_ readProperty_stringBuildOptionArray (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_buildOptionStringTypeForGeneration init_21_infoMessage_21__21_boolBuildOptionArray_21_u_33__32_BuildOptionArray_21_stringBuildOptionArray (const class GGS_string & inOperand0,
                                                                                                                                                                const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                                                                                                const class GGS__5B_projectBuildOption_5D_ & inOperand2,
                                                                                                                                                                const class GGS__5B_projectBuildOption_5D_ & inOperand3,
                                                                                                                                                                const class GGS__5B_projectBuildOption_5D_ & inOperand4,
                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_buildOptionStringTypeForGeneration & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_buildOptionStringTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @buildOptionStringTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_buildOptionStringTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void buildOptionStringTypeForGeneration_init_21_infoMessage_21__21_boolBuildOptionArray_21_u_33__32_BuildOptionArray_21_stringBuildOptionArray (const class GGS_string & inOperand0,
                                                                                                                                                          const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                                                                                          const class GGS__5B_projectBuildOption_5D_ & inOperand2,
                                                                                                                                                          const class GGS__5B_projectBuildOption_5D_ & inOperand3,
                                                                                                                                                          const class GGS__5B_projectBuildOption_5D_ & inOperand4,
                                                                                                                                                          Compiler * inCompiler) ;


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
  public: GGS__5B_projectBuildOption_5D_ mProperty_boolBuildOptionArray ;
  public: GGS__5B_projectBuildOption_5D_ mProperty_u_33__32_BuildOptionArray ;
  public: GGS__5B_projectBuildOption_5D_ mProperty_stringBuildOptionArray ;


//--- Default constructor
  public: cPtr_buildOptionStringTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_buildOptionStringTypeForGeneration (const GGS_string & in_infoMessage,
                                                   const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                   const GGS__5B_projectBuildOption_5D_ & in_boolBuildOptionArray,
                                                   const GGS__5B_projectBuildOption_5D_ & in_u_33__32_BuildOptionArray,
                                                   const GGS__5B_projectBuildOption_5D_ & in_stringBuildOptionArray,
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
//§Filewrapper§ 'buildOptionStringGenerationTemplate'
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const DirectoryWrapper gWrapperDirectory_0_buildOptionStringGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
// Phase 1: filewrapper @buildOptionStringGenerationTemplate
//--------------------------------------------------------------------------------------------------

class GGS_buildOptionStringGenerationTemplate final {

//-- Start of package generic part

//--------------------------------- GALGAS class getters
  public: static class GGS_string class_func_buildOptionTypeHeader_31_ (const class GGS_string & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_buildOptionTypeSpecificImplementation (const class GGS_string & inOperand0,
                                                                                    const class GGS_string & inOperand1,
                                                                                    const class GGS__5B_projectBuildOption_5D_ & inOperand2,
                                                                                    const class GGS__5B_projectBuildOption_5D_ & inOperand3,
                                                                                    const class GGS__5B_projectBuildOption_5D_ & inOperand4,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GGS_filewrapper class_func_contents (LOCATION_ARGS) ;

//--------------------------------- Class Methods

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @u_36__34_PredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_u_36__34_PredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_u_36__34_PredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_u_36__34_PredefinedTypeAST (const class cPtr_u_36__34_PredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_u_36__34_PredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                          const class GGS_string & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_u_36__34_PredefinedTypeAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_u_36__34_PredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @u64PredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_u_36__34_PredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void u_36__34_PredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    Compiler * inCompiler) ;


//--- Extension func cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_u_36__34_PredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_u_36__34_PredefinedTypeAST (const GGS_bool & in_isPredefined,
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
//
//Extension func '@predefinedTypeAST typeKind'
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum callExtensionGetter_typeKind (const cPtr_predefinedTypeAST * inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@predefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_cppDeclarationString (const class cPtr_predefinedTypeAST * inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@predefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

class GGS__5B__5B_formalInputParameterAST_5D__5D_ callExtensionGetter_initializers (const cPtr_predefinedTypeAST * inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@predefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getClassFunctionMap (class cPtr_predefinedTypeAST * inObject,
                                              class GGS_unifiedTypeMap & io__5F_ioUnifiedTypeMap,
                                              class GGS_classFunctionMap & out_outClassFunctionMap,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@predefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getGetterMap (class cPtr_predefinedTypeAST * inObject,
                                       class GGS_unifiedTypeMap & io__5F_ioUnifiedTypeMap,
                                       class GGS_getterMap & out_outGetterMap,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@predefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getSetterMap (class cPtr_predefinedTypeAST * inObject,
                                       class GGS_unifiedTypeMap & io__5F_ioUnifiedTypeMap,
                                       class GGS_setterMap & out_outSetterMap,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@predefinedTypeAST getInstanceMethodMap'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getInstanceMethodMap (class cPtr_predefinedTypeAST * inObject,
                                               class GGS_unifiedTypeMap & io__5F_ioUnifiedTypeMap,
                                               class GGS_instanceMethodMap & out_outInstanceMethodMap,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@predefinedTypeAST getClassMethodMap'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getClassMethodMap (class cPtr_predefinedTypeAST * inObject,
                                            class GGS_unifiedTypeMap & io__5F_ioUnifiedTypeMap,
                                            class GGS_classMethodMap & out_outClassMethodMap,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@predefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

class GGS_typeFeatures callExtensionGetter_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@predefinedTypeAST supportsCollectionValue'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_supportsCollectionValue (const cPtr_predefinedTypeAST * inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@predefinedTypeAST getEnumerationList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getEnumerationList (class cPtr_predefinedTypeAST * inObject,
                                             class GGS_unifiedTypeMap & io__5F_ioUnifiedTypeMap,
                                             class GGS__5B_enumerationDescriptor_5D_ & out_outEnumerationList,
                                             class GGS_string & out_outEnumeratedType,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [propertyInCollectionAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_propertyInCollectionAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_propertyInCollectionAST_5D_ (const class GGS__5B_propertyInCollectionAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_propertyInCollectionAST_5D_ (const DownEnumerator__5B_propertyInCollectionAST_5D_ &) = delete ;
  private: DownEnumerator__5B_propertyInCollectionAST_5D_ & operator = (const DownEnumerator__5B_propertyInCollectionAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_propertyInCollectionAST current (LOCATION_ARGS) const ;
  public: class GGS_propertyInCollectionAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_propertyInCollectionAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_propertyInCollectionAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_propertyInCollectionAST_5D_ (const class GGS__5B_propertyInCollectionAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_propertyInCollectionAST_5D_ (const UpEnumerator__5B_propertyInCollectionAST_5D_ &) = delete ;
  private: UpEnumerator__5B_propertyInCollectionAST_5D_ & operator = (const UpEnumerator__5B_propertyInCollectionAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_propertyInCollectionAST current (LOCATION_ARGS) const ;
  public: class GGS_propertyInCollectionAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_propertyInCollectionAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_propertyInCollectionAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_propertyInCollectionAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_propertyInCollectionAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_propertyInCollectionAST_5D_ (const GGS__5B_propertyInCollectionAST_5D_ & inSource) ;
  public: GGS__5B_propertyInCollectionAST_5D_ & operator = (const GGS__5B_propertyInCollectionAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_propertyInCollectionAST_5D_ init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_propertyInCollectionAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_propertyInCollectionAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_propertyInCollectionAST_5D_ add_operation (const GGS__5B_propertyInCollectionAST_5D_ & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_propertyInCollectionAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_propertyInCollectionAST constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_propertyInCollectionAST & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_propertyInCollectionAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_propertyInCollectionAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_propertyInCollectionAST getter_first (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyInCollectionAST getter_last (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_propertyInCollectionAST_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_propertyInCollectionAST_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                                    const class GGS_u_33__32_ & constinOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_propertyInCollectionAST readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_propertyInCollectionAST inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_propertyInCollectionAST_5D_ ;
  friend class DownEnumerator__5B_propertyInCollectionAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_propertyInCollectionAST_5D_ ;

//--------------------------------------------------------------------------------------------------
//   enum AccessControlAST
//--------------------------------------------------------------------------------------------------

class GGS_AccessControlAST final : public AC_GALGAS_root {
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
  public: void getAssociatedValuesFor_fileprivateAccess (class GGS_location & out_declarationLocation) const ;
  public: void getAssociatedValuesFor_fileprivateSetAccess (class GGS_location & out_declarationLocation) const ;

//--------------------------------- Accessors
  public: inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
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

//--------------------------------- Implementation of func 'description'
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


//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST ;

//--------------------------------------------------------------------------------------------------
//   enum propertyMutability
//--------------------------------------------------------------------------------------------------

class GGS_propertyMutability final : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_propertyMutability (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_constantProperty,
    enum_mutableProperty
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_propertyMutability class_func_constantProperty (LOCATION_ARGS) ;

  public: static class GGS_propertyMutability class_func_mutableProperty (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isConstantProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMutableProperty (LOCATION_ARGS) const ;


//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMutability ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyInCollectionAST struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyInCollectionAST final : public AC_GALGAS_root {
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
  public: GGS_propertyInCollectionAST (void) ;

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
  public: GGS_propertyInCollectionAST (const GGS_propertyMutability & in_mutability,
                                       const GGS_lstring & in_typeName,
                                       const GGS_lstring & in_name,
                                       const GGS_AccessControlAST & in_accessControl,
                                       const GGS_bool & in_hasSelector,
                                       const GGS_propertyInCollectionInitializationAST & in_initialization) ;

//--------------------------------- Copy constructor
  public: GGS_propertyInCollectionAST (const GGS_propertyInCollectionAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyInCollectionAST & operator = (const GGS_propertyInCollectionAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyInCollectionAST init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (const class GGS_propertyMutability & inOperand0,
                                                                                                                          const class GGS_lstring & inOperand1,
                                                                                                                          const class GGS_lstring & inOperand2,
                                                                                                                          const class GGS_AccessControlAST & inOperand3,
                                                                                                                          const class GGS_bool & inOperand4,
                                                                                                                          const class GGS_propertyInCollectionInitializationAST & inOperand5,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyInCollectionAST ;

//--------------------------------------------------------------------------------------------------
//§Filewrapper§ 'predefinedTypeGenerationTemplate'
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const DirectoryWrapper gWrapperDirectory_0_predefinedTypeGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
// Phase 1: filewrapper @predefinedTypeGenerationTemplate
//--------------------------------------------------------------------------------------------------

class GGS_predefinedTypeGenerationTemplate final {

//-- Start of package generic part

//--------------------------------- GALGAS class getters
  public: static class GGS_string class_func_application_5F_package (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_bigint_5F_type (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_binaryset_5F_type (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_bool_5F_type (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_char_5F_type (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_filewrapper class_func_contents (LOCATION_ARGS) ;

  public: static class GGS_string class_func_data_5F_type (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_f_36__34__5F_type (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_filewrapper_5F_type (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_location_5F_type (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_predefinedTypesImplementation (const class GGS_sortedLexicalStyleArray & inOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_primitiveTypesHeaderPrologue (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_s_36__34__5F_type (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_sint_5F_type (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_string_5F_type (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_stringset_5F_type (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_timer_5F_type (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_u_31__36__5F_type (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_u_33__32__5F_type (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_u_36__34__5F_type (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_u_38__5F_type (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Class Methods

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @s_33__32_PredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_s_33__32_PredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_s_33__32_PredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_s_33__32_PredefinedTypeAST (const class cPtr_s_33__32_PredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_s_33__32_PredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                          const class GGS_string & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_s_33__32_PredefinedTypeAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_s_33__32_PredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @s32PredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_s_33__32_PredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void s_33__32_PredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    Compiler * inCompiler) ;


//--- Extension func cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg__ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_s_33__32_PredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_s_33__32_PredefinedTypeAST (const GGS_bool & in_isPredefined,
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

