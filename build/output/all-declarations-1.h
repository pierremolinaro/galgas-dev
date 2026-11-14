#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @extractedAssociatedValueForGeneration struct
//--------------------------------------------------------------------------------------------------

class GGS_extractedAssociatedValueForGeneration : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GGS_string mProperty_mCppName ;
  public: inline GGS_string readProperty_mCppName (void) const {
    return mProperty_mCppName ;
  }

  public: GGS_string mProperty_name ;
  public: inline GGS_string readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extractedAssociatedValueForGeneration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppName = inValue ;
  }

  public: inline void setter_setName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extractedAssociatedValueForGeneration (const GGS_unifiedTypeMapEntry & in_mType,
                                                     const GGS_string & in_mCppName,
                                                     const GGS_string & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_extractedAssociatedValueForGeneration (const GGS_extractedAssociatedValueForGeneration & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extractedAssociatedValueForGeneration & operator = (const GGS_extractedAssociatedValueForGeneration & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extractedAssociatedValueForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extractedAssociatedValueForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_switchInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_switchInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_switchInstructionForGeneration (const class cPtr_switchInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mEnumType (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mSwitchExpression (void) const ;

  public: class GGS__5B_switchBranchForGeneration_5D_ readProperty_mBranches (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchInstructionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                      const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                      const class GGS__5B_switchBranchForGeneration_5D_ & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_switchInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @switchInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_switchInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void switchInstructionForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                const class GGS__5B_switchBranchForGeneration_5D_ & inOperand2,
                                                                Compiler * inCompiler) ;


//--- Extension proc generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mEnumType ;
  public: GGS_semanticExpressionForGeneration mProperty_mSwitchExpression ;
  public: GGS__5B_switchBranchForGeneration_5D_ mProperty_mBranches ;


//--- Default constructor
  public: cPtr_switchInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_switchInstructionForGeneration (const GGS_unifiedTypeMapEntry & in_mEnumType,
                                               const GGS_semanticExpressionForGeneration & in_mSwitchExpression,
                                               const GGS__5B_switchBranchForGeneration_5D_ & in_mBranches,
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
// Phase 1: @switchInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_switchInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_switchInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_switchInstructionForGeneration_2E_weak (const class GGS_switchInstructionForGeneration & inSource) ;

  public: GGS_switchInstructionForGeneration_2E_weak & operator = (const class GGS_switchInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_switchInstructionForGeneration_2E_weak init_nil (void) {
    GGS_switchInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_switchInstructionForGeneration bang_switchInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_switchInstructionForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_switchInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_switchInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @setterCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_setterCallInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_setterCallInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_setterCallInstructionForGeneration (const class cPtr_setterCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mReceiverCppName (void) const ;

  public: class GGS_string readProperty_mReceiverBaseName (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mReceiverStructAttributes (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_lstring readProperty_mSetterName (void) const ;

  public: class GGS_methodKind readProperty_mKind (void) const ;

  public: class GGS__5B_actualParameterForGeneration_5D_ readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mHasCompilerArgument (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mMethodBaseType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_setterCallInstructionForGeneration init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                      const class GGS_string & inOperand1,
                                                                                                      const class GGS_string & inOperand2,
                                                                                                      const class GGS__5B_lstring_5D_ & inOperand3,
                                                                                                      const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                                      const class GGS_lstring & inOperand5,
                                                                                                      const class GGS_methodKind & inOperand6,
                                                                                                      const class GGS__5B_actualParameterForGeneration_5D_ & inOperand7,
                                                                                                      const class GGS_bool & inOperand8,
                                                                                                      const class GGS_unifiedTypeMapEntry & inOperand9,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_setterCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @setterCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_setterCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void setterCallInstructionForGeneration_init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                const class GGS_string & inOperand1,
                                                                                                const class GGS_string & inOperand2,
                                                                                                const class GGS__5B_lstring_5D_ & inOperand3,
                                                                                                const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                                const class GGS_lstring & inOperand5,
                                                                                                const class GGS_methodKind & inOperand6,
                                                                                                const class GGS__5B_actualParameterForGeneration_5D_ & inOperand7,
                                                                                                const class GGS_bool & inOperand8,
                                                                                                const class GGS_unifiedTypeMapEntry & inOperand9,
                                                                                                Compiler * inCompiler) ;


//--- Extension proc generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_string mProperty_mReceiverCppName ;
  public: GGS_string mProperty_mReceiverBaseName ;
  public: GGS__5B_lstring_5D_ mProperty_mReceiverStructAttributes ;
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GGS_lstring mProperty_mSetterName ;
  public: GGS_methodKind mProperty_mKind ;
  public: GGS__5B_actualParameterForGeneration_5D_ mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: GGS_unifiedTypeMapEntry mProperty_mMethodBaseType ;


//--- Default constructor
  public: cPtr_setterCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_setterCallInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                   const GGS_string & in_mReceiverCppName,
                                                   const GGS_string & in_mReceiverBaseName,
                                                   const GGS__5B_lstring_5D_ & in_mReceiverStructAttributes,
                                                   const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                   const GGS_lstring & in_mSetterName,
                                                   const GGS_methodKind & in_mKind,
                                                   const GGS__5B_actualParameterForGeneration_5D_ & in_mActualParameterList,
                                                   const GGS_bool & in_mHasCompilerArgument,
                                                   const GGS_unifiedTypeMapEntry & in_mMethodBaseType,
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
// Phase 1: @setterCallInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_setterCallInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_setterCallInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_setterCallInstructionForGeneration_2E_weak (const class GGS_setterCallInstructionForGeneration & inSource) ;

  public: GGS_setterCallInstructionForGeneration_2E_weak & operator = (const class GGS_setterCallInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_setterCallInstructionForGeneration_2E_weak init_nil (void) {
    GGS_setterCallInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_setterCallInstructionForGeneration bang_setterCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_setterCallInstructionForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_setterCallInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_setterCallInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_setterCallInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfSetterCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfSetterCallInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_selfSetterCallInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selfSetterCallInstructionForGeneration (const class cPtr_selfSetterCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mSelfCppName (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_lstring readProperty_mSetterName (void) const ;

  public: class GGS_methodKind readProperty_mKind (void) const ;

  public: class GGS__5B_actualParameterForGeneration_5D_ readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mHasCompilerArgument (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfSetterCallInstructionForGeneration init_21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                          const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                          const class GGS_lstring & inOperand2,
                                                                                          const class GGS_methodKind & inOperand3,
                                                                                          const class GGS__5B_actualParameterForGeneration_5D_ & inOperand4,
                                                                                          const class GGS_bool & inOperand5,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfSetterCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selfSetterCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_selfSetterCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selfSetterCallInstructionForGeneration_init_21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                    const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                    const class GGS_lstring & inOperand2,
                                                                                    const class GGS_methodKind & inOperand3,
                                                                                    const class GGS__5B_actualParameterForGeneration_5D_ & inOperand4,
                                                                                    const class GGS_bool & inOperand5,
                                                                                    Compiler * inCompiler) ;


//--- Extension proc generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mSelfCppName ;
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GGS_lstring mProperty_mSetterName ;
  public: GGS_methodKind mProperty_mKind ;
  public: GGS__5B_actualParameterForGeneration_5D_ mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mHasCompilerArgument ;


//--- Default constructor
  public: cPtr_selfSetterCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfSetterCallInstructionForGeneration (const GGS_string & in_mSelfCppName,
                                                       const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                       const GGS_lstring & in_mSetterName,
                                                       const GGS_methodKind & in_mKind,
                                                       const GGS__5B_actualParameterForGeneration_5D_ & in_mActualParameterList,
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
// Phase 1: @selfSetterCallInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfSetterCallInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfSetterCallInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfSetterCallInstructionForGeneration_2E_weak (const class GGS_selfSetterCallInstructionForGeneration & inSource) ;

  public: GGS_selfSetterCallInstructionForGeneration_2E_weak & operator = (const class GGS_selfSetterCallInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfSetterCallInstructionForGeneration_2E_weak init_nil (void) {
    GGS_selfSetterCallInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfSetterCallInstructionForGeneration bang_selfSetterCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selfSetterCallInstructionForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_selfSetterCallInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfSetterCallInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @loopInstructionWithoutVariantForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithoutVariantForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithoutVariantForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_loopInstructionWithoutVariantForGeneration (const class cPtr_loopInstructionWithoutVariantForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS__5B_semanticInstructionForGeneration_5D_ readProperty_mFirstInstructions (void) const ;

  public: class GGS__5B_ifTestForGeneration_5D_ readProperty_mLoopExpression (void) const ;

  public: class GGS__5B_semanticInstructionForGeneration_5D_ readProperty_mSecondInstructions (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_loopInstructionWithoutVariantForGeneration init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                      const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand1,
                                                                                      const class GGS__5B_ifTestForGeneration_5D_ & inOperand2,
                                                                                      const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand3,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithoutVariantForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @loopInstructionWithoutVariantForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_loopInstructionWithoutVariantForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void loopInstructionWithoutVariantForGeneration_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand1,
                                                                                const class GGS__5B_ifTestForGeneration_5D_ & inOperand2,
                                                                                const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand3,
                                                                                Compiler * inCompiler) ;


//--- Extension proc generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS__5B_semanticInstructionForGeneration_5D_ mProperty_mFirstInstructions ;
  public: GGS__5B_ifTestForGeneration_5D_ mProperty_mLoopExpression ;
  public: GGS__5B_semanticInstructionForGeneration_5D_ mProperty_mSecondInstructions ;


//--- Default constructor
  public: cPtr_loopInstructionWithoutVariantForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_loopInstructionWithoutVariantForGeneration (const GGS_location & in_mInstructionLocation,
                                                           const GGS__5B_semanticInstructionForGeneration_5D_ & in_mFirstInstructions,
                                                           const GGS__5B_ifTestForGeneration_5D_ & in_mLoopExpression,
                                                           const GGS__5B_semanticInstructionForGeneration_5D_ & in_mSecondInstructions,
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
// Phase 1: @loopInstructionWithoutVariantForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithoutVariantForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithoutVariantForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_loopInstructionWithoutVariantForGeneration_2E_weak (const class GGS_loopInstructionWithoutVariantForGeneration & inSource) ;

  public: GGS_loopInstructionWithoutVariantForGeneration_2E_weak & operator = (const class GGS_loopInstructionWithoutVariantForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_loopInstructionWithoutVariantForGeneration_2E_weak init_nil (void) {
    GGS_loopInstructionWithoutVariantForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_loopInstructionWithoutVariantForGeneration bang_loopInstructionWithoutVariantForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_loopInstructionWithoutVariantForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_loopInstructionWithoutVariantForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithoutVariantForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @undefinedLocalConstantDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_undefinedLocalConstantDeclarationForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_undefinedLocalConstantDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_undefinedLocalConstantDeclarationForGeneration (const class cPtr_undefinedLocalConstantDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mTargetType (void) const ;

  public: class GGS_string readProperty_mCppVariableName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_undefinedLocalConstantDeclarationForGeneration init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                  const class GGS_string & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_undefinedLocalConstantDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @undefinedLocalConstantDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_undefinedLocalConstantDeclarationForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void undefinedLocalConstantDeclarationForGeneration_init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GGS_string & inOperand1,
                                                                            Compiler * inCompiler) ;


//--- Extension proc generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mTargetType ;
  public: GGS_string mProperty_mCppVariableName ;


//--- Default constructor
  public: cPtr_undefinedLocalConstantDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_undefinedLocalConstantDeclarationForGeneration (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                               const GGS_string & in_mCppVariableName,
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
// Phase 1: @undefinedLocalConstantDeclarationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak (const class GGS_undefinedLocalConstantDeclarationForGeneration & inSource) ;

  public: GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak & operator = (const class GGS_undefinedLocalConstantDeclarationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak init_nil (void) {
    GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_undefinedLocalConstantDeclarationForGeneration bang_undefinedLocalConstantDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_undefinedLocalConstantDeclarationForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVariableOrConstantDeclarationWithSourceExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const class cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mTargetType (void) const ;

  public: class GGS_bool readProperty_mIsConstant (void) const ;

  public: class GGS_string readProperty_mCppVariableName (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mSourceExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                                               const class GGS_bool & inOperand1,
                                                                                                               const class GGS_string & inOperand2,
                                                                                                               const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @localVariableOrConstantDeclarationWithSourceExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void localVariableOrConstantDeclarationWithSourceExpressionForGeneration_init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                                         const class GGS_bool & inOperand1,
                                                                                                         const class GGS_string & inOperand2,
                                                                                                         const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                         Compiler * inCompiler) ;


//--- Extension proc generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mTargetType ;
  public: GGS_bool mProperty_mIsConstant ;
  public: GGS_string mProperty_mCppVariableName ;
  public: GGS_semanticExpressionForGeneration mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                                    const GGS_bool & in_mIsConstant,
                                                                                    const GGS_string & in_mCppVariableName,
                                                                                    const GGS_semanticExpressionForGeneration & in_mSourceExpression,
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
// Phase 1: @localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (const class GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inSource) ;

  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak & operator = (const class GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak init_nil (void) {
    GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration bang_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVariableDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableDeclarationForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_localVariableDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_localVariableDeclarationForGeneration (const class cPtr_localVariableDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mVariableType (void) const ;

  public: class GGS_string readProperty_mCppVariableName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVariableDeclarationForGeneration init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @localVariableDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_localVariableDeclarationForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void localVariableDeclarationForGeneration_init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                   const class GGS_string & inOperand1,
                                                                   Compiler * inCompiler) ;


//--- Extension proc generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mVariableType ;
  public: GGS_string mProperty_mCppVariableName ;


//--- Default constructor
  public: cPtr_localVariableDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_localVariableDeclarationForGeneration (const GGS_unifiedTypeMapEntry & in_mVariableType,
                                                      const GGS_string & in_mCppVariableName,
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
// Phase 1: @localVariableDeclarationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableDeclarationForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_localVariableDeclarationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_localVariableDeclarationForGeneration_2E_weak (const class GGS_localVariableDeclarationForGeneration & inSource) ;

  public: GGS_localVariableDeclarationForGeneration_2E_weak & operator = (const class GGS_localVariableDeclarationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_localVariableDeclarationForGeneration_2E_weak init_nil (void) {
    GGS_localVariableDeclarationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_localVariableDeclarationForGeneration bang_localVariableDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_localVariableDeclarationForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_localVariableDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [actualOutputArgumentAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_actualOutputArgumentAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_actualOutputArgumentAST_5D_ (const class GGS__5B_actualOutputArgumentAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_actualOutputArgumentAST_5D_ (const DownEnumerator__5B_actualOutputArgumentAST_5D_ &) = delete ;
  private: DownEnumerator__5B_actualOutputArgumentAST_5D_ & operator = (const DownEnumerator__5B_actualOutputArgumentAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_actualOutputArgumentAST current (LOCATION_ARGS) const ;
  public: class GGS_actualOutputArgumentAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_actualOutputArgumentAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_actualOutputArgumentAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_actualOutputArgumentAST_5D_ (const class GGS__5B_actualOutputArgumentAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_actualOutputArgumentAST_5D_ (const UpEnumerator__5B_actualOutputArgumentAST_5D_ &) = delete ;
  private: UpEnumerator__5B_actualOutputArgumentAST_5D_ & operator = (const UpEnumerator__5B_actualOutputArgumentAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_actualOutputArgumentAST current (LOCATION_ARGS) const ;
  public: class GGS_actualOutputArgumentAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_actualOutputArgumentAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_actualOutputArgumentAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_actualOutputArgumentAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_actualOutputArgumentAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_actualOutputArgumentAST_5D_ (const GGS__5B_actualOutputArgumentAST_5D_ & inSource) ;
  public: GGS__5B_actualOutputArgumentAST_5D_ & operator = (const GGS__5B_actualOutputArgumentAST_5D_ & inSource) ;

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
  public: static GGS__5B_actualOutputArgumentAST_5D_ init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_actualOutputArgumentAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_actualOutputArgumentAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_actualOutputArgumentAST_5D_ add_operation (const GGS__5B_actualOutputArgumentAST_5D_ & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_actualOutputArgumentAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_actualOutputArgumentAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_actualOutputArgumentAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_actualOutputArgumentAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_actualOutputArgumentAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_actualOutputArgumentAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_actualOutputArgumentAST getter_first (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_actualOutputArgumentAST getter_last (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_actualOutputArgumentAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_actualOutputArgumentAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                    const class GGS_uint & constinOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_actualOutputArgumentAST readSubscript__3F_ (const class GGS_uint & in0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_actualOutputArgumentAST_5D_ ;
  friend class DownEnumerator__5B_actualOutputArgumentAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_actualOutputArgumentAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actualOutputArgumentAST struct
//--------------------------------------------------------------------------------------------------

class GGS_actualOutputArgumentAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: inline GGS_lstring readProperty_mActualSelector (void) const {
    return mProperty_mActualSelector ;
  }

  public: GGS_semanticExpressionAST mProperty_mExpression ;
  public: inline GGS_semanticExpressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GGS_location mProperty_mEndOfExpressionLocation ;
  public: inline GGS_location readProperty_mEndOfExpressionLocation (void) const {
    return mProperty_mEndOfExpressionLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_actualOutputArgumentAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMActualSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActualSelector = inValue ;
  }

  public: inline void setter_setMExpression (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMEndOfExpressionLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfExpressionLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_actualOutputArgumentAST (const GGS_lstring & in_mActualSelector,
                                       const GGS_semanticExpressionAST & in_mExpression,
                                       const GGS_location & in_mEndOfExpressionLocation) ;

//--------------------------------- Copy constructor
  public: GGS_actualOutputArgumentAST (const GGS_actualOutputArgumentAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_actualOutputArgumentAST & operator = (const GGS_actualOutputArgumentAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actualOutputArgumentAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_semanticExpressionAST & inOperand1,
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualOutputArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [semanticExpressionForGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_semanticExpressionForGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_semanticExpressionForGeneration_5D_ (const class GGS__5B_semanticExpressionForGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_semanticExpressionForGeneration_5D_ (const DownEnumerator__5B_semanticExpressionForGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_semanticExpressionForGeneration_5D_ & operator = (const DownEnumerator__5B_semanticExpressionForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_semanticExpressionForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_semanticExpressionForGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_semanticExpressionForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_semanticExpressionForGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_semanticExpressionForGeneration_5D_ (const class GGS__5B_semanticExpressionForGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_semanticExpressionForGeneration_5D_ (const UpEnumerator__5B_semanticExpressionForGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_semanticExpressionForGeneration_5D_ & operator = (const UpEnumerator__5B_semanticExpressionForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_semanticExpressionForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_semanticExpressionForGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_semanticExpressionForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_semanticExpressionForGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_semanticExpressionForGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_semanticExpressionForGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_semanticExpressionForGeneration_5D_ (const GGS__5B_semanticExpressionForGeneration_5D_ & inSource) ;
  public: GGS__5B_semanticExpressionForGeneration_5D_ & operator = (const GGS__5B_semanticExpressionForGeneration_5D_ & inSource) ;

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
  public: static GGS__5B_semanticExpressionForGeneration_5D_ init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_semanticExpressionForGeneration_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_semanticExpressionForGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_semanticExpressionForGeneration_5D_ add_operation (const GGS__5B_semanticExpressionForGeneration_5D_ & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_semanticExpressionForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_semanticExpressionForGeneration constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_semanticExpressionForGeneration & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_semanticExpressionForGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_semanticExpressionForGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_semanticExpressionForGeneration constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_semanticExpressionForGeneration getter_first (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_semanticExpressionForGeneration getter_last (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_semanticExpressionForGeneration_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_semanticExpressionForGeneration_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                            const class GGS_uint & constinOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_semanticExpressionForGeneration readSubscript__3F_ (const class GGS_uint & in0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_semanticExpressionForGeneration_5D_ ;
  friend class DownEnumerator__5B_semanticExpressionForGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_semanticExpressionForGeneration_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @superInitInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_superInitInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_superInitInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_superInitInstructionForGeneration (const class cPtr_superInitInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mSuperInitializerSignature (void) const ;

  public: class GGS__5B_semanticExpressionForGeneration_5D_ readProperty_mActualParameterList (void) const ;

  public: class GGS_string readProperty_mSuperTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_superInitInstructionForGeneration init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             const class GGS__5B_semanticExpressionForGeneration_5D_ & inOperand2,
                                                                             const class GGS_string & inOperand3,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superInitInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superInitInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @superInitInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_superInitInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void superInitInstructionForGeneration_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_string & inOperand1,
                                                                       const class GGS__5B_semanticExpressionForGeneration_5D_ & inOperand2,
                                                                       const class GGS_string & inOperand3,
                                                                       Compiler * inCompiler) ;


//--- Extension proc generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_string mProperty_mSuperInitializerSignature ;
  public: GGS__5B_semanticExpressionForGeneration_5D_ mProperty_mActualParameterList ;
  public: GGS_string mProperty_mSuperTypeName ;


//--- Default constructor
  public: cPtr_superInitInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_superInitInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                  const GGS_string & in_mSuperInitializerSignature,
                                                  const GGS__5B_semanticExpressionForGeneration_5D_ & in_mActualParameterList,
                                                  const GGS_string & in_mSuperTypeName,
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
// Phase 1: @superInitInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_superInitInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_superInitInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_superInitInstructionForGeneration_2E_weak (const class GGS_superInitInstructionForGeneration & inSource) ;

  public: GGS_superInitInstructionForGeneration_2E_weak & operator = (const class GGS_superInitInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_superInitInstructionForGeneration_2E_weak init_nil (void) {
    GGS_superInitInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_superInitInstructionForGeneration bang_superInitInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_superInitInstructionForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_superInitInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superInitInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superInitInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeMethodCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_typeMethodCallInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_typeMethodCallInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_typeMethodCallInstructionForGeneration (const class cPtr_typeMethodCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mMethodName (void) const ;

  public: class GGS__5B_actualParameterForGeneration_5D_ readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mHasCompilerArgument (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeMethodCallInstructionForGeneration init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS__5B_actualParameterForGeneration_5D_ & inOperand2,
                                                                                  const class GGS_bool & inOperand3,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeMethodCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @typeMethodCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_typeMethodCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void typeMethodCallInstructionForGeneration_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS__5B_actualParameterForGeneration_5D_ & inOperand2,
                                                                            const class GGS_bool & inOperand3,
                                                                            Compiler * inCompiler) ;


//--- Extension proc generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mMethodName ;
  public: GGS__5B_actualParameterForGeneration_5D_ mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mHasCompilerArgument ;


//--- Default constructor
  public: cPtr_typeMethodCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_typeMethodCallInstructionForGeneration (const GGS_lstring & in_mTypeName,
                                                       const GGS_lstring & in_mMethodName,
                                                       const GGS__5B_actualParameterForGeneration_5D_ & in_mActualParameterList,
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
// Phase 1: @typeMethodCallInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_typeMethodCallInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_typeMethodCallInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_typeMethodCallInstructionForGeneration_2E_weak (const class GGS_typeMethodCallInstructionForGeneration & inSource) ;

  public: GGS_typeMethodCallInstructionForGeneration_2E_weak & operator = (const class GGS_typeMethodCallInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_typeMethodCallInstructionForGeneration_2E_weak init_nil (void) {
    GGS_typeMethodCallInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_typeMethodCallInstructionForGeneration bang_typeMethodCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_typeMethodCallInstructionForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_typeMethodCallInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeMethodCallInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @assignmentInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_assignmentInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_assignmentInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_assignmentInstructionForGeneration (const class cPtr_assignmentInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mTargetType (void) const ;

  public: class GGS_string readProperty_mTargetCppName (void) const ;

  public: class GGS_string readProperty_mNameForCheckingFormalParameterUsing (void) const ;

  public: class GGS_string readProperty_mOptionalProperty (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mSourceExpression (void) const ;

  public: class GGS_location readProperty_mSourceLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_assignmentInstructionForGeneration init_21__21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                          const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                          const class GGS_string & inOperand2,
                                                                                          const class GGS_string & inOperand3,
                                                                                          const class GGS_string & inOperand4,
                                                                                          const class GGS_semanticExpressionForGeneration & inOperand5,
                                                                                          const class GGS_location & inOperand6,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assignmentInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @assignmentInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_assignmentInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void assignmentInstructionForGeneration_init_21__21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                    const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                    const class GGS_string & inOperand2,
                                                                                    const class GGS_string & inOperand3,
                                                                                    const class GGS_string & inOperand4,
                                                                                    const class GGS_semanticExpressionForGeneration & inOperand5,
                                                                                    const class GGS_location & inOperand6,
                                                                                    Compiler * inCompiler) ;


//--- Extension proc generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GGS_unifiedTypeMapEntry mProperty_mTargetType ;
  public: GGS_string mProperty_mTargetCppName ;
  public: GGS_string mProperty_mNameForCheckingFormalParameterUsing ;
  public: GGS_string mProperty_mOptionalProperty ;
  public: GGS_semanticExpressionForGeneration mProperty_mSourceExpression ;
  public: GGS_location mProperty_mSourceLocation ;


//--- Default constructor
  public: cPtr_assignmentInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_assignmentInstructionForGeneration (const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                   const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                   const GGS_string & in_mTargetCppName,
                                                   const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                   const GGS_string & in_mOptionalProperty,
                                                   const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                                                   const GGS_location & in_mSourceLocation,
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
// Phase 1: @assignmentInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_assignmentInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_assignmentInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_assignmentInstructionForGeneration_2E_weak (const class GGS_assignmentInstructionForGeneration & inSource) ;

  public: GGS_assignmentInstructionForGeneration_2E_weak & operator = (const class GGS_assignmentInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_assignmentInstructionForGeneration_2E_weak init_nil (void) {
    GGS_assignmentInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_assignmentInstructionForGeneration bang_assignmentInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_assignmentInstructionForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_assignmentInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assignmentInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [templateDelimitor2AST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_templateDelimitor_32_AST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_templateDelimitor_32_AST_5D_ (const class GGS__5B_templateDelimitor_32_AST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_templateDelimitor_32_AST_5D_ (const DownEnumerator__5B_templateDelimitor_32_AST_5D_ &) = delete ;
  private: DownEnumerator__5B_templateDelimitor_32_AST_5D_ & operator = (const DownEnumerator__5B_templateDelimitor_32_AST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateDelimitor_32_AST current (LOCATION_ARGS) const ;
  public: class GGS_templateDelimitor_32_AST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_templateDelimitor_32_AST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_templateDelimitor_32_AST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_templateDelimitor_32_AST_5D_ (const class GGS__5B_templateDelimitor_32_AST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_templateDelimitor_32_AST_5D_ (const UpEnumerator__5B_templateDelimitor_32_AST_5D_ &) = delete ;
  private: UpEnumerator__5B_templateDelimitor_32_AST_5D_ & operator = (const UpEnumerator__5B_templateDelimitor_32_AST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateDelimitor_32_AST current (LOCATION_ARGS) const ;
  public: class GGS_templateDelimitor_32_AST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_templateDelimitor_32_AST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_templateDelimitor_32_AST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_templateDelimitor_32_AST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_templateDelimitor_32_AST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_templateDelimitor_32_AST_5D_ (const GGS__5B_templateDelimitor_32_AST_5D_ & inSource) ;
  public: GGS__5B_templateDelimitor_32_AST_5D_ & operator = (const GGS__5B_templateDelimitor_32_AST_5D_ & inSource) ;

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
  public: static GGS__5B_templateDelimitor_32_AST_5D_ init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_templateDelimitor_32_AST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_templateDelimitor_32_AST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_templateDelimitor_32_AST_5D_ add_operation (const GGS__5B_templateDelimitor_32_AST_5D_ & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_templateDelimitor_32_AST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_templateDelimitor_32_AST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_templateDelimitor_32_AST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_templateDelimitor_32_AST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_templateDelimitor_32_AST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_templateDelimitor_32_AST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_templateDelimitor_32_AST getter_first (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateDelimitor_32_AST getter_last (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateDelimitor_32_AST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateDelimitor_32_AST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                     const class GGS_uint & constinOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_templateDelimitor_32_AST readSubscript__3F_ (const class GGS_uint & in0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_templateDelimitor_32_AST_5D_ ;
  friend class DownEnumerator__5B_templateDelimitor_32_AST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_templateDelimitor_32_AST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateDelimitor_32_AST struct
//--------------------------------------------------------------------------------------------------

class GGS_templateDelimitor_32_AST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mStartString ;
  public: inline GGS_lstring readProperty_mStartString (void) const {
    return mProperty_mStartString ;
  }

  public: GGS_bool mProperty_nonAtomicSelection ;
  public: inline GGS_bool readProperty_nonAtomicSelection (void) const {
    return mProperty_nonAtomicSelection ;
  }

  public: GGS_bool mProperty_mTemplateEndMark ;
  public: inline GGS_bool readProperty_mTemplateEndMark (void) const {
    return mProperty_mTemplateEndMark ;
  }

  public: GGS_bool mProperty_mPreserved ;
  public: inline GGS_bool readProperty_mPreserved (void) const {
    return mProperty_mPreserved ;
  }

  public: GGS_lstring mProperty_mEndString ;
  public: inline GGS_lstring readProperty_mEndString (void) const {
    return mProperty_mEndString ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateDelimitor_32_AST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMStartString (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStartString = inValue ;
  }

  public: inline void setter_setNonAtomicSelection (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_nonAtomicSelection = inValue ;
  }

  public: inline void setter_setMTemplateEndMark (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTemplateEndMark = inValue ;
  }

  public: inline void setter_setMPreserved (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreserved = inValue ;
  }

  public: inline void setter_setMEndString (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndString = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateDelimitor_32_AST (const GGS_lstring & in_mStartString,
                                        const GGS_bool & in_nonAtomicSelection,
                                        const GGS_bool & in_mTemplateEndMark,
                                        const GGS_bool & in_mPreserved,
                                        const GGS_lstring & in_mEndString) ;

//--------------------------------- Copy constructor
  public: GGS_templateDelimitor_32_AST (const GGS_templateDelimitor_32_AST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateDelimitor_32_AST & operator = (const GGS_templateDelimitor_32_AST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateDelimitor_32_AST init_21__21_nonAtomicSelection_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_bool & inOperand1,
                                                                                          const class GGS_bool & inOperand2,
                                                                                          const class GGS_bool & inOperand3,
                                                                                          const class GGS_lstring & inOperand4,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateDelimitor_32_AST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [templateReplacementAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_templateReplacementAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_templateReplacementAST_5D_ (const class GGS__5B_templateReplacementAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_templateReplacementAST_5D_ (const DownEnumerator__5B_templateReplacementAST_5D_ &) = delete ;
  private: DownEnumerator__5B_templateReplacementAST_5D_ & operator = (const DownEnumerator__5B_templateReplacementAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateReplacementAST current (LOCATION_ARGS) const ;
  public: class GGS_templateReplacementAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_templateReplacementAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_templateReplacementAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_templateReplacementAST_5D_ (const class GGS__5B_templateReplacementAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_templateReplacementAST_5D_ (const UpEnumerator__5B_templateReplacementAST_5D_ &) = delete ;
  private: UpEnumerator__5B_templateReplacementAST_5D_ & operator = (const UpEnumerator__5B_templateReplacementAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateReplacementAST current (LOCATION_ARGS) const ;
  public: class GGS_templateReplacementAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_templateReplacementAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_templateReplacementAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_templateReplacementAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_templateReplacementAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_templateReplacementAST_5D_ (const GGS__5B_templateReplacementAST_5D_ & inSource) ;
  public: GGS__5B_templateReplacementAST_5D_ & operator = (const GGS__5B_templateReplacementAST_5D_ & inSource) ;

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
  public: static GGS__5B_templateReplacementAST_5D_ init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_templateReplacementAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_templateReplacementAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_templateReplacementAST_5D_ add_operation (const GGS__5B_templateReplacementAST_5D_ & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_templateReplacementAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_templateReplacementAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_templateReplacementAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_templateReplacementAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_templateReplacementAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_templateReplacementAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_templateReplacementAST getter_first (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateReplacementAST getter_last (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateReplacementAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateReplacementAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                   const class GGS_uint & constinOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_templateReplacementAST readSubscript__3F_ (const class GGS_uint & in0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_templateReplacementAST_5D_ ;
  friend class DownEnumerator__5B_templateReplacementAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_templateReplacementAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateReplacementAST struct
//--------------------------------------------------------------------------------------------------

class GGS_templateReplacementAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mMatchString ;
  public: inline GGS_lstring readProperty_mMatchString (void) const {
    return mProperty_mMatchString ;
  }

  public: GGS_lstring mProperty_mReplacementString ;
  public: inline GGS_lstring readProperty_mReplacementString (void) const {
    return mProperty_mReplacementString ;
  }

  public: GGS_lstring mProperty_mReplacementFunction ;
  public: inline GGS_lstring readProperty_mReplacementFunction (void) const {
    return mProperty_mReplacementFunction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateReplacementAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMatchString (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMatchString = inValue ;
  }

  public: inline void setter_setMReplacementString (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReplacementString = inValue ;
  }

  public: inline void setter_setMReplacementFunction (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReplacementFunction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateReplacementAST (const GGS_lstring & in_mMatchString,
                                      const GGS_lstring & in_mReplacementString,
                                      const GGS_lstring & in_mReplacementFunction) ;

//--------------------------------- Copy constructor
  public: GGS_templateReplacementAST (const GGS_templateReplacementAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateReplacementAST & operator = (const GGS_templateReplacementAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateReplacementAST init_21__21__21_ (const class GGS_lstring & inOperand0,
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateReplacementAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [lexicalAttributeAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_lexicalAttributeAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_lexicalAttributeAST_5D_ (const class GGS__5B_lexicalAttributeAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_lexicalAttributeAST_5D_ (const DownEnumerator__5B_lexicalAttributeAST_5D_ &) = delete ;
  private: DownEnumerator__5B_lexicalAttributeAST_5D_ & operator = (const DownEnumerator__5B_lexicalAttributeAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_lexicalAttributeAST current (LOCATION_ARGS) const ;
  public: class GGS_lexicalAttributeAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_lexicalAttributeAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_lexicalAttributeAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_lexicalAttributeAST_5D_ (const class GGS__5B_lexicalAttributeAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_lexicalAttributeAST_5D_ (const UpEnumerator__5B_lexicalAttributeAST_5D_ &) = delete ;
  private: UpEnumerator__5B_lexicalAttributeAST_5D_ & operator = (const UpEnumerator__5B_lexicalAttributeAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_lexicalAttributeAST current (LOCATION_ARGS) const ;
  public: class GGS_lexicalAttributeAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_lexicalAttributeAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_lexicalAttributeAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_lexicalAttributeAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_lexicalAttributeAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_lexicalAttributeAST_5D_ (const GGS__5B_lexicalAttributeAST_5D_ & inSource) ;
  public: GGS__5B_lexicalAttributeAST_5D_ & operator = (const GGS__5B_lexicalAttributeAST_5D_ & inSource) ;

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
  public: static GGS__5B_lexicalAttributeAST_5D_ init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_lexicalAttributeAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_lexicalAttributeAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_lexicalAttributeAST_5D_ add_operation (const GGS__5B_lexicalAttributeAST_5D_ & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lexicalAttributeAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_lexicalAttributeAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_lexicalAttributeAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_lexicalAttributeAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_lexicalAttributeAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_lexicalAttributeAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lexicalAttributeAST getter_first (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalAttributeAST getter_last (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalAttributeAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalAttributeAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                const class GGS_uint & constinOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_lexicalAttributeAST readSubscript__3F_ (const class GGS_uint & in0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_lexicalAttributeAST_5D_ ;
  friend class DownEnumerator__5B_lexicalAttributeAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_lexicalAttributeAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalAttributeAST struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalAttributeAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: inline GGS_lstring readProperty_mTypeName (void) const {
    return mProperty_mTypeName ;
  }

  public: GGS_lstring mProperty_mName ;
  public: inline GGS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalAttributeAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeName = inValue ;
  }

  public: inline void setter_setMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalAttributeAST (const GGS_lstring & in_mTypeName,
                                   const GGS_lstring & in_mName) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalAttributeAST (const GGS_lexicalAttributeAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalAttributeAST & operator = (const GGS_lexicalAttributeAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalAttributeAST init_21__21_ (const class GGS_lstring & inOperand0,
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [lexicalStyleAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_lexicalStyleAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_lexicalStyleAST_5D_ (const class GGS__5B_lexicalStyleAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_lexicalStyleAST_5D_ (const DownEnumerator__5B_lexicalStyleAST_5D_ &) = delete ;
  private: DownEnumerator__5B_lexicalStyleAST_5D_ & operator = (const DownEnumerator__5B_lexicalStyleAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_lexicalStyleAST current (LOCATION_ARGS) const ;
  public: class GGS_lexicalStyleAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_lexicalStyleAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_lexicalStyleAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_lexicalStyleAST_5D_ (const class GGS__5B_lexicalStyleAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_lexicalStyleAST_5D_ (const UpEnumerator__5B_lexicalStyleAST_5D_ &) = delete ;
  private: UpEnumerator__5B_lexicalStyleAST_5D_ & operator = (const UpEnumerator__5B_lexicalStyleAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_lexicalStyleAST current (LOCATION_ARGS) const ;
  public: class GGS_lexicalStyleAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_lexicalStyleAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_lexicalStyleAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_lexicalStyleAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_lexicalStyleAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_lexicalStyleAST_5D_ (const GGS__5B_lexicalStyleAST_5D_ & inSource) ;
  public: GGS__5B_lexicalStyleAST_5D_ & operator = (const GGS__5B_lexicalStyleAST_5D_ & inSource) ;

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
  public: static GGS__5B_lexicalStyleAST_5D_ init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_lexicalStyleAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_lexicalStyleAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_lexicalStyleAST_5D_ add_operation (const GGS__5B_lexicalStyleAST_5D_ & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lexicalStyleAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_lexicalStyleAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_lexicalStyleAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_lexicalStyleAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_lexicalStyleAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_lexicalStyleAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lexicalStyleAST getter_first (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalStyleAST getter_last (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalStyleAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalStyleAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                            const class GGS_uint & constinOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_lexicalStyleAST readSubscript__3F_ (const class GGS_uint & in0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_lexicalStyleAST_5D_ ;
  friend class DownEnumerator__5B_lexicalStyleAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_lexicalStyleAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalStyleAST struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalStyleAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mName ;
  public: inline GGS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GGS_lstring mProperty_mComment ;
  public: inline GGS_lstring readProperty_mComment (void) const {
    return mProperty_mComment ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalStyleAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMComment (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mComment = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalStyleAST (const GGS_lstring & in_mName,
                               const GGS_lstring & in_mComment) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalStyleAST (const GGS_lexicalStyleAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalStyleAST & operator = (const GGS_lexicalStyleAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalStyleAST init_21__21_ (const class GGS_lstring & inOperand0,
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStyleAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [terminalDeclarationAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_terminalDeclarationAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_terminalDeclarationAST_5D_ (const class GGS__5B_terminalDeclarationAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_terminalDeclarationAST_5D_ (const DownEnumerator__5B_terminalDeclarationAST_5D_ &) = delete ;
  private: DownEnumerator__5B_terminalDeclarationAST_5D_ & operator = (const DownEnumerator__5B_terminalDeclarationAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_terminalDeclarationAST current (LOCATION_ARGS) const ;
  public: class GGS_terminalDeclarationAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_terminalDeclarationAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_terminalDeclarationAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_terminalDeclarationAST_5D_ (const class GGS__5B_terminalDeclarationAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_terminalDeclarationAST_5D_ (const UpEnumerator__5B_terminalDeclarationAST_5D_ &) = delete ;
  private: UpEnumerator__5B_terminalDeclarationAST_5D_ & operator = (const UpEnumerator__5B_terminalDeclarationAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_terminalDeclarationAST current (LOCATION_ARGS) const ;
  public: class GGS_terminalDeclarationAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_terminalDeclarationAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_terminalDeclarationAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_terminalDeclarationAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_terminalDeclarationAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_terminalDeclarationAST_5D_ (const GGS__5B_terminalDeclarationAST_5D_ & inSource) ;
  public: GGS__5B_terminalDeclarationAST_5D_ & operator = (const GGS__5B_terminalDeclarationAST_5D_ & inSource) ;

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
  public: static GGS__5B_terminalDeclarationAST_5D_ init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_terminalDeclarationAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_terminalDeclarationAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_terminalDeclarationAST_5D_ add_operation (const GGS__5B_terminalDeclarationAST_5D_ & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_terminalDeclarationAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_terminalDeclarationAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_terminalDeclarationAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_terminalDeclarationAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_terminalDeclarationAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_terminalDeclarationAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_terminalDeclarationAST getter_first (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_terminalDeclarationAST getter_last (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_terminalDeclarationAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_terminalDeclarationAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                   const class GGS_uint & constinOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_terminalDeclarationAST readSubscript__3F_ (const class GGS_uint & in0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_terminalDeclarationAST_5D_ ;
  friend class DownEnumerator__5B_terminalDeclarationAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_terminalDeclarationAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [sentLexicalAttributeAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_sentLexicalAttributeAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_sentLexicalAttributeAST_5D_ (const class GGS__5B_sentLexicalAttributeAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_sentLexicalAttributeAST_5D_ (const DownEnumerator__5B_sentLexicalAttributeAST_5D_ &) = delete ;
  private: DownEnumerator__5B_sentLexicalAttributeAST_5D_ & operator = (const DownEnumerator__5B_sentLexicalAttributeAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_sentLexicalAttributeAST current (LOCATION_ARGS) const ;
  public: class GGS_sentLexicalAttributeAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_sentLexicalAttributeAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_sentLexicalAttributeAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_sentLexicalAttributeAST_5D_ (const class GGS__5B_sentLexicalAttributeAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_sentLexicalAttributeAST_5D_ (const UpEnumerator__5B_sentLexicalAttributeAST_5D_ &) = delete ;
  private: UpEnumerator__5B_sentLexicalAttributeAST_5D_ & operator = (const UpEnumerator__5B_sentLexicalAttributeAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_sentLexicalAttributeAST current (LOCATION_ARGS) const ;
  public: class GGS_sentLexicalAttributeAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_sentLexicalAttributeAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_sentLexicalAttributeAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_sentLexicalAttributeAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_sentLexicalAttributeAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_sentLexicalAttributeAST_5D_ (const GGS__5B_sentLexicalAttributeAST_5D_ & inSource) ;
  public: GGS__5B_sentLexicalAttributeAST_5D_ & operator = (const GGS__5B_sentLexicalAttributeAST_5D_ & inSource) ;

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
  public: static GGS__5B_sentLexicalAttributeAST_5D_ init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_sentLexicalAttributeAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_sentLexicalAttributeAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_sentLexicalAttributeAST_5D_ add_operation (const GGS__5B_sentLexicalAttributeAST_5D_ & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_sentLexicalAttributeAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_sentLexicalAttributeAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_sentLexicalAttributeAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_sentLexicalAttributeAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_sentLexicalAttributeAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_sentLexicalAttributeAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_sentLexicalAttributeAST getter_first (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_sentLexicalAttributeAST getter_last (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_sentLexicalAttributeAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_sentLexicalAttributeAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                    const class GGS_uint & constinOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_sentLexicalAttributeAST readSubscript__3F_ (const class GGS_uint & in0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_sentLexicalAttributeAST_5D_ ;
  friend class DownEnumerator__5B_sentLexicalAttributeAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_sentLexicalAttributeAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalDeclarationAST struct
//--------------------------------------------------------------------------------------------------

class GGS_terminalDeclarationAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mName ;
  public: inline GGS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GGS__5B_sentLexicalAttributeAST_5D_ mProperty_mSentAttributeList ;
  public: inline GGS__5B_sentLexicalAttributeAST_5D_ readProperty_mSentAttributeList (void) const {
    return mProperty_mSentAttributeList ;
  }

  public: GGS_lstring mProperty_mSyntaxErrorMessage ;
  public: inline GGS_lstring readProperty_mSyntaxErrorMessage (void) const {
    return mProperty_mSyntaxErrorMessage ;
  }

  public: GGS_lstring mProperty_mStyle ;
  public: inline GGS_lstring readProperty_mStyle (void) const {
    return mProperty_mStyle ;
  }

  public: GGS_bool mProperty_nonAtomicSelection ;
  public: inline GGS_bool readProperty_nonAtomicSelection (void) const {
    return mProperty_nonAtomicSelection ;
  }

  public: GGS_bool mProperty_isEndOfTemplateMark ;
  public: inline GGS_bool readProperty_isEndOfTemplateMark (void) const {
    return mProperty_isEndOfTemplateMark ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_terminalDeclarationAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMSentAttributeList (const GGS__5B_sentLexicalAttributeAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSentAttributeList = inValue ;
  }

  public: inline void setter_setMSyntaxErrorMessage (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxErrorMessage = inValue ;
  }

  public: inline void setter_setMStyle (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStyle = inValue ;
  }

  public: inline void setter_setNonAtomicSelection (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_nonAtomicSelection = inValue ;
  }

  public: inline void setter_setIsEndOfTemplateMark (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isEndOfTemplateMark = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_terminalDeclarationAST (const GGS_lstring & in_mName,
                                      const GGS__5B_sentLexicalAttributeAST_5D_ & in_mSentAttributeList,
                                      const GGS_lstring & in_mSyntaxErrorMessage,
                                      const GGS_lstring & in_mStyle,
                                      const GGS_bool & in_nonAtomicSelection,
                                      const GGS_bool & in_isEndOfTemplateMark) ;

//--------------------------------- Copy constructor
  public: GGS_terminalDeclarationAST (const GGS_terminalDeclarationAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_terminalDeclarationAST & operator = (const GGS_terminalDeclarationAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalDeclarationAST init_21__21__21__21__21_nonAtomicSelection_21_isEndOfTemplateMark (const class GGS_lstring & inOperand0,
                                                                                                               const class GGS__5B_sentLexicalAttributeAST_5D_ & inOperand1,
                                                                                                               const class GGS_lstring & inOperand2,
                                                                                                               const class GGS_lstring & inOperand3,
                                                                                                               const class GGS_bool & inOperand4,
                                                                                                               const class GGS_bool & inOperand5,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [lexicalMessageDeclarationAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_lexicalMessageDeclarationAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_lexicalMessageDeclarationAST_5D_ (const class GGS__5B_lexicalMessageDeclarationAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_lexicalMessageDeclarationAST_5D_ (const DownEnumerator__5B_lexicalMessageDeclarationAST_5D_ &) = delete ;
  private: DownEnumerator__5B_lexicalMessageDeclarationAST_5D_ & operator = (const DownEnumerator__5B_lexicalMessageDeclarationAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_lexicalMessageDeclarationAST current (LOCATION_ARGS) const ;
  public: class GGS_lexicalMessageDeclarationAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_lexicalMessageDeclarationAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_lexicalMessageDeclarationAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_lexicalMessageDeclarationAST_5D_ (const class GGS__5B_lexicalMessageDeclarationAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_lexicalMessageDeclarationAST_5D_ (const UpEnumerator__5B_lexicalMessageDeclarationAST_5D_ &) = delete ;
  private: UpEnumerator__5B_lexicalMessageDeclarationAST_5D_ & operator = (const UpEnumerator__5B_lexicalMessageDeclarationAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_lexicalMessageDeclarationAST current (LOCATION_ARGS) const ;
  public: class GGS_lexicalMessageDeclarationAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_lexicalMessageDeclarationAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_lexicalMessageDeclarationAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_lexicalMessageDeclarationAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_lexicalMessageDeclarationAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_lexicalMessageDeclarationAST_5D_ (const GGS__5B_lexicalMessageDeclarationAST_5D_ & inSource) ;
  public: GGS__5B_lexicalMessageDeclarationAST_5D_ & operator = (const GGS__5B_lexicalMessageDeclarationAST_5D_ & inSource) ;

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
  public: static GGS__5B_lexicalMessageDeclarationAST_5D_ init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_lexicalMessageDeclarationAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_lexicalMessageDeclarationAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_lexicalMessageDeclarationAST_5D_ add_operation (const GGS__5B_lexicalMessageDeclarationAST_5D_ & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lexicalMessageDeclarationAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_lexicalMessageDeclarationAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_lexicalMessageDeclarationAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_lexicalMessageDeclarationAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_lexicalMessageDeclarationAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_lexicalMessageDeclarationAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lexicalMessageDeclarationAST getter_first (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalMessageDeclarationAST getter_last (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalMessageDeclarationAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalMessageDeclarationAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                         const class GGS_uint & constinOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_lexicalMessageDeclarationAST readSubscript__3F_ (const class GGS_uint & in0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_lexicalMessageDeclarationAST_5D_ ;
  friend class DownEnumerator__5B_lexicalMessageDeclarationAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_lexicalMessageDeclarationAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalMessageDeclarationAST struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalMessageDeclarationAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mMessageName ;
  public: inline GGS_lstring readProperty_mMessageName (void) const {
    return mProperty_mMessageName ;
  }

  public: GGS_lstring mProperty_mMessageValue ;
  public: inline GGS_lstring readProperty_mMessageValue (void) const {
    return mProperty_mMessageValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalMessageDeclarationAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMessageName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMessageName = inValue ;
  }

  public: inline void setter_setMMessageValue (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMessageValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalMessageDeclarationAST (const GGS_lstring & in_mMessageName,
                                            const GGS_lstring & in_mMessageValue) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalMessageDeclarationAST (const GGS_lexicalMessageDeclarationAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalMessageDeclarationAST & operator = (const GGS_lexicalMessageDeclarationAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalMessageDeclarationAST init_21__21_ (const class GGS_lstring & inOperand0,
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalMessageDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [lexicalListDeclarationAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_lexicalListDeclarationAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_lexicalListDeclarationAST_5D_ (const class GGS__5B_lexicalListDeclarationAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_lexicalListDeclarationAST_5D_ (const DownEnumerator__5B_lexicalListDeclarationAST_5D_ &) = delete ;
  private: DownEnumerator__5B_lexicalListDeclarationAST_5D_ & operator = (const DownEnumerator__5B_lexicalListDeclarationAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_lexicalListDeclarationAST current (LOCATION_ARGS) const ;
  public: class GGS_lexicalListDeclarationAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_lexicalListDeclarationAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_lexicalListDeclarationAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_lexicalListDeclarationAST_5D_ (const class GGS__5B_lexicalListDeclarationAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_lexicalListDeclarationAST_5D_ (const UpEnumerator__5B_lexicalListDeclarationAST_5D_ &) = delete ;
  private: UpEnumerator__5B_lexicalListDeclarationAST_5D_ & operator = (const UpEnumerator__5B_lexicalListDeclarationAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_lexicalListDeclarationAST current (LOCATION_ARGS) const ;
  public: class GGS_lexicalListDeclarationAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_lexicalListDeclarationAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_lexicalListDeclarationAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_lexicalListDeclarationAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_lexicalListDeclarationAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_lexicalListDeclarationAST_5D_ (const GGS__5B_lexicalListDeclarationAST_5D_ & inSource) ;
  public: GGS__5B_lexicalListDeclarationAST_5D_ & operator = (const GGS__5B_lexicalListDeclarationAST_5D_ & inSource) ;

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
  public: static GGS__5B_lexicalListDeclarationAST_5D_ init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_lexicalListDeclarationAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_lexicalListDeclarationAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_lexicalListDeclarationAST_5D_ add_operation (const GGS__5B_lexicalListDeclarationAST_5D_ & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lexicalListDeclarationAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_lexicalListDeclarationAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_lexicalListDeclarationAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_lexicalListDeclarationAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_lexicalListDeclarationAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_lexicalListDeclarationAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lexicalListDeclarationAST getter_first (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalListDeclarationAST getter_last (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalListDeclarationAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalListDeclarationAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                      const class GGS_uint & constinOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_lexicalListDeclarationAST readSubscript__3F_ (const class GGS_uint & in0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_lexicalListDeclarationAST_5D_ ;
  friend class DownEnumerator__5B_lexicalListDeclarationAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_lexicalListDeclarationAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [lexicalListEntryAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_lexicalListEntryAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_lexicalListEntryAST_5D_ (const class GGS__5B_lexicalListEntryAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_lexicalListEntryAST_5D_ (const DownEnumerator__5B_lexicalListEntryAST_5D_ &) = delete ;
  private: DownEnumerator__5B_lexicalListEntryAST_5D_ & operator = (const DownEnumerator__5B_lexicalListEntryAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_lexicalListEntryAST current (LOCATION_ARGS) const ;
  public: class GGS_lexicalListEntryAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_lexicalListEntryAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_lexicalListEntryAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_lexicalListEntryAST_5D_ (const class GGS__5B_lexicalListEntryAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_lexicalListEntryAST_5D_ (const UpEnumerator__5B_lexicalListEntryAST_5D_ &) = delete ;
  private: UpEnumerator__5B_lexicalListEntryAST_5D_ & operator = (const UpEnumerator__5B_lexicalListEntryAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_lexicalListEntryAST current (LOCATION_ARGS) const ;
  public: class GGS_lexicalListEntryAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_lexicalListEntryAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_lexicalListEntryAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_lexicalListEntryAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_lexicalListEntryAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_lexicalListEntryAST_5D_ (const GGS__5B_lexicalListEntryAST_5D_ & inSource) ;
  public: GGS__5B_lexicalListEntryAST_5D_ & operator = (const GGS__5B_lexicalListEntryAST_5D_ & inSource) ;

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
  public: static GGS__5B_lexicalListEntryAST_5D_ init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_lexicalListEntryAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_lexicalListEntryAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_lexicalListEntryAST_5D_ add_operation (const GGS__5B_lexicalListEntryAST_5D_ & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lexicalListEntryAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_lexicalListEntryAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_lexicalListEntryAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_lexicalListEntryAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_lexicalListEntryAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_lexicalListEntryAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lexicalListEntryAST getter_first (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalListEntryAST getter_last (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalListEntryAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalListEntryAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                const class GGS_uint & constinOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_lexicalListEntryAST readSubscript__3F_ (const class GGS_uint & in0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_lexicalListEntryAST_5D_ ;
  friend class DownEnumerator__5B_lexicalListEntryAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_lexicalListEntryAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalListDeclarationAST struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalListDeclarationAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mName ;
  public: inline GGS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GGS_lstring mProperty_mStyle ;
  public: inline GGS_lstring readProperty_mStyle (void) const {
    return mProperty_mStyle ;
  }

  public: GGS_lstring mProperty_mSyntaxErrorMessage ;
  public: inline GGS_lstring readProperty_mSyntaxErrorMessage (void) const {
    return mProperty_mSyntaxErrorMessage ;
  }

  public: GGS__5B_sentLexicalAttributeAST_5D_ mProperty_mSentAttributeList ;
  public: inline GGS__5B_sentLexicalAttributeAST_5D_ readProperty_mSentAttributeList (void) const {
    return mProperty_mSentAttributeList ;
  }

  public: GGS__5B_lexicalListEntryAST_5D_ mProperty_mEntryList ;
  public: inline GGS__5B_lexicalListEntryAST_5D_ readProperty_mEntryList (void) const {
    return mProperty_mEntryList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalListDeclarationAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMStyle (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStyle = inValue ;
  }

  public: inline void setter_setMSyntaxErrorMessage (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxErrorMessage = inValue ;
  }

  public: inline void setter_setMSentAttributeList (const GGS__5B_sentLexicalAttributeAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSentAttributeList = inValue ;
  }

  public: inline void setter_setMEntryList (const GGS__5B_lexicalListEntryAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEntryList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalListDeclarationAST (const GGS_lstring & in_mName,
                                         const GGS_lstring & in_mStyle,
                                         const GGS_lstring & in_mSyntaxErrorMessage,
                                         const GGS__5B_sentLexicalAttributeAST_5D_ & in_mSentAttributeList,
                                         const GGS__5B_lexicalListEntryAST_5D_ & in_mEntryList) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalListDeclarationAST (const GGS_lexicalListDeclarationAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalListDeclarationAST & operator = (const GGS_lexicalListDeclarationAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalListDeclarationAST init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_lstring & inOperand2,
                                                                         const class GGS__5B_sentLexicalAttributeAST_5D_ & inOperand3,
                                                                         const class GGS__5B_lexicalListEntryAST_5D_ & inOperand4,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalListDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [abstractLexicalRuleAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_abstractLexicalRuleAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_abstractLexicalRuleAST_5D_ (const class GGS__5B_abstractLexicalRuleAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_abstractLexicalRuleAST_5D_ (const DownEnumerator__5B_abstractLexicalRuleAST_5D_ &) = delete ;
  private: DownEnumerator__5B_abstractLexicalRuleAST_5D_ & operator = (const DownEnumerator__5B_abstractLexicalRuleAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_abstractLexicalRuleAST current (LOCATION_ARGS) const ;
  public: class GGS_abstractLexicalRuleAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_abstractLexicalRuleAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_abstractLexicalRuleAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_abstractLexicalRuleAST_5D_ (const class GGS__5B_abstractLexicalRuleAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_abstractLexicalRuleAST_5D_ (const UpEnumerator__5B_abstractLexicalRuleAST_5D_ &) = delete ;
  private: UpEnumerator__5B_abstractLexicalRuleAST_5D_ & operator = (const UpEnumerator__5B_abstractLexicalRuleAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_abstractLexicalRuleAST current (LOCATION_ARGS) const ;
  public: class GGS_abstractLexicalRuleAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_abstractLexicalRuleAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_abstractLexicalRuleAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_abstractLexicalRuleAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_abstractLexicalRuleAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_abstractLexicalRuleAST_5D_ (const GGS__5B_abstractLexicalRuleAST_5D_ & inSource) ;
  public: GGS__5B_abstractLexicalRuleAST_5D_ & operator = (const GGS__5B_abstractLexicalRuleAST_5D_ & inSource) ;

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
  public: static GGS__5B_abstractLexicalRuleAST_5D_ init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_abstractLexicalRuleAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_abstractLexicalRuleAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_abstractLexicalRuleAST_5D_ add_operation (const GGS__5B_abstractLexicalRuleAST_5D_ & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_abstractLexicalRuleAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_abstractLexicalRuleAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_abstractLexicalRuleAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_abstractLexicalRuleAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_abstractLexicalRuleAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_abstractLexicalRuleAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_abstractLexicalRuleAST getter_first (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_abstractLexicalRuleAST getter_last (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_abstractLexicalRuleAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_abstractLexicalRuleAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                   const class GGS_uint & constinOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_abstractLexicalRuleAST readSubscript__3F_ (const class GGS_uint & in0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_abstractLexicalRuleAST_5D_ ;
  friend class DownEnumerator__5B_abstractLexicalRuleAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_abstractLexicalRuleAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractLexicalRuleAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractLexicalRuleAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractLexicalRuleAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractLexicalRuleAST (const class cPtr_abstractLexicalRuleAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractLexicalRuleAST init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractLexicalRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractLexicalRuleAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractLexicalRuleAST class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractLexicalRuleAST : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractLexicalRuleAST_init (Compiler * inCompiler) ;


//--- Extension func generateLexicalRuleCode
  public: virtual class GGS_string getter_generateLexicalRuleCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension func generateSwiftCocoaCode
  public: virtual class GGS_string getter_generateSwiftCocoaCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension func lexicalRuleUsesLoopLocalVar
  public: virtual class GGS_bool getter_lexicalRuleUsesLoopLocalVar (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension proc checkLexicalRule
  public: virtual void method_checkLexicalRule (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractLexicalRuleAST (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [indexingAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_indexingAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_indexingAST_5D_ (const class GGS__5B_indexingAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_indexingAST_5D_ (const DownEnumerator__5B_indexingAST_5D_ &) = delete ;
  private: DownEnumerator__5B_indexingAST_5D_ & operator = (const DownEnumerator__5B_indexingAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_indexingAST current (LOCATION_ARGS) const ;
  public: class GGS_indexingAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_indexingAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_indexingAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_indexingAST_5D_ (const class GGS__5B_indexingAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_indexingAST_5D_ (const UpEnumerator__5B_indexingAST_5D_ &) = delete ;
  private: UpEnumerator__5B_indexingAST_5D_ & operator = (const UpEnumerator__5B_indexingAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_indexingAST current (LOCATION_ARGS) const ;
  public: class GGS_indexingAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_indexingAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_indexingAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_indexingAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_indexingAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_indexingAST_5D_ (const GGS__5B_indexingAST_5D_ & inSource) ;
  public: GGS__5B_indexingAST_5D_ & operator = (const GGS__5B_indexingAST_5D_ & inSource) ;

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
  public: static GGS__5B_indexingAST_5D_ init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_indexingAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_indexingAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_indexingAST_5D_ add_operation (const GGS__5B_indexingAST_5D_ & inOperand,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_indexingAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_indexingAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_indexingAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_indexingAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_indexingAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_indexingAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_indexingAST getter_first (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_indexingAST getter_last (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_indexingAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_indexingAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                        const class GGS_uint & constinOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_indexingAST readSubscript__3F_ (const class GGS_uint & in0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_indexingAST_5D_ ;
  friend class DownEnumerator__5B_indexingAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_indexingAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @indexingAST struct
//--------------------------------------------------------------------------------------------------

class GGS_indexingAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mIndexName ;
  public: inline GGS_lstring readProperty_mIndexName (void) const {
    return mProperty_mIndexName ;
  }

  public: GGS_lstring mProperty_mIndexComment ;
  public: inline GGS_lstring readProperty_mIndexComment (void) const {
    return mProperty_mIndexComment ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_indexingAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMIndexName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndexName = inValue ;
  }

  public: inline void setter_setMIndexComment (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndexComment = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_indexingAST (const GGS_lstring & in_mIndexName,
                           const GGS_lstring & in_mIndexComment) ;

//--------------------------------- Copy constructor
  public: GGS_indexingAST (const GGS_indexingAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_indexingAST & operator = (const GGS_indexingAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_indexingAST init_21__21_ (const class GGS_lstring & inOperand0,
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_indexingAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticDeclarationAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_semanticDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_semanticDeclarationAST (const class cPtr_semanticDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_isPredefined (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticDeclarationAST init_21_isPredefined (const class GGS_bool & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @semanticDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_semanticDeclarationAST : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticDeclarationAST_init_21_isPredefined (const class GGS_bool & inOperand0,
                                                            Compiler * inCompiler) ;


//--- Extension func keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension proc addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg__ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg__ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg__ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg__ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg__ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg__ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg__ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg__ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg__ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg__ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg__ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg__ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg__ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS__5B_semanticDeclarationAST_5D_ & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension proc enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg__ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg__inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg__inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg__inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg__inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg__ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension proc semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS__5B_lstring_5D_ & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg__inSemanticContext,
           class GGS_unifiedTypeMap & arg__ioTypeMap,
           const class GGS_predefinedTypes arg__inPredefinedTypes,
           class GGS__5B_semanticDeclarationForGeneration_5D_ & arg__ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties
  public: GGS_bool mProperty_isPredefined ;


//--- Default constructor
  public: cPtr_semanticDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_semanticDeclarationAST (const GGS_bool & in_isPredefined,
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
// Phase 1: @semanticDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticDeclarationAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_semanticDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_semanticDeclarationAST_2E_weak (const class GGS_semanticDeclarationAST & inSource) ;

  public: GGS_semanticDeclarationAST_2E_weak & operator = (const class GGS_semanticDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_semanticDeclarationAST_2E_weak init_nil (void) {
    GGS_semanticDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_semanticDeclarationAST bang_semanticDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_semanticDeclarationAST unwrappedValue (void) const ;

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
  public: static class GGS_semanticDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [lexicalInstructionAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_lexicalInstructionAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_lexicalInstructionAST_5D_ (const class GGS__5B_lexicalInstructionAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_lexicalInstructionAST_5D_ (const DownEnumerator__5B_lexicalInstructionAST_5D_ &) = delete ;
  private: DownEnumerator__5B_lexicalInstructionAST_5D_ & operator = (const DownEnumerator__5B_lexicalInstructionAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_lexicalInstructionAST current (LOCATION_ARGS) const ;
  public: class GGS_lexicalInstructionAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_lexicalInstructionAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_lexicalInstructionAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_lexicalInstructionAST_5D_ (const class GGS__5B_lexicalInstructionAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_lexicalInstructionAST_5D_ (const UpEnumerator__5B_lexicalInstructionAST_5D_ &) = delete ;
  private: UpEnumerator__5B_lexicalInstructionAST_5D_ & operator = (const UpEnumerator__5B_lexicalInstructionAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_lexicalInstructionAST current (LOCATION_ARGS) const ;
  public: class GGS_lexicalInstructionAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_lexicalInstructionAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_lexicalInstructionAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_lexicalInstructionAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_lexicalInstructionAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_lexicalInstructionAST_5D_ (const GGS__5B_lexicalInstructionAST_5D_ & inSource) ;
  public: GGS__5B_lexicalInstructionAST_5D_ & operator = (const GGS__5B_lexicalInstructionAST_5D_ & inSource) ;

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
  public: static GGS__5B_lexicalInstructionAST_5D_ init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_lexicalInstructionAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_lexicalInstructionAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_lexicalInstructionAST_5D_ add_operation (const GGS__5B_lexicalInstructionAST_5D_ & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lexicalInstructionAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_lexicalInstructionAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_lexicalInstructionAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_lexicalInstructionAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_lexicalInstructionAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_lexicalInstructionAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lexicalInstructionAST getter_first (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalInstructionAST getter_last (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalInstructionAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalInstructionAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                  const class GGS_uint & constinOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_lexicalInstructionAST readSubscript__3F_ (const class GGS_uint & in0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_lexicalInstructionAST_5D_ ;
  friend class DownEnumerator__5B_lexicalInstructionAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_lexicalInstructionAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalInstructionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_lexicalInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalInstructionAST (const class cPtr_lexicalInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalInstructionAST init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalInstructionAST : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalInstructionAST_init (Compiler * inCompiler) ;


//--- Extension func generateLexicalInstructionCode
  public: virtual class GGS_string getter_generateLexicalInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension func generateSwiftCocoaInstructionCode
  public: virtual class GGS_string getter_generateSwiftCocoaInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension func lexicalInstructionUsesLoopLocalVariable
  public: virtual class GGS_bool getter_lexicalInstructionUsesLoopLocalVariable (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension proc checkLexicalInstruction
  public: virtual void method_checkLexicalInstruction (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           class GGS_lexicalTagMap & arg__ioTagMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_lexicalInstructionAST (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [lexicalWhileBranchAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_lexicalWhileBranchAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_lexicalWhileBranchAST_5D_ (const class GGS__5B_lexicalWhileBranchAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_lexicalWhileBranchAST_5D_ (const DownEnumerator__5B_lexicalWhileBranchAST_5D_ &) = delete ;
  private: DownEnumerator__5B_lexicalWhileBranchAST_5D_ & operator = (const DownEnumerator__5B_lexicalWhileBranchAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_lexicalWhileBranchAST current (LOCATION_ARGS) const ;
  public: class GGS_lexicalWhileBranchAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_lexicalWhileBranchAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_lexicalWhileBranchAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_lexicalWhileBranchAST_5D_ (const class GGS__5B_lexicalWhileBranchAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_lexicalWhileBranchAST_5D_ (const UpEnumerator__5B_lexicalWhileBranchAST_5D_ &) = delete ;
  private: UpEnumerator__5B_lexicalWhileBranchAST_5D_ & operator = (const UpEnumerator__5B_lexicalWhileBranchAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_lexicalWhileBranchAST current (LOCATION_ARGS) const ;
  public: class GGS_lexicalWhileBranchAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_lexicalWhileBranchAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_lexicalWhileBranchAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_lexicalWhileBranchAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_lexicalWhileBranchAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_lexicalWhileBranchAST_5D_ (const GGS__5B_lexicalWhileBranchAST_5D_ & inSource) ;
  public: GGS__5B_lexicalWhileBranchAST_5D_ & operator = (const GGS__5B_lexicalWhileBranchAST_5D_ & inSource) ;

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
  public: static GGS__5B_lexicalWhileBranchAST_5D_ init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_lexicalWhileBranchAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_lexicalWhileBranchAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_lexicalWhileBranchAST_5D_ add_operation (const GGS__5B_lexicalWhileBranchAST_5D_ & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lexicalWhileBranchAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_lexicalWhileBranchAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_lexicalWhileBranchAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_lexicalWhileBranchAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_lexicalWhileBranchAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_lexicalWhileBranchAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lexicalWhileBranchAST getter_first (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalWhileBranchAST getter_last (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalWhileBranchAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalWhileBranchAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                  const class GGS_uint & constinOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_lexicalWhileBranchAST readSubscript__3F_ (const class GGS_uint & in0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_lexicalWhileBranchAST_5D_ ;
  friend class DownEnumerator__5B_lexicalWhileBranchAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_lexicalWhileBranchAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalExpressionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_lexicalExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalExpressionAST (const class cPtr_lexicalExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalExpressionAST init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalWhileBranchAST struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalWhileBranchAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lexicalExpressionAST mProperty_mWhileExpression ;
  public: inline GGS_lexicalExpressionAST readProperty_mWhileExpression (void) const {
    return mProperty_mWhileExpression ;
  }

  public: GGS__5B_lexicalInstructionAST_5D_ mProperty_mWhileInstructionList ;
  public: inline GGS__5B_lexicalInstructionAST_5D_ readProperty_mWhileInstructionList (void) const {
    return mProperty_mWhileInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalWhileBranchAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMWhileExpression (const GGS_lexicalExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWhileExpression = inValue ;
  }

  public: inline void setter_setMWhileInstructionList (const GGS__5B_lexicalInstructionAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWhileInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalWhileBranchAST (const GGS_lexicalExpressionAST & in_mWhileExpression,
                                     const GGS__5B_lexicalInstructionAST_5D_ & in_mWhileInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalWhileBranchAST (const GGS_lexicalWhileBranchAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalWhileBranchAST & operator = (const GGS_lexicalWhileBranchAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalWhileBranchAST init_21__21_ (const class GGS_lexicalExpressionAST & inOperand0,
                                                         const class GGS__5B_lexicalInstructionAST_5D_ & inOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalWhileBranchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [lexicalRoutineOrFunctionFormalInputArgumentAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ (const class GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ (const DownEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ &) = delete ;
  private: DownEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ & operator = (const DownEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST current (LOCATION_ARGS) const ;
  public: class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_lexicalRoutineOrFunctionFormalInputArgumentAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ (const class GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ (const UpEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ &) = delete ;
  private: UpEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ & operator = (const UpEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST current (LOCATION_ARGS) const ;
  public: class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_lexicalRoutineOrFunctionFormalInputArgumentAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_lexicalRoutineOrFunctionFormalInputArgumentAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ (const GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ & inSource) ;
  public: GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ & operator = (const GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ & inSource) ;

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
  public: static GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ init (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ add_operation (const GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ & inOperand,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST getter_first (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST getter_last (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                                           const class GGS_uint & constinOperand1,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST readSubscript__3F_ (const class GGS_uint & in0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ ;
  friend class DownEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRoutineOrFunctionFormalInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_lexicalRoutineOrFunctionFormalInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalRoutineOrFunctionFormalInputArgumentAST (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalRoutineOrFunctionFormalInputArgumentAST init (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalRoutineOrFunctionFormalInputArgumentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalRoutineOrFunctionFormalInputArgumentAST_init (Compiler * inCompiler) ;


//--- Extension func generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension func generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension proc checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension proc checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sentLexicalAttributeAST struct
//--------------------------------------------------------------------------------------------------

class GGS_sentLexicalAttributeAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFormalSelector ;
  public: inline GGS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GGS_lstring mProperty_mAttributeName ;
  public: inline GGS_lstring readProperty_mAttributeName (void) const {
    return mProperty_mAttributeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sentLexicalAttributeAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMAttributeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sentLexicalAttributeAST (const GGS_lstring & in_mFormalSelector,
                                       const GGS_lstring & in_mAttributeName) ;

//--------------------------------- Copy constructor
  public: GGS_sentLexicalAttributeAST (const GGS_sentLexicalAttributeAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sentLexicalAttributeAST & operator = (const GGS_sentLexicalAttributeAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sentLexicalAttributeAST init_21__21_ (const class GGS_lstring & inOperand0,
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sentLexicalAttributeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalListEntryAST struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalListEntryAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mEntrySpelling ;
  public: inline GGS_lstring readProperty_mEntrySpelling (void) const {
    return mProperty_mEntrySpelling ;
  }

  public: GGS_lstring mProperty_mTerminalSpelling ;
  public: inline GGS_lstring readProperty_mTerminalSpelling (void) const {
    return mProperty_mTerminalSpelling ;
  }

  public: GGS_bool mProperty_nonAtomicSelection ;
  public: inline GGS_bool readProperty_nonAtomicSelection (void) const {
    return mProperty_nonAtomicSelection ;
  }

  public: GGS_bool mProperty_isEndOfTemplateMark ;
  public: inline GGS_bool readProperty_isEndOfTemplateMark (void) const {
    return mProperty_isEndOfTemplateMark ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalListEntryAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEntrySpelling (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEntrySpelling = inValue ;
  }

  public: inline void setter_setMTerminalSpelling (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalSpelling = inValue ;
  }

  public: inline void setter_setNonAtomicSelection (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_nonAtomicSelection = inValue ;
  }

  public: inline void setter_setIsEndOfTemplateMark (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isEndOfTemplateMark = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalListEntryAST (const GGS_lstring & in_mEntrySpelling,
                                   const GGS_lstring & in_mTerminalSpelling,
                                   const GGS_bool & in_nonAtomicSelection,
                                   const GGS_bool & in_isEndOfTemplateMark) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalListEntryAST (const GGS_lexicalListEntryAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalListEntryAST & operator = (const GGS_lexicalListEntryAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalListEntryAST init_21__21__21_nonAtomicSelection_21_isEndOfTemplateMark (const class GGS_lstring & inOperand0,
                                                                                                    const class GGS_lstring & inOperand1,
                                                                                                    const class GGS_bool & inOperand2,
                                                                                                    const class GGS_bool & inOperand3,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalListEntryAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [semanticDeclarationAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_semanticDeclarationAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_semanticDeclarationAST_5D_ (const class GGS__5B_semanticDeclarationAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_semanticDeclarationAST_5D_ (const DownEnumerator__5B_semanticDeclarationAST_5D_ &) = delete ;
  private: DownEnumerator__5B_semanticDeclarationAST_5D_ & operator = (const DownEnumerator__5B_semanticDeclarationAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_semanticDeclarationAST current (LOCATION_ARGS) const ;
  public: class GGS_semanticDeclarationAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_semanticDeclarationAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_semanticDeclarationAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_semanticDeclarationAST_5D_ (const class GGS__5B_semanticDeclarationAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_semanticDeclarationAST_5D_ (const UpEnumerator__5B_semanticDeclarationAST_5D_ &) = delete ;
  private: UpEnumerator__5B_semanticDeclarationAST_5D_ & operator = (const UpEnumerator__5B_semanticDeclarationAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_semanticDeclarationAST current (LOCATION_ARGS) const ;
  public: class GGS_semanticDeclarationAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_semanticDeclarationAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_semanticDeclarationAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_semanticDeclarationAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_semanticDeclarationAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_semanticDeclarationAST_5D_ (const GGS__5B_semanticDeclarationAST_5D_ & inSource) ;
  public: GGS__5B_semanticDeclarationAST_5D_ & operator = (const GGS__5B_semanticDeclarationAST_5D_ & inSource) ;

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
  public: static GGS__5B_semanticDeclarationAST_5D_ init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_semanticDeclarationAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_semanticDeclarationAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_semanticDeclarationAST_5D_ add_operation (const GGS__5B_semanticDeclarationAST_5D_ & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_semanticDeclarationAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_semanticDeclarationAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_semanticDeclarationAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_semanticDeclarationAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_semanticDeclarationAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_semanticDeclarationAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_semanticDeclarationAST getter_first (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_semanticDeclarationAST getter_last (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_semanticDeclarationAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_semanticDeclarationAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                   const class GGS_uint & constinOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_semanticDeclarationAST readSubscript__3F_ (const class GGS_uint & in0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_semanticDeclarationAST_5D_ ;
  friend class DownEnumerator__5B_semanticDeclarationAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_semanticDeclarationAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [lexicalSentValue] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_lexicalSentValue_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_lexicalSentValue_5D_ (const class GGS__5B_lexicalSentValue_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_lexicalSentValue_5D_ (const DownEnumerator__5B_lexicalSentValue_5D_ &) = delete ;
  private: DownEnumerator__5B_lexicalSentValue_5D_ & operator = (const DownEnumerator__5B_lexicalSentValue_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_lexicalSentValue current (LOCATION_ARGS) const ;
  public: class GGS_lexicalSentValue current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_lexicalSentValue> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_lexicalSentValue_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_lexicalSentValue_5D_ (const class GGS__5B_lexicalSentValue_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_lexicalSentValue_5D_ (const UpEnumerator__5B_lexicalSentValue_5D_ &) = delete ;
  private: UpEnumerator__5B_lexicalSentValue_5D_ & operator = (const UpEnumerator__5B_lexicalSentValue_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_lexicalSentValue current (LOCATION_ARGS) const ;
  public: class GGS_lexicalSentValue current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_lexicalSentValue> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_lexicalSentValue_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_lexicalSentValue> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_lexicalSentValue_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_lexicalSentValue_5D_ (const GGS__5B_lexicalSentValue_5D_ & inSource) ;
  public: GGS__5B_lexicalSentValue_5D_ & operator = (const GGS__5B_lexicalSentValue_5D_ & inSource) ;

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
  public: static GGS__5B_lexicalSentValue_5D_ init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_lexicalSentValue_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_lexicalSentValue & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_lexicalSentValue_5D_ add_operation (const GGS__5B_lexicalSentValue_5D_ & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lexicalSentValue constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_lexicalSentValue constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_lexicalSentValue & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_lexicalSentValue & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_lexicalSentValue & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_lexicalSentValue constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lexicalSentValue getter_first (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalSentValue getter_last (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalSentValue_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalSentValue_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                             const class GGS_uint & constinOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_lexicalSentValue readSubscript__3F_ (const class GGS_uint & in0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_lexicalSentValue_5D_ ;
  friend class DownEnumerator__5B_lexicalSentValue_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_lexicalSentValue_5D_ ;

//--------------------------------------------------------------------------------------------------
//   enum lexicalTypeEnum
//--------------------------------------------------------------------------------------------------

class GGS_lexicalTypeEnum : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_lexicalTypeEnum (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_lexicalType_5F_string,
    enum_lexicalType_5F_char,
    enum_lexicalType_5F_uint,
    enum_lexicalType_5F_uint_36__34_,
    enum_lexicalType_5F_sint,
    enum_lexicalType_5F_sint_36__34_,
    enum_lexicalType_5F_double,
    enum_lexicalType_5F_bigint
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
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalTypeEnum class_func_lexicalType_5F_bigint (LOCATION_ARGS) ;

  public: static class GGS_lexicalTypeEnum class_func_lexicalType_5F_char (LOCATION_ARGS) ;

  public: static class GGS_lexicalTypeEnum class_func_lexicalType_5F_double (LOCATION_ARGS) ;

  public: static class GGS_lexicalTypeEnum class_func_lexicalType_5F_sint (LOCATION_ARGS) ;

  public: static class GGS_lexicalTypeEnum class_func_lexicalType_5F_sint_36__34_ (LOCATION_ARGS) ;

  public: static class GGS_lexicalTypeEnum class_func_lexicalType_5F_string (LOCATION_ARGS) ;

  public: static class GGS_lexicalTypeEnum class_func_lexicalType_5F_uint (LOCATION_ARGS) ;

  public: static class GGS_lexicalTypeEnum class_func_lexicalType_5F_uint_36__34_ (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalTypeEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isLexicalType_5F_bigint (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLexicalType_5F_char (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLexicalType_5F_double (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLexicalType_5F_sint (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLexicalType_5F_sint_36__34_ (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLexicalType_5F_string (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLexicalType_5F_uint (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLexicalType_5F_uint_36__34_ (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTypeEnum ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalSentValue struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalSentValue : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mLexicalFormalSelector ;
  public: inline GGS_lstring readProperty_mLexicalFormalSelector (void) const {
    return mProperty_mLexicalFormalSelector ;
  }

  public: GGS_string mProperty_mLexicalAttributeName ;
  public: inline GGS_string readProperty_mLexicalAttributeName (void) const {
    return mProperty_mLexicalAttributeName ;
  }

  public: GGS_lexicalTypeEnum mProperty_mLexicalType ;
  public: inline GGS_lexicalTypeEnum readProperty_mLexicalType (void) const {
    return mProperty_mLexicalType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalSentValue (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalFormalSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalFormalSelector = inValue ;
  }

  public: inline void setter_setMLexicalAttributeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalAttributeName = inValue ;
  }

  public: inline void setter_setMLexicalType (const GGS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalSentValue (const GGS_lstring & in_mLexicalFormalSelector,
                                const GGS_string & in_mLexicalAttributeName,
                                const GGS_lexicalTypeEnum & in_mLexicalType) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalSentValue (const GGS_lexicalSentValue & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalSentValue & operator = (const GGS_lexicalSentValue & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalSentValue init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                        const class GGS_string & inOperand1,
                                                        const class GGS_lexicalTypeEnum & inOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSentValue ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [semanticDeclarationForGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_semanticDeclarationForGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_semanticDeclarationForGeneration_5D_ (const class GGS__5B_semanticDeclarationForGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_semanticDeclarationForGeneration_5D_ (const DownEnumerator__5B_semanticDeclarationForGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_semanticDeclarationForGeneration_5D_ & operator = (const DownEnumerator__5B_semanticDeclarationForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_semanticDeclarationForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_semanticDeclarationForGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_semanticDeclarationForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_semanticDeclarationForGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_semanticDeclarationForGeneration_5D_ (const class GGS__5B_semanticDeclarationForGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_semanticDeclarationForGeneration_5D_ (const UpEnumerator__5B_semanticDeclarationForGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_semanticDeclarationForGeneration_5D_ & operator = (const UpEnumerator__5B_semanticDeclarationForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_semanticDeclarationForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_semanticDeclarationForGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_semanticDeclarationForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_semanticDeclarationForGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_semanticDeclarationForGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_semanticDeclarationForGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_semanticDeclarationForGeneration_5D_ (const GGS__5B_semanticDeclarationForGeneration_5D_ & inSource) ;
  public: GGS__5B_semanticDeclarationForGeneration_5D_ & operator = (const GGS__5B_semanticDeclarationForGeneration_5D_ & inSource) ;

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
  public: static GGS__5B_semanticDeclarationForGeneration_5D_ init (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_semanticDeclarationForGeneration_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_semanticDeclarationForGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_semanticDeclarationForGeneration_5D_ add_operation (const GGS__5B_semanticDeclarationForGeneration_5D_ & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_semanticDeclarationForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_semanticDeclarationForGeneration constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_semanticDeclarationForGeneration & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_semanticDeclarationForGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_semanticDeclarationForGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_semanticDeclarationForGeneration constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_semanticDeclarationForGeneration getter_first (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_semanticDeclarationForGeneration getter_last (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_semanticDeclarationForGeneration_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_semanticDeclarationForGeneration_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                             const class GGS_uint & constinOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_semanticDeclarationForGeneration readSubscript__3F_ (const class GGS_uint & in0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_semanticDeclarationForGeneration_5D_ ;
  friend class DownEnumerator__5B_semanticDeclarationForGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_semanticDeclarationForGeneration_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticDeclarationForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_semanticDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_semanticDeclarationForGeneration (const class cPtr_semanticDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_infoMessage (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticDeclarationForGeneration init_21_infoMessage (const class GGS_string & inOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @semanticDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_semanticDeclarationForGeneration : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticDeclarationForGeneration_init_21_infoMessage (const class GGS_string & inOperand0,
                                                                     Compiler * inCompiler) ;


//--- Extension func appendPrimitiveTypeDeclaration
  public: virtual class GGS_string getter_appendPrimitiveTypeDeclaration (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension func appendTypeGenericImplementation
  public: virtual class GGS_string getter_appendTypeGenericImplementation (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension func getImplementationCppFileName
  public: virtual class GGS_string getter_getImplementationCppFileName (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension func hasCppHeaderFile
  public: virtual class GGS_bool getter_hasCppHeaderFile (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension func headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension func isPredefined
  public: virtual class GGS_bool getter_isPredefined (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension proc appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc appendDeclaration2
  public: virtual void method_appendDeclaration_32_ (const class GGS_string arg__inOutputDirectory,
           class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc appendPrimitiveTypePreDeclaration
  public: virtual void method_appendPrimitiveTypePreDeclaration (class GGS_string & arg__ioHeader,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc appendSpecificFiles
  public: virtual void method_appendSpecificFiles (const class GGS_string arg__inProductDirectory,
           class GGS_stringset & arg__ioAllProductFileSet,
           class GGS__5B_string_5D_ & arg__ioSwiftAppProductFileList,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg__inUnifiedTypeMap,
           class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_string mProperty_infoMessage ;


//--- Default constructor
  public: cPtr_semanticDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_semanticDeclarationForGeneration (const GGS_string & in_infoMessage,
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
// Phase 1: [terminalAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_terminalAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_terminalAST_5D_ (const class GGS__5B_terminalAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_terminalAST_5D_ (const DownEnumerator__5B_terminalAST_5D_ &) = delete ;
  private: DownEnumerator__5B_terminalAST_5D_ & operator = (const DownEnumerator__5B_terminalAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_terminalAST current (LOCATION_ARGS) const ;
  public: class GGS_terminalAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_terminalAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_terminalAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_terminalAST_5D_ (const class GGS__5B_terminalAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_terminalAST_5D_ (const UpEnumerator__5B_terminalAST_5D_ &) = delete ;
  private: UpEnumerator__5B_terminalAST_5D_ & operator = (const UpEnumerator__5B_terminalAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_terminalAST current (LOCATION_ARGS) const ;
  public: class GGS_terminalAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_terminalAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_terminalAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_terminalAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_terminalAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_terminalAST_5D_ (const GGS__5B_terminalAST_5D_ & inSource) ;
  public: GGS__5B_terminalAST_5D_ & operator = (const GGS__5B_terminalAST_5D_ & inSource) ;

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
  public: static GGS__5B_terminalAST_5D_ init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_terminalAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_terminalAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_terminalAST_5D_ add_operation (const GGS__5B_terminalAST_5D_ & inOperand,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_terminalAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_terminalAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_terminalAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_terminalAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_terminalAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_terminalAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_terminalAST getter_first (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_terminalAST getter_last (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_terminalAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_terminalAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                        const class GGS_uint & constinOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_terminalAST readSubscript__3F_ (const class GGS_uint & in0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_terminalAST_5D_ ;
  friend class DownEnumerator__5B_terminalAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_terminalAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalAST struct
//--------------------------------------------------------------------------------------------------

class GGS_terminalAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mTerminalName ;
  public: inline GGS_lstring readProperty_mTerminalName (void) const {
    return mProperty_mTerminalName ;
  }

  public: GGS__5B_lexicalSentValue_5D_ mProperty_mSentAttributeList ;
  public: inline GGS__5B_lexicalSentValue_5D_ readProperty_mSentAttributeList (void) const {
    return mProperty_mSentAttributeList ;
  }

  public: GGS_string mProperty_mSyntaxErrorMessage ;
  public: inline GGS_string readProperty_mSyntaxErrorMessage (void) const {
    return mProperty_mSyntaxErrorMessage ;
  }

  public: GGS_bool mProperty_isEndOfTemplateMark ;
  public: inline GGS_bool readProperty_isEndOfTemplateMark (void) const {
    return mProperty_isEndOfTemplateMark ;
  }

  public: GGS_bool mProperty_atomicSelection ;
  public: inline GGS_bool readProperty_atomicSelection (void) const {
    return mProperty_atomicSelection ;
  }

  public: GGS_uint mProperty_mStyleIndex ;
  public: inline GGS_uint readProperty_mStyleIndex (void) const {
    return mProperty_mStyleIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_terminalAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTerminalName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalName = inValue ;
  }

  public: inline void setter_setMSentAttributeList (const GGS__5B_lexicalSentValue_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSentAttributeList = inValue ;
  }

  public: inline void setter_setMSyntaxErrorMessage (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxErrorMessage = inValue ;
  }

  public: inline void setter_setIsEndOfTemplateMark (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isEndOfTemplateMark = inValue ;
  }

  public: inline void setter_setAtomicSelection (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_atomicSelection = inValue ;
  }

  public: inline void setter_setMStyleIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStyleIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_terminalAST (const GGS_lstring & in_mTerminalName,
                           const GGS__5B_lexicalSentValue_5D_ & in_mSentAttributeList,
                           const GGS_string & in_mSyntaxErrorMessage,
                           const GGS_bool & in_isEndOfTemplateMark,
                           const GGS_bool & in_atomicSelection,
                           const GGS_uint & in_mStyleIndex) ;

//--------------------------------- Copy constructor
  public: GGS_terminalAST (const GGS_terminalAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_terminalAST & operator = (const GGS_terminalAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalAST init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (const class GGS_lstring & inOperand0,
                                                                                                 const class GGS__5B_lexicalSentValue_5D_ & inOperand1,
                                                                                                 const class GGS_string & inOperand2,
                                                                                                 const class GGS_bool & inOperand3,
                                                                                                 const class GGS_bool & inOperand4,
                                                                                                 const class GGS_uint & inOperand5,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [templateDelimitorAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_templateDelimitorAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_templateDelimitorAST_5D_ (const class GGS__5B_templateDelimitorAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_templateDelimitorAST_5D_ (const DownEnumerator__5B_templateDelimitorAST_5D_ &) = delete ;
  private: DownEnumerator__5B_templateDelimitorAST_5D_ & operator = (const DownEnumerator__5B_templateDelimitorAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateDelimitorAST current (LOCATION_ARGS) const ;
  public: class GGS_templateDelimitorAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_templateDelimitorAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_templateDelimitorAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_templateDelimitorAST_5D_ (const class GGS__5B_templateDelimitorAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_templateDelimitorAST_5D_ (const UpEnumerator__5B_templateDelimitorAST_5D_ &) = delete ;
  private: UpEnumerator__5B_templateDelimitorAST_5D_ & operator = (const UpEnumerator__5B_templateDelimitorAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateDelimitorAST current (LOCATION_ARGS) const ;
  public: class GGS_templateDelimitorAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_templateDelimitorAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_templateDelimitorAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_templateDelimitorAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_templateDelimitorAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_templateDelimitorAST_5D_ (const GGS__5B_templateDelimitorAST_5D_ & inSource) ;
  public: GGS__5B_templateDelimitorAST_5D_ & operator = (const GGS__5B_templateDelimitorAST_5D_ & inSource) ;

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
  public: static GGS__5B_templateDelimitorAST_5D_ init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_templateDelimitorAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_templateDelimitorAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_templateDelimitorAST_5D_ add_operation (const GGS__5B_templateDelimitorAST_5D_ & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_templateDelimitorAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_templateDelimitorAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_templateDelimitorAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_templateDelimitorAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_templateDelimitorAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_templateDelimitorAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_templateDelimitorAST getter_first (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateDelimitorAST getter_last (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateDelimitorAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateDelimitorAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                 const class GGS_uint & constinOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_templateDelimitorAST readSubscript__3F_ (const class GGS_uint & in0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_templateDelimitorAST_5D_ ;
  friend class DownEnumerator__5B_templateDelimitorAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_templateDelimitorAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateDelimitorAST struct
//--------------------------------------------------------------------------------------------------

class GGS_templateDelimitorAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mStartString ;
  public: inline GGS_lstring readProperty_mStartString (void) const {
    return mProperty_mStartString ;
  }

  public: GGS_lstring mProperty_mEndString ;
  public: inline GGS_lstring readProperty_mEndString (void) const {
    return mProperty_mEndString ;
  }

  public: GGS_bool mProperty_mPreservesStartDelimiter ;
  public: inline GGS_bool readProperty_mPreservesStartDelimiter (void) const {
    return mProperty_mPreservesStartDelimiter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateDelimitorAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMStartString (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStartString = inValue ;
  }

  public: inline void setter_setMEndString (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndString = inValue ;
  }

  public: inline void setter_setMPreservesStartDelimiter (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreservesStartDelimiter = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateDelimitorAST (const GGS_lstring & in_mStartString,
                                    const GGS_lstring & in_mEndString,
                                    const GGS_bool & in_mPreservesStartDelimiter) ;

//--------------------------------- Copy constructor
  public: GGS_templateDelimitorAST (const GGS_templateDelimitorAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateDelimitorAST & operator = (const GGS_templateDelimitorAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateDelimitorAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            const class GGS_bool & inOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateDelimitorAST ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@lexicalTypeEnum appendMethodName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_appendMethodName (const class GGS_lexicalTypeEnum & inObject,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@lexicalTypeEnum appendArgumentOfMethod' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_appendArgumentOfMethod (const class GGS_lexicalTypeEnum & inObject,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@lexicalTypeEnum initialization' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_initialization (const class GGS_lexicalTypeEnum & inObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@lexicalTypeEnum cocoaTypeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_cocoaTypeName (const class GGS_lexicalTypeEnum & inObject,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@lexicalTypeEnum swiftTypeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_swiftTypeName (const class GGS_lexicalTypeEnum & inObject,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@lexicalTypeEnum needsReferenceInInputOutputInCocoa' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_needsReferenceInInputOutputInCocoa (const class GGS_lexicalTypeEnum & inObject,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@lexicalTypeEnum cocoaInitializationCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_cocoaInitializationCode (const class GGS_lexicalTypeEnum & inObject,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@lexicalTypeEnum swiftInitializationCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_swiftInitializationCode (const class GGS_lexicalTypeEnum & inObject,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@lexicalTypeEnum cocoaResetPrefix' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_cocoaResetPrefix (const class GGS_lexicalTypeEnum & inObject,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@lexicalTypeEnum cocoaReset' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_cocoaReset (const class GGS_lexicalTypeEnum & inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [formalParameterAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_formalParameterAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_formalParameterAST_5D_ (const class GGS__5B_formalParameterAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_formalParameterAST_5D_ (const DownEnumerator__5B_formalParameterAST_5D_ &) = delete ;
  private: DownEnumerator__5B_formalParameterAST_5D_ & operator = (const DownEnumerator__5B_formalParameterAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_formalParameterAST current (LOCATION_ARGS) const ;
  public: class GGS_formalParameterAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_formalParameterAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_formalParameterAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_formalParameterAST_5D_ (const class GGS__5B_formalParameterAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_formalParameterAST_5D_ (const UpEnumerator__5B_formalParameterAST_5D_ &) = delete ;
  private: UpEnumerator__5B_formalParameterAST_5D_ & operator = (const UpEnumerator__5B_formalParameterAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_formalParameterAST current (LOCATION_ARGS) const ;
  public: class GGS_formalParameterAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_formalParameterAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_formalParameterAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_formalParameterAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_formalParameterAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_formalParameterAST_5D_ (const GGS__5B_formalParameterAST_5D_ & inSource) ;
  public: GGS__5B_formalParameterAST_5D_ & operator = (const GGS__5B_formalParameterAST_5D_ & inSource) ;

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
  public: static GGS__5B_formalParameterAST_5D_ init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_formalParameterAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_formalParameterAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_formalParameterAST_5D_ add_operation (const GGS__5B_formalParameterAST_5D_ & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_formalParameterAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_formalParameterAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_formalParameterAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_formalParameterAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_formalParameterAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_formalParameterAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_formalParameterAST getter_first (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_formalParameterAST getter_last (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                               const class GGS_uint & constinOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_formalParameterAST readSubscript__3F_ (const class GGS_uint & in0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_formalParameterAST_5D_ ;
  friend class DownEnumerator__5B_formalParameterAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_formalParameterAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formalParameterAST struct
//--------------------------------------------------------------------------------------------------

class GGS_formalParameterAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFormalSelector ;
  public: inline GGS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GGS_formalArgumentPassingModeAST mProperty_mFormalArgumentPassingMode ;
  public: inline GGS_formalArgumentPassingModeAST readProperty_mFormalArgumentPassingMode (void) const {
    return mProperty_mFormalArgumentPassingMode ;
  }

  public: GGS_lstring mProperty_mFormalArgumentTypeName ;
  public: inline GGS_lstring readProperty_mFormalArgumentTypeName (void) const {
    return mProperty_mFormalArgumentTypeName ;
  }

  public: GGS_lstring mProperty_mFormalArgumentName ;
  public: inline GGS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

  public: GGS_bool mProperty_mIsUnused ;
  public: inline GGS_bool readProperty_mIsUnused (void) const {
    return mProperty_mIsUnused ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_formalParameterAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentPassingMode (const GGS_formalArgumentPassingModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentPassingMode = inValue ;
  }

  public: inline void setter_setMFormalArgumentTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentTypeName = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

  public: inline void setter_setMIsUnused (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsUnused = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_formalParameterAST (const GGS_lstring & in_mFormalSelector,
                                  const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                  const GGS_lstring & in_mFormalArgumentTypeName,
                                  const GGS_lstring & in_mFormalArgumentName,
                                  const GGS_bool & in_mIsUnused) ;

//--------------------------------- Copy constructor
  public: GGS_formalParameterAST (const GGS_formalParameterAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_formalParameterAST & operator = (const GGS_formalParameterAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formalParameterAST init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_formalArgumentPassingModeAST & inOperand1,
                                                                  const class GGS_lstring & inOperand2,
                                                                  const class GGS_lstring & inOperand3,
                                                                  const class GGS_bool & inOperand4,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalParameterAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [formalInputParameterAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_formalInputParameterAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_formalInputParameterAST_5D_ (const class GGS__5B_formalInputParameterAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_formalInputParameterAST_5D_ (const DownEnumerator__5B_formalInputParameterAST_5D_ &) = delete ;
  private: DownEnumerator__5B_formalInputParameterAST_5D_ & operator = (const DownEnumerator__5B_formalInputParameterAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_formalInputParameterAST current (LOCATION_ARGS) const ;
  public: class GGS_formalInputParameterAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_formalInputParameterAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_formalInputParameterAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_formalInputParameterAST_5D_ (const class GGS__5B_formalInputParameterAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_formalInputParameterAST_5D_ (const UpEnumerator__5B_formalInputParameterAST_5D_ &) = delete ;
  private: UpEnumerator__5B_formalInputParameterAST_5D_ & operator = (const UpEnumerator__5B_formalInputParameterAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_formalInputParameterAST current (LOCATION_ARGS) const ;
  public: class GGS_formalInputParameterAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_formalInputParameterAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_formalInputParameterAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_formalInputParameterAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_formalInputParameterAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_formalInputParameterAST_5D_ (const GGS__5B_formalInputParameterAST_5D_ & inSource) ;
  public: GGS__5B_formalInputParameterAST_5D_ & operator = (const GGS__5B_formalInputParameterAST_5D_ & inSource) ;

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
  public: static GGS__5B_formalInputParameterAST_5D_ init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_formalInputParameterAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_formalInputParameterAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_formalInputParameterAST_5D_ add_operation (const GGS__5B_formalInputParameterAST_5D_ & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_formalInputParameterAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_formalInputParameterAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_formalInputParameterAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_formalInputParameterAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_formalInputParameterAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_formalInputParameterAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_formalInputParameterAST getter_first (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_formalInputParameterAST getter_last (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_formalInputParameterAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_formalInputParameterAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                    const class GGS_uint & constinOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_formalInputParameterAST readSubscript__3F_ (const class GGS_uint & in0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_formalInputParameterAST_5D_ ;
  friend class DownEnumerator__5B_formalInputParameterAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_formalInputParameterAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formalInputParameterAST struct
//--------------------------------------------------------------------------------------------------

class GGS_formalInputParameterAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFormalSelector ;
  public: inline GGS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GGS_lstring mProperty_mFormalArgumentTypeName ;
  public: inline GGS_lstring readProperty_mFormalArgumentTypeName (void) const {
    return mProperty_mFormalArgumentTypeName ;
  }

  public: GGS_lstring mProperty_mFormalArgumentName ;
  public: inline GGS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

  public: GGS_bool mProperty_mIsUnused ;
  public: inline GGS_bool readProperty_mIsUnused (void) const {
    return mProperty_mIsUnused ;
  }

  public: GGS_bool mProperty_mIsConstant ;
  public: inline GGS_bool readProperty_mIsConstant (void) const {
    return mProperty_mIsConstant ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_formalInputParameterAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentTypeName = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

  public: inline void setter_setMIsUnused (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsUnused = inValue ;
  }

  public: inline void setter_setMIsConstant (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsConstant = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_formalInputParameterAST (const GGS_lstring & in_mFormalSelector,
                                       const GGS_lstring & in_mFormalArgumentTypeName,
                                       const GGS_lstring & in_mFormalArgumentName,
                                       const GGS_bool & in_mIsUnused,
                                       const GGS_bool & in_mIsConstant) ;

//--------------------------------- Copy constructor
  public: GGS_formalInputParameterAST (const GGS_formalInputParameterAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_formalInputParameterAST & operator = (const GGS_formalInputParameterAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formalInputParameterAST init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_lstring & inOperand1,
                                                                       const class GGS_lstring & inOperand2,
                                                                       const class GGS_bool & inOperand3,
                                                                       const class GGS_bool & inOperand4,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalInputParameterAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [filewrapperTemplateAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_filewrapperTemplateAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_filewrapperTemplateAST_5D_ (const class GGS__5B_filewrapperTemplateAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_filewrapperTemplateAST_5D_ (const DownEnumerator__5B_filewrapperTemplateAST_5D_ &) = delete ;
  private: DownEnumerator__5B_filewrapperTemplateAST_5D_ & operator = (const DownEnumerator__5B_filewrapperTemplateAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_filewrapperTemplateAST current (LOCATION_ARGS) const ;
  public: class GGS_filewrapperTemplateAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_filewrapperTemplateAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_filewrapperTemplateAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_filewrapperTemplateAST_5D_ (const class GGS__5B_filewrapperTemplateAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_filewrapperTemplateAST_5D_ (const UpEnumerator__5B_filewrapperTemplateAST_5D_ &) = delete ;
  private: UpEnumerator__5B_filewrapperTemplateAST_5D_ & operator = (const UpEnumerator__5B_filewrapperTemplateAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_filewrapperTemplateAST current (LOCATION_ARGS) const ;
  public: class GGS_filewrapperTemplateAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_filewrapperTemplateAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_filewrapperTemplateAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_filewrapperTemplateAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_filewrapperTemplateAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_filewrapperTemplateAST_5D_ (const GGS__5B_filewrapperTemplateAST_5D_ & inSource) ;
  public: GGS__5B_filewrapperTemplateAST_5D_ & operator = (const GGS__5B_filewrapperTemplateAST_5D_ & inSource) ;

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
  public: static GGS__5B_filewrapperTemplateAST_5D_ init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_filewrapperTemplateAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_filewrapperTemplateAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_filewrapperTemplateAST_5D_ add_operation (const GGS__5B_filewrapperTemplateAST_5D_ & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_filewrapperTemplateAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_filewrapperTemplateAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_filewrapperTemplateAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_filewrapperTemplateAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_filewrapperTemplateAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_filewrapperTemplateAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_filewrapperTemplateAST getter_first (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_filewrapperTemplateAST getter_last (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_filewrapperTemplateAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_filewrapperTemplateAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                   const class GGS_uint & constinOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_filewrapperTemplateAST readSubscript__3F_ (const class GGS_uint & in0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_filewrapperTemplateAST_5D_ ;
  friend class DownEnumerator__5B_filewrapperTemplateAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_filewrapperTemplateAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [formalTemplateInputParameterAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_formalTemplateInputParameterAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_formalTemplateInputParameterAST_5D_ (const class GGS__5B_formalTemplateInputParameterAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_formalTemplateInputParameterAST_5D_ (const DownEnumerator__5B_formalTemplateInputParameterAST_5D_ &) = delete ;
  private: DownEnumerator__5B_formalTemplateInputParameterAST_5D_ & operator = (const DownEnumerator__5B_formalTemplateInputParameterAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_formalTemplateInputParameterAST current (LOCATION_ARGS) const ;
  public: class GGS_formalTemplateInputParameterAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_formalTemplateInputParameterAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_formalTemplateInputParameterAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_formalTemplateInputParameterAST_5D_ (const class GGS__5B_formalTemplateInputParameterAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_formalTemplateInputParameterAST_5D_ (const UpEnumerator__5B_formalTemplateInputParameterAST_5D_ &) = delete ;
  private: UpEnumerator__5B_formalTemplateInputParameterAST_5D_ & operator = (const UpEnumerator__5B_formalTemplateInputParameterAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_formalTemplateInputParameterAST current (LOCATION_ARGS) const ;
  public: class GGS_formalTemplateInputParameterAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_formalTemplateInputParameterAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_formalTemplateInputParameterAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_formalTemplateInputParameterAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_formalTemplateInputParameterAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_formalTemplateInputParameterAST_5D_ (const GGS__5B_formalTemplateInputParameterAST_5D_ & inSource) ;
  public: GGS__5B_formalTemplateInputParameterAST_5D_ & operator = (const GGS__5B_formalTemplateInputParameterAST_5D_ & inSource) ;

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
  public: static GGS__5B_formalTemplateInputParameterAST_5D_ init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_formalTemplateInputParameterAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_formalTemplateInputParameterAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_formalTemplateInputParameterAST_5D_ add_operation (const GGS__5B_formalTemplateInputParameterAST_5D_ & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_formalTemplateInputParameterAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_formalTemplateInputParameterAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_formalTemplateInputParameterAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_formalTemplateInputParameterAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_formalTemplateInputParameterAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_formalTemplateInputParameterAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_formalTemplateInputParameterAST getter_first (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_formalTemplateInputParameterAST getter_last (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_formalTemplateInputParameterAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_formalTemplateInputParameterAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                            const class GGS_uint & constinOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_formalTemplateInputParameterAST readSubscript__3F_ (const class GGS_uint & in0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_formalTemplateInputParameterAST_5D_ ;
  friend class DownEnumerator__5B_formalTemplateInputParameterAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_formalTemplateInputParameterAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperTemplateAST struct
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperTemplateAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFilewrapperTemplateName ;
  public: inline GGS_lstring readProperty_mFilewrapperTemplateName (void) const {
    return mProperty_mFilewrapperTemplateName ;
  }

  public: GGS_lstring mProperty_mFilewrapperTemplatePath ;
  public: inline GGS_lstring readProperty_mFilewrapperTemplatePath (void) const {
    return mProperty_mFilewrapperTemplatePath ;
  }

  public: GGS__5B_formalTemplateInputParameterAST_5D_ mProperty_mFilewrapperTemplateFormalInputParameters ;
  public: inline GGS__5B_formalTemplateInputParameterAST_5D_ readProperty_mFilewrapperTemplateFormalInputParameters (void) const {
    return mProperty_mFilewrapperTemplateFormalInputParameters ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_filewrapperTemplateAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFilewrapperTemplateName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplateName = inValue ;
  }

  public: inline void setter_setMFilewrapperTemplatePath (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplatePath = inValue ;
  }

  public: inline void setter_setMFilewrapperTemplateFormalInputParameters (const GGS__5B_formalTemplateInputParameterAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplateFormalInputParameters = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_filewrapperTemplateAST (const GGS_lstring & in_mFilewrapperTemplateName,
                                      const GGS_lstring & in_mFilewrapperTemplatePath,
                                      const GGS__5B_formalTemplateInputParameterAST_5D_ & in_mFilewrapperTemplateFormalInputParameters) ;

//--------------------------------- Copy constructor
  public: GGS_filewrapperTemplateAST (const GGS_filewrapperTemplateAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_filewrapperTemplateAST & operator = (const GGS_filewrapperTemplateAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperTemplateAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              const class GGS__5B_formalTemplateInputParameterAST_5D_ & inOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formalTemplateInputParameterAST struct
//--------------------------------------------------------------------------------------------------

class GGS_formalTemplateInputParameterAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFormalTemplateSelector ;
  public: inline GGS_lstring readProperty_mFormalTemplateSelector (void) const {
    return mProperty_mFormalTemplateSelector ;
  }

  public: GGS_lstring mProperty_mFormalArgumentTypeName ;
  public: inline GGS_lstring readProperty_mFormalArgumentTypeName (void) const {
    return mProperty_mFormalArgumentTypeName ;
  }

  public: GGS_lstring mProperty_mFormalArgumentName ;
  public: inline GGS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

  public: GGS_bool mProperty_mIsUnused ;
  public: inline GGS_bool readProperty_mIsUnused (void) const {
    return mProperty_mIsUnused ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_formalTemplateInputParameterAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalTemplateSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalTemplateSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentTypeName = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

  public: inline void setter_setMIsUnused (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsUnused = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_formalTemplateInputParameterAST (const GGS_lstring & in_mFormalTemplateSelector,
                                               const GGS_lstring & in_mFormalArgumentTypeName,
                                               const GGS_lstring & in_mFormalArgumentName,
                                               const GGS_bool & in_mIsUnused) ;

//--------------------------------- Copy constructor
  public: GGS_formalTemplateInputParameterAST (const GGS_formalTemplateInputParameterAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_formalTemplateInputParameterAST & operator = (const GGS_formalTemplateInputParameterAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formalTemplateInputParameterAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_lstring & inOperand2,
                                                                           const class GGS_bool & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalTemplateInputParameterAST ;

//--------------------------------------------------------------------------------------------------
//   enum propertyInCollectionInitializationAST
//--------------------------------------------------------------------------------------------------

class GGS_propertyInCollectionInitializationAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_propertyInCollectionInitializationAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_some
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_some (class GGS_semanticExpressionAST & out_expression) const ;

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
//--------------------------------- GALGAS class functions
  public: static class GGS_propertyInCollectionInitializationAST class_func_none (LOCATION_ARGS) ;

  public: static class GGS_propertyInCollectionInitializationAST class_func_some (const class GGS_semanticExpressionAST & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_propertyInCollectionInitializationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractSome (class GGS_semanticExpressionAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_propertyInCollectionInitializationAST_2E_some_3F_ getter_getSome (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNone (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSome (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typedProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_typedProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_typeEntry ;
  public: inline GGS_unifiedTypeMapEntry readProperty_typeEntry (void) const {
    return mProperty_typeEntry ;
  }

  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

  public: GGS_propertyInCollectionInitializationAST mProperty_initialization ;
  public: inline GGS_propertyInCollectionInitializationAST readProperty_initialization (void) const {
    return mProperty_initialization ;
  }

  public: GGS_bool mProperty_hasSetter ;
  public: inline GGS_bool readProperty_hasSetter (void) const {
    return mProperty_hasSetter ;
  }

  public: GGS_bool mProperty_hasSelector ;
  public: inline GGS_bool readProperty_hasSelector (void) const {
    return mProperty_hasSelector ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typedProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeEntry (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeEntry = inValue ;
  }

  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

  public: inline void setter_setInitialization (const GGS_propertyInCollectionInitializationAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_initialization = inValue ;
  }

  public: inline void setter_setHasSetter (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_hasSetter = inValue ;
  }

  public: inline void setter_setHasSelector (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_hasSelector = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typedProperty (const GGS_unifiedTypeMapEntry & in_typeEntry,
                             const GGS_lstring & in_name,
                             const GGS_propertyInCollectionInitializationAST & in_initialization,
                             const GGS_bool & in_hasSetter,
                             const GGS_bool & in_hasSelector) ;

//--------------------------------- Copy constructor
  public: GGS_typedProperty (const GGS_typedProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typedProperty & operator = (const GGS_typedProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typedProperty init_21__21__21__21_hasSetter_21_hasSelector (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_propertyInCollectionInitializationAST & inOperand2,
                                                                                 const class GGS_bool & inOperand3,
                                                                                 const class GGS_bool & inOperand4,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typedProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumerationDescriptor struct
//--------------------------------------------------------------------------------------------------

class GGS_enumerationDescriptor : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mEnumeratedType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mEnumeratedType (void) const {
    return mProperty_mEnumeratedType ;
  }

  public: GGS_string mProperty_mEnumerationName ;
  public: inline GGS_string readProperty_mEnumerationName (void) const {
    return mProperty_mEnumerationName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_enumerationDescriptor (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEnumeratedType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratedType = inValue ;
  }

  public: inline void setter_setMEnumerationName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumerationName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_enumerationDescriptor (const GGS_unifiedTypeMapEntry & in_mEnumeratedType,
                                     const GGS_string & in_mEnumerationName) ;

//--------------------------------- Copy constructor
  public: GGS_enumerationDescriptor (const GGS_enumerationDescriptor & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_enumerationDescriptor & operator = (const GGS_enumerationDescriptor & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumerationDescriptor init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationDescriptor ;

