#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

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

  public: class GGS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mHasCompilerArgument (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeMethodCallInstructionForGeneration init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_actualParameterListForGeneration & inOperand2,
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
                                                                            const class GGS_actualParameterListForGeneration & inOperand2,
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
  public: GGS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mHasCompilerArgument ;


//--- Default constructor
  public: cPtr_typeMethodCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_typeMethodCallInstructionForGeneration (const GGS_lstring & in_mTypeName,
                                                       const GGS_lstring & in_mMethodName,
                                                       const GGS_actualParameterListForGeneration & in_mActualParameterList,
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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

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

//--------------------------------- Default constructor
  public: GGS__5B_templateDelimitor_32_AST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_templateDelimitor_32_AST_5D_ (const GGS__5B_templateDelimitor_32_AST_5D_ & inSource) ;
  public: GGS__5B_templateDelimitor_32_AST_5D_ & operator = (const GGS__5B_templateDelimitor_32_AST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_templateDelimitor_32_AST_5D_ ;
  friend class DownEnumerator__5B_templateDelimitor_32_AST_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_templateDelimitor_32_AST_5D_ init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_templateDelimitor_32_AST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
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

  public: void setter_insertAtIndex (class GGS_templateDelimitor_32_AST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_templateDelimitor_32_AST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_templateDelimitor_32_AST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_templateDelimitor_32_AST & outArgument0,
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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

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

//--------------------------------- Default constructor
  public: GGS__5B_templateReplacementAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_templateReplacementAST_5D_ (const GGS__5B_templateReplacementAST_5D_ & inSource) ;
  public: GGS__5B_templateReplacementAST_5D_ & operator = (const GGS__5B_templateReplacementAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_templateReplacementAST_5D_ ;
  friend class DownEnumerator__5B_templateReplacementAST_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_templateReplacementAST_5D_ init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_templateReplacementAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
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

  public: void setter_insertAtIndex (class GGS_templateReplacementAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_templateReplacementAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_templateReplacementAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_templateReplacementAST & outArgument0,
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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

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

//--------------------------------- Default constructor
  public: GGS__5B_lexicalAttributeAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_lexicalAttributeAST_5D_ (const GGS__5B_lexicalAttributeAST_5D_ & inSource) ;
  public: GGS__5B_lexicalAttributeAST_5D_ & operator = (const GGS__5B_lexicalAttributeAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_lexicalAttributeAST_5D_ ;
  friend class DownEnumerator__5B_lexicalAttributeAST_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_lexicalAttributeAST_5D_ init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_lexicalAttributeAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
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

  public: void setter_insertAtIndex (class GGS_lexicalAttributeAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lexicalAttributeAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lexicalAttributeAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lexicalAttributeAST & outArgument0,
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
// Phase 1: [lexicalMessageDeclarationAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_lexicalMessageDeclarationAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_lexicalMessageDeclarationAST_5D_ (const class GGS__5B_lexicalMessageDeclarationAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_lexicalMessageDeclarationAST_5D_ (const DownEnumerator__5B_lexicalMessageDeclarationAST_5D_ &) = delete ;
  private: DownEnumerator__5B_lexicalMessageDeclarationAST_5D_ & operator = (const DownEnumerator__5B_lexicalMessageDeclarationAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

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

//--------------------------------- Default constructor
  public: GGS__5B_lexicalMessageDeclarationAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_lexicalMessageDeclarationAST_5D_ (const GGS__5B_lexicalMessageDeclarationAST_5D_ & inSource) ;
  public: GGS__5B_lexicalMessageDeclarationAST_5D_ & operator = (const GGS__5B_lexicalMessageDeclarationAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_lexicalMessageDeclarationAST_5D_ ;
  friend class DownEnumerator__5B_lexicalMessageDeclarationAST_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_lexicalMessageDeclarationAST_5D_ init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_lexicalMessageDeclarationAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
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

  public: void setter_insertAtIndex (class GGS_lexicalMessageDeclarationAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lexicalMessageDeclarationAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lexicalMessageDeclarationAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lexicalMessageDeclarationAST & outArgument0,
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
// Phase 1: [abstractLexicalRuleAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_abstractLexicalRuleAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_abstractLexicalRuleAST_5D_ (const class GGS__5B_abstractLexicalRuleAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_abstractLexicalRuleAST_5D_ (const DownEnumerator__5B_abstractLexicalRuleAST_5D_ &) = delete ;
  private: DownEnumerator__5B_abstractLexicalRuleAST_5D_ & operator = (const DownEnumerator__5B_abstractLexicalRuleAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

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

//--------------------------------- Default constructor
  public: GGS__5B_abstractLexicalRuleAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_abstractLexicalRuleAST_5D_ (const GGS__5B_abstractLexicalRuleAST_5D_ & inSource) ;
  public: GGS__5B_abstractLexicalRuleAST_5D_ & operator = (const GGS__5B_abstractLexicalRuleAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_abstractLexicalRuleAST_5D_ ;
  friend class DownEnumerator__5B_abstractLexicalRuleAST_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_abstractLexicalRuleAST_5D_ init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_abstractLexicalRuleAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
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

  public: void setter_insertAtIndex (class GGS_abstractLexicalRuleAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_abstractLexicalRuleAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_abstractLexicalRuleAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_abstractLexicalRuleAST & outArgument0,
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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

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

//--------------------------------- Default constructor
  public: GGS__5B_indexingAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_indexingAST_5D_ (const GGS__5B_indexingAST_5D_ & inSource) ;
  public: GGS__5B_indexingAST_5D_ & operator = (const GGS__5B_indexingAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_indexingAST_5D_ ;
  friend class DownEnumerator__5B_indexingAST_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_indexingAST_5D_ init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_indexingAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
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

  public: void setter_insertAtIndex (class GGS_indexingAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_indexingAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_indexingAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_indexingAST & outArgument0,
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
// Phase 1: @lexicalStyleListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalStyleListAST final {
  public: DownEnumerator_lexicalStyleListAST (const class GGS_lexicalStyleListAST & inList) ;

  public: ~ DownEnumerator_lexicalStyleListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalStyleListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalStyleListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalStyleListAST (const DownEnumerator_lexicalStyleListAST &) = delete ;
  private: DownEnumerator_lexicalStyleListAST & operator = (const DownEnumerator_lexicalStyleListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalStyleListAST final {
  public: UpEnumerator_lexicalStyleListAST (const class GGS_lexicalStyleListAST & inList)  ;

  public: ~ UpEnumerator_lexicalStyleListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalStyleListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalStyleListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalStyleListAST (const UpEnumerator_lexicalStyleListAST &) = delete ;
  private: UpEnumerator_lexicalStyleListAST & operator = (const UpEnumerator_lexicalStyleListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @lexicalStyleListAST list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalStyleListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_lexicalStyleListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_lexicalStyleListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_lexicalStyleListAST (void) = default ;

//--- Copy
  public: GGS_lexicalStyleListAST (const GGS_lexicalStyleListAST &) = default ;
  public: GGS_lexicalStyleListAST & operator = (const GGS_lexicalStyleListAST &) = default ;

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
  public : inline GenericArray <GGS_lexicalStyleListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_lexicalStyleListAST subList (const int32_t inStart,
                                            const int32_t inLength,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_lexicalStyleListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mName,
                                                 const class GGS_lstring & in_mComment
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalStyleListAST init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalStyleListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_lexicalStyleListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_lexicalStyleListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_lexicalStyleListAST add_operation (const GGS_lexicalStyleListAST & inOperand,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMCommentAtIndex (class GGS_lstring constinArgument0,
                                          class GGS_uint constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMNameAtIndex (class GGS_lstring constinArgument0,
                                       class GGS_uint constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mCommentAtIndex (const class GGS_uint & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mNameAtIndex (const class GGS_uint & constinOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_lexicalStyleListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalStyleListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalStyleListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalStyleListAST ;
  friend class DownEnumerator_lexicalStyleListAST ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStyleListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalStyleListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalStyleListAST_2E_element : public AC_GALGAS_root {
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
  public: GGS_lexicalStyleListAST_2E_element (void) ;

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
  public: GGS_lexicalStyleListAST_2E_element (const GGS_lstring & in_mName,
                                              const GGS_lstring & in_mComment) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalStyleListAST_2E_element (const GGS_lexicalStyleListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalStyleListAST_2E_element & operator = (const GGS_lexicalStyleListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalStyleListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStyleListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalDeclarationListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_terminalDeclarationListAST final {
  public: DownEnumerator_terminalDeclarationListAST (const class GGS_terminalDeclarationListAST & inList) ;

  public: ~ DownEnumerator_terminalDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_sentLexicalAttributeListAST current_mSentAttributeList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mStyle (LOCATION_ARGS) const ;
  public: class GGS_bool current_nonAtomicSelection (LOCATION_ARGS) const ;
  public: class GGS_bool current_isEndOfTemplateMark (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_terminalDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_terminalDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_terminalDeclarationListAST (const DownEnumerator_terminalDeclarationListAST &) = delete ;
  private: DownEnumerator_terminalDeclarationListAST & operator = (const DownEnumerator_terminalDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_terminalDeclarationListAST final {
  public: UpEnumerator_terminalDeclarationListAST (const class GGS_terminalDeclarationListAST & inList)  ;

  public: ~ UpEnumerator_terminalDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_sentLexicalAttributeListAST current_mSentAttributeList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mStyle (LOCATION_ARGS) const ;
  public: class GGS_bool current_nonAtomicSelection (LOCATION_ARGS) const ;
  public: class GGS_bool current_isEndOfTemplateMark (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_terminalDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_terminalDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_terminalDeclarationListAST (const UpEnumerator_terminalDeclarationListAST &) = delete ;
  private: UpEnumerator_terminalDeclarationListAST & operator = (const UpEnumerator_terminalDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @terminalDeclarationListAST list
//--------------------------------------------------------------------------------------------------

class GGS_terminalDeclarationListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_terminalDeclarationListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_terminalDeclarationListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_terminalDeclarationListAST (void) = default ;

//--- Copy
  public: GGS_terminalDeclarationListAST (const GGS_terminalDeclarationListAST &) = default ;
  public: GGS_terminalDeclarationListAST & operator = (const GGS_terminalDeclarationListAST &) = default ;

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
  public : inline GenericArray <GGS_terminalDeclarationListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_terminalDeclarationListAST subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_terminalDeclarationListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mName,
                                                 const class GGS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                 const class GGS_lstring & in_mSyntaxErrorMessage,
                                                 const class GGS_lstring & in_mStyle,
                                                 const class GGS_bool & in_nonAtomicSelection,
                                                 const class GGS_bool & in_isEndOfTemplateMark
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalDeclarationListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_terminalDeclarationListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                const class GGS_sentLexicalAttributeListAST & inOperand1,
                                                                                const class GGS_lstring & inOperand2,
                                                                                const class GGS_lstring & inOperand3,
                                                                                const class GGS_bool & inOperand4,
                                                                                const class GGS_bool & inOperand5
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_terminalDeclarationListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_sentLexicalAttributeListAST & inOperand1,
                                   const class GGS_lstring & inOperand2,
                                   const class GGS_lstring & inOperand3,
                                   const class GGS_bool & inOperand4,
                                   const class GGS_bool & inOperand5
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_terminalDeclarationListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_terminalDeclarationListAST add_operation (const GGS_terminalDeclarationListAST & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_sentLexicalAttributeListAST constinArgument1,
                              class GGS_lstring constinArgument2,
                              class GGS_lstring constinArgument3,
                              class GGS_bool constinArgument4,
                              class GGS_bool constinArgument5,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_sentLexicalAttributeListAST constinArgument1,
                                     class GGS_lstring constinArgument2,
                                     class GGS_lstring constinArgument3,
                                     class GGS_bool constinArgument4,
                                     class GGS_bool constinArgument5,
                                     class GGS_uint constinArgument6,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_sentLexicalAttributeListAST & outArgument1,
                                class GGS_lstring & outArgument2,
                                class GGS_lstring & outArgument3,
                                class GGS_bool & outArgument4,
                                class GGS_bool & outArgument5,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_sentLexicalAttributeListAST & outArgument1,
                               class GGS_lstring & outArgument2,
                               class GGS_lstring & outArgument3,
                               class GGS_bool & outArgument4,
                               class GGS_bool & outArgument5,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_sentLexicalAttributeListAST & outArgument1,
                                     class GGS_lstring & outArgument2,
                                     class GGS_lstring & outArgument3,
                                     class GGS_bool & outArgument4,
                                     class GGS_bool & outArgument5,
                                     class GGS_uint constinArgument6,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setIsEndOfTemplateMarkAtIndex (class GGS_bool constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMNameAtIndex (class GGS_lstring constinArgument0,
                                       class GGS_uint constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMSentAttributeListAtIndex (class GGS_sentLexicalAttributeListAST constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMStyleAtIndex (class GGS_lstring constinArgument0,
                                        class GGS_uint constinArgument1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

  public: void setter_setMSyntaxErrorMessageAtIndex (class GGS_lstring constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setNonAtomicSelectionAtIndex (class GGS_bool constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_sentLexicalAttributeListAST & outArgument1,
                             class GGS_lstring & outArgument2,
                             class GGS_lstring & outArgument3,
                             class GGS_bool & outArgument4,
                             class GGS_bool & outArgument5,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_sentLexicalAttributeListAST & outArgument1,
                            class GGS_lstring & outArgument2,
                            class GGS_lstring & outArgument3,
                            class GGS_bool & outArgument4,
                            class GGS_bool & outArgument5,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isEndOfTemplateMarkAtIndex (const class GGS_uint & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mNameAtIndex (const class GGS_uint & constinOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_sentLexicalAttributeListAST getter_mSentAttributeListAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mStyleAtIndex (const class GGS_uint & constinOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSyntaxErrorMessageAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_nonAtomicSelectionAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_terminalDeclarationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_terminalDeclarationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_terminalDeclarationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_terminalDeclarationListAST ;
  friend class DownEnumerator_terminalDeclarationListAST ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sentLexicalAttributeListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_sentLexicalAttributeListAST final {
  public: DownEnumerator_sentLexicalAttributeListAST (const class GGS_sentLexicalAttributeListAST & inList) ;

  public: ~ DownEnumerator_sentLexicalAttributeListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mAttributeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sentLexicalAttributeListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_sentLexicalAttributeListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_sentLexicalAttributeListAST (const DownEnumerator_sentLexicalAttributeListAST &) = delete ;
  private: DownEnumerator_sentLexicalAttributeListAST & operator = (const DownEnumerator_sentLexicalAttributeListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_sentLexicalAttributeListAST final {
  public: UpEnumerator_sentLexicalAttributeListAST (const class GGS_sentLexicalAttributeListAST & inList)  ;

  public: ~ UpEnumerator_sentLexicalAttributeListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mAttributeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sentLexicalAttributeListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_sentLexicalAttributeListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_sentLexicalAttributeListAST (const UpEnumerator_sentLexicalAttributeListAST &) = delete ;
  private: UpEnumerator_sentLexicalAttributeListAST & operator = (const UpEnumerator_sentLexicalAttributeListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @sentLexicalAttributeListAST list
//--------------------------------------------------------------------------------------------------

class GGS_sentLexicalAttributeListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_sentLexicalAttributeListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_sentLexicalAttributeListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_sentLexicalAttributeListAST (void) = default ;

//--- Copy
  public: GGS_sentLexicalAttributeListAST (const GGS_sentLexicalAttributeListAST &) = default ;
  public: GGS_sentLexicalAttributeListAST & operator = (const GGS_sentLexicalAttributeListAST &) = default ;

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
  public : inline GenericArray <GGS_sentLexicalAttributeListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_sentLexicalAttributeListAST subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_sentLexicalAttributeListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mFormalSelector,
                                                 const class GGS_lstring & in_mAttributeName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sentLexicalAttributeListAST init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_sentLexicalAttributeListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_sentLexicalAttributeListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_sentLexicalAttributeListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_sentLexicalAttributeListAST add_operation (const GGS_sentLexicalAttributeListAST & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMAttributeNameAtIndex (class GGS_lstring constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalSelectorAtIndex (class GGS_lstring constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mAttributeNameAtIndex (const class GGS_uint & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFormalSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_sentLexicalAttributeListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_sentLexicalAttributeListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_sentLexicalAttributeListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_sentLexicalAttributeListAST ;
  friend class DownEnumerator_sentLexicalAttributeListAST ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sentLexicalAttributeListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalDeclarationListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_terminalDeclarationListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mName ;
  public: inline GGS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GGS_sentLexicalAttributeListAST mProperty_mSentAttributeList ;
  public: inline GGS_sentLexicalAttributeListAST readProperty_mSentAttributeList (void) const {
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
  public: GGS_terminalDeclarationListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMSentAttributeList (const GGS_sentLexicalAttributeListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
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
  public: GGS_terminalDeclarationListAST_2E_element (const GGS_lstring & in_mName,
                                                     const GGS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                     const GGS_lstring & in_mSyntaxErrorMessage,
                                                     const GGS_lstring & in_mStyle,
                                                     const GGS_bool & in_nonAtomicSelection,
                                                     const GGS_bool & in_isEndOfTemplateMark) ;

//--------------------------------- Copy constructor
  public: GGS_terminalDeclarationListAST_2E_element (const GGS_terminalDeclarationListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_terminalDeclarationListAST_2E_element & operator = (const GGS_terminalDeclarationListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalDeclarationListAST_2E_element init_21__21__21__21__21_nonAtomicSelection_21_isEndOfTemplateMark (const class GGS_lstring & inOperand0,
                                                                                                                              const class GGS_sentLexicalAttributeListAST & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalDeclarationListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalListDeclarationListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalListDeclarationListAST final {
  public: DownEnumerator_lexicalListDeclarationListAST (const class GGS_lexicalListDeclarationListAST & inList) ;

  public: ~ DownEnumerator_lexicalListDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mStyle (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public: class GGS_sentLexicalAttributeListAST current_mSentAttributeList (LOCATION_ARGS) const ;
  public: class GGS__5B_lexicalListEntryAST_5D_ current_mEntryList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalListDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalListDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalListDeclarationListAST (const DownEnumerator_lexicalListDeclarationListAST &) = delete ;
  private: DownEnumerator_lexicalListDeclarationListAST & operator = (const DownEnumerator_lexicalListDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalListDeclarationListAST final {
  public: UpEnumerator_lexicalListDeclarationListAST (const class GGS_lexicalListDeclarationListAST & inList)  ;

  public: ~ UpEnumerator_lexicalListDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mStyle (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public: class GGS_sentLexicalAttributeListAST current_mSentAttributeList (LOCATION_ARGS) const ;
  public: class GGS__5B_lexicalListEntryAST_5D_ current_mEntryList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalListDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalListDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalListDeclarationListAST (const UpEnumerator_lexicalListDeclarationListAST &) = delete ;
  private: UpEnumerator_lexicalListDeclarationListAST & operator = (const UpEnumerator_lexicalListDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @lexicalListDeclarationListAST list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalListDeclarationListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_lexicalListDeclarationListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_lexicalListDeclarationListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_lexicalListDeclarationListAST (void) = default ;

//--- Copy
  public: GGS_lexicalListDeclarationListAST (const GGS_lexicalListDeclarationListAST &) = default ;
  public: GGS_lexicalListDeclarationListAST & operator = (const GGS_lexicalListDeclarationListAST &) = default ;

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
  public : inline GenericArray <GGS_lexicalListDeclarationListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_lexicalListDeclarationListAST subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_lexicalListDeclarationListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mName,
                                                 const class GGS_lstring & in_mStyle,
                                                 const class GGS_lstring & in_mSyntaxErrorMessage,
                                                 const class GGS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                 const class GGS__5B_lexicalListEntryAST_5D_ & in_mEntryList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalListDeclarationListAST init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalListDeclarationListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   const class GGS_lstring & inOperand2,
                                                                                   const class GGS_sentLexicalAttributeListAST & inOperand3,
                                                                                   const class GGS__5B_lexicalListEntryAST_5D_ & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_lexicalListDeclarationListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS_lstring & inOperand2,
                                   const class GGS_sentLexicalAttributeListAST & inOperand3,
                                   const class GGS__5B_lexicalListEntryAST_5D_ & inOperand4
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_lexicalListDeclarationListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_lexicalListDeclarationListAST add_operation (const GGS_lexicalListDeclarationListAST & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS_lstring constinArgument2,
                              class GGS_sentLexicalAttributeListAST constinArgument3,
                              class GGS__5B_lexicalListEntryAST_5D_ constinArgument4,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_lstring constinArgument2,
                                     class GGS_sentLexicalAttributeListAST constinArgument3,
                                     class GGS__5B_lexicalListEntryAST_5D_ constinArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS_lstring & outArgument2,
                                class GGS_sentLexicalAttributeListAST & outArgument3,
                                class GGS__5B_lexicalListEntryAST_5D_ & outArgument4,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS_lstring & outArgument2,
                               class GGS_sentLexicalAttributeListAST & outArgument3,
                               class GGS__5B_lexicalListEntryAST_5D_ & outArgument4,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_lstring & outArgument2,
                                     class GGS_sentLexicalAttributeListAST & outArgument3,
                                     class GGS__5B_lexicalListEntryAST_5D_ & outArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMEntryListAtIndex (class GGS__5B_lexicalListEntryAST_5D_ constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMNameAtIndex (class GGS_lstring constinArgument0,
                                       class GGS_uint constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMSentAttributeListAtIndex (class GGS_sentLexicalAttributeListAST constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMStyleAtIndex (class GGS_lstring constinArgument0,
                                        class GGS_uint constinArgument1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

  public: void setter_setMSyntaxErrorMessageAtIndex (class GGS_lstring constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS_lstring & outArgument2,
                             class GGS_sentLexicalAttributeListAST & outArgument3,
                             class GGS__5B_lexicalListEntryAST_5D_ & outArgument4,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            class GGS_lstring & outArgument2,
                            class GGS_sentLexicalAttributeListAST & outArgument3,
                            class GGS__5B_lexicalListEntryAST_5D_ & outArgument4,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalListEntryAST_5D_ getter_mEntryListAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mNameAtIndex (const class GGS_uint & constinOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_sentLexicalAttributeListAST getter_mSentAttributeListAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mStyleAtIndex (const class GGS_uint & constinOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSyntaxErrorMessageAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_lexicalListDeclarationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalListDeclarationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalListDeclarationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalListDeclarationListAST ;
  friend class DownEnumerator_lexicalListDeclarationListAST ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ;

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

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

//--------------------------------- Default constructor
  public: GGS__5B_lexicalListEntryAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_lexicalListEntryAST_5D_ (const GGS__5B_lexicalListEntryAST_5D_ & inSource) ;
  public: GGS__5B_lexicalListEntryAST_5D_ & operator = (const GGS__5B_lexicalListEntryAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_lexicalListEntryAST_5D_ ;
  friend class DownEnumerator__5B_lexicalListEntryAST_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_lexicalListEntryAST_5D_ init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_lexicalListEntryAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
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

  public: void setter_insertAtIndex (class GGS_lexicalListEntryAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lexicalListEntryAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lexicalListEntryAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lexicalListEntryAST & outArgument0,
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
// Phase 1: @lexicalListDeclarationListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalListDeclarationListAST_2E_element : public AC_GALGAS_root {
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

  public: GGS_sentLexicalAttributeListAST mProperty_mSentAttributeList ;
  public: inline GGS_sentLexicalAttributeListAST readProperty_mSentAttributeList (void) const {
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
  public: GGS_lexicalListDeclarationListAST_2E_element (void) ;

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

  public: inline void setter_setMSentAttributeList (const GGS_sentLexicalAttributeListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSentAttributeList = inValue ;
  }

  public: inline void setter_setMEntryList (const GGS__5B_lexicalListEntryAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEntryList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalListDeclarationListAST_2E_element (const GGS_lstring & in_mName,
                                                        const GGS_lstring & in_mStyle,
                                                        const GGS_lstring & in_mSyntaxErrorMessage,
                                                        const GGS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                        const GGS__5B_lexicalListEntryAST_5D_ & in_mEntryList) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalListDeclarationListAST_2E_element (const GGS_lexicalListDeclarationListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalListDeclarationListAST_2E_element & operator = (const GGS_lexicalListDeclarationListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalListDeclarationListAST_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                        const class GGS_lstring & inOperand1,
                                                                                        const class GGS_lstring & inOperand2,
                                                                                        const class GGS_sentLexicalAttributeListAST & inOperand3,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalListDeclarationListAST_2E_element ;

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

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

//--------------------------------- Default constructor
  public: GGS__5B_lexicalInstructionAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_lexicalInstructionAST_5D_ (const GGS__5B_lexicalInstructionAST_5D_ & inSource) ;
  public: GGS__5B_lexicalInstructionAST_5D_ & operator = (const GGS__5B_lexicalInstructionAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_lexicalInstructionAST_5D_ ;
  friend class DownEnumerator__5B_lexicalInstructionAST_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_lexicalInstructionAST_5D_ init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_lexicalInstructionAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
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

  public: void setter_insertAtIndex (class GGS_lexicalInstructionAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lexicalInstructionAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lexicalInstructionAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lexicalInstructionAST & outArgument0,
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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

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

//--------------------------------- Default constructor
  public: GGS__5B_semanticDeclarationAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_semanticDeclarationAST_5D_ (const GGS__5B_semanticDeclarationAST_5D_ & inSource) ;
  public: GGS__5B_semanticDeclarationAST_5D_ & operator = (const GGS__5B_semanticDeclarationAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_semanticDeclarationAST_5D_ ;
  friend class DownEnumerator__5B_semanticDeclarationAST_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_semanticDeclarationAST_5D_ init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_semanticDeclarationAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
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

  public: void setter_insertAtIndex (class GGS_semanticDeclarationAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_semanticDeclarationAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_semanticDeclarationAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_semanticDeclarationAST & outArgument0,
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
// Phase 1: [semanticDeclarationForGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_semanticDeclarationForGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_semanticDeclarationForGeneration_5D_ (const class GGS__5B_semanticDeclarationForGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_semanticDeclarationForGeneration_5D_ (const DownEnumerator__5B_semanticDeclarationForGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_semanticDeclarationForGeneration_5D_ & operator = (const DownEnumerator__5B_semanticDeclarationForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

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

//--------------------------------- Default constructor
  public: GGS__5B_semanticDeclarationForGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_semanticDeclarationForGeneration_5D_ (const GGS__5B_semanticDeclarationForGeneration_5D_ & inSource) ;
  public: GGS__5B_semanticDeclarationForGeneration_5D_ & operator = (const GGS__5B_semanticDeclarationForGeneration_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_semanticDeclarationForGeneration_5D_ ;
  friend class DownEnumerator__5B_semanticDeclarationForGeneration_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_semanticDeclarationForGeneration_5D_ init (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_semanticDeclarationForGeneration_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
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

  public: void setter_insertAtIndex (class GGS_semanticDeclarationForGeneration constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_semanticDeclarationForGeneration & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_semanticDeclarationForGeneration & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_semanticDeclarationForGeneration & outArgument0,
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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

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

//--------------------------------- Default constructor
  public: GGS__5B_terminalAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_terminalAST_5D_ (const GGS__5B_terminalAST_5D_ & inSource) ;
  public: GGS__5B_terminalAST_5D_ & operator = (const GGS__5B_terminalAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_terminalAST_5D_ ;
  friend class DownEnumerator__5B_terminalAST_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_terminalAST_5D_ init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_terminalAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
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

  public: void setter_insertAtIndex (class GGS_terminalAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_terminalAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_terminalAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_terminalAST & outArgument0,
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
// Phase 1: @lexicalSentValueList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalSentValueList final {
  public: DownEnumerator_lexicalSentValueList (const class GGS_lexicalSentValueList & inList) ;

  public: ~ DownEnumerator_lexicalSentValueList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLexicalFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_string current_mLexicalAttributeName (LOCATION_ARGS) const ;
  public: class GGS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalSentValueList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalSentValueList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalSentValueList (const DownEnumerator_lexicalSentValueList &) = delete ;
  private: DownEnumerator_lexicalSentValueList & operator = (const DownEnumerator_lexicalSentValueList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalSentValueList final {
  public: UpEnumerator_lexicalSentValueList (const class GGS_lexicalSentValueList & inList)  ;

  public: ~ UpEnumerator_lexicalSentValueList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLexicalFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_string current_mLexicalAttributeName (LOCATION_ARGS) const ;
  public: class GGS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalSentValueList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalSentValueList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalSentValueList (const UpEnumerator_lexicalSentValueList &) = delete ;
  private: UpEnumerator_lexicalSentValueList & operator = (const UpEnumerator_lexicalSentValueList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @lexicalSentValueList list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalSentValueList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_lexicalSentValueList_2E_element> mArray ;

//--- Default constructor
  public: GGS_lexicalSentValueList (void) ;

//--- Destructor
  public: virtual ~ GGS_lexicalSentValueList (void) = default ;

//--- Copy
  public: GGS_lexicalSentValueList (const GGS_lexicalSentValueList &) = default ;
  public: GGS_lexicalSentValueList & operator = (const GGS_lexicalSentValueList &) = default ;

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
  public : inline GenericArray <GGS_lexicalSentValueList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_lexicalSentValueList subList (const int32_t inStart,
                                             const int32_t inLength,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_lexicalSentValueList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mLexicalFormalSelector,
                                                 const class GGS_string & in_mLexicalAttributeName,
                                                 const class GGS_lexicalTypeEnum & in_mLexicalType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalSentValueList init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalSentValueList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                          const class GGS_string & inOperand1,
                                                                          const class GGS_lexicalTypeEnum & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_lexicalSentValueList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_string & inOperand1,
                                   const class GGS_lexicalTypeEnum & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_lexicalSentValueList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_lexicalSentValueList add_operation (const GGS_lexicalSentValueList & inOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_string constinArgument1,
                              class GGS_lexicalTypeEnum constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_string constinArgument1,
                                     class GGS_lexicalTypeEnum constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_string & outArgument1,
                                class GGS_lexicalTypeEnum & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_string & outArgument1,
                               class GGS_lexicalTypeEnum & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_string & outArgument1,
                                     class GGS_lexicalTypeEnum & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexicalAttributeNameAtIndex (class GGS_string constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexicalFormalSelectorAtIndex (class GGS_lstring constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexicalTypeAtIndex (class GGS_lexicalTypeEnum constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_string & outArgument1,
                             class GGS_lexicalTypeEnum & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_string & outArgument1,
                            class GGS_lexicalTypeEnum & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mLexicalAttributeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mLexicalFormalSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalTypeEnum getter_mLexicalTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_lexicalSentValueList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalSentValueList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalSentValueList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalSentValueList ;
  friend class DownEnumerator_lexicalSentValueList ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSentValueList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalAST struct
//--------------------------------------------------------------------------------------------------

class GGS_terminalAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mTerminalName ;
  public: inline GGS_lstring readProperty_mTerminalName (void) const {
    return mProperty_mTerminalName ;
  }

  public: GGS_lexicalSentValueList mProperty_mSentAttributeList ;
  public: inline GGS_lexicalSentValueList readProperty_mSentAttributeList (void) const {
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

  public: inline void setter_setMSentAttributeList (const GGS_lexicalSentValueList & inValue COMMA_UNUSED_LOCATION_ARGS) {
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
                           const GGS_lexicalSentValueList & in_mSentAttributeList,
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
                                                                                                 const class GGS_lexicalSentValueList & inOperand1,
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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

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

//--------------------------------- Default constructor
  public: GGS__5B_templateDelimitorAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_templateDelimitorAST_5D_ (const GGS__5B_templateDelimitorAST_5D_ & inSource) ;
  public: GGS__5B_templateDelimitorAST_5D_ & operator = (const GGS__5B_templateDelimitorAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_templateDelimitorAST_5D_ ;
  friend class DownEnumerator__5B_templateDelimitorAST_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_templateDelimitorAST_5D_ init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_templateDelimitorAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
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

  public: void setter_insertAtIndex (class GGS_templateDelimitorAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_templateDelimitorAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_templateDelimitorAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_templateDelimitorAST & outArgument0,
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
// Phase 1: @lexicalSendDefaultActionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalSendDefaultActionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_lexicalSendDefaultActionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalSendDefaultActionAST (const class cPtr_lexicalSendDefaultActionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalSendDefaultActionAST init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalSendDefaultActionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalSendDefaultActionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalSendDefaultActionAST : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalSendDefaultActionAST_init (Compiler * inCompiler) ;


//--- Extension func generateDefaultSendCode
  public: virtual class GGS_string getter_generateDefaultSendCode (const class GGS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension func generateSwiftCocoaDefaultSendCode
  public: virtual class GGS_string getter_generateSwiftCocoaDefaultSendCode (const class GGS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension proc checkLexicalDefaultAction
  public: virtual void method_checkLexicalDefaultAction (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_lexicalSendDefaultActionAST (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

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
// Phase 2: pointer class for @lexicalExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalExpressionAST : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalExpressionAST_init (Compiler * inCompiler) ;


//--- Extension func generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension func generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension proc checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_lexicalExpressionAST (Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

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
//
//Abstract extension proc '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                          class GGS_lexiqueAnalysisContext & io__5F_ioLexiqueAnalysisContext,
                                                          const class GGS_lexicalTypeEnum constin__5F_inLexicalRoutineFormalArgumentType,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalAttributeMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalAttributeMap final {

  public: DownEnumerator_lexicalAttributeMap (const class GGS_lexicalAttributeMap & inMap) ;

  public: ~ DownEnumerator_lexicalAttributeMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;

  public: class GGS_lexicalAttributeMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalAttributeMap (const DownEnumerator_lexicalAttributeMap &) = delete ;
  private: DownEnumerator_lexicalAttributeMap & operator = (const DownEnumerator_lexicalAttributeMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalAttributeMap final {
  public: UpEnumerator_lexicalAttributeMap (const class GGS_lexicalAttributeMap & inMap)  ;

  public: ~ UpEnumerator_lexicalAttributeMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
  public: class GGS_lexicalAttributeMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalAttributeMap (const UpEnumerator_lexicalAttributeMap &) = delete ;
  private: UpEnumerator_lexicalAttributeMap & operator = (const UpEnumerator_lexicalAttributeMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_lexicalAttributeMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_lexicalAttributeMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_lexicalAttributeMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_lexicalAttributeMap (void) ;

//--- Handle copy
  public: GGS_lexicalAttributeMap (const GGS_lexicalAttributeMap & inSource) ;
  public: GGS_lexicalAttributeMap & operator = (const GGS_lexicalAttributeMap & inSource) ;

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
  protected: void performInsert (const class GGS_lexicalAttributeMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalAttributeMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalAttributeMap init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalAttributeMap class_func_mapWithMapToOverride (const class GGS_lexicalAttributeMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lexicalTypeEnum constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexicalTypeForKey (class GGS_lexicalTypeEnum constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_lexicalTypeEnum & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalTypeEnum getter_mLexicalTypeForKey (const class GGS_string & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalAttributeMap getter_overriddenMap (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_lexicalAttributeMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalAttributeMap ;
  friend class DownEnumerator_lexicalAttributeMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalExplicitTokenListMapMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalExplicitTokenListMapMap final {

  public: DownEnumerator_lexicalExplicitTokenListMapMap (const class GGS_lexicalExplicitTokenListMapMap & inMap) ;

  public: ~ DownEnumerator_lexicalExplicitTokenListMapMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lexicalExplicitTokenListMap current_mExplicitTokenListMap (LOCATION_ARGS) const ;

  public: class GGS_tokenSortedlist current_mTokenSortedList (LOCATION_ARGS) const ;

  public: class GGS_bool current_mShouldBeGenerated (LOCATION_ARGS) const ;

  public: class GGS_lexicalExplicitTokenListMapMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalExplicitTokenListMapMap (const DownEnumerator_lexicalExplicitTokenListMapMap &) = delete ;
  private: DownEnumerator_lexicalExplicitTokenListMapMap & operator = (const DownEnumerator_lexicalExplicitTokenListMapMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalExplicitTokenListMapMap final {
  public: UpEnumerator_lexicalExplicitTokenListMapMap (const class GGS_lexicalExplicitTokenListMapMap & inMap)  ;

  public: ~ UpEnumerator_lexicalExplicitTokenListMapMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lexicalExplicitTokenListMap current_mExplicitTokenListMap (LOCATION_ARGS) const ;
  public: class GGS_tokenSortedlist current_mTokenSortedList (LOCATION_ARGS) const ;
  public: class GGS_bool current_mShouldBeGenerated (LOCATION_ARGS) const ;
  public: class GGS_lexicalExplicitTokenListMapMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalExplicitTokenListMapMap (const UpEnumerator_lexicalExplicitTokenListMapMap &) = delete ;
  private: UpEnumerator_lexicalExplicitTokenListMapMap & operator = (const UpEnumerator_lexicalExplicitTokenListMapMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_lexicalExplicitTokenListMapMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_lexicalExplicitTokenListMapMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_lexicalExplicitTokenListMapMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_lexicalExplicitTokenListMapMap (void) ;

//--- Handle copy
  public: GGS_lexicalExplicitTokenListMapMap (const GGS_lexicalExplicitTokenListMapMap & inSource) ;
  public: GGS_lexicalExplicitTokenListMapMap & operator = (const GGS_lexicalExplicitTokenListMapMap & inSource) ;

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
  protected: void performInsert (const class GGS_lexicalExplicitTokenListMapMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMapMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalExplicitTokenListMapMap init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalExplicitTokenListMapMap class_func_mapWithMapToOverride (const class GGS_lexicalExplicitTokenListMapMap & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lexicalExplicitTokenListMap constinArgument1,
                                 class GGS_tokenSortedlist constinArgument2,
                                 class GGS_bool constinArgument3,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMExplicitTokenListMapForKey (class GGS_lexicalExplicitTokenListMap constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMShouldBeGeneratedForKey (class GGS_bool constinArgument0,
                                                   class GGS_string constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public: void setter_setMTokenSortedListForKey (class GGS_tokenSortedlist constinArgument0,
                                                 class GGS_string constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_lexicalExplicitTokenListMap & outArgument1,
                                 class GGS_tokenSortedlist & outArgument2,
                                 class GGS_bool & outArgument3,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalExplicitTokenListMap getter_mExplicitTokenListMapForKey (const class GGS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mShouldBeGeneratedForKey (const class GGS_string & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_tokenSortedlist getter_mTokenSortedListForKey (const class GGS_string & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalExplicitTokenListMapMap getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalExplicitTokenListMapMap ;
  friend class DownEnumerator_lexicalExplicitTokenListMapMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFunctionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalFunctionMap final {

  public: DownEnumerator_lexicalFunctionMap (const class GGS_lexicalFunctionMap & inMap) ;

  public: ~ DownEnumerator_lexicalFunctionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalFunctionFormalArgumentAST_5D_ current_mLexicalTypeList (LOCATION_ARGS) const ;

  public: class GGS_lexicalTypeEnum current_mReturnedLexicalType (LOCATION_ARGS) const ;

  public: class GGS_string current_mReplacementFunctionName (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsExtern (LOCATION_ARGS) const ;

  public: class GGS_lexicalFunctionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalFunctionMap (const DownEnumerator_lexicalFunctionMap &) = delete ;
  private: DownEnumerator_lexicalFunctionMap & operator = (const DownEnumerator_lexicalFunctionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalFunctionMap final {
  public: UpEnumerator_lexicalFunctionMap (const class GGS_lexicalFunctionMap & inMap)  ;

  public: ~ UpEnumerator_lexicalFunctionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS__5B_lexicalFunctionFormalArgumentAST_5D_ current_mLexicalTypeList (LOCATION_ARGS) const ;
  public: class GGS_lexicalTypeEnum current_mReturnedLexicalType (LOCATION_ARGS) const ;
  public: class GGS_string current_mReplacementFunctionName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsExtern (LOCATION_ARGS) const ;
  public: class GGS_lexicalFunctionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalFunctionMap (const UpEnumerator_lexicalFunctionMap &) = delete ;
  private: UpEnumerator_lexicalFunctionMap & operator = (const UpEnumerator_lexicalFunctionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_lexicalFunctionMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_lexicalFunctionMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_lexicalFunctionMap (void) ;

//--- Handle copy
  public: GGS_lexicalFunctionMap (const GGS_lexicalFunctionMap & inSource) ;
  public: GGS_lexicalFunctionMap & operator = (const GGS_lexicalFunctionMap & inSource) ;

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
  protected: void performInsert (const class GGS_lexicalFunctionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalFunctionMap init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalFunctionMap class_func_mapWithMapToOverride (const class GGS_lexicalFunctionMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_lexicalFunctionFormalArgumentAST_5D_ constinArgument1,
                                 class GGS_lexicalTypeEnum constinArgument2,
                                 class GGS_string constinArgument3,
                                 class GGS_bool constinArgument4,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsExternForKey (class GGS_bool constinArgument0,
                                          class GGS_string constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexicalTypeListForKey (class GGS__5B_lexicalFunctionFormalArgumentAST_5D_ constinArgument0,
                                                 class GGS_string constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMReplacementFunctionNameForKey (class GGS_string constinArgument0,
                                                         class GGS_string constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMReturnedLexicalTypeForKey (class GGS_lexicalTypeEnum constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_lexicalFunctionFormalArgumentAST_5D_ & outArgument1,
                                 class GGS_lexicalTypeEnum & outArgument2,
                                 class GGS_string & outArgument3,
                                 class GGS_bool & outArgument4,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsExternForKey (const class GGS_string & constinOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalFunctionFormalArgumentAST_5D_ getter_mLexicalTypeListForKey (const class GGS_string & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mReplacementFunctionNameForKey (const class GGS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalTypeEnum getter_mReturnedLexicalTypeForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalFunctionMap getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_lexicalFunctionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalFunctionMap ;
  friend class DownEnumerator_lexicalFunctionMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalMessageMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalMessageMap final {

  public: DownEnumerator_lexicalMessageMap (const class GGS_lexicalMessageMap & inMap) ;

  public: ~ DownEnumerator_lexicalMessageMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mLexicalMessage (LOCATION_ARGS) const ;

  public: class GGS_bool current_mMessageIsUsed (LOCATION_ARGS) const ;

  public: class GGS_lexicalMessageMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalMessageMap (const DownEnumerator_lexicalMessageMap &) = delete ;
  private: DownEnumerator_lexicalMessageMap & operator = (const DownEnumerator_lexicalMessageMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalMessageMap final {
  public: UpEnumerator_lexicalMessageMap (const class GGS_lexicalMessageMap & inMap)  ;

  public: ~ UpEnumerator_lexicalMessageMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mLexicalMessage (LOCATION_ARGS) const ;
  public: class GGS_bool current_mMessageIsUsed (LOCATION_ARGS) const ;
  public: class GGS_lexicalMessageMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalMessageMap (const UpEnumerator_lexicalMessageMap &) = delete ;
  private: UpEnumerator_lexicalMessageMap & operator = (const UpEnumerator_lexicalMessageMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_lexicalMessageMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_lexicalMessageMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_lexicalMessageMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_lexicalMessageMap (void) ;

//--- Handle copy
  public: GGS_lexicalMessageMap (const GGS_lexicalMessageMap & inSource) ;
  public: GGS_lexicalMessageMap & operator = (const GGS_lexicalMessageMap & inSource) ;

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
  protected: void performInsert (const class GGS_lexicalMessageMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalMessageMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalMessageMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalMessageMap class_func_mapWithMapToOverride (const class GGS_lexicalMessageMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring constinArgument1,
                                 class GGS_bool constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_replaceKey (class GGS_lexicalMessageMap_2E_element constinArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexicalMessageForKey (class GGS_lstring constinArgument0,
                                                class GGS_string constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMMessageIsUsedForKey (class GGS_bool constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring & outArgument1,
                                 class GGS_bool & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mLexicalMessageForKey (const class GGS_string & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mMessageIsUsedForKey (const class GGS_string & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalMessageMap getter_overriddenMap (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_lexicalMessageMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalMessageMap_2E_element readSubscript__3F_searchKey (const class GGS_lstring & in0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalMessageMap ;
  friend class DownEnumerator_lexicalMessageMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalMessageMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRoutineMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalRoutineMap final {

  public: DownEnumerator_lexicalRoutineMap (const class GGS_lexicalRoutineMap & inMap) ;

  public: ~ DownEnumerator_lexicalRoutineMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalRoutineFormalArgumentAST_5D_ current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const ;

  public: class GGS__5B_string_5D_ current_mErrorMessageList (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsExtern (LOCATION_ARGS) const ;

  public: class GGS_lexicalRoutineMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalRoutineMap (const DownEnumerator_lexicalRoutineMap &) = delete ;
  private: DownEnumerator_lexicalRoutineMap & operator = (const DownEnumerator_lexicalRoutineMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalRoutineMap final {
  public: UpEnumerator_lexicalRoutineMap (const class GGS_lexicalRoutineMap & inMap)  ;

  public: ~ UpEnumerator_lexicalRoutineMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS__5B_lexicalRoutineFormalArgumentAST_5D_ current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const ;
  public: class GGS__5B_string_5D_ current_mErrorMessageList (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsExtern (LOCATION_ARGS) const ;
  public: class GGS_lexicalRoutineMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalRoutineMap (const UpEnumerator_lexicalRoutineMap &) = delete ;
  private: UpEnumerator_lexicalRoutineMap & operator = (const UpEnumerator_lexicalRoutineMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_lexicalRoutineMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_lexicalRoutineMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_lexicalRoutineMap (void) ;

//--- Handle copy
  public: GGS_lexicalRoutineMap (const GGS_lexicalRoutineMap & inSource) ;
  public: GGS_lexicalRoutineMap & operator = (const GGS_lexicalRoutineMap & inSource) ;

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
  protected: void performInsert (const class GGS_lexicalRoutineMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalRoutineMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalRoutineMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalRoutineMap class_func_mapWithMapToOverride (const class GGS_lexicalRoutineMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_lexicalRoutineFormalArgumentAST_5D_ constinArgument1,
                                 class GGS__5B_string_5D_ constinArgument2,
                                 class GGS_bool constinArgument3,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMErrorMessageListForKey (class GGS__5B_string_5D_ constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsExternForKey (class GGS_bool constinArgument0,
                                          class GGS_string constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexicalRoutineFormalArgumentListForKey (class GGS__5B_lexicalRoutineFormalArgumentAST_5D_ constinArgument0,
                                                                  class GGS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_lexicalRoutineFormalArgumentAST_5D_ & outArgument1,
                                 class GGS__5B_string_5D_ & outArgument2,
                                 class GGS_bool & outArgument3,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_string_5D_ getter_mErrorMessageListForKey (const class GGS_string & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsExternForKey (const class GGS_string & constinOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalRoutineFormalArgumentAST_5D_ getter_mLexicalRoutineFormalArgumentListForKey (const class GGS_string & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalRoutineMap getter_overriddenMap (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_lexicalRoutineMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalRoutineMap ;
  friend class DownEnumerator_lexicalRoutineMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @styleMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_styleMap final {

  public: DownEnumerator_styleMap (const class GGS_styleMap & inMap) ;

  public: ~ DownEnumerator_styleMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mComment (LOCATION_ARGS) const ;

  public: class GGS_uint current_mStyleIndex (LOCATION_ARGS) const ;

  public: class GGS_styleMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_styleMap (const DownEnumerator_styleMap &) = delete ;
  private: DownEnumerator_styleMap & operator = (const DownEnumerator_styleMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_styleMap final {
  public: UpEnumerator_styleMap (const class GGS_styleMap & inMap)  ;

  public: ~ UpEnumerator_styleMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mComment (LOCATION_ARGS) const ;
  public: class GGS_uint current_mStyleIndex (LOCATION_ARGS) const ;
  public: class GGS_styleMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_styleMap (const UpEnumerator_styleMap &) = delete ;
  private: UpEnumerator_styleMap & operator = (const UpEnumerator_styleMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_styleMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_styleMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_styleMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_styleMap (void) ;

//--- Handle copy
  public: GGS_styleMap (const GGS_styleMap & inSource) ;
  public: GGS_styleMap & operator = (const GGS_styleMap & inSource) ;

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
  protected: void performInsert (const class GGS_styleMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_styleMap init (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_styleMap class_func_mapWithMapToOverride (const class GGS_styleMap & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring constinArgument1,
                                 class GGS_uint constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMCommentForKey (class GGS_lstring constinArgument0,
                                         class GGS_string constinArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMStyleIndexForKey (class GGS_uint constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring & outArgument1,
                                 class GGS_uint & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mCommentForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mStyleIndexForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_styleMap getter_overriddenMap (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_styleMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_styleMap ;
  friend class DownEnumerator_styleMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_styleMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_terminalMap final {

  public: DownEnumerator_terminalMap (const class GGS_terminalMap & inMap) ;

  public: ~ DownEnumerator_terminalMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lexicalSentValueList current_mSentAttributeList (LOCATION_ARGS) const ;

  public: class GGS_terminalMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_terminalMap (const DownEnumerator_terminalMap &) = delete ;
  private: DownEnumerator_terminalMap & operator = (const DownEnumerator_terminalMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_terminalMap final {
  public: UpEnumerator_terminalMap (const class GGS_terminalMap & inMap)  ;

  public: ~ UpEnumerator_terminalMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lexicalSentValueList current_mSentAttributeList (LOCATION_ARGS) const ;
  public: class GGS_terminalMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_terminalMap (const UpEnumerator_terminalMap &) = delete ;
  private: UpEnumerator_terminalMap & operator = (const UpEnumerator_terminalMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_terminalMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_terminalMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_terminalMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_terminalMap (void) ;

//--- Handle copy
  public: GGS_terminalMap (const GGS_terminalMap & inSource) ;
  public: GGS_terminalMap & operator = (const GGS_terminalMap & inSource) ;

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
  protected: void performInsert (const class GGS_terminalMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalMap init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_terminalMap class_func_mapWithMapToOverride (const class GGS_terminalMap & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lexicalSentValueList constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMSentAttributeListForKey (class GGS_lexicalSentValueList constinArgument0,
                                                   class GGS_string constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_lexicalSentValueList & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalSentValueList getter_mSentAttributeListForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_terminalMap getter_overriddenMap (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_terminalMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_terminalMap ;
  friend class DownEnumerator_terminalMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexiqueAnalysisContext struct
//--------------------------------------------------------------------------------------------------

class GGS_lexiqueAnalysisContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mLexiqueName ;
  public: inline GGS_string readProperty_mLexiqueName (void) const {
    return mProperty_mLexiqueName ;
  }

  public: GGS_lexicalRoutineMap mProperty_mLexicalRoutineMessageMap ;
  public: inline GGS_lexicalRoutineMap readProperty_mLexicalRoutineMessageMap (void) const {
    return mProperty_mLexicalRoutineMessageMap ;
  }

  public: GGS_lexicalFunctionMap mProperty_mLexicalFunctionMap ;
  public: inline GGS_lexicalFunctionMap readProperty_mLexicalFunctionMap (void) const {
    return mProperty_mLexicalFunctionMap ;
  }

  public: GGS_lexicalMessageMap mProperty_mLexicalMessageMap ;
  public: inline GGS_lexicalMessageMap readProperty_mLexicalMessageMap (void) const {
    return mProperty_mLexicalMessageMap ;
  }

  public: GGS_terminalMap mProperty_mTerminalMap ;
  public: inline GGS_terminalMap readProperty_mTerminalMap (void) const {
    return mProperty_mTerminalMap ;
  }

  public: GGS__5B_terminalAST_5D_ mProperty_mTerminalList ;
  public: inline GGS__5B_terminalAST_5D_ readProperty_mTerminalList (void) const {
    return mProperty_mTerminalList ;
  }

  public: GGS_lexicalAttributeMap mProperty_mLexicalAttributeMap ;
  public: inline GGS_lexicalAttributeMap readProperty_mLexicalAttributeMap (void) const {
    return mProperty_mLexicalAttributeMap ;
  }

  public: GGS_lexicalExplicitTokenListMapMap mProperty_mLexicalTokenListMap ;
  public: inline GGS_lexicalExplicitTokenListMapMap readProperty_mLexicalTokenListMap (void) const {
    return mProperty_mLexicalTokenListMap ;
  }

  public: GGS_stringset mProperty_mUnicodeStringToGenerate ;
  public: inline GGS_stringset readProperty_mUnicodeStringToGenerate (void) const {
    return mProperty_mUnicodeStringToGenerate ;
  }

  public: GGS__5B_templateDelimitorAST_5D_ mProperty_mTemplateDelimitorList ;
  public: inline GGS__5B_templateDelimitorAST_5D_ readProperty_mTemplateDelimitorList (void) const {
    return mProperty_mTemplateDelimitorList ;
  }

  public: GGS_styleMap mProperty_mStyleMap ;
  public: inline GGS_styleMap readProperty_mStyleMap (void) const {
    return mProperty_mStyleMap ;
  }

  public: GGS_stringset mProperty_mUnicodeTestFunctions ;
  public: inline GGS_stringset readProperty_mUnicodeTestFunctions (void) const {
    return mProperty_mUnicodeTestFunctions ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexiqueAnalysisContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexiqueName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexiqueName = inValue ;
  }

  public: inline void setter_setMLexicalRoutineMessageMap (const GGS_lexicalRoutineMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalRoutineMessageMap = inValue ;
  }

  public: inline void setter_setMLexicalFunctionMap (const GGS_lexicalFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalFunctionMap = inValue ;
  }

  public: inline void setter_setMLexicalMessageMap (const GGS_lexicalMessageMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalMessageMap = inValue ;
  }

  public: inline void setter_setMTerminalMap (const GGS_terminalMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalMap = inValue ;
  }

  public: inline void setter_setMTerminalList (const GGS__5B_terminalAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalList = inValue ;
  }

  public: inline void setter_setMLexicalAttributeMap (const GGS_lexicalAttributeMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalAttributeMap = inValue ;
  }

  public: inline void setter_setMLexicalTokenListMap (const GGS_lexicalExplicitTokenListMapMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalTokenListMap = inValue ;
  }

  public: inline void setter_setMUnicodeStringToGenerate (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnicodeStringToGenerate = inValue ;
  }

  public: inline void setter_setMTemplateDelimitorList (const GGS__5B_templateDelimitorAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTemplateDelimitorList = inValue ;
  }

  public: inline void setter_setMStyleMap (const GGS_styleMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStyleMap = inValue ;
  }

  public: inline void setter_setMUnicodeTestFunctions (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnicodeTestFunctions = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexiqueAnalysisContext (const GGS_string & in_mLexiqueName,
                                      const GGS_lexicalRoutineMap & in_mLexicalRoutineMessageMap,
                                      const GGS_lexicalFunctionMap & in_mLexicalFunctionMap,
                                      const GGS_lexicalMessageMap & in_mLexicalMessageMap,
                                      const GGS_terminalMap & in_mTerminalMap,
                                      const GGS__5B_terminalAST_5D_ & in_mTerminalList,
                                      const GGS_lexicalAttributeMap & in_mLexicalAttributeMap,
                                      const GGS_lexicalExplicitTokenListMapMap & in_mLexicalTokenListMap,
                                      const GGS_stringset & in_mUnicodeStringToGenerate,
                                      const GGS__5B_templateDelimitorAST_5D_ & in_mTemplateDelimitorList,
                                      const GGS_styleMap & in_mStyleMap,
                                      const GGS_stringset & in_mUnicodeTestFunctions) ;

//--------------------------------- Copy constructor
  public: GGS_lexiqueAnalysisContext (const GGS_lexiqueAnalysisContext & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexiqueAnalysisContext & operator = (const GGS_lexiqueAnalysisContext & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexiqueAnalysisContext init_21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                  const class GGS_lexicalRoutineMap & inOperand1,
                                                                                                  const class GGS_lexicalFunctionMap & inOperand2,
                                                                                                  const class GGS_lexicalMessageMap & inOperand3,
                                                                                                  const class GGS_terminalMap & inOperand4,
                                                                                                  const class GGS__5B_terminalAST_5D_ & inOperand5,
                                                                                                  const class GGS_lexicalAttributeMap & inOperand6,
                                                                                                  const class GGS_lexicalExplicitTokenListMapMap & inOperand7,
                                                                                                  const class GGS_stringset & inOperand8,
                                                                                                  const class GGS__5B_templateDelimitorAST_5D_ & inOperand9,
                                                                                                  const class GGS_styleMap & inOperand10,
                                                                                                  const class GGS_stringset & inOperand11,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueAnalysisContext ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@lexicalInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalInstruction (class cPtr_lexicalInstructionAST * inObject,
                                                  class GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                  class GGS_lexicalTagMap & io__5F_ioTagMap,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalTagMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalTagMap final {

  public: DownEnumerator_lexicalTagMap (const class GGS_lexicalTagMap & inMap) ;

  public: ~ DownEnumerator_lexicalTagMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lexicalTagMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalTagMap (const DownEnumerator_lexicalTagMap &) = delete ;
  private: DownEnumerator_lexicalTagMap & operator = (const DownEnumerator_lexicalTagMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalTagMap final {
  public: UpEnumerator_lexicalTagMap (const class GGS_lexicalTagMap & inMap)  ;

  public: ~ UpEnumerator_lexicalTagMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lexicalTagMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalTagMap (const UpEnumerator_lexicalTagMap &) = delete ;
  private: UpEnumerator_lexicalTagMap & operator = (const UpEnumerator_lexicalTagMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_lexicalTagMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_lexicalTagMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_lexicalTagMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_lexicalTagMap (void) ;

//--- Handle copy
  public: GGS_lexicalTagMap (const GGS_lexicalTagMap & inSource) ;
  public: GGS_lexicalTagMap & operator = (const GGS_lexicalTagMap & inSource) ;

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
  protected: void performInsert (const class GGS_lexicalTagMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalTagMap init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalTagMap class_func_mapWithMapToOverride (const class GGS_lexicalTagMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalTagMap getter_overriddenMap (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_lexicalTagMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalTagMap ;
  friend class DownEnumerator_lexicalTagMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTagMap ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractLexicalRuleAST checkLexicalRule'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRule (class cPtr_abstractLexicalRuleAST * inObject,
                                           class GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

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

//--------------------------------------------------------------------------------------------------
// Phase 1: @constantIndexMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_constantIndexMap final {

  public: DownEnumerator_constantIndexMap (const class GGS_constantIndexMap & inMap) ;

  public: ~ DownEnumerator_constantIndexMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;

  public: class GGS_associatedValueDescriptorList current_mAssociatedTypeList (LOCATION_ARGS) const ;

  public: class GGS_constantIndexMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantIndexMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_constantIndexMap (const DownEnumerator_constantIndexMap &) = delete ;
  private: DownEnumerator_constantIndexMap & operator = (const DownEnumerator_constantIndexMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_constantIndexMap final {
  public: UpEnumerator_constantIndexMap (const class GGS_constantIndexMap & inMap)  ;

  public: ~ UpEnumerator_constantIndexMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_associatedValueDescriptorList current_mAssociatedTypeList (LOCATION_ARGS) const ;
  public: class GGS_constantIndexMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantIndexMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_constantIndexMap (const UpEnumerator_constantIndexMap &) = delete ;
  private: UpEnumerator_constantIndexMap & operator = (const UpEnumerator_constantIndexMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_constantIndexMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_constantIndexMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_constantIndexMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_constantIndexMap (void) ;

//--- Handle copy
  public: GGS_constantIndexMap (const GGS_constantIndexMap & inSource) ;
  public: GGS_constantIndexMap & operator = (const GGS_constantIndexMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Compare
  public: ComparisonResult objectCompare (const GGS_constantIndexMap & inOperand) const ;



//--- performInsert
  protected: void performInsert (const class GGS_constantIndexMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_constantIndexMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantIndexMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constantIndexMap init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_constantIndexMap class_func_mapWithMapToOverride (const class GGS_constantIndexMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 class GGS_associatedValueDescriptorList constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMAssociatedTypeListForKey (class GGS_associatedValueDescriptorList constinArgument0,
                                                    class GGS_string constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMIndexForKey (class GGS_uint constinArgument0,
                                       class GGS_string constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 class GGS_associatedValueDescriptorList & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_associatedValueDescriptorList getter_mAssociatedTypeListForKey (const class GGS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mIndexForKey (const class GGS_string & constinOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_constantIndexMap getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_constantIndexMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_constantIndexMap ;
  friend class DownEnumerator_constantIndexMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantIndexMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKindEnum_2E_enumType struct
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum_2E_enumType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_constantIndexMap mProperty_constantMap ;
  public: inline GGS_constantIndexMap readProperty_constantMap (void) const {
    return mProperty_constantMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKindEnum_2E_enumType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setConstantMap (const GGS_constantIndexMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_constantMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKindEnum_2E_enumType (const GGS_constantIndexMap & in_constantMap) ;

//--------------------------------- Copy constructor
  public: GGS_typeKindEnum_2E_enumType (const GGS_typeKindEnum_2E_enumType & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKindEnum_2E_enumType & operator = (const GGS_typeKindEnum_2E_enumType & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKindEnum_2E_enumType init_21_ (const class GGS_constantIndexMap & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKindEnum_2E_enumType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_enumType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeKindEnum.enumType? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum_2E_enumType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKindEnum_2E_enumType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKindEnum_2E_enumType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKindEnum_2E_enumType_3F_ (const GGS_typeKindEnum_2E_enumType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKindEnum_2E_enumType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeKindEnum_2E_enumType unwrappedValue (void) const {
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKindEnum_2E_enumType_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_enumType_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum AccessControl
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_AccessControl (void) ;

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
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_protectedAccess (class GGS_unifiedTypeMapEntry & out_declaringType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_protectedSetAccess (class GGS_unifiedTypeMapEntry & out_declaringType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_privateAccess (class GGS_unifiedTypeMapEntry & out_declaringType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_privateSetAccess (class GGS_unifiedTypeMapEntry & out_declaringType) const ;
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
//--------------------------------- GALGAS class functions
  public: static class GGS_AccessControl class_func_fileprivateAccess (const class GGS_location & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControl class_func_fileprivateSetAccess (const class GGS_location & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControl class_func_privateAccess (const class GGS_unifiedTypeMapEntry & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControl class_func_privateSetAccess (const class GGS_unifiedTypeMapEntry & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControl class_func_protectedAccess (const class GGS_unifiedTypeMapEntry & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControl class_func_protectedSetAccess (const class GGS_unifiedTypeMapEntry & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControl class_func_publicAccess (LOCATION_ARGS) ;

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

  public: void method_extractPrivateAccess (class GGS_unifiedTypeMapEntry & outArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;

  public: void method_extractPrivateSetAccess (class GGS_unifiedTypeMapEntry & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: void method_extractProtectedAccess (class GGS_unifiedTypeMapEntry & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: void method_extractProtectedSetAccess (class GGS_unifiedTypeMapEntry & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_AccessControl_2E_fileprivateAccess_3F_ getter_getFileprivateAccess (LOCATION_ARGS) const ;

  public: class GGS_AccessControl_2E_fileprivateSetAccess_3F_ getter_getFileprivateSetAccess (LOCATION_ARGS) const ;

  public: class GGS_AccessControl_2E_privateAccess_3F_ getter_getPrivateAccess (LOCATION_ARGS) const ;

  public: class GGS_AccessControl_2E_privateSetAccess_3F_ getter_getPrivateSetAccess (LOCATION_ARGS) const ;

  public: class GGS_AccessControl_2E_protectedAccess_3F_ getter_getProtectedAccess (LOCATION_ARGS) const ;

  public: class GGS_AccessControl_2E_protectedSetAccess_3F_ getter_getProtectedSetAccess (LOCATION_ARGS) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_AccessControl mProperty_mAccessControl ;
  public: inline GGS_AccessControl readProperty_mAccessControl (void) const {
    return mProperty_mAccessControl ;
  }

  public: GGS_bool mProperty_mIsConstant ;
  public: inline GGS_bool readProperty_mIsConstant (void) const {
    return mProperty_mIsConstant ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mPropertyType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mPropertyType (void) const {
    return mProperty_mPropertyType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAccessControl (const GGS_AccessControl & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccessControl = inValue ;
  }

  public: inline void setter_setMIsConstant (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsConstant = inValue ;
  }

  public: inline void setter_setMPropertyType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyMap_2E_element (const GGS_lstring & in_lkey,
                                      const GGS_AccessControl & in_mAccessControl,
                                      const GGS_bool & in_mIsConstant,
                                      const GGS_unifiedTypeMapEntry & in_mPropertyType) ;

//--------------------------------- Copy constructor
  public: GGS_propertyMap_2E_element (const GGS_propertyMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyMap_2E_element & operator = (const GGS_propertyMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_AccessControl & inOperand1,
                                                                  const class GGS_bool & inOperand2,
                                                                  const class GGS_unifiedTypeMapEntry & inOperand3,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyMap_2E_element_3F_ (const GGS_propertyMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyMap_2E_element unwrappedValue (void) const {
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @initializerMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_initializerMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_functionSignature mProperty_mArgumentTypeList ;
  public: inline GGS_functionSignature readProperty_mArgumentTypeList (void) const {
    return mProperty_mArgumentTypeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_initializerMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMArgumentTypeList (const GGS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentTypeList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_initializerMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_functionSignature & in_mArgumentTypeList) ;

//--------------------------------- Copy constructor
  public: GGS_initializerMap_2E_element (const GGS_initializerMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_initializerMap_2E_element & operator = (const GGS_initializerMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_initializerMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_functionSignature & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: initializerMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_initializerMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_initializerMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_initializerMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_initializerMap_2E_element_3F_ (const GGS_initializerMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_initializerMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_initializerMap_2E_element unwrappedValue (void) const {
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classFunctionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_classFunctionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_functionSignature mProperty_mArgumentTypeList ;
  public: inline GGS_functionSignature readProperty_mArgumentTypeList (void) const {
    return mProperty_mArgumentTypeList ;
  }

  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: inline GGS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mReturnedType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mReturnedType (void) const {
    return mProperty_mReturnedType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_classFunctionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMArgumentTypeList (const GGS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentTypeList = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMReturnedType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_classFunctionMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_functionSignature & in_mArgumentTypeList,
                                           const GGS_bool & in_mHasCompilerArgument,
                                           const GGS_unifiedTypeMapEntry & in_mReturnedType) ;

//--------------------------------- Copy constructor
  public: GGS_classFunctionMap_2E_element (const GGS_classFunctionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_classFunctionMap_2E_element & operator = (const GGS_classFunctionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classFunctionMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_functionSignature & inOperand1,
                                                                       const class GGS_bool & inOperand2,
                                                                       const class GGS_unifiedTypeMapEntry & inOperand3,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFunctionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: classFunctionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_classFunctionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_classFunctionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_classFunctionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_classFunctionMap_2E_element_3F_ (const GGS_classFunctionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_classFunctionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_classFunctionMap_2E_element unwrappedValue (void) const {
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFunctionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum methodQualifier
//--------------------------------------------------------------------------------------------------

class GGS_methodQualifier : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_methodQualifier (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_isVirtual,
    enum_isVirtualAbstract,
    enum_isBasic,
    enum_isBasicFinal,
    enum_isInherited,
    enum_isVirtualOverriding,
    enum_isVirtualOverridingAbstract
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
  public: static class GGS_methodQualifier class_func_isBasic (LOCATION_ARGS) ;

  public: static class GGS_methodQualifier class_func_isBasicFinal (LOCATION_ARGS) ;

  public: static class GGS_methodQualifier class_func_isInherited (LOCATION_ARGS) ;

  public: static class GGS_methodQualifier class_func_isVirtual (LOCATION_ARGS) ;

  public: static class GGS_methodQualifier class_func_isVirtualAbstract (LOCATION_ARGS) ;

  public: static class GGS_methodQualifier class_func_isVirtualOverriding (LOCATION_ARGS) ;

  public: static class GGS_methodQualifier class_func_isVirtualOverridingAbstract (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_methodQualifier & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isIsBasic (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIsBasicFinal (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIsInherited (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIsVirtual (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIsVirtualAbstract (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIsVirtualOverriding (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIsVirtualOverridingAbstract (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodQualifier ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @getterMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_getterMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_methodKind mProperty_mKind ;
  public: inline GGS_methodKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GGS_functionSignature mProperty_mArgumentTypeList ;
  public: inline GGS_functionSignature readProperty_mArgumentTypeList (void) const {
    return mProperty_mArgumentTypeList ;
  }

  public: GGS_location mProperty_mDeclarationLocation ;
  public: inline GGS_location readProperty_mDeclarationLocation (void) const {
    return mProperty_mDeclarationLocation ;
  }

  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: inline GGS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mReturnedType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mReturnedType (void) const {
    return mProperty_mReturnedType ;
  }

  public: GGS_methodQualifier mProperty_mQualifier ;
  public: inline GGS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

  public: GGS_string mProperty_mGetterNameThatObsoletesInvokationName ;
  public: inline GGS_string readProperty_mGetterNameThatObsoletesInvokationName (void) const {
    return mProperty_mGetterNameThatObsoletesInvokationName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_getterMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMKind (const GGS_methodKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMArgumentTypeList (const GGS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentTypeList = inValue ;
  }

  public: inline void setter_setMDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationLocation = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMReturnedType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedType = inValue ;
  }

  public: inline void setter_setMQualifier (const GGS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

  public: inline void setter_setMGetterNameThatObsoletesInvokationName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGetterNameThatObsoletesInvokationName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_getterMap_2E_element (const GGS_lstring & in_lkey,
                                    const GGS_methodKind & in_mKind,
                                    const GGS_functionSignature & in_mArgumentTypeList,
                                    const GGS_location & in_mDeclarationLocation,
                                    const GGS_bool & in_mHasCompilerArgument,
                                    const GGS_unifiedTypeMapEntry & in_mReturnedType,
                                    const GGS_methodQualifier & in_mQualifier,
                                    const GGS_string & in_mGetterNameThatObsoletesInvokationName) ;

//--------------------------------- Copy constructor
  public: GGS_getterMap_2E_element (const GGS_getterMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_getterMap_2E_element & operator = (const GGS_getterMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_getterMap_2E_element init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_methodKind & inOperand1,
                                                                                const class GGS_functionSignature & inOperand2,
                                                                                const class GGS_location & inOperand3,
                                                                                const class GGS_bool & inOperand4,
                                                                                const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                                const class GGS_methodQualifier & inOperand6,
                                                                                const class GGS_string & inOperand7,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getterMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: getterMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_getterMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_getterMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_getterMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_getterMap_2E_element_3F_ (const GGS_getterMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_getterMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_getterMap_2E_element unwrappedValue (void) const {
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getterMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formalParameterSignature list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_formalParameterSignature final {
  public: DownEnumerator_formalParameterSignature (const class GGS_formalParameterSignature & inList) ;

  public: ~ DownEnumerator_formalParameterSignature (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GGS_formalArgumentPassingModeAST current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public: class GGS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_formalParameterSignature_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_formalParameterSignature_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_formalParameterSignature (const DownEnumerator_formalParameterSignature &) = delete ;
  private: DownEnumerator_formalParameterSignature & operator = (const DownEnumerator_formalParameterSignature &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_formalParameterSignature final {
  public: UpEnumerator_formalParameterSignature (const class GGS_formalParameterSignature & inList)  ;

  public: ~ UpEnumerator_formalParameterSignature (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GGS_formalArgumentPassingModeAST current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public: class GGS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_formalParameterSignature_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_formalParameterSignature_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_formalParameterSignature (const UpEnumerator_formalParameterSignature &) = delete ;
  private: UpEnumerator_formalParameterSignature & operator = (const UpEnumerator_formalParameterSignature &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @formalParameterSignature list
//--------------------------------------------------------------------------------------------------

class GGS_formalParameterSignature : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_formalParameterSignature_2E_element> mArray ;

//--- Default constructor
  public: GGS_formalParameterSignature (void) ;

//--- Destructor
  public: virtual ~ GGS_formalParameterSignature (void) = default ;

//--- Copy
  public: GGS_formalParameterSignature (const GGS_formalParameterSignature &) = default ;
  public: GGS_formalParameterSignature & operator = (const GGS_formalParameterSignature &) = default ;

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
  public : inline GenericArray <GGS_formalParameterSignature_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_formalParameterSignature subList (const int32_t inStart,
                                                 const int32_t inLength,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_formalParameterSignature (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mFormalSelector,
                                                 const class GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                 const class GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                 const class GGS_string & in_mFormalArgumentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formalParameterSignature init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_formalParameterSignature class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                              const class GGS_formalArgumentPassingModeAST & inOperand2,
                                                                              const class GGS_string & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_formalParameterSignature inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_unifiedTypeMapEntry & inOperand1,
                                   const class GGS_formalArgumentPassingModeAST & inOperand2,
                                   const class GGS_string & inOperand3
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_formalParameterSignature_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_formalParameterSignature add_operation (const GGS_formalParameterSignature & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_unifiedTypeMapEntry constinArgument1,
                              class GGS_formalArgumentPassingModeAST constinArgument2,
                              class GGS_string constinArgument3,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_unifiedTypeMapEntry constinArgument1,
                                     class GGS_formalArgumentPassingModeAST constinArgument2,
                                     class GGS_string constinArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_unifiedTypeMapEntry & outArgument1,
                                class GGS_formalArgumentPassingModeAST & outArgument2,
                                class GGS_string & outArgument3,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_unifiedTypeMapEntry & outArgument1,
                               class GGS_formalArgumentPassingModeAST & outArgument2,
                               class GGS_string & outArgument3,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_unifiedTypeMapEntry & outArgument1,
                                     class GGS_formalArgumentPassingModeAST & outArgument2,
                                     class GGS_string & outArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalArgumentNameAtIndex (class GGS_string constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalArgumentPassingModeAtIndex (class GGS_formalArgumentPassingModeAST constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalArgumentTypeAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalSelectorAtIndex (class GGS_lstring constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_unifiedTypeMapEntry & outArgument1,
                             class GGS_formalArgumentPassingModeAST & outArgument2,
                             class GGS_string & outArgument3,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_unifiedTypeMapEntry & outArgument1,
                            class GGS_formalArgumentPassingModeAST & outArgument2,
                            class GGS_string & outArgument3,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mFormalArgumentNameAtIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_formalArgumentPassingModeAST getter_mFormalArgumentPassingModeAtIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry getter_mFormalArgumentTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFormalSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_formalParameterSignature getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_formalParameterSignature getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_formalParameterSignature getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_formalParameterSignature ;
  friend class DownEnumerator_formalParameterSignature ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalParameterSignature ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @setterMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_setterMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_methodKind mProperty_mKind ;
  public: inline GGS_methodKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GGS_formalParameterSignature mProperty_mParameterList ;
  public: inline GGS_formalParameterSignature readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: inline GGS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GGS_methodQualifier mProperty_mQualifier ;
  public: inline GGS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

  public: GGS_string mProperty_mErrorMessage ;
  public: inline GGS_string readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_setterMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMKind (const GGS_methodKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMParameterList (const GGS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMQualifier (const GGS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_setterMap_2E_element (const GGS_lstring & in_lkey,
                                    const GGS_methodKind & in_mKind,
                                    const GGS_formalParameterSignature & in_mParameterList,
                                    const GGS_bool & in_mHasCompilerArgument,
                                    const GGS_methodQualifier & in_mQualifier,
                                    const GGS_string & in_mErrorMessage) ;

//--------------------------------- Copy constructor
  public: GGS_setterMap_2E_element (const GGS_setterMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_setterMap_2E_element & operator = (const GGS_setterMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_setterMap_2E_element init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_methodKind & inOperand1,
                                                                        const class GGS_formalParameterSignature & inOperand2,
                                                                        const class GGS_bool & inOperand3,
                                                                        const class GGS_methodQualifier & inOperand4,
                                                                        const class GGS_string & inOperand5,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_setterMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: setterMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_setterMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_setterMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_setterMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_setterMap_2E_element_3F_ (const GGS_setterMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_setterMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_setterMap_2E_element unwrappedValue (void) const {
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_setterMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @instanceMethodMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_instanceMethodMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_methodKind mProperty_mKind ;
  public: inline GGS_methodKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GGS_formalParameterSignature mProperty_mParameterList ;
  public: inline GGS_formalParameterSignature readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

  public: GGS_location mProperty_mDeclarationLocation ;
  public: inline GGS_location readProperty_mDeclarationLocation (void) const {
    return mProperty_mDeclarationLocation ;
  }

  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: inline GGS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GGS_methodQualifier mProperty_mQualifier ;
  public: inline GGS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

  public: GGS_string mProperty_mErrorMessage ;
  public: inline GGS_string readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_instanceMethodMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMKind (const GGS_methodKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMParameterList (const GGS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationLocation = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMQualifier (const GGS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_instanceMethodMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_methodKind & in_mKind,
                                            const GGS_formalParameterSignature & in_mParameterList,
                                            const GGS_location & in_mDeclarationLocation,
                                            const GGS_bool & in_mHasCompilerArgument,
                                            const GGS_methodQualifier & in_mQualifier,
                                            const GGS_string & in_mErrorMessage) ;

//--------------------------------- Copy constructor
  public: GGS_instanceMethodMap_2E_element (const GGS_instanceMethodMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_instanceMethodMap_2E_element & operator = (const GGS_instanceMethodMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_instanceMethodMap_2E_element init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_methodKind & inOperand1,
                                                                                    const class GGS_formalParameterSignature & inOperand2,
                                                                                    const class GGS_location & inOperand3,
                                                                                    const class GGS_bool & inOperand4,
                                                                                    const class GGS_methodQualifier & inOperand5,
                                                                                    const class GGS_string & inOperand6,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instanceMethodMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: instanceMethodMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_instanceMethodMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_instanceMethodMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_instanceMethodMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_instanceMethodMap_2E_element_3F_ (const GGS_instanceMethodMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_instanceMethodMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_instanceMethodMap_2E_element unwrappedValue (void) const {
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instanceMethodMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classMethodMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_classMethodMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_formalParameterSignature mProperty_mParameterList ;
  public: inline GGS_formalParameterSignature readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: inline GGS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_classMethodMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMParameterList (const GGS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_classMethodMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_formalParameterSignature & in_mParameterList,
                                         const GGS_bool & in_mHasCompilerArgument) ;

//--------------------------------- Copy constructor
  public: GGS_classMethodMap_2E_element (const GGS_classMethodMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_classMethodMap_2E_element & operator = (const GGS_classMethodMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classMethodMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_formalParameterSignature & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classMethodMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: classMethodMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_classMethodMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_classMethodMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_classMethodMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_classMethodMap_2E_element_3F_ (const GGS_classMethodMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_classMethodMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_classMethodMap_2E_element unwrappedValue (void) const {
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classMethodMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @subscriptMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_subscriptMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_functionSignature mProperty_argumentTypeList ;
  public: inline GGS_functionSignature readProperty_argumentTypeList (void) const {
    return mProperty_argumentTypeList ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_valueType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_valueType (void) const {
    return mProperty_valueType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_subscriptMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setArgumentTypeList (const GGS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_argumentTypeList = inValue ;
  }

  public: inline void setter_setValueType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_valueType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_subscriptMap_2E_element (const GGS_lstring & in_lkey,
                                       const GGS_functionSignature & in_argumentTypeList,
                                       const GGS_unifiedTypeMapEntry & in_valueType) ;

//--------------------------------- Copy constructor
  public: GGS_subscriptMap_2E_element (const GGS_subscriptMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_subscriptMap_2E_element & operator = (const GGS_subscriptMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_subscriptMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_functionSignature & inOperand1,
                                                               const class GGS_unifiedTypeMapEntry & inOperand2,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subscriptMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: subscriptMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_subscriptMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_subscriptMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_subscriptMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_subscriptMap_2E_element_3F_ (const GGS_subscriptMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_subscriptMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_subscriptMap_2E_element unwrappedValue (void) const {
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subscriptMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @functionSignature_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_functionSignature_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFormalSelector ;
  public: inline GGS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mFormalArgumentType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mFormalArgumentType (void) const {
    return mProperty_mFormalArgumentType ;
  }

  public: GGS_string mProperty_mFormalArgumentName ;
  public: inline GGS_string readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

  public: GGS_bool mProperty_isConstant ;
  public: inline GGS_bool readProperty_isConstant (void) const {
    return mProperty_isConstant ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_functionSignature_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

  public: inline void setter_setIsConstant (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isConstant = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_functionSignature_2E_element (const GGS_lstring & in_mFormalSelector,
                                            const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                            const GGS_string & in_mFormalArgumentName,
                                            const GGS_bool & in_isConstant) ;

//--------------------------------- Copy constructor
  public: GGS_functionSignature_2E_element (const GGS_functionSignature_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_functionSignature_2E_element & operator = (const GGS_functionSignature_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionSignature_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                        const class GGS_string & inOperand2,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionSignature_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@typeKindEnum string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_typeKindEnum & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@typeFeatures generateCppObjectComparison' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_generateCppObjectComparison (const class GGS_typeFeatures & inObject,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum xcodeProject
//--------------------------------------------------------------------------------------------------

class GGS_xcodeProject : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_xcodeProject (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_swiftApp
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
  public: static class GGS_xcodeProject class_func_none (LOCATION_ARGS) ;

  public: static class GGS_xcodeProject class_func_swiftApp (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_xcodeProject & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isNone (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSwiftApp (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xcodeProject ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@syntaxInstructionAST transformInstructionForGrammarAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_transformInstructionForGrammarAnalysis (class cPtr_syntaxInstructionAST * inObject,
                                                                 class GGS_terminalSymbolsMapForGrammarAnalysis & io_ioActuallyUsedTerminalSymbolMap,
                                                                 const class GGS_nonTerminalSymbolMapForGrammarAnalysis constin_inNonTerminalSymbolMap,
                                                                 class GGS_uint & io_ioAddedNonTerminalIndex,
                                                                 class GGS_syntaxInstructionListForGrammarAnalysis & io_ioSyntaxInstructionList,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxInstructionListForGrammarAnalysis list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_syntaxInstructionListForGrammarAnalysis final {
  public: DownEnumerator_syntaxInstructionListForGrammarAnalysis (const class GGS_syntaxInstructionListForGrammarAnalysis & inList) ;

  public: ~ DownEnumerator_syntaxInstructionListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractSyntaxInstructionForGrammarAnalysis current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxInstructionListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syntaxInstructionListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_syntaxInstructionListForGrammarAnalysis (const DownEnumerator_syntaxInstructionListForGrammarAnalysis &) = delete ;
  private: DownEnumerator_syntaxInstructionListForGrammarAnalysis & operator = (const DownEnumerator_syntaxInstructionListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_syntaxInstructionListForGrammarAnalysis final {
  public: UpEnumerator_syntaxInstructionListForGrammarAnalysis (const class GGS_syntaxInstructionListForGrammarAnalysis & inList)  ;

  public: ~ UpEnumerator_syntaxInstructionListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractSyntaxInstructionForGrammarAnalysis current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxInstructionListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syntaxInstructionListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_syntaxInstructionListForGrammarAnalysis (const UpEnumerator_syntaxInstructionListForGrammarAnalysis &) = delete ;
  private: UpEnumerator_syntaxInstructionListForGrammarAnalysis & operator = (const UpEnumerator_syntaxInstructionListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @syntaxInstructionListForGrammarAnalysis list
//--------------------------------------------------------------------------------------------------

class GGS_syntaxInstructionListForGrammarAnalysis : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_syntaxInstructionListForGrammarAnalysis_2E_element> mArray ;

//--- Default constructor
  public: GGS_syntaxInstructionListForGrammarAnalysis (void) ;

//--- Destructor
  public: virtual ~ GGS_syntaxInstructionListForGrammarAnalysis (void) = default ;

//--- Copy
  public: GGS_syntaxInstructionListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis &) = default ;
  public: GGS_syntaxInstructionListForGrammarAnalysis & operator = (const GGS_syntaxInstructionListForGrammarAnalysis &) = default ;

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
  public : inline GenericArray <GGS_syntaxInstructionListForGrammarAnalysis_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_syntaxInstructionListForGrammarAnalysis subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_syntaxInstructionListForGrammarAnalysis (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxInstructionListForGrammarAnalysis init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxInstructionListForGrammarAnalysis class_func_listWithValue (const class GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_syntaxInstructionListForGrammarAnalysis inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_syntaxInstructionListForGrammarAnalysis add_operation (const GGS_syntaxInstructionListForGrammarAnalysis & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_abstractSyntaxInstructionForGrammarAnalysis constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_abstractSyntaxInstructionForGrammarAnalysis constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionAtIndex (class GGS_abstractSyntaxInstructionForGrammarAnalysis constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_abstractSyntaxInstructionForGrammarAnalysis getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_syntaxInstructionListForGrammarAnalysis getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_syntaxInstructionListForGrammarAnalysis getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_syntaxInstructionListForGrammarAnalysis getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_syntaxInstructionListForGrammarAnalysis ;
  friend class DownEnumerator_syntaxInstructionListForGrammarAnalysis ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalSymbolMapForGrammarAnalysis map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis final {

  public: DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const class GGS_nonTerminalSymbolMapForGrammarAnalysis & inMap) ;

  public: ~ DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;

  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;

  public: class GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis &) = delete ;
  private: DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis & operator = (const DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis final {
  public: UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const class GGS_nonTerminalSymbolMapForGrammarAnalysis & inMap)  ;

  public: ~ UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;
  public: class GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis &) = delete ;
  private: UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis & operator = (const UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalSymbolMapForGrammarAnalysis : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_nonTerminalSymbolMapForGrammarAnalysis (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_nonTerminalSymbolMapForGrammarAnalysis (void) ;

//--- Handle copy
  public: GGS_nonTerminalSymbolMapForGrammarAnalysis (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inSource) ;
  public: GGS_nonTerminalSymbolMapForGrammarAnalysis & operator = (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inSource) ;

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
  protected: void performInsert (const class GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalSymbolMapForGrammarAnalysis init (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_nonTerminalSymbolMapForGrammarAnalysis class_func_mapWithMapToOverride (const class GGS_nonTerminalSymbolMapForGrammarAnalysis & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 class GGS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMNonTerminalIndexForKey (class GGS_uint constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMNonterminalSymbolParametersMapForKey (class GGS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mNonTerminalIndexForKey (const class GGS_string & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis getter_mNonterminalSymbolParametersMapForKey (const class GGS_string & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_nonTerminalSymbolMapForGrammarAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis ;
  friend class DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalSymbolsMapForGrammarAnalysis map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_terminalSymbolsMapForGrammarAnalysis final {

  public: DownEnumerator_terminalSymbolsMapForGrammarAnalysis (const class GGS_terminalSymbolsMapForGrammarAnalysis & inMap) ;

  public: ~ DownEnumerator_terminalSymbolsMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mTerminalIndex (LOCATION_ARGS) const ;

  public: class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_terminalSymbolsMapForGrammarAnalysis (const DownEnumerator_terminalSymbolsMapForGrammarAnalysis &) = delete ;
  private: DownEnumerator_terminalSymbolsMapForGrammarAnalysis & operator = (const DownEnumerator_terminalSymbolsMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_terminalSymbolsMapForGrammarAnalysis final {
  public: UpEnumerator_terminalSymbolsMapForGrammarAnalysis (const class GGS_terminalSymbolsMapForGrammarAnalysis & inMap)  ;

  public: ~ UpEnumerator_terminalSymbolsMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mTerminalIndex (LOCATION_ARGS) const ;
  public: class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_terminalSymbolsMapForGrammarAnalysis (const UpEnumerator_terminalSymbolsMapForGrammarAnalysis &) = delete ;
  private: UpEnumerator_terminalSymbolsMapForGrammarAnalysis & operator = (const UpEnumerator_terminalSymbolsMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_terminalSymbolsMapForGrammarAnalysis : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_terminalSymbolsMapForGrammarAnalysis (void) ;

//--- Handle copy
  public: GGS_terminalSymbolsMapForGrammarAnalysis (const GGS_terminalSymbolsMapForGrammarAnalysis & inSource) ;
  public: GGS_terminalSymbolsMapForGrammarAnalysis & operator = (const GGS_terminalSymbolsMapForGrammarAnalysis & inSource) ;

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
  protected: void performInsert (const class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalSymbolsMapForGrammarAnalysis init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_terminalSymbolsMapForGrammarAnalysis class_func_mapWithMapToOverride (const class GGS_terminalSymbolsMapForGrammarAnalysis & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMTerminalIndexForKey (class GGS_uint constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mTerminalIndexForKey (const class GGS_string & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_terminalSymbolsMapForGrammarAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_terminalSymbolsMapForGrammarAnalysis ;
  friend class DownEnumerator_terminalSymbolsMapForGrammarAnalysis ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [syntaxInstructionAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_syntaxInstructionAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_syntaxInstructionAST_5D_ (const class GGS__5B_syntaxInstructionAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_syntaxInstructionAST_5D_ (const DownEnumerator__5B_syntaxInstructionAST_5D_ &) = delete ;
  private: DownEnumerator__5B_syntaxInstructionAST_5D_ & operator = (const DownEnumerator__5B_syntaxInstructionAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

//--- Current element access
  public: class GGS_syntaxInstructionAST current (LOCATION_ARGS) const ;
  public: class GGS_syntaxInstructionAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_syntaxInstructionAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_syntaxInstructionAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_syntaxInstructionAST_5D_ (const class GGS__5B_syntaxInstructionAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_syntaxInstructionAST_5D_ (const UpEnumerator__5B_syntaxInstructionAST_5D_ &) = delete ;
  private: UpEnumerator__5B_syntaxInstructionAST_5D_ & operator = (const UpEnumerator__5B_syntaxInstructionAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

//--- Current element access
  public: class GGS_syntaxInstructionAST current (LOCATION_ARGS) const ;
  public: class GGS_syntaxInstructionAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_syntaxInstructionAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_syntaxInstructionAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_syntaxInstructionAST> mSharedArray ;

//--------------------------------- Default constructor
  public: GGS__5B_syntaxInstructionAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_syntaxInstructionAST_5D_ (const GGS__5B_syntaxInstructionAST_5D_ & inSource) ;
  public: GGS__5B_syntaxInstructionAST_5D_ & operator = (const GGS__5B_syntaxInstructionAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_syntaxInstructionAST_5D_ ;
  friend class DownEnumerator__5B_syntaxInstructionAST_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_syntaxInstructionAST_5D_ init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_syntaxInstructionAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_syntaxInstructionAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_syntaxInstructionAST_5D_ add_operation (const GGS__5B_syntaxInstructionAST_5D_ & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_syntaxInstructionAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_syntaxInstructionAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_syntaxInstructionAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_syntaxInstructionAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_syntaxInstructionAST & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_syntaxInstructionAST getter_first (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_syntaxInstructionAST getter_last (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_syntaxInstructionAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_syntaxInstructionAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                 const class GGS_uint & constinOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_syntaxInstructionAST readSubscript__3F_ (const class GGS_uint & in0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_syntaxInstructionAST_5D_ ;
  friend class DownEnumerator__5B_syntaxInstructionAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_syntaxInstructionAST_5D_ ;

