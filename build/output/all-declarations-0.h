#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticExpressionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_semanticExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_semanticExpressionAST (const class cPtr_semanticExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticExpressionAST init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @semanticExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_semanticExpressionAST : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticExpressionAST_init (Compiler * inCompiler) ;


//--- Extension proc analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension proc enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_semanticExpressionAST (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [logAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_logAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_logAST_5D_ (const class GGS__5B_logAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_logAST_5D_ (const DownEnumerator__5B_logAST_5D_ &) = delete ;
  private: DownEnumerator__5B_logAST_5D_ & operator = (const DownEnumerator__5B_logAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_logAST current (LOCATION_ARGS) const ;
  public: class GGS_logAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_logAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_logAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_logAST_5D_ (const class GGS__5B_logAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_logAST_5D_ (const UpEnumerator__5B_logAST_5D_ &) = delete ;
  private: UpEnumerator__5B_logAST_5D_ & operator = (const UpEnumerator__5B_logAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_logAST current (LOCATION_ARGS) const ;
  public: class GGS_logAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_logAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_logAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_logAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_logAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_logAST_5D_ (const GGS__5B_logAST_5D_ & inSource) ;
  public: GGS__5B_logAST_5D_ & operator = (const GGS__5B_logAST_5D_ & inSource) ;

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
  public: static GGS__5B_logAST_5D_ init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_logAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_logAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_logAST_5D_ add_operation (const GGS__5B_logAST_5D_ & inOperand,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_logAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_logAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_logAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_logAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_logAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_logAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_logAST getter_first (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_logAST getter_last (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_logAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_logAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                   const class GGS_uint & constinOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_logAST readSubscript__3F_ (const class GGS_uint & in0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_logAST_5D_ ;
  friend class DownEnumerator__5B_logAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_logAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @logAST struct
//--------------------------------------------------------------------------------------------------

class GGS_logAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mLogMessage ;
  public: inline GGS_lstring readProperty_mLogMessage (void) const {
    return mProperty_mLogMessage ;
  }

  public: GGS_semanticExpressionAST mProperty_mLogExpression ;
  public: inline GGS_semanticExpressionAST readProperty_mLogExpression (void) const {
    return mProperty_mLogExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_logAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLogMessage (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLogMessage = inValue ;
  }

  public: inline void setter_setMLogExpression (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLogExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_logAST (const GGS_lstring & in_mLogMessage,
                      const GGS_semanticExpressionAST & in_mLogExpression) ;

//--------------------------------- Copy constructor
  public: GGS_logAST (const GGS_logAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_logAST & operator = (const GGS_logAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_logAST init_21__21_ (const class GGS_lstring & inOperand0,
                                          const class GGS_semanticExpressionAST & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [semanticInstructionForGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_semanticInstructionForGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_semanticInstructionForGeneration_5D_ (const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_semanticInstructionForGeneration_5D_ (const DownEnumerator__5B_semanticInstructionForGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_semanticInstructionForGeneration_5D_ & operator = (const DownEnumerator__5B_semanticInstructionForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_semanticInstructionForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_semanticInstructionForGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_semanticInstructionForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_semanticInstructionForGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_semanticInstructionForGeneration_5D_ (const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_semanticInstructionForGeneration_5D_ (const UpEnumerator__5B_semanticInstructionForGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_semanticInstructionForGeneration_5D_ & operator = (const UpEnumerator__5B_semanticInstructionForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_semanticInstructionForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_semanticInstructionForGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_semanticInstructionForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_semanticInstructionForGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_semanticInstructionForGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_semanticInstructionForGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_semanticInstructionForGeneration_5D_ (const GGS__5B_semanticInstructionForGeneration_5D_ & inSource) ;
  public: GGS__5B_semanticInstructionForGeneration_5D_ & operator = (const GGS__5B_semanticInstructionForGeneration_5D_ & inSource) ;

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
  public: static GGS__5B_semanticInstructionForGeneration_5D_ init (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_semanticInstructionForGeneration_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_semanticInstructionForGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_semanticInstructionForGeneration_5D_ add_operation (const GGS__5B_semanticInstructionForGeneration_5D_ & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_semanticInstructionForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_semanticInstructionForGeneration constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_semanticInstructionForGeneration & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_semanticInstructionForGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_semanticInstructionForGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_semanticInstructionForGeneration constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_semanticInstructionForGeneration getter_first (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_semanticInstructionForGeneration getter_last (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_semanticInstructionForGeneration_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_semanticInstructionForGeneration_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                             const class GGS_uint & constinOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_semanticInstructionForGeneration readSubscript__3F_ (const class GGS_uint & in0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_semanticInstructionForGeneration_5D_ ;
  friend class DownEnumerator__5B_semanticInstructionForGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_semanticInstructionForGeneration_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_semanticInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_semanticInstructionForGeneration (const class cPtr_semanticInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticInstructionForGeneration init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @semanticInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_semanticInstructionForGeneration : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticInstructionForGeneration_init (Compiler * inCompiler) ;


//--- Extension func compareInstructionSyntaxSignature
  public: virtual class GGS_bool getter_compareInstructionSyntaxSignature (const class GGS_semanticInstructionForGeneration _inTestedInstruction,
           Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension proc appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GGS_string arg__inPosfix,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg__ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_semanticInstructionForGeneration (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionForGeneration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_semanticInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_semanticInstructionForGeneration_2E_weak (const class GGS_semanticInstructionForGeneration & inSource) ;

  public: GGS_semanticInstructionForGeneration_2E_weak & operator = (const class GGS_semanticInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_semanticInstructionForGeneration_2E_weak init_nil (void) {
    GGS_semanticInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_semanticInstructionForGeneration bang_semanticInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_semanticInstructionForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_semanticInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [actualParameterAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_actualParameterAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_actualParameterAST_5D_ (const class GGS__5B_actualParameterAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_actualParameterAST_5D_ (const DownEnumerator__5B_actualParameterAST_5D_ &) = delete ;
  private: DownEnumerator__5B_actualParameterAST_5D_ & operator = (const DownEnumerator__5B_actualParameterAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_actualParameterAST current (LOCATION_ARGS) const ;
  public: class GGS_actualParameterAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_actualParameterAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_actualParameterAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_actualParameterAST_5D_ (const class GGS__5B_actualParameterAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_actualParameterAST_5D_ (const UpEnumerator__5B_actualParameterAST_5D_ &) = delete ;
  private: UpEnumerator__5B_actualParameterAST_5D_ & operator = (const UpEnumerator__5B_actualParameterAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_actualParameterAST current (LOCATION_ARGS) const ;
  public: class GGS_actualParameterAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_actualParameterAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_actualParameterAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_actualParameterAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_actualParameterAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_actualParameterAST_5D_ (const GGS__5B_actualParameterAST_5D_ & inSource) ;
  public: GGS__5B_actualParameterAST_5D_ & operator = (const GGS__5B_actualParameterAST_5D_ & inSource) ;

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
  public: static GGS__5B_actualParameterAST_5D_ init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_actualParameterAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_actualParameterAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_actualParameterAST_5D_ add_operation (const GGS__5B_actualParameterAST_5D_ & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_actualParameterAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_actualParameterAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_actualParameterAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_actualParameterAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_actualParameterAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_actualParameterAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_actualParameterAST getter_first (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_actualParameterAST getter_last (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_actualParameterAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_actualParameterAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                               const class GGS_uint & constinOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_actualParameterAST readSubscript__3F_ (const class GGS_uint & in0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_actualParameterAST_5D_ ;
  friend class DownEnumerator__5B_actualParameterAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_actualParameterAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actualParameterAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_actualParameterAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_actualParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_actualParameterAST (const class cPtr_actualParameterAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actualParameterAST init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_actualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualParameterAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @actualParameterAST class
//--------------------------------------------------------------------------------------------------

class cPtr_actualParameterAST : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void actualParameterAST_init (Compiler * inCompiler) ;


//--- Extension func isCompatibleWith
  public: virtual class GGS_bool getter_isCompatibleWith (const class GGS_formalArgumentPassingModeAST _inFormalPassingMode,
           const class GGS_string _inSelector,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

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
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension proc enterInActualOutputParameterList
  public: virtual void method_enterInActualOutputParameterList (class GGS__5B_actualOutputArgumentAST_5D_ & arg_ioActualOutputArgumentList,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension proc enterParameterInSemanticContext
  public: virtual void method_enterParameterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_actualParameterAST (Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [actualParameterForGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_actualParameterForGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_actualParameterForGeneration_5D_ (const class GGS__5B_actualParameterForGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_actualParameterForGeneration_5D_ (const DownEnumerator__5B_actualParameterForGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_actualParameterForGeneration_5D_ & operator = (const DownEnumerator__5B_actualParameterForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_actualParameterForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_actualParameterForGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_actualParameterForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_actualParameterForGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_actualParameterForGeneration_5D_ (const class GGS__5B_actualParameterForGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_actualParameterForGeneration_5D_ (const UpEnumerator__5B_actualParameterForGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_actualParameterForGeneration_5D_ & operator = (const UpEnumerator__5B_actualParameterForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_actualParameterForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_actualParameterForGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_actualParameterForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_actualParameterForGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_actualParameterForGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_actualParameterForGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_actualParameterForGeneration_5D_ (const GGS__5B_actualParameterForGeneration_5D_ & inSource) ;
  public: GGS__5B_actualParameterForGeneration_5D_ & operator = (const GGS__5B_actualParameterForGeneration_5D_ & inSource) ;

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
  public: static GGS__5B_actualParameterForGeneration_5D_ init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_actualParameterForGeneration_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_actualParameterForGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_actualParameterForGeneration_5D_ add_operation (const GGS__5B_actualParameterForGeneration_5D_ & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_actualParameterForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_actualParameterForGeneration constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_actualParameterForGeneration & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_actualParameterForGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_actualParameterForGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_actualParameterForGeneration constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_actualParameterForGeneration getter_first (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_actualParameterForGeneration getter_last (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_actualParameterForGeneration_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_actualParameterForGeneration_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                         const class GGS_uint & constinOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_actualParameterForGeneration readSubscript__3F_ (const class GGS_uint & in0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_actualParameterForGeneration_5D_ ;
  friend class DownEnumerator__5B_actualParameterForGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_actualParameterForGeneration_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_actualParameterForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_actualParameterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_actualParameterForGeneration (const class cPtr_actualParameterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mFormalArgumentType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actualParameterForGeneration init_21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_actualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualParameterForGeneration ;

//--------------------------------------------------------------------------------------------------
//   enum unifiedTypeMapEntry
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_unifiedTypeMapEntry (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_null,
    enum_element
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_element (class GGS_unifiedTypeMapElementClass_2E_weak & out_weakElement) const ;

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
  public: static class GGS_unifiedTypeMapEntry class_func_element (const class GGS_unifiedTypeMapElementClass_2E_weak & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_unifiedTypeMapEntry class_func_null (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unifiedTypeMapEntry & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractElement (class GGS_unifiedTypeMapElementClass_2E_weak & outArgument0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_unifiedTypeMapEntry_2E_element_3F_ getter_getElement (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isElement (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNull (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @actualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_actualParameterForGeneration : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void actualParameterForGeneration_init_21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                      Compiler * inCompiler) ;


//--- Extension proc generateActualParameter
  public: virtual void method_generateActualParameter (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_string & arg_ioImplementation,
           class GGS__5B_string_5D_ & arg_ioJokerParametersToReleaseList,
           class GGS__5B_string_5D_ & arg_ioOutputVariableList,
           class GGS_stringset & arg__ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppName,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension proc generatePoisonedVariables
  public: virtual void method_generatePoisonedVariables (class GGS_string & arg_ioImplementation,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mFormalArgumentType ;


//--- Default constructor
  public: cPtr_actualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_actualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
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
// Phase 1: @unifiedTypeMapElementClass reference class
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapElementClass : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_unifiedTypeMapElementClass (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_unifiedTypeMapElementClass (const class cPtr_unifiedTypeMapElementClass * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_typeDefinition readProperty_mDefinition (void) const ;
  public: void setProperty_mDefinition (const GGS_typeDefinition & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unifiedTypeMapElementClass init_21_ (const class GGS_typeDefinition & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unifiedTypeMapElementClass & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;

//--------------------------------------------------------------------------------------------------
//   enum typeDefinition
//--------------------------------------------------------------------------------------------------

class GGS_typeDefinition : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_typeDefinition (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_unsolved,
    enum_solved
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_solved (class GGS_unifiedTypeDefinition & out_definition) const ;

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
  public: static class GGS_typeDefinition class_func_solved (const class GGS_unifiedTypeDefinition & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeDefinition class_func_unsolved (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractSolved (class GGS_unifiedTypeDefinition & outArgument0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_typeDefinition_2E_solved_3F_ getter_getSolved (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSolved (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isUnsolved (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @unifiedTypeMapElementClass class
//--------------------------------------------------------------------------------------------------

class cPtr_unifiedTypeMapElementClass : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void unifiedTypeMapElementClass_init_21_ (const class GGS_typeDefinition & inOperand0,
                                                    Compiler * inCompiler) ;


//--- Extension func definition
  public: virtual class GGS_unifiedTypeDefinition getter_definition (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Properties
  public: GGS_typeDefinition mProperty_mDefinition ;


//--- Default constructor
  public: cPtr_unifiedTypeMapElementClass (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_unifiedTypeMapElementClass (const GGS_typeDefinition & in_mDefinition,
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
// Phase 1: @unifiedTypeMapElementClass_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapElementClass_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_unifiedTypeMapElementClass_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_unifiedTypeMapElementClass_2E_weak (const class GGS_unifiedTypeMapElementClass & inSource) ;

  public: GGS_unifiedTypeMapElementClass_2E_weak & operator = (const class GGS_unifiedTypeMapElementClass & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_unifiedTypeMapElementClass_2E_weak init_nil (void) {
    GGS_unifiedTypeMapElementClass_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_unifiedTypeMapElementClass bang_unifiedTypeMapElementClass_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_unifiedTypeMapElementClass unwrappedValue (void) const ;

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
  public: static class GGS_unifiedTypeMapElementClass_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unifiedTypeMapElementClass_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeMapEntry_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapElementClass_2E_weak mProperty_weakElement ;
  public: inline GGS_unifiedTypeMapElementClass_2E_weak readProperty_weakElement (void) const {
    return mProperty_weakElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeMapEntry_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setWeakElement (const GGS_unifiedTypeMapElementClass_2E_weak & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_weakElement = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_unifiedTypeMapEntry_2E_element (const GGS_unifiedTypeMapElementClass_2E_weak & in_weakElement) ;

//--------------------------------- Copy constructor
  public: GGS_unifiedTypeMapEntry_2E_element (const GGS_unifiedTypeMapEntry_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_unifiedTypeMapEntry_2E_element & operator = (const GGS_unifiedTypeMapEntry_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unifiedTypeMapEntry_2E_element init_21_ (const class GGS_unifiedTypeMapElementClass_2E_weak & inOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unifiedTypeMapEntry_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: unifiedTypeMapEntry.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_unifiedTypeMapEntry_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeMapEntry_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_unifiedTypeMapEntry_2E_element_3F_ (const GGS_unifiedTypeMapEntry_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_unifiedTypeMapEntry_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_unifiedTypeMapEntry_2E_element unwrappedValue (void) const {
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
  public: ComparisonResult objectCompare (const GGS_unifiedTypeMapEntry_2E_element_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @superMethodCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_superMethodCallInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_superMethodCallInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_superMethodCallInstructionForGeneration (const class cPtr_superMethodCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mMethodName (void) const ;

  public: class GGS__5B_actualParameterForGeneration_5D_ readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mHasCompilerArgument (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mBaseType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_superMethodCallInstructionForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_string & inOperand1,
                                                                                       const class GGS__5B_actualParameterForGeneration_5D_ & inOperand2,
                                                                                       const class GGS_bool & inOperand3,
                                                                                       const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superMethodCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @superMethodCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_superMethodCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void superMethodCallInstructionForGeneration_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_string & inOperand1,
                                                                                 const class GGS__5B_actualParameterForGeneration_5D_ & inOperand2,
                                                                                 const class GGS_bool & inOperand3,
                                                                                 const class GGS_unifiedTypeMapEntry & inOperand4,
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
  public: GGS_string mProperty_mMethodName ;
  public: GGS__5B_actualParameterForGeneration_5D_ mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: GGS_unifiedTypeMapEntry mProperty_mBaseType ;


//--- Default constructor
  public: cPtr_superMethodCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_superMethodCallInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                        const GGS_string & in_mMethodName,
                                                        const GGS__5B_actualParameterForGeneration_5D_ & in_mActualParameterList,
                                                        const GGS_bool & in_mHasCompilerArgument,
                                                        const GGS_unifiedTypeMapEntry & in_mBaseType,
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
// Phase 1: @superMethodCallInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_superMethodCallInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_superMethodCallInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_superMethodCallInstructionForGeneration_2E_weak (const class GGS_superMethodCallInstructionForGeneration & inSource) ;

  public: GGS_superMethodCallInstructionForGeneration_2E_weak & operator = (const class GGS_superMethodCallInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_superMethodCallInstructionForGeneration_2E_weak init_nil (void) {
    GGS_superMethodCallInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_superMethodCallInstructionForGeneration bang_superMethodCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_superMethodCallInstructionForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_superMethodCallInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superMethodCallInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [abstractSyntaxInstructionForGrammarAnalysis] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ (const class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ (const DownEnumerator__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ &) = delete ;
  private: DownEnumerator__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & operator = (const DownEnumerator__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_abstractSyntaxInstructionForGrammarAnalysis current (LOCATION_ARGS) const ;
  public: class GGS_abstractSyntaxInstructionForGrammarAnalysis current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_abstractSyntaxInstructionForGrammarAnalysis> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ (const class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ (const UpEnumerator__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ &) = delete ;
  private: UpEnumerator__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & operator = (const UpEnumerator__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_abstractSyntaxInstructionForGrammarAnalysis current (LOCATION_ARGS) const ;
  public: class GGS_abstractSyntaxInstructionForGrammarAnalysis current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_abstractSyntaxInstructionForGrammarAnalysis> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_abstractSyntaxInstructionForGrammarAnalysis> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ (const GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & inSource) ;
  public: GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & operator = (const GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & inSource) ;

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
  public: static GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ init (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ add_operation (const GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & inOperand,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_abstractSyntaxInstructionForGrammarAnalysis constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_abstractSyntaxInstructionForGrammarAnalysis constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_abstractSyntaxInstructionForGrammarAnalysis constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_abstractSyntaxInstructionForGrammarAnalysis getter_first (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_abstractSyntaxInstructionForGrammarAnalysis getter_last (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                                        const class GGS_uint & constinOperand1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_abstractSyntaxInstructionForGrammarAnalysis readSubscript__3F_ (const class GGS_uint & in0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ ;
  friend class DownEnumerator__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractSyntaxInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractSyntaxInstructionForGrammarAnalysis : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractSyntaxInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractSyntaxInstructionForGrammarAnalysis (const class cPtr_abstractSyntaxInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mStartLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractSyntaxInstructionForGrammarAnalysis init_21_ (const class GGS_location & inOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis ;

#include "separateHeaderFor_abstractSyntaxInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_syntaxInstructionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_syntaxInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_syntaxInstructionAST (const class cPtr_syntaxInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxInstructionAST init_21_ (const class GGS_location & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syntaxInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @syntaxInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_syntaxInstructionAST : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void syntaxInstructionAST_init_21_ (const class GGS_location & inOperand0,
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
           class GGS_uint & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension proc transformInstructionForGrammarAnalysis
  public: virtual void method_transformInstructionForGrammarAnalysis (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_uint & arg_ioAddedNonTerminalIndex,
           class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_syntaxInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syntaxInstructionAST (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @syntaxInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_syntaxInstructionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_syntaxInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_syntaxInstructionAST_2E_weak (const class GGS_syntaxInstructionAST & inSource) ;

  public: GGS_syntaxInstructionAST_2E_weak & operator = (const class GGS_syntaxInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_syntaxInstructionAST_2E_weak init_nil (void) {
    GGS_syntaxInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_syntaxInstructionAST bang_syntaxInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_syntaxInstructionAST unwrappedValue (void) const ;

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
  public: static class GGS_syntaxInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syntaxInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_syntaxInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_syntaxInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_syntaxInstructionForGeneration (const class cPtr_syntaxInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxInstructionForGeneration init_21_ (const class GGS_location & inOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syntaxInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @syntaxInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_syntaxInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void syntaxInstructionForGeneration_init_21_ (const class GGS_location & inOperand0,
                                                        Compiler * inCompiler) ;


//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_syntaxInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syntaxInstructionForGeneration (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @syntaxInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_syntaxInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_syntaxInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_syntaxInstructionForGeneration_2E_weak (const class GGS_syntaxInstructionForGeneration & inSource) ;

  public: GGS_syntaxInstructionForGeneration_2E_weak & operator = (const class GGS_syntaxInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_syntaxInstructionForGeneration_2E_weak init_nil (void) {
    GGS_syntaxInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_syntaxInstructionForGeneration bang_syntaxInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_syntaxInstructionForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_syntaxInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syntaxInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum fixitElementAST
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_fixitElementAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_fixItRemove,
    enum_fixItReplace,
    enum_fixItInsertAfter,
    enum_fixItInsertBefore
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fixItReplace (class GGS_semanticExpressionAST & out_exp,
                                                                     class GGS_location & out_errorLocation) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fixItInsertAfter (class GGS_semanticExpressionAST & out_exp,
                                                                         class GGS_location & out_errorLocation) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fixItInsertBefore (class GGS_semanticExpressionAST & out_exp,
                                                                          class GGS_location & out_errorLocation) const ;

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
  public: static class GGS_fixitElementAST class_func_fixItInsertAfter (const class GGS_semanticExpressionAST & inOperand0,
                                                                        const class GGS_location & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_fixitElementAST class_func_fixItInsertBefore (const class GGS_semanticExpressionAST & inOperand0,
                                                                         const class GGS_location & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS_fixitElementAST class_func_fixItRemove (LOCATION_ARGS) ;

  public: static class GGS_fixitElementAST class_func_fixItReplace (const class GGS_semanticExpressionAST & inOperand0,
                                                                    const class GGS_location & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractFixItInsertAfter (class GGS_semanticExpressionAST & outArgument0,
                                               class GGS_location & outArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: void method_extractFixItInsertBefore (class GGS_semanticExpressionAST & outArgument0,
                                                class GGS_location & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: void method_extractFixItReplace (class GGS_semanticExpressionAST & outArgument0,
                                           class GGS_location & outArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_fixitElementAST_2E_fixItInsertAfter_3F_ getter_getFixItInsertAfter (LOCATION_ARGS) const ;

  public: class GGS_fixitElementAST_2E_fixItInsertBefore_3F_ getter_getFixItInsertBefore (LOCATION_ARGS) const ;

  public: class GGS_fixitElementAST_2E_fixItReplace_3F_ getter_getFixItReplace (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isFixItInsertAfter (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isFixItInsertBefore (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isFixItRemove (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isFixItReplace (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitElementAST_2E_fixItInsertAfter struct
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST_2E_fixItInsertAfter : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionAST mProperty_exp ;
  public: inline GGS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_location mProperty_errorLocation ;
  public: inline GGS_location readProperty_errorLocation (void) const {
    return mProperty_errorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementAST_2E_fixItInsertAfter (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setErrorLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_errorLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementAST_2E_fixItInsertAfter (const GGS_semanticExpressionAST & in_exp,
                                                   const GGS_location & in_errorLocation) ;

//--------------------------------- Copy constructor
  public: GGS_fixitElementAST_2E_fixItInsertAfter (const GGS_fixitElementAST_2E_fixItInsertAfter & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fixitElementAST_2E_fixItInsertAfter & operator = (const GGS_fixitElementAST_2E_fixItInsertAfter & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementAST_2E_fixItInsertAfter init_21__21_ (const class GGS_semanticExpressionAST & inOperand0,
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertAfter ;

//--------------------------------------------------------------------------------------------------
// Phase 1: fixitElementAST.fixItInsertAfter? optional
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST_2E_fixItInsertAfter_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementAST_2E_fixItInsertAfter mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementAST_2E_fixItInsertAfter_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementAST_2E_fixItInsertAfter_3F_ (const GGS_fixitElementAST_2E_fixItInsertAfter & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementAST_2E_fixItInsertAfter_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementAST_2E_fixItInsertAfter unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertAfter_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitElementAST_2E_fixItInsertBefore struct
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST_2E_fixItInsertBefore : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionAST mProperty_exp ;
  public: inline GGS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_location mProperty_errorLocation ;
  public: inline GGS_location readProperty_errorLocation (void) const {
    return mProperty_errorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementAST_2E_fixItInsertBefore (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setErrorLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_errorLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementAST_2E_fixItInsertBefore (const GGS_semanticExpressionAST & in_exp,
                                                    const GGS_location & in_errorLocation) ;

//--------------------------------- Copy constructor
  public: GGS_fixitElementAST_2E_fixItInsertBefore (const GGS_fixitElementAST_2E_fixItInsertBefore & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fixitElementAST_2E_fixItInsertBefore & operator = (const GGS_fixitElementAST_2E_fixItInsertBefore & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementAST_2E_fixItInsertBefore init_21__21_ (const class GGS_semanticExpressionAST & inOperand0,
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertBefore ;

//--------------------------------------------------------------------------------------------------
// Phase 1: fixitElementAST.fixItInsertBefore? optional
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST_2E_fixItInsertBefore_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementAST_2E_fixItInsertBefore mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementAST_2E_fixItInsertBefore_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementAST_2E_fixItInsertBefore_3F_ (const GGS_fixitElementAST_2E_fixItInsertBefore & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementAST_2E_fixItInsertBefore_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementAST_2E_fixItInsertBefore unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertBefore_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitElementAST_2E_fixItReplace struct
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST_2E_fixItReplace : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionAST mProperty_exp ;
  public: inline GGS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_location mProperty_errorLocation ;
  public: inline GGS_location readProperty_errorLocation (void) const {
    return mProperty_errorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementAST_2E_fixItReplace (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setErrorLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_errorLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementAST_2E_fixItReplace (const GGS_semanticExpressionAST & in_exp,
                                               const GGS_location & in_errorLocation) ;

//--------------------------------- Copy constructor
  public: GGS_fixitElementAST_2E_fixItReplace (const GGS_fixitElementAST_2E_fixItReplace & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fixitElementAST_2E_fixItReplace & operator = (const GGS_fixitElementAST_2E_fixItReplace & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementAST_2E_fixItReplace init_21__21_ (const class GGS_semanticExpressionAST & inOperand0,
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace ;

//--------------------------------------------------------------------------------------------------
// Phase 1: fixitElementAST.fixItReplace? optional
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST_2E_fixItReplace_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementAST_2E_fixItReplace mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementAST_2E_fixItReplace_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementAST_2E_fixItReplace_3F_ (const GGS_fixitElementAST_2E_fixItReplace & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementAST_2E_fixItReplace_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementAST_2E_fixItReplace unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [fixitElementAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_fixitElementAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_fixitElementAST_5D_ (const class GGS__5B_fixitElementAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_fixitElementAST_5D_ (const DownEnumerator__5B_fixitElementAST_5D_ &) = delete ;
  private: DownEnumerator__5B_fixitElementAST_5D_ & operator = (const DownEnumerator__5B_fixitElementAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_fixitElementAST current (LOCATION_ARGS) const ;
  public: class GGS_fixitElementAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_fixitElementAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_fixitElementAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_fixitElementAST_5D_ (const class GGS__5B_fixitElementAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_fixitElementAST_5D_ (const UpEnumerator__5B_fixitElementAST_5D_ &) = delete ;
  private: UpEnumerator__5B_fixitElementAST_5D_ & operator = (const UpEnumerator__5B_fixitElementAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_fixitElementAST current (LOCATION_ARGS) const ;
  public: class GGS_fixitElementAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_fixitElementAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_fixitElementAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_fixitElementAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_fixitElementAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_fixitElementAST_5D_ (const GGS__5B_fixitElementAST_5D_ & inSource) ;
  public: GGS__5B_fixitElementAST_5D_ & operator = (const GGS__5B_fixitElementAST_5D_ & inSource) ;

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
  public: static GGS__5B_fixitElementAST_5D_ init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_fixitElementAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_fixitElementAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_fixitElementAST_5D_ add_operation (const GGS__5B_fixitElementAST_5D_ & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_fixitElementAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_fixitElementAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_fixitElementAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_fixitElementAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_fixitElementAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_fixitElementAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_fixitElementAST getter_first (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_fixitElementAST getter_last (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_fixitElementAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_fixitElementAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                            const class GGS_uint & constinOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_fixitElementAST readSubscript__3F_ (const class GGS_uint & in0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_fixitElementAST_5D_ ;
  friend class DownEnumerator__5B_fixitElementAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_fixitElementAST_5D_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@[fixitElementAST] enterFixItListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterFixItListInSemanticContext (const class GGS__5B_fixitElementAST_5D_ inObject,
                                                      class GGS_unifiedTypeMap & io_ioTypeMap,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_unifiedTypeMap final {

  public: DownEnumerator_unifiedTypeMap (const class GGS_unifiedTypeMap & inMap) ;

  public: ~ DownEnumerator_unifiedTypeMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapElementClass current_mElement (LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_unifiedTypeMap (const DownEnumerator_unifiedTypeMap &) = delete ;
  private: DownEnumerator_unifiedTypeMap & operator = (const DownEnumerator_unifiedTypeMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_unifiedTypeMap final {
  public: UpEnumerator_unifiedTypeMap (const class GGS_unifiedTypeMap & inMap)  ;

  public: ~ UpEnumerator_unifiedTypeMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapElementClass current_mElement (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_unifiedTypeMap (const UpEnumerator_unifiedTypeMap &) = delete ;
  private: UpEnumerator_unifiedTypeMap & operator = (const UpEnumerator_unifiedTypeMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_unifiedTypeMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_unifiedTypeMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_unifiedTypeMap (void) ;

//--- Handle copy
  public: GGS_unifiedTypeMap (const GGS_unifiedTypeMap & inSource) ;
  public: GGS_unifiedTypeMap & operator = (const GGS_unifiedTypeMap & inSource) ;

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
  protected: void performInsert (const class GGS_unifiedTypeMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unifiedTypeMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_unifiedTypeMap class_func_mapWithMapToOverride (const class GGS_unifiedTypeMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_internalInsertKey (class GGS_lstring constinArgument0,
                                         class GGS_unifiedTypeMapElementClass constinArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMElementForKey (class GGS_unifiedTypeMapElementClass constinArgument0,
                                         class GGS_string constinArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
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

  public: class GGS_unifiedTypeMapElementClass getter_mElementForKey (const class GGS_string & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMap getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_unifiedTypeMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_unifiedTypeMap ;
  friend class DownEnumerator_unifiedTypeMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMap ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@semanticExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterExpressionInSemanticContext (class cPtr_semanticExpressionAST * inObject,
                                                           class GGS_unifiedTypeMap & io_ioTypeMap,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum fixitElementForGeneration
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_fixItRemove,
    enum_fixItReplace,
    enum_fixItInsertBefore,
    enum_fixItInsertAfter
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fixItReplace (class GGS_semanticExpressionForGeneration & out_exp) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fixItInsertBefore (class GGS_semanticExpressionForGeneration & out_exp) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fixItInsertAfter (class GGS_semanticExpressionForGeneration & out_exp) const ;

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
  public: static class GGS_fixitElementForGeneration class_func_fixItInsertAfter (const class GGS_semanticExpressionForGeneration & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_fixitElementForGeneration class_func_fixItInsertBefore (const class GGS_semanticExpressionForGeneration & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_fixitElementForGeneration class_func_fixItRemove (LOCATION_ARGS) ;

  public: static class GGS_fixitElementForGeneration class_func_fixItReplace (const class GGS_semanticExpressionForGeneration & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractFixItInsertAfter (class GGS_semanticExpressionForGeneration & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: void method_extractFixItInsertBefore (class GGS_semanticExpressionForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: void method_extractFixItReplace (class GGS_semanticExpressionForGeneration & outArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ getter_getFixItInsertAfter (LOCATION_ARGS) const ;

  public: class GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ getter_getFixItInsertBefore (LOCATION_ARGS) const ;

  public: class GGS_fixitElementForGeneration_2E_fixItReplace_3F_ getter_getFixItReplace (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isFixItInsertAfter (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isFixItInsertBefore (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isFixItRemove (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isFixItReplace (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticExpressionForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_semanticExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_semanticExpressionForGeneration (const class cPtr_semanticExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mResultType (void) const ;

  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticExpressionForGeneration init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitElementForGeneration_2E_fixItInsertAfter struct
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItInsertAfter : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter (const GGS_semanticExpressionForGeneration & in_exp) ;

//--------------------------------- Copy constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter & operator = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementForGeneration_2E_fixItInsertAfter init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter ;

//--------------------------------------------------------------------------------------------------
// Phase 1: fixitElementForGeneration.fixItInsertAfter? optional
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementForGeneration_2E_fixItInsertAfter mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementForGeneration_2E_fixItInsertAfter unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitElementForGeneration_2E_fixItInsertBefore struct
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItInsertBefore : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore (const GGS_semanticExpressionForGeneration & in_exp) ;

//--------------------------------- Copy constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore & operator = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementForGeneration_2E_fixItInsertBefore init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore ;

//--------------------------------------------------------------------------------------------------
// Phase 1: fixitElementForGeneration.fixItInsertBefore? optional
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementForGeneration_2E_fixItInsertBefore mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementForGeneration_2E_fixItInsertBefore unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitElementForGeneration_2E_fixItReplace struct
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItReplace : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItReplace (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementForGeneration_2E_fixItReplace (const GGS_semanticExpressionForGeneration & in_exp) ;

//--------------------------------- Copy constructor
  public: GGS_fixitElementForGeneration_2E_fixItReplace (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fixitElementForGeneration_2E_fixItReplace & operator = (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementForGeneration_2E_fixItReplace init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace ;

//--------------------------------------------------------------------------------------------------
// Phase 1: fixitElementForGeneration.fixItReplace? optional
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItReplace_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementForGeneration_2E_fixItReplace mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementForGeneration_2E_fixItReplace_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementForGeneration_2E_fixItReplace unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [fixitElementForGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_fixitElementForGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_fixitElementForGeneration_5D_ (const class GGS__5B_fixitElementForGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_fixitElementForGeneration_5D_ (const DownEnumerator__5B_fixitElementForGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_fixitElementForGeneration_5D_ & operator = (const DownEnumerator__5B_fixitElementForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_fixitElementForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_fixitElementForGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_fixitElementForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_fixitElementForGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_fixitElementForGeneration_5D_ (const class GGS__5B_fixitElementForGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_fixitElementForGeneration_5D_ (const UpEnumerator__5B_fixitElementForGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_fixitElementForGeneration_5D_ & operator = (const UpEnumerator__5B_fixitElementForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_fixitElementForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_fixitElementForGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_fixitElementForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_fixitElementForGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_fixitElementForGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_fixitElementForGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_fixitElementForGeneration_5D_ (const GGS__5B_fixitElementForGeneration_5D_ & inSource) ;
  public: GGS__5B_fixitElementForGeneration_5D_ & operator = (const GGS__5B_fixitElementForGeneration_5D_ & inSource) ;

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
  public: static GGS__5B_fixitElementForGeneration_5D_ init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_fixitElementForGeneration_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_fixitElementForGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_fixitElementForGeneration_5D_ add_operation (const GGS__5B_fixitElementForGeneration_5D_ & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_fixitElementForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_fixitElementForGeneration constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_fixitElementForGeneration & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_fixitElementForGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_fixitElementForGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_fixitElementForGeneration constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_fixitElementForGeneration getter_first (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_fixitElementForGeneration getter_last (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_fixitElementForGeneration_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_fixitElementForGeneration_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                      const class GGS_uint & constinOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_fixitElementForGeneration readSubscript__3F_ (const class GGS_uint & in0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_fixitElementForGeneration_5D_ ;
  friend class DownEnumerator__5B_fixitElementForGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_fixitElementForGeneration_5D_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@[fixitElementForGeneration] generateFixIt'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateFixIt (const class GGS__5B_fixitElementForGeneration_5D_ inObject,
                                    class GGS_stringset & io_ioInclusionSet,
                                    class GGS_uint & io_ioTemporaryVariableIndex,
                                    class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                    const class GGS_bool constin__5F_inGenerateSyntaxDirectedTranslationString,
                                    class GGS_string & io_ioGeneratedCode,
                                    class GGS_string & out_outFixItArrayCppName,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @semanticExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_semanticExpressionForGeneration : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticExpressionForGeneration_init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                             const class GGS_location & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension func isTrueExpression
  public: virtual class GGS_bool getter_isTrueExpression (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension proc generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mResultType ;
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_semanticExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_semanticExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                const GGS_location & in_mLocation,
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
//
//Abstract extension proc '@semanticExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateExpression (class cPtr_semanticExpressionForGeneration * inObject,
                                             class GGS_string & io_ioGeneratedCode,
                                             class GGS_stringset & io_ioInclusionSet,
                                             class GGS_uint & io_ioTemporaryVariableIndex,
                                             class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                             class GGS_string & out_outCppExpression,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @errorInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_errorInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_errorInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_errorInstructionForGeneration (const class cPtr_errorInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mErrorExpression (void) const ;

  public: class GGS__5B_string_5D_ readProperty_mBuiltVariableCppNameList (void) const ;

  public: class GGS__5B_fixitElementForGeneration_5D_ readProperty_mFixitListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_errorInstructionForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                             const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                             const class GGS__5B_string_5D_ & inOperand3,
                                                                             const class GGS__5B_fixitElementForGeneration_5D_ & inOperand4,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_errorInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_errorInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @errorInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_errorInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void errorInstructionForGeneration_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                       const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                       const class GGS__5B_string_5D_ & inOperand3,
                                                                       const class GGS__5B_fixitElementForGeneration_5D_ & inOperand4,
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
  public: GGS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GGS_semanticExpressionForGeneration mProperty_mErrorExpression ;
  public: GGS__5B_string_5D_ mProperty_mBuiltVariableCppNameList ;
  public: GGS__5B_fixitElementForGeneration_5D_ mProperty_mFixitListForGeneration ;


//--- Default constructor
  public: cPtr_errorInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_errorInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                              const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                              const GGS_semanticExpressionForGeneration & in_mErrorExpression,
                                              const GGS__5B_string_5D_ & in_mBuiltVariableCppNameList,
                                              const GGS__5B_fixitElementForGeneration_5D_ & in_mFixitListForGeneration,
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
// Phase 1: @errorInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_errorInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_errorInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_errorInstructionForGeneration_2E_weak (const class GGS_errorInstructionForGeneration & inSource) ;

  public: GGS_errorInstructionForGeneration_2E_weak & operator = (const class GGS_errorInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_errorInstructionForGeneration_2E_weak init_nil (void) {
    GGS_errorInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_errorInstructionForGeneration bang_errorInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_errorInstructionForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_errorInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_errorInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_errorInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [formalParameterSignatureElement] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_formalParameterSignatureElement_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_formalParameterSignatureElement_5D_ (const class GGS__5B_formalParameterSignatureElement_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_formalParameterSignatureElement_5D_ (const DownEnumerator__5B_formalParameterSignatureElement_5D_ &) = delete ;
  private: DownEnumerator__5B_formalParameterSignatureElement_5D_ & operator = (const DownEnumerator__5B_formalParameterSignatureElement_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_formalParameterSignatureElement current (LOCATION_ARGS) const ;
  public: class GGS_formalParameterSignatureElement current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_formalParameterSignatureElement> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_formalParameterSignatureElement_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_formalParameterSignatureElement_5D_ (const class GGS__5B_formalParameterSignatureElement_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_formalParameterSignatureElement_5D_ (const UpEnumerator__5B_formalParameterSignatureElement_5D_ &) = delete ;
  private: UpEnumerator__5B_formalParameterSignatureElement_5D_ & operator = (const UpEnumerator__5B_formalParameterSignatureElement_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_formalParameterSignatureElement current (LOCATION_ARGS) const ;
  public: class GGS_formalParameterSignatureElement current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_formalParameterSignatureElement> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_formalParameterSignatureElement_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_formalParameterSignatureElement> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_formalParameterSignatureElement_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_formalParameterSignatureElement_5D_ (const GGS__5B_formalParameterSignatureElement_5D_ & inSource) ;
  public: GGS__5B_formalParameterSignatureElement_5D_ & operator = (const GGS__5B_formalParameterSignatureElement_5D_ & inSource) ;

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
  public: static GGS__5B_formalParameterSignatureElement_5D_ init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_formalParameterSignatureElement_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_formalParameterSignatureElement & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_formalParameterSignatureElement_5D_ add_operation (const GGS__5B_formalParameterSignatureElement_5D_ & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_formalParameterSignatureElement constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_formalParameterSignatureElement constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_formalParameterSignatureElement & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_formalParameterSignatureElement & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_formalParameterSignatureElement & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_formalParameterSignatureElement constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_formalParameterSignatureElement getter_first (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_formalParameterSignatureElement getter_last (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterSignatureElement_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterSignatureElement_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                            const class GGS_uint & constinOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_formalParameterSignatureElement readSubscript__3F_ (const class GGS_uint & in0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_formalParameterSignatureElement_5D_ ;
  friend class DownEnumerator__5B_formalParameterSignatureElement_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_formalParameterSignatureElement_5D_ ;

//--------------------------------------------------------------------------------------------------
//   enum formalArgumentPassingModeAST
//--------------------------------------------------------------------------------------------------

class GGS_formalArgumentPassingModeAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_formalArgumentPassingModeAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_argumentVarIn,
    enum_argumentOut,
    enum_argumentInOut,
    enum_argumentConstantIn
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
  public: static class GGS_formalArgumentPassingModeAST class_func_argumentConstantIn (LOCATION_ARGS) ;

  public: static class GGS_formalArgumentPassingModeAST class_func_argumentInOut (LOCATION_ARGS) ;

  public: static class GGS_formalArgumentPassingModeAST class_func_argumentOut (LOCATION_ARGS) ;

  public: static class GGS_formalArgumentPassingModeAST class_func_argumentVarIn (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_formalArgumentPassingModeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isArgumentConstantIn (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isArgumentInOut (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isArgumentOut (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isArgumentVarIn (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalArgumentPassingModeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formalParameterSignatureElement struct
//--------------------------------------------------------------------------------------------------

class GGS_formalParameterSignatureElement : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFormalSelector ;
  public: inline GGS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mFormalArgumentType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mFormalArgumentType (void) const {
    return mProperty_mFormalArgumentType ;
  }

  public: GGS_formalArgumentPassingModeAST mProperty_mFormalArgumentPassingMode ;
  public: inline GGS_formalArgumentPassingModeAST readProperty_mFormalArgumentPassingMode (void) const {
    return mProperty_mFormalArgumentPassingMode ;
  }

  public: GGS_string mProperty_mFormalArgumentName ;
  public: inline GGS_string readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_formalParameterSignatureElement (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentPassingMode (const GGS_formalArgumentPassingModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentPassingMode = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_formalParameterSignatureElement (const GGS_lstring & in_mFormalSelector,
                                               const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                               const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                               const GGS_string & in_mFormalArgumentName) ;

//--------------------------------- Copy constructor
  public: GGS_formalParameterSignatureElement (const GGS_formalParameterSignatureElement & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_formalParameterSignatureElement & operator = (const GGS_formalParameterSignatureElement & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formalParameterSignatureElement init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                           const class GGS_formalArgumentPassingModeAST & inOperand2,
                                                                           const class GGS_string & inOperand3,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalParameterSignatureElement ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @procCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_procCallInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_procCallInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_procCallInstructionForGeneration (const class cPtr_procCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_routineMangledName (void) const ;

  public: class GGS__5B_actualParameterForGeneration_5D_ readProperty_mActualParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_procCallInstructionForGeneration init_21_routineMangledName_21_ (const class GGS_lstring & inOperand0,
                                                                                      const class GGS__5B_actualParameterForGeneration_5D_ & inOperand1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_procCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procCallInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @procCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_procCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void procCallInstructionForGeneration_init_21_routineMangledName_21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS__5B_actualParameterForGeneration_5D_ & inOperand1,
                                                                                Compiler * inCompiler) ;


//--- Extension proc generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_routineMangledName ;
  public: GGS__5B_actualParameterForGeneration_5D_ mProperty_mActualParameterList ;


//--- Default constructor
  public: cPtr_procCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_procCallInstructionForGeneration (const GGS_lstring & in_routineMangledName,
                                                 const GGS__5B_actualParameterForGeneration_5D_ & in_mActualParameterList,
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
// Phase 1: @procCallInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_procCallInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_procCallInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_procCallInstructionForGeneration_2E_weak (const class GGS_procCallInstructionForGeneration & inSource) ;

  public: GGS_procCallInstructionForGeneration_2E_weak & operator = (const class GGS_procCallInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_procCallInstructionForGeneration_2E_weak init_nil (void) {
    GGS_procCallInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_procCallInstructionForGeneration bang_procCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_procCallInstructionForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_procCallInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_procCallInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procCallInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum opAssignmentOperator
//--------------------------------------------------------------------------------------------------

class GGS_opAssignmentOperator : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_opAssignmentOperator (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_andAssign,
    enum_orAssign,
    enum_xorAssign,
    enum_plusAssign,
    enum_minusAssign,
    enum_mulAssign,
    enum_divAssign
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
  public: static class GGS_opAssignmentOperator class_func_andAssign (LOCATION_ARGS) ;

  public: static class GGS_opAssignmentOperator class_func_divAssign (LOCATION_ARGS) ;

  public: static class GGS_opAssignmentOperator class_func_minusAssign (LOCATION_ARGS) ;

  public: static class GGS_opAssignmentOperator class_func_mulAssign (LOCATION_ARGS) ;

  public: static class GGS_opAssignmentOperator class_func_orAssign (LOCATION_ARGS) ;

  public: static class GGS_opAssignmentOperator class_func_plusAssign (LOCATION_ARGS) ;

  public: static class GGS_opAssignmentOperator class_func_xorAssign (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isAndAssign (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDivAssign (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMinusAssign (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMulAssign (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isOrAssign (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isPlusAssign (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isXorAssign (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_opAssignmentOperator ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@opAssignmentOperator string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_opAssignmentOperator & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@opAssignmentOperator cppFunctionName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_cppFunctionName (const class GGS_opAssignmentOperator & inObject,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @opAssignInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_opAssignInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_opAssignInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_opAssignInstructionForGeneration (const class cPtr_opAssignInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mTargetType (void) const ;

  public: class GGS_string readProperty_mTargetVariableCppName (void) const ;

  public: class GGS_string readProperty_mNameForCheckingFormalParameterUsing (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mStructAttributeList (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mSourceExpression (void) const ;

  public: class GGS_string readProperty_mGeneratedMethod (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_opAssignInstructionForGeneration init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                        const class GGS_string & inOperand2,
                                                                                        const class GGS_string & inOperand3,
                                                                                        const class GGS__5B_lstring_5D_ & inOperand4,
                                                                                        const class GGS_semanticExpressionForGeneration & inOperand5,
                                                                                        const class GGS_string & inOperand6,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_opAssignInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_opAssignInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @opAssignInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_opAssignInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void opAssignInstructionForGeneration_init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                  const class GGS_string & inOperand2,
                                                                                  const class GGS_string & inOperand3,
                                                                                  const class GGS__5B_lstring_5D_ & inOperand4,
                                                                                  const class GGS_semanticExpressionForGeneration & inOperand5,
                                                                                  const class GGS_string & inOperand6,
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
  public: GGS_unifiedTypeMapEntry mProperty_mTargetType ;
  public: GGS_string mProperty_mTargetVariableCppName ;
  public: GGS_string mProperty_mNameForCheckingFormalParameterUsing ;
  public: GGS__5B_lstring_5D_ mProperty_mStructAttributeList ;
  public: GGS_semanticExpressionForGeneration mProperty_mSourceExpression ;
  public: GGS_string mProperty_mGeneratedMethod ;


//--- Default constructor
  public: cPtr_opAssignInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_opAssignInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                 const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                 const GGS_string & in_mTargetVariableCppName,
                                                 const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                 const GGS__5B_lstring_5D_ & in_mStructAttributeList,
                                                 const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                                                 const GGS_string & in_mGeneratedMethod,
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
// Phase 1: @opAssignInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_opAssignInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_opAssignInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_opAssignInstructionForGeneration_2E_weak (const class GGS_opAssignInstructionForGeneration & inSource) ;

  public: GGS_opAssignInstructionForGeneration_2E_weak & operator = (const class GGS_opAssignInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_opAssignInstructionForGeneration_2E_weak init_nil (void) {
    GGS_opAssignInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_opAssignInstructionForGeneration bang_opAssignInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_opAssignInstructionForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_opAssignInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_opAssignInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_opAssignInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @plusPlusAssignInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_plusPlusAssignInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_plusPlusAssignInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_plusPlusAssignInstructionForGeneration (const class cPtr_plusPlusAssignInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mTargetType (void) const ;

  public: class GGS_string readProperty_mTargetVariableCppName (void) const ;

  public: class GGS_string readProperty_mNameForCheckingFormalParameterUsing (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mStructAttributeList (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mSourceExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_plusPlusAssignInstructionForGeneration init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                          const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                          const class GGS_string & inOperand2,
                                                                                          const class GGS_string & inOperand3,
                                                                                          const class GGS__5B_lstring_5D_ & inOperand4,
                                                                                          const class GGS_semanticExpressionForGeneration & inOperand5,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_plusPlusAssignInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_plusPlusAssignInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @plusPlusAssignInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_plusPlusAssignInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void plusPlusAssignInstructionForGeneration_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                    const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                    const class GGS_string & inOperand2,
                                                                                    const class GGS_string & inOperand3,
                                                                                    const class GGS__5B_lstring_5D_ & inOperand4,
                                                                                    const class GGS_semanticExpressionForGeneration & inOperand5,
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
  public: GGS_unifiedTypeMapEntry mProperty_mTargetType ;
  public: GGS_string mProperty_mTargetVariableCppName ;
  public: GGS_string mProperty_mNameForCheckingFormalParameterUsing ;
  public: GGS__5B_lstring_5D_ mProperty_mStructAttributeList ;
  public: GGS_semanticExpressionForGeneration mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_plusPlusAssignInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_plusPlusAssignInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                       const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                       const GGS_string & in_mTargetVariableCppName,
                                                       const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                       const GGS__5B_lstring_5D_ & in_mStructAttributeList,
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
// Phase 1: @plusPlusAssignInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_plusPlusAssignInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_plusPlusAssignInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_plusPlusAssignInstructionForGeneration_2E_weak (const class GGS_plusPlusAssignInstructionForGeneration & inSource) ;

  public: GGS_plusPlusAssignInstructionForGeneration_2E_weak & operator = (const class GGS_plusPlusAssignInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_plusPlusAssignInstructionForGeneration_2E_weak init_nil (void) {
    GGS_plusPlusAssignInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_plusPlusAssignInstructionForGeneration bang_plusPlusAssignInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_plusPlusAssignInstructionForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_plusPlusAssignInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_plusPlusAssignInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_plusPlusAssignInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @warningInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_warningInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_warningInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_warningInstructionForGeneration (const class cPtr_warningInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mWarningExpression (void) const ;

  public: class GGS__5B_fixitElementForGeneration_5D_ readProperty_mFixitListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_warningInstructionForGeneration init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                           const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                           const class GGS__5B_fixitElementForGeneration_5D_ & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_warningInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_warningInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @warningInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_warningInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void warningInstructionForGeneration_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                     const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                     const class GGS__5B_fixitElementForGeneration_5D_ & inOperand3,
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
  public: GGS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GGS_semanticExpressionForGeneration mProperty_mWarningExpression ;
  public: GGS__5B_fixitElementForGeneration_5D_ mProperty_mFixitListForGeneration ;


//--- Default constructor
  public: cPtr_warningInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_warningInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                const GGS_semanticExpressionForGeneration & in_mWarningExpression,
                                                const GGS__5B_fixitElementForGeneration_5D_ & in_mFixitListForGeneration,
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
// Phase 1: @warningInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_warningInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_warningInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_warningInstructionForGeneration_2E_weak (const class GGS_warningInstructionForGeneration & inSource) ;

  public: GGS_warningInstructionForGeneration_2E_weak & operator = (const class GGS_warningInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_warningInstructionForGeneration_2E_weak init_nil (void) {
    GGS_warningInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_warningInstructionForGeneration bang_warningInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_warningInstructionForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_warningInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_warningInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_warningInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [CommaSeparatedExpressionElement] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_CommaSeparatedExpressionElement_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_CommaSeparatedExpressionElement_5D_ (const class GGS__5B_CommaSeparatedExpressionElement_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_CommaSeparatedExpressionElement_5D_ (const DownEnumerator__5B_CommaSeparatedExpressionElement_5D_ &) = delete ;
  private: DownEnumerator__5B_CommaSeparatedExpressionElement_5D_ & operator = (const DownEnumerator__5B_CommaSeparatedExpressionElement_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_CommaSeparatedExpressionElement current (LOCATION_ARGS) const ;
  public: class GGS_CommaSeparatedExpressionElement current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_CommaSeparatedExpressionElement> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_CommaSeparatedExpressionElement_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_CommaSeparatedExpressionElement_5D_ (const class GGS__5B_CommaSeparatedExpressionElement_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_CommaSeparatedExpressionElement_5D_ (const UpEnumerator__5B_CommaSeparatedExpressionElement_5D_ &) = delete ;
  private: UpEnumerator__5B_CommaSeparatedExpressionElement_5D_ & operator = (const UpEnumerator__5B_CommaSeparatedExpressionElement_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_CommaSeparatedExpressionElement current (LOCATION_ARGS) const ;
  public: class GGS_CommaSeparatedExpressionElement current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_CommaSeparatedExpressionElement> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_CommaSeparatedExpressionElement_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_CommaSeparatedExpressionElement> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_CommaSeparatedExpressionElement_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_CommaSeparatedExpressionElement_5D_ (const GGS__5B_CommaSeparatedExpressionElement_5D_ & inSource) ;
  public: GGS__5B_CommaSeparatedExpressionElement_5D_ & operator = (const GGS__5B_CommaSeparatedExpressionElement_5D_ & inSource) ;

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
  public: static GGS__5B_CommaSeparatedExpressionElement_5D_ init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_CommaSeparatedExpressionElement_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_CommaSeparatedExpressionElement & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_CommaSeparatedExpressionElement_5D_ add_operation (const GGS__5B_CommaSeparatedExpressionElement_5D_ & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_CommaSeparatedExpressionElement constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_CommaSeparatedExpressionElement constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_CommaSeparatedExpressionElement & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_CommaSeparatedExpressionElement & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_CommaSeparatedExpressionElement & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_CommaSeparatedExpressionElement constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_CommaSeparatedExpressionElement getter_first (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_CommaSeparatedExpressionElement getter_last (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_CommaSeparatedExpressionElement_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_CommaSeparatedExpressionElement_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                            const class GGS_uint & constinOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_CommaSeparatedExpressionElement readSubscript__3F_ (const class GGS_uint & in0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_CommaSeparatedExpressionElement_5D_ ;
  friend class DownEnumerator__5B_CommaSeparatedExpressionElement_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_CommaSeparatedExpressionElement_5D_ ;

//--------------------------------------------------------------------------------------------------
//   enum ifExpressionKind
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_ifExpressionKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_regularExp,
    enum_letVarExp
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_regularExp (class GGS_semanticExpressionAST & out_exp,
                                                                   class GGS_location & out_endOfExp) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_letVarExp (class GGS_lstring & out_varName,
                                                                  class GGS_bool & out_isConstant,
                                                                  class GGS_semanticExpressionAST & out_exp,
                                                                  class GGS_location & out_endOfExp,
                                                                  class GGS_lstring & out_typeName) const ;

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
  public: static class GGS_ifExpressionKind class_func_letVarExp (const class GGS_lstring & inOperand0,
                                                                  const class GGS_bool & inOperand1,
                                                                  const class GGS_semanticExpressionAST & inOperand2,
                                                                  const class GGS_location & inOperand3,
                                                                  const class GGS_lstring & inOperand4
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_ifExpressionKind class_func_regularExp (const class GGS_semanticExpressionAST & inOperand0,
                                                                   const class GGS_location & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractLetVarExp (class GGS_lstring & outArgument0,
                                        class GGS_bool & outArgument1,
                                        class GGS_semanticExpressionAST & outArgument2,
                                        class GGS_location & outArgument3,
                                        class GGS_lstring & outArgument4,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const ;

  public: void method_extractRegularExp (class GGS_semanticExpressionAST & outArgument0,
                                         class GGS_location & outArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_ifExpressionKind_2E_letVarExp_3F_ getter_getLetVarExp (LOCATION_ARGS) const ;

  public: class GGS_ifExpressionKind_2E_regularExp_3F_ getter_getRegularExp (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLetVarExp (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRegularExp (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @CommaSeparatedExpressionElement struct
//--------------------------------------------------------------------------------------------------

class GGS_CommaSeparatedExpressionElement : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_ifExpressionKind mProperty_mExpression ;
  public: inline GGS_ifExpressionKind readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_CommaSeparatedExpressionElement (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GGS_ifExpressionKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_CommaSeparatedExpressionElement (const GGS_ifExpressionKind & in_mExpression) ;

//--------------------------------- Copy constructor
  public: GGS_CommaSeparatedExpressionElement (const GGS_CommaSeparatedExpressionElement & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_CommaSeparatedExpressionElement & operator = (const GGS_CommaSeparatedExpressionElement & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_CommaSeparatedExpressionElement init_21_ (const class GGS_ifExpressionKind & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_CommaSeparatedExpressionElement ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifExpressionKind_2E_letVarExp struct
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionKind_2E_letVarExp : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_varName ;
  public: inline GGS_lstring readProperty_varName (void) const {
    return mProperty_varName ;
  }

  public: GGS_bool mProperty_isConstant ;
  public: inline GGS_bool readProperty_isConstant (void) const {
    return mProperty_isConstant ;
  }

  public: GGS_semanticExpressionAST mProperty_exp ;
  public: inline GGS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_location mProperty_endOfExp ;
  public: inline GGS_location readProperty_endOfExp (void) const {
    return mProperty_endOfExp ;
  }

  public: GGS_lstring mProperty_typeName ;
  public: inline GGS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifExpressionKind_2E_letVarExp (void) ;

//--------------------------------- Property setters
  public: inline void setter_setVarName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_varName = inValue ;
  }

  public: inline void setter_setIsConstant (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isConstant = inValue ;
  }

  public: inline void setter_setExp (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setEndOfExp (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfExp = inValue ;
  }

  public: inline void setter_setTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifExpressionKind_2E_letVarExp (const GGS_lstring & in_varName,
                                             const GGS_bool & in_isConstant,
                                             const GGS_semanticExpressionAST & in_exp,
                                             const GGS_location & in_endOfExp,
                                             const GGS_lstring & in_typeName) ;

//--------------------------------- Copy constructor
  public: GGS_ifExpressionKind_2E_letVarExp (const GGS_ifExpressionKind_2E_letVarExp & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ifExpressionKind_2E_letVarExp & operator = (const GGS_ifExpressionKind_2E_letVarExp & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifExpressionKind_2E_letVarExp init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_bool & inOperand1,
                                                                             const class GGS_semanticExpressionAST & inOperand2,
                                                                             const class GGS_location & inOperand3,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp ;

//--------------------------------------------------------------------------------------------------
// Phase 1: ifExpressionKind.letVarExp? optional
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionKind_2E_letVarExp_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ifExpressionKind_2E_letVarExp mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ifExpressionKind_2E_letVarExp_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ifExpressionKind_2E_letVarExp_3F_ (const GGS_ifExpressionKind_2E_letVarExp & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ifExpressionKind_2E_letVarExp_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ifExpressionKind_2E_letVarExp unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifExpressionKind_2E_regularExp struct
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionKind_2E_regularExp : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionAST mProperty_exp ;
  public: inline GGS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_location mProperty_endOfExp ;
  public: inline GGS_location readProperty_endOfExp (void) const {
    return mProperty_endOfExp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifExpressionKind_2E_regularExp (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setEndOfExp (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfExp = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifExpressionKind_2E_regularExp (const GGS_semanticExpressionAST & in_exp,
                                              const GGS_location & in_endOfExp) ;

//--------------------------------- Copy constructor
  public: GGS_ifExpressionKind_2E_regularExp (const GGS_ifExpressionKind_2E_regularExp & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ifExpressionKind_2E_regularExp & operator = (const GGS_ifExpressionKind_2E_regularExp & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifExpressionKind_2E_regularExp init_21__21_ (const class GGS_semanticExpressionAST & inOperand0,
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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp ;

//--------------------------------------------------------------------------------------------------
// Phase 1: ifExpressionKind.regularExp? optional
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionKind_2E_regularExp_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ifExpressionKind_2E_regularExp mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ifExpressionKind_2E_regularExp_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ifExpressionKind_2E_regularExp_3F_ (const GGS_ifExpressionKind_2E_regularExp & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ifExpressionKind_2E_regularExp_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ifExpressionKind_2E_regularExp unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@[CommaSeparatedExpressionElement] enterExpressionListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterExpressionListInSemanticContext (const class GGS__5B_CommaSeparatedExpressionElement_5D_ inObject,
                                                           class GGS_unifiedTypeMap & io_ioTypeMap,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@unifiedTypeMap makeEntry'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntry (class GGS_unifiedTypeMap & ioObject,
                                const class GGS_lstring constin_inLKey,
                                class GGS_unifiedTypeMapEntry & out_outEntry,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [ifTestForGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_ifTestForGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_ifTestForGeneration_5D_ (const class GGS__5B_ifTestForGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_ifTestForGeneration_5D_ (const DownEnumerator__5B_ifTestForGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_ifTestForGeneration_5D_ & operator = (const DownEnumerator__5B_ifTestForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_ifTestForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_ifTestForGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_ifTestForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_ifTestForGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_ifTestForGeneration_5D_ (const class GGS__5B_ifTestForGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_ifTestForGeneration_5D_ (const UpEnumerator__5B_ifTestForGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_ifTestForGeneration_5D_ & operator = (const UpEnumerator__5B_ifTestForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_ifTestForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_ifTestForGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_ifTestForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_ifTestForGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_ifTestForGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_ifTestForGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_ifTestForGeneration_5D_ (const GGS__5B_ifTestForGeneration_5D_ & inSource) ;
  public: GGS__5B_ifTestForGeneration_5D_ & operator = (const GGS__5B_ifTestForGeneration_5D_ & inSource) ;

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
  public: static GGS__5B_ifTestForGeneration_5D_ init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_ifTestForGeneration_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_ifTestForGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_ifTestForGeneration_5D_ add_operation (const GGS__5B_ifTestForGeneration_5D_ & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_ifTestForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_ifTestForGeneration constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_ifTestForGeneration & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_ifTestForGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_ifTestForGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_ifTestForGeneration constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_ifTestForGeneration getter_first (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_ifTestForGeneration getter_last (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_ifTestForGeneration_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_ifTestForGeneration_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                const class GGS_uint & constinOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_ifTestForGeneration readSubscript__3F_ (const class GGS_uint & in0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_ifTestForGeneration_5D_ ;
  friend class DownEnumerator__5B_ifTestForGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_ifTestForGeneration_5D_ ;

//--------------------------------------------------------------------------------------------------
//   enum ifTestForGeneration
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_regular,
    enum_letVarExp,
    enum_optionalExp
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_regular (class GGS_semanticExpressionForGeneration & out_exp) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_letVarExp (class GGS_string & out_targetVarCppName,
                                                                  class GGS_semanticExpressionForGeneration & out_exp,
                                                                  class GGS_unifiedTypeMapEntry & out_targetType,
                                                                  class GGS_unifiedTypeMapEntry & out_testType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_optionalExp (class GGS_string & out_targetVarCppName,
                                                                    class GGS_bool & out_isConstant,
                                                                    class GGS_semanticExpressionForGeneration & out_exp,
                                                                    class GGS_unifiedTypeMapEntry & out_targetType) const ;

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
  public: static class GGS_ifTestForGeneration class_func_letVarExp (const class GGS_string & inOperand0,
                                                                     const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                     const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                     const class GGS_unifiedTypeMapEntry & inOperand3
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_ifTestForGeneration class_func_optionalExp (const class GGS_string & inOperand0,
                                                                       const class GGS_bool & inOperand1,
                                                                       const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                       const class GGS_unifiedTypeMapEntry & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GGS_ifTestForGeneration class_func_regular (const class GGS_semanticExpressionForGeneration & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractLetVarExp (class GGS_string & outArgument0,
                                        class GGS_semanticExpressionForGeneration & outArgument1,
                                        class GGS_unifiedTypeMapEntry & outArgument2,
                                        class GGS_unifiedTypeMapEntry & outArgument3,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const ;

  public: void method_extractOptionalExp (class GGS_string & outArgument0,
                                          class GGS_bool & outArgument1,
                                          class GGS_semanticExpressionForGeneration & outArgument2,
                                          class GGS_unifiedTypeMapEntry & outArgument3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;

  public: void method_extractRegular (class GGS_semanticExpressionForGeneration & outArgument0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_ifTestForGeneration_2E_letVarExp_3F_ getter_getLetVarExp (LOCATION_ARGS) const ;

  public: class GGS_ifTestForGeneration_2E_optionalExp_3F_ getter_getOptionalExp (LOCATION_ARGS) const ;

  public: class GGS_ifTestForGeneration_2E_regular_3F_ getter_getRegular (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLetVarExp (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isOptionalExp (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRegular (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifTestForGeneration_2E_letVarExp struct
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration_2E_letVarExp : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_targetVarCppName ;
  public: inline GGS_string readProperty_targetVarCppName (void) const {
    return mProperty_targetVarCppName ;
  }

  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_targetType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_targetType (void) const {
    return mProperty_targetType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_testType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_testType (void) const {
    return mProperty_testType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration_2E_letVarExp (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTargetVarCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_targetVarCppName = inValue ;
  }

  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setTargetType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_targetType = inValue ;
  }

  public: inline void setter_setTestType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_testType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifTestForGeneration_2E_letVarExp (const GGS_string & in_targetVarCppName,
                                                const GGS_semanticExpressionForGeneration & in_exp,
                                                const GGS_unifiedTypeMapEntry & in_targetType,
                                                const GGS_unifiedTypeMapEntry & in_testType) ;

//--------------------------------- Copy constructor
  public: GGS_ifTestForGeneration_2E_letVarExp (const GGS_ifTestForGeneration_2E_letVarExp & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ifTestForGeneration_2E_letVarExp & operator = (const GGS_ifTestForGeneration_2E_letVarExp & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifTestForGeneration_2E_letVarExp init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                            const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                            const class GGS_unifiedTypeMapEntry & inOperand2,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letVarExp ;

//--------------------------------------------------------------------------------------------------
// Phase 1: ifTestForGeneration.letVarExp? optional
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration_2E_letVarExp_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ifTestForGeneration_2E_letVarExp mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration_2E_letVarExp_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ifTestForGeneration_2E_letVarExp_3F_ (const GGS_ifTestForGeneration_2E_letVarExp & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ifTestForGeneration_2E_letVarExp_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ifTestForGeneration_2E_letVarExp unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letVarExp_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifTestForGeneration_2E_optionalExp struct
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration_2E_optionalExp : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_targetVarCppName ;
  public: inline GGS_string readProperty_targetVarCppName (void) const {
    return mProperty_targetVarCppName ;
  }

  public: GGS_bool mProperty_isConstant ;
  public: inline GGS_bool readProperty_isConstant (void) const {
    return mProperty_isConstant ;
  }

  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_targetType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_targetType (void) const {
    return mProperty_targetType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration_2E_optionalExp (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTargetVarCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_targetVarCppName = inValue ;
  }

  public: inline void setter_setIsConstant (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isConstant = inValue ;
  }

  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setTargetType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_targetType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifTestForGeneration_2E_optionalExp (const GGS_string & in_targetVarCppName,
                                                  const GGS_bool & in_isConstant,
                                                  const GGS_semanticExpressionForGeneration & in_exp,
                                                  const GGS_unifiedTypeMapEntry & in_targetType) ;

//--------------------------------- Copy constructor
  public: GGS_ifTestForGeneration_2E_optionalExp (const GGS_ifTestForGeneration_2E_optionalExp & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ifTestForGeneration_2E_optionalExp & operator = (const GGS_ifTestForGeneration_2E_optionalExp & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifTestForGeneration_2E_optionalExp init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                              const class GGS_bool & inOperand1,
                                                                              const class GGS_semanticExpressionForGeneration & inOperand2,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp ;

//--------------------------------------------------------------------------------------------------
// Phase 1: ifTestForGeneration.optionalExp? optional
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration_2E_optionalExp_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ifTestForGeneration_2E_optionalExp mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration_2E_optionalExp_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ifTestForGeneration_2E_optionalExp_3F_ (const GGS_ifTestForGeneration_2E_optionalExp & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ifTestForGeneration_2E_optionalExp_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ifTestForGeneration_2E_optionalExp unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifTestForGeneration_2E_regular struct
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration_2E_regular : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration_2E_regular (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifTestForGeneration_2E_regular (const GGS_semanticExpressionForGeneration & in_exp) ;

//--------------------------------- Copy constructor
  public: GGS_ifTestForGeneration_2E_regular (const GGS_ifTestForGeneration_2E_regular & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ifTestForGeneration_2E_regular & operator = (const GGS_ifTestForGeneration_2E_regular & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifTestForGeneration_2E_regular init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular ;

//--------------------------------------------------------------------------------------------------
// Phase 1: ifTestForGeneration.regular? optional
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration_2E_regular_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ifTestForGeneration_2E_regular mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration_2E_regular_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ifTestForGeneration_2E_regular_3F_ (const GGS_ifTestForGeneration_2E_regular & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ifTestForGeneration_2E_regular_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ifTestForGeneration_2E_regular unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@[CommaSeparatedExpressionElement] analyzeSemanticExpressionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeSemanticExpressionList (const class GGS__5B_CommaSeparatedExpressionElement_5D_ inObject,
                                                    const class GGS_lstring constin_inUsefulnessCallerEntityName,
                                                    class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                    const class GGS_analysisContext constin_inAnalysisContext,
                                                    class GGS_unifiedTypeMap & io_ioTypeMap,
                                                    class GGS_localVarManager & io_ioVariableMap,
                                                    class GGS__5B_ifTestForGeneration_5D_ & out_outTestListForGeneration,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum typeKindEnum
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_typeKindEnum (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_classType,
    enum_weakReferenceType,
    enum_enumType,
    enum_listType,
    enum_sortedListType,
    enum_mapType,
    enum_sharedMapType,
    enum_sharedMapEntryType,
    enum_listMapType,
    enum_boolsetType,
    enum_structType,
    enum_graphType,
    enum_externType,
    enum_otherType,
    enum_packageType
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_weakReferenceType (class GGS_unifiedTypeMapEntry & out_referenceType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_enumType (class GGS_constantIndexMap & out_constantMap) const ;

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
  public: static class GGS_typeKindEnum class_func_boolsetType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_classType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_enumType (const class GGS_constantIndexMap & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_externType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_graphType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_listMapType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_listType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_mapType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_otherType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_packageType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_sharedMapEntryType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_sharedMapType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_sortedListType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_structType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_weakReferenceType (const class GGS_unifiedTypeMapEntry & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKindEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractEnumType (class GGS_constantIndexMap & outArgument0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  public: void method_extractWeakReferenceType (class GGS_unifiedTypeMapEntry & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_typeKindEnum_2E_enumType_3F_ getter_getEnumType (LOCATION_ARGS) const ;

  public: class GGS_typeKindEnum_2E_weakReferenceType_3F_ getter_getWeakReferenceType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBoolsetType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isClassType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isEnumType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isExternType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isGraphType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isListMapType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isListType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMapType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isOtherType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isPackageType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSharedMapEntryType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSharedMapType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSortedListType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isStructType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isWeakReferenceType (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindEnum ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMapEntry definition' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeDefinition extensionGetter_definition (const class GGS_unifiedTypeMapEntry & inObject,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMap typeMapEntryForLKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry extensionGetter_typeMapEntryForLKey (const class GGS_unifiedTypeMap & inObject,
                                                                   const class GGS_lstring & constinArgument0,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @usefulEntitiesGraph graph
//--------------------------------------------------------------------------------------------------

class GGS_usefulEntitiesGraph final : public AC_GALGAS_root {
//--- Private Data member
  private: class SharedGraph_usefulEntitiesGraph * mSharedGraph ;

//--- Default constructor
  public: GGS_usefulEntitiesGraph (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_usefulEntitiesGraph (void) ;

//--- count
  public: uint32_t count (void) const ;

//--- isValid
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return mSharedGraph != nullptr ;
  }

//--- drop
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--- Handle copy
  public: GGS_usefulEntitiesGraph (const GGS_usefulEntitiesGraph & inSource) ;
  public: GGS_usefulEntitiesGraph & operator = (const GGS_usefulEntitiesGraph & inSource) ;

//--- Create a new list
  protected: void makeNewEmptyGraph (LOCATION_ARGS) ;

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNodeDefined (const GGS_string & inKey COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_string_5D_ getter_keyList (LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_lkeyList (LOCATION_ARGS) const ;

  public: class GGS_uint getter_undefinedNodeCount (LOCATION_ARGS) const ;

  public: class GGS__5B_string_5D_ getter_undefinedNodeKeyList (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const GGS_string & inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: GGS_string getter_graphviz (UNUSED_LOCATION_ARGS) const ;

  public: GGS__5B_NameValue_5D_ getter_edges (UNUSED_LOCATION_ARGS) const ;

//--------------------------------- Setters
  public: void setter_addEdge (const class GGS_lstring & inSourceNodeKey,
                               const class GGS_lstring & inTargetNodeKey
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeEdgesToNode (const GGS_string & inNodeName,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

  public: void setter_removeEdgesToDominators (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_usefulEntitiesGraph & inOperand) const ;

//--- Description
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--- Internal methods for handling graph
  protected: void reversedGraphFromGraph (const GGS_usefulEntitiesGraph & inGraph
                                          COMMA_LOCATION_ARGS) ;

  protected: void subGraph (GGS_usefulEntitiesGraph & outResultingGraph,
                            const class GGS__5B_lstring_5D_ & inStartNodes,
                            const class GGS_stringset & inNodesToExclude,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;


  protected: GGS__5B_lstring_5D_ graph (void) const ;

  private: void insulateGraph (LOCATION_ARGS) ;

  protected: void internalAddNode (const GGS_lstring & inKey,
                                   const char * inErrorMessage,
                                   const GGS_lstring & inElement,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_noteNode (const GGS_lstring & inKey
                                COMMA_LOCATION_ARGS) ;

  public: GGS__5B_lstring_5D_ getter_undefinedNodeReferenceList (LOCATION_ARGS) const ;

  protected: void internalTopologicalSort (GGS__5B_lstring_5D_ & outSortedList,
                                           GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                           GGS__5B_lstring_5D_ & outUnsortedList,
                                           GGS__5B_lstring_5D_ & outUnsortedNodeKeyList,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;

  protected: void internalFindCircularities (GGS__5B_lstring_5D_ & outInfoList,
                                             GGS__5B_lstring_5D_ & outNodeKeyList
                                             COMMA_UNUSED_LOCATION_ARGS) const ;

  protected: void internalNodesWithNoPredecessor (GGS__5B_lstring_5D_ & outSortedList,
                                                  GGS__5B_lstring_5D_ & outSortedNodeKeyList
                                                  COMMA_LOCATION_ARGS) const ;

  protected: void internalNodesWithNoSuccessor (GGS__5B_lstring_5D_ & outSortedList,
                                                GGS__5B_lstring_5D_ & outSortedNodeKeyList
                                                COMMA_LOCATION_ARGS) const ;


  protected: void internalDepthFirstTopologicalSort (GGS__5B_lstring_5D_ & outSortedList,
                                                     GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                                     GGS__5B_lstring_5D_ & outUnsortedList,
                                                     GGS__5B_lstring_5D_ & outUnsortedNodeKeyList,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  friend class SharedGraph_usefulEntitiesGraph ;


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_usefulEntitiesGraph init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: void setter_addNode (class GGS_lstring inArgument0,
                               class GGS_lstring inArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_circularities (class GGS__5B_lstring_5D_ & outArgument0,
                                     class GGS__5B_lstring_5D_ & outArgument1
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_depthFirstTopologicalSort (class GGS__5B_lstring_5D_ & outArgument0,
                                                 class GGS__5B_lstring_5D_ & outArgument1,
                                                 class GGS__5B_lstring_5D_ & outArgument2,
                                                 class GGS__5B_lstring_5D_ & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: void method_nodesWithNoPredecessor (class GGS__5B_lstring_5D_ & outArgument0,
                                              class GGS__5B_lstring_5D_ & outArgument1
                                              COMMA_LOCATION_ARGS) const ;

  public: void method_nodesWithNoSuccessor (class GGS__5B_lstring_5D_ & outArgument0,
                                            class GGS__5B_lstring_5D_ & outArgument1
                                            COMMA_LOCATION_ARGS) const ;

  public: void method_topologicalSort (class GGS__5B_lstring_5D_ & outArgument0,
                                       class GGS__5B_lstring_5D_ & outArgument1,
                                       class GGS__5B_lstring_5D_ & outArgument2,
                                       class GGS__5B_lstring_5D_ & outArgument3,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS__5B_lstring_5D_ getter_accessibleNodesFrom (const class GGS__5B_lstring_5D_ & constinOperand0,
                                                                const class GGS_stringset & constinOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_nodeList (LOCATION_ARGS) const ;

  public: class GGS_usefulEntitiesGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: class GGS_usefulEntitiesGraph getter_subgraphFromNodes (const class GGS__5B_lstring_5D_ & constinOperand0,
                                                                  const class GGS_stringset & constinOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_usefulEntitiesGraph ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager insertInitializedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalConstant (class GGS_localVarManager & ioObject,
                                                     const class GGS_lstring constin_inVarName,
                                                     const class GGS_unifiedTypeMapEntry constin_inType,
                                                     const class GGS_string constin_inCppName,
                                                     const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager insertInitializedLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalVariable (class GGS_localVarManager & ioObject,
                                                     const class GGS_lstring constin_inVarName,
                                                     const class GGS_bool constin_inWarnsIfNotMutated,
                                                     const class GGS_unifiedTypeMapEntry constin_inType,
                                                     const class GGS_string constin_inCppName,
                                                     const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager openBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (class GGS_localVarManager & ioObject,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarManager openOverrideForSelectBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (class GGS_localVarManager & ioObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKindEnum_2E_weakReferenceType struct
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum_2E_weakReferenceType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_referenceType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_referenceType (void) const {
    return mProperty_referenceType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKindEnum_2E_weakReferenceType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setReferenceType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_referenceType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKindEnum_2E_weakReferenceType (const GGS_unifiedTypeMapEntry & in_referenceType) ;

//--------------------------------- Copy constructor
  public: GGS_typeKindEnum_2E_weakReferenceType (const GGS_typeKindEnum_2E_weakReferenceType & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKindEnum_2E_weakReferenceType & operator = (const GGS_typeKindEnum_2E_weakReferenceType & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKindEnum_2E_weakReferenceType init_21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKindEnum_2E_weakReferenceType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_weakReferenceType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeKindEnum.weakReferenceType? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum_2E_weakReferenceType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKindEnum_2E_weakReferenceType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKindEnum_2E_weakReferenceType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKindEnum_2E_weakReferenceType_3F_ (const GGS_typeKindEnum_2E_weakReferenceType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKindEnum_2E_weakReferenceType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeKindEnum_2E_weakReferenceType unwrappedValue (void) const {
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
  public: ComparisonResult objectCompare (const GGS_typeKindEnum_2E_weakReferenceType_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_weakReferenceType_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExpressionIsBoolean???!'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExpressionIsBoolean_3F__3F__3F__21_ (const class GGS_analysisContext constinArgument0,
                                                       const class GGS_location constinArgument1,
                                                       const class GGS_semanticExpressionForGeneration constinArgument2,
                                                       class GGS_semanticExpressionForGeneration & outArgument3,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@semanticExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticExpression (class cPtr_semanticExpressionAST * inObject,
                                                    const class GGS_lstring constin_inUsefulnessCallerEntityName,
                                                    class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                    const class GGS_unifiedTypeMapEntry constin_inType,
                                                    const class GGS_analysisContext constin_inAnalysisContext,
                                                    class GGS_unifiedTypeMap & io_ioTypeMap,
                                                    class GGS_localVarManager & io_ioVariableMap,
                                                    class GGS_semanticExpressionForGeneration & out_outExpression,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum selfAvailability
//--------------------------------------------------------------------------------------------------

class GGS_selfAvailability : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_selfAvailability (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_available
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_available (class GGS_unifiedTypeMapEntry & out_type,
                                                                  class GGS_selfMutability & out_selfMutability) const ;

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
  public: static class GGS_selfAvailability class_func_available (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                  const class GGS_selfMutability & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_selfAvailability class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfAvailability & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractAvailable (class GGS_unifiedTypeMapEntry & outArgument0,
                                        class GGS_selfMutability & outArgument1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_selfAvailability_2E_available_3F_ getter_getAvailable (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isAvailable (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAvailability ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @predefinedTypes struct
//--------------------------------------------------------------------------------------------------

class GGS_predefinedTypes : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mLocationType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mLocationType (void) const {
    return mProperty_mLocationType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mBoolType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mBoolType (void) const {
    return mProperty_mBoolType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mCharType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mCharType (void) const {
    return mProperty_mCharType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mStringType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mStringType (void) const {
    return mProperty_mStringType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mUIntType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mUIntType (void) const {
    return mProperty_mUIntType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mSIntType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mSIntType (void) const {
    return mProperty_mSIntType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mUInt_36__34_Type ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mUInt_36__34_Type (void) const {
    return mProperty_mUInt_36__34_Type ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mSInt_36__34_Type ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mSInt_36__34_Type (void) const {
    return mProperty_mSInt_36__34_Type ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mDoubleType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mDoubleType (void) const {
    return mProperty_mDoubleType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mLBoolType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mLBoolType (void) const {
    return mProperty_mLBoolType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mLCharType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mLCharType (void) const {
    return mProperty_mLCharType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mLStringType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mLStringType (void) const {
    return mProperty_mLStringType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mLUIntType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mLUIntType (void) const {
    return mProperty_mLUIntType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mLSIntType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mLSIntType (void) const {
    return mProperty_mLSIntType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mLUInt_36__34_Type ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mLUInt_36__34_Type (void) const {
    return mProperty_mLUInt_36__34_Type ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mLSInt_36__34_Type ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mLSInt_36__34_Type (void) const {
    return mProperty_mLSInt_36__34_Type ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mLDoubleType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mLDoubleType (void) const {
    return mProperty_mLDoubleType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mLBigIntType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mLBigIntType (void) const {
    return mProperty_mLBigIntType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mBigIntType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mBigIntType (void) const {
    return mProperty_mBigIntType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mStringSetType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mStringSetType (void) const {
    return mProperty_mStringSetType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mStringArrayType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mStringArrayType (void) const {
    return mProperty_mStringArrayType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mLStringArrayType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mLStringArrayType (void) const {
    return mProperty_mLStringArrayType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_predefinedTypes (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLocationType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocationType = inValue ;
  }

  public: inline void setter_setMBoolType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoolType = inValue ;
  }

  public: inline void setter_setMCharType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCharType = inValue ;
  }

  public: inline void setter_setMStringType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStringType = inValue ;
  }

  public: inline void setter_setMUIntType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUIntType = inValue ;
  }

  public: inline void setter_setMSIntType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSIntType = inValue ;
  }

  public: inline void setter_setMUInt_36__34_Type (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUInt_36__34_Type = inValue ;
  }

  public: inline void setter_setMSInt_36__34_Type (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSInt_36__34_Type = inValue ;
  }

  public: inline void setter_setMDoubleType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDoubleType = inValue ;
  }

  public: inline void setter_setMLBoolType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLBoolType = inValue ;
  }

  public: inline void setter_setMLCharType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLCharType = inValue ;
  }

  public: inline void setter_setMLStringType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLStringType = inValue ;
  }

  public: inline void setter_setMLUIntType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLUIntType = inValue ;
  }

  public: inline void setter_setMLSIntType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLSIntType = inValue ;
  }

  public: inline void setter_setMLUInt_36__34_Type (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLUInt_36__34_Type = inValue ;
  }

  public: inline void setter_setMLSInt_36__34_Type (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLSInt_36__34_Type = inValue ;
  }

  public: inline void setter_setMLDoubleType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLDoubleType = inValue ;
  }

  public: inline void setter_setMLBigIntType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLBigIntType = inValue ;
  }

  public: inline void setter_setMBigIntType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBigIntType = inValue ;
  }

  public: inline void setter_setMStringSetType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStringSetType = inValue ;
  }

  public: inline void setter_setMStringArrayType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStringArrayType = inValue ;
  }

  public: inline void setter_setMLStringArrayType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLStringArrayType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_predefinedTypes (const GGS_unifiedTypeMapEntry & in_mLocationType,
                               const GGS_unifiedTypeMapEntry & in_mBoolType,
                               const GGS_unifiedTypeMapEntry & in_mCharType,
                               const GGS_unifiedTypeMapEntry & in_mStringType,
                               const GGS_unifiedTypeMapEntry & in_mUIntType,
                               const GGS_unifiedTypeMapEntry & in_mSIntType,
                               const GGS_unifiedTypeMapEntry & in_mUInt_36__34_Type,
                               const GGS_unifiedTypeMapEntry & in_mSInt_36__34_Type,
                               const GGS_unifiedTypeMapEntry & in_mDoubleType,
                               const GGS_unifiedTypeMapEntry & in_mLBoolType,
                               const GGS_unifiedTypeMapEntry & in_mLCharType,
                               const GGS_unifiedTypeMapEntry & in_mLStringType,
                               const GGS_unifiedTypeMapEntry & in_mLUIntType,
                               const GGS_unifiedTypeMapEntry & in_mLSIntType,
                               const GGS_unifiedTypeMapEntry & in_mLUInt_36__34_Type,
                               const GGS_unifiedTypeMapEntry & in_mLSInt_36__34_Type,
                               const GGS_unifiedTypeMapEntry & in_mLDoubleType,
                               const GGS_unifiedTypeMapEntry & in_mLBigIntType,
                               const GGS_unifiedTypeMapEntry & in_mBigIntType,
                               const GGS_unifiedTypeMapEntry & in_mStringSetType,
                               const GGS_unifiedTypeMapEntry & in_mStringArrayType,
                               const GGS_unifiedTypeMapEntry & in_mLStringArrayType) ;

//--------------------------------- Copy constructor
  public: GGS_predefinedTypes (const GGS_predefinedTypes & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_predefinedTypes & operator = (const GGS_predefinedTypes & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_predefinedTypes init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand6,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand7,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand8,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand9,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand10,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand11,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand12,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand13,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand14,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand15,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand16,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand17,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand18,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand19,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand20,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand21,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_predefinedTypes ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_filewrapperMap final {

  public: DownEnumerator_filewrapperMap (const class GGS_filewrapperMap & inMap) ;

  public: ~ DownEnumerator_filewrapperMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mFilewrapperPath (LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ current_mFilewrapperExtensionList (LOCATION_ARGS) const ;

  public: class GGS_wrapperFileMap current_mFilewrapperFileMap (LOCATION_ARGS) const ;

  public: class GGS_wrapperDirectoryMap current_mFilewrapperDirectoryMap (LOCATION_ARGS) const ;

  public: class GGS_filewrapperTemplateMap current_mFilewrapperTemplateMap (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsInternal (LOCATION_ARGS) const ;

  public: class GGS_filewrapperMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_filewrapperMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_filewrapperMap (const DownEnumerator_filewrapperMap &) = delete ;
  private: DownEnumerator_filewrapperMap & operator = (const DownEnumerator_filewrapperMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_filewrapperMap final {
  public: UpEnumerator_filewrapperMap (const class GGS_filewrapperMap & inMap)  ;

  public: ~ UpEnumerator_filewrapperMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFilewrapperPath (LOCATION_ARGS) const ;
  public: class GGS__5B_lstring_5D_ current_mFilewrapperExtensionList (LOCATION_ARGS) const ;
  public: class GGS_wrapperFileMap current_mFilewrapperFileMap (LOCATION_ARGS) const ;
  public: class GGS_wrapperDirectoryMap current_mFilewrapperDirectoryMap (LOCATION_ARGS) const ;
  public: class GGS_filewrapperTemplateMap current_mFilewrapperTemplateMap (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsInternal (LOCATION_ARGS) const ;
  public: class GGS_filewrapperMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_filewrapperMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_filewrapperMap (const UpEnumerator_filewrapperMap &) = delete ;
  private: UpEnumerator_filewrapperMap & operator = (const UpEnumerator_filewrapperMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_filewrapperMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_filewrapperMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_filewrapperMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_filewrapperMap (void) ;

//--- Handle copy
  public: GGS_filewrapperMap (const GGS_filewrapperMap & inSource) ;
  public: GGS_filewrapperMap & operator = (const GGS_filewrapperMap & inSource) ;

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
  protected: void performInsert (const class GGS_filewrapperMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_filewrapperMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_filewrapperMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperMap class_func_mapWithMapToOverride (const class GGS_filewrapperMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring constinArgument1,
                                 class GGS__5B_lstring_5D_ constinArgument2,
                                 class GGS_wrapperFileMap constinArgument3,
                                 class GGS_wrapperDirectoryMap constinArgument4,
                                 class GGS_filewrapperTemplateMap constinArgument5,
                                 class GGS_bool constinArgument6,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMFilewrapperDirectoryMapForKey (class GGS_wrapperDirectoryMap constinArgument0,
                                                         class GGS_string constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMFilewrapperExtensionListForKey (class GGS__5B_lstring_5D_ constinArgument0,
                                                          class GGS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMFilewrapperFileMapForKey (class GGS_wrapperFileMap constinArgument0,
                                                    class GGS_string constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMFilewrapperPathForKey (class GGS_lstring constinArgument0,
                                                 class GGS_string constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMFilewrapperTemplateMapForKey (class GGS_filewrapperTemplateMap constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsInternalForKey (class GGS_bool constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring & outArgument1,
                                 class GGS__5B_lstring_5D_ & outArgument2,
                                 class GGS_wrapperFileMap & outArgument3,
                                 class GGS_wrapperDirectoryMap & outArgument4,
                                 class GGS_filewrapperTemplateMap & outArgument5,
                                 class GGS_bool & outArgument6,
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

  public: class GGS_wrapperDirectoryMap getter_mFilewrapperDirectoryMapForKey (const class GGS_string & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_mFilewrapperExtensionListForKey (const class GGS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_wrapperFileMap getter_mFilewrapperFileMapForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFilewrapperPathForKey (const class GGS_string & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_filewrapperTemplateMap getter_mFilewrapperTemplateMapForKey (const class GGS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsInternalForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_filewrapperMap getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_filewrapperMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_filewrapperMap ;
  friend class DownEnumerator_filewrapperMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @functionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_functionMap final {

  public: DownEnumerator_functionMap (const class GGS_functionMap & inMap) ;

  public: ~ DownEnumerator_functionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_functionSignatureElement_5D_ current_mFunctionSignature (LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry current_mResultType (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsInternal (LOCATION_ARGS) const ;

  public: class GGS_functionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_functionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_functionMap (const DownEnumerator_functionMap &) = delete ;
  private: DownEnumerator_functionMap & operator = (const DownEnumerator_functionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_functionMap final {
  public: UpEnumerator_functionMap (const class GGS_functionMap & inMap)  ;

  public: ~ UpEnumerator_functionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS__5B_functionSignatureElement_5D_ current_mFunctionSignature (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mResultType (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsInternal (LOCATION_ARGS) const ;
  public: class GGS_functionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_functionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_functionMap (const UpEnumerator_functionMap &) = delete ;
  private: UpEnumerator_functionMap & operator = (const UpEnumerator_functionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_functionMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_functionMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_functionMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_functionMap (void) ;

//--- Handle copy
  public: GGS_functionMap (const GGS_functionMap & inSource) ;
  public: GGS_functionMap & operator = (const GGS_functionMap & inSource) ;

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
  protected: void performInsert (const class GGS_functionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_functionMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_functionMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionMap init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_functionMap class_func_mapWithMapToOverride (const class GGS_functionMap & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_functionSignatureElement_5D_ constinArgument1,
                                 class GGS_unifiedTypeMapEntry constinArgument2,
                                 class GGS_bool constinArgument3,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMFunctionSignatureForKey (class GGS__5B_functionSignatureElement_5D_ constinArgument0,
                                                   class GGS_string constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsInternalForKey (class GGS_bool constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMResultTypeForKey (class GGS_unifiedTypeMapEntry constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_functionSignatureElement_5D_ & outArgument1,
                                 class GGS_unifiedTypeMapEntry & outArgument2,
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

  public: class GGS__5B_functionSignatureElement_5D_ getter_mFunctionSignatureForKey (const class GGS_string & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsInternalForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry getter_mResultTypeForKey (const class GGS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_functionMap getter_overriddenMap (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_functionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_functionMap ;
  friend class DownEnumerator_functionMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_grammarMap final {

  public: DownEnumerator_grammarMap (const class GGS_grammarMap & inMap) ;

  public: ~ DownEnumerator_grammarMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_grammarLabelMap current_mLabelMap (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHasIndexing (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHasTranslateFeature (LOCATION_ARGS) const ;

  public: class GGS_grammarMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_grammarMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_grammarMap (const DownEnumerator_grammarMap &) = delete ;
  private: DownEnumerator_grammarMap & operator = (const DownEnumerator_grammarMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_grammarMap final {
  public: UpEnumerator_grammarMap (const class GGS_grammarMap & inMap)  ;

  public: ~ UpEnumerator_grammarMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_grammarLabelMap current_mLabelMap (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHasIndexing (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHasTranslateFeature (LOCATION_ARGS) const ;
  public: class GGS_grammarMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_grammarMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_grammarMap (const UpEnumerator_grammarMap &) = delete ;
  private: UpEnumerator_grammarMap & operator = (const UpEnumerator_grammarMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_grammarMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_grammarMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_grammarMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_grammarMap (void) ;

//--- Handle copy
  public: GGS_grammarMap (const GGS_grammarMap & inSource) ;
  public: GGS_grammarMap & operator = (const GGS_grammarMap & inSource) ;

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
  protected: void performInsert (const class GGS_grammarMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_grammarMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_grammarMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarMap init (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_grammarMap class_func_mapWithMapToOverride (const class GGS_grammarMap & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertGrammar (class GGS_lstring constinArgument0,
                                     class GGS_grammarLabelMap constinArgument1,
                                     class GGS_bool constinArgument2,
                                     class GGS_bool constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMHasIndexingForKey (class GGS_bool constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMHasTranslateFeatureForKey (class GGS_bool constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMLabelMapForKey (class GGS_grammarLabelMap constinArgument0,
                                          class GGS_string constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_grammarLabelMap & outArgument1,
                                 class GGS_bool & outArgument2,
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

  public: class GGS_bool getter_mHasIndexingForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHasTranslateFeatureForKey (const class GGS_string & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_grammarLabelMap getter_mLabelMapForKey (const class GGS_string & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_grammarMap getter_overriddenMap (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_grammarMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_grammarMap ;
  friend class DownEnumerator_grammarMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexiqueComponentMapForSemanticAnalysis map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexiqueComponentMapForSemanticAnalysis final {

  public: DownEnumerator_lexiqueComponentMapForSemanticAnalysis (const class GGS_lexiqueComponentMapForSemanticAnalysis & inMap) ;

  public: ~ DownEnumerator_lexiqueComponentMapForSemanticAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsTemplate (LOCATION_ARGS) const ;

  public: class GGS_terminalMap current_mTerminalMap (LOCATION_ARGS) const ;

  public: class GGS__5B_indexingAST_5D_ current_mIndexingListAST (LOCATION_ARGS) const ;

  public: class GGS__5B_terminalDeclarationAST_5D_ current_mTerminalListAST (LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalAttributeAST_5D_ current_mLexicalAttributeListAST (LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalStyleAST_5D_ current_mLexicalStyleListAST (LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalListDeclarationAST_5D_ current_mLexicalListDeclarationListAST (LOCATION_ARGS) const ;

  public: class GGS_lexiqueComponentMapForSemanticAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexiqueComponentMapForSemanticAnalysis (const DownEnumerator_lexiqueComponentMapForSemanticAnalysis &) = delete ;
  private: DownEnumerator_lexiqueComponentMapForSemanticAnalysis & operator = (const DownEnumerator_lexiqueComponentMapForSemanticAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexiqueComponentMapForSemanticAnalysis final {
  public: UpEnumerator_lexiqueComponentMapForSemanticAnalysis (const class GGS_lexiqueComponentMapForSemanticAnalysis & inMap)  ;

  public: ~ UpEnumerator_lexiqueComponentMapForSemanticAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsTemplate (LOCATION_ARGS) const ;
  public: class GGS_terminalMap current_mTerminalMap (LOCATION_ARGS) const ;
  public: class GGS__5B_indexingAST_5D_ current_mIndexingListAST (LOCATION_ARGS) const ;
  public: class GGS__5B_terminalDeclarationAST_5D_ current_mTerminalListAST (LOCATION_ARGS) const ;
  public: class GGS__5B_lexicalAttributeAST_5D_ current_mLexicalAttributeListAST (LOCATION_ARGS) const ;
  public: class GGS__5B_lexicalStyleAST_5D_ current_mLexicalStyleListAST (LOCATION_ARGS) const ;
  public: class GGS__5B_lexicalListDeclarationAST_5D_ current_mLexicalListDeclarationListAST (LOCATION_ARGS) const ;
  public: class GGS_lexiqueComponentMapForSemanticAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexiqueComponentMapForSemanticAnalysis (const UpEnumerator_lexiqueComponentMapForSemanticAnalysis &) = delete ;
  private: UpEnumerator_lexiqueComponentMapForSemanticAnalysis & operator = (const UpEnumerator_lexiqueComponentMapForSemanticAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_lexiqueComponentMapForSemanticAnalysis : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_lexiqueComponentMapForSemanticAnalysis (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_lexiqueComponentMapForSemanticAnalysis (void) ;

//--- Handle copy
  public: GGS_lexiqueComponentMapForSemanticAnalysis (const GGS_lexiqueComponentMapForSemanticAnalysis & inSource) ;
  public: GGS_lexiqueComponentMapForSemanticAnalysis & operator = (const GGS_lexiqueComponentMapForSemanticAnalysis & inSource) ;

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
  protected: void performInsert (const class GGS_lexiqueComponentMapForSemanticAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexiqueComponentMapForSemanticAnalysis init (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_lexiqueComponentMapForSemanticAnalysis class_func_mapWithMapToOverride (const class GGS_lexiqueComponentMapForSemanticAnalysis & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_bool constinArgument1,
                                 class GGS_terminalMap constinArgument2,
                                 class GGS__5B_indexingAST_5D_ constinArgument3,
                                 class GGS__5B_terminalDeclarationAST_5D_ constinArgument4,
                                 class GGS__5B_lexicalAttributeAST_5D_ constinArgument5,
                                 class GGS__5B_lexicalStyleAST_5D_ constinArgument6,
                                 class GGS__5B_lexicalListDeclarationAST_5D_ constinArgument7,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMIndexingListASTForKey (class GGS__5B_indexingAST_5D_ constinArgument0,
                                                 class GGS_string constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsTemplateForKey (class GGS_bool constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexicalAttributeListASTForKey (class GGS__5B_lexicalAttributeAST_5D_ constinArgument0,
                                                         class GGS_string constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexicalListDeclarationListASTForKey (class GGS__5B_lexicalListDeclarationAST_5D_ constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexicalStyleListASTForKey (class GGS__5B_lexicalStyleAST_5D_ constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMTerminalListASTForKey (class GGS__5B_terminalDeclarationAST_5D_ constinArgument0,
                                                 class GGS_string constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMTerminalMapForKey (class GGS_terminalMap constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_bool & outArgument1,
                                 class GGS_terminalMap & outArgument2,
                                 class GGS__5B_indexingAST_5D_ & outArgument3,
                                 class GGS__5B_terminalDeclarationAST_5D_ & outArgument4,
                                 class GGS__5B_lexicalAttributeAST_5D_ & outArgument5,
                                 class GGS__5B_lexicalStyleAST_5D_ & outArgument6,
                                 class GGS__5B_lexicalListDeclarationAST_5D_ & outArgument7,
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

  public: class GGS__5B_indexingAST_5D_ getter_mIndexingListASTForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsTemplateForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalAttributeAST_5D_ getter_mLexicalAttributeListASTForKey (const class GGS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalListDeclarationAST_5D_ getter_mLexicalListDeclarationListASTForKey (const class GGS_string & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lexicalStyleAST_5D_ getter_mLexicalStyleListASTForKey (const class GGS_string & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_terminalDeclarationAST_5D_ getter_mTerminalListASTForKey (const class GGS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_terminalMap getter_mTerminalMapForKey (const class GGS_string & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexiqueComponentMapForSemanticAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexiqueComponentMapForSemanticAnalysis ;
  friend class DownEnumerator_lexiqueComponentMapForSemanticAnalysis ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionComponentMapForSemanticAnalysis map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_optionComponentMapForSemanticAnalysis final {

  public: DownEnumerator_optionComponentMapForSemanticAnalysis (const class GGS_optionComponentMapForSemanticAnalysis & inMap) ;

  public: ~ DownEnumerator_optionComponentMapForSemanticAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsPredefined (LOCATION_ARGS) const ;

  public: class GGS_commandLineOptionMap current_mBoolOptionMap (LOCATION_ARGS) const ;

  public: class GGS_commandLineOptionMap current_mUIntOptionMap (LOCATION_ARGS) const ;

  public: class GGS_commandLineOptionMap current_mStringOptionMap (LOCATION_ARGS) const ;

  public: class GGS_optionComponentMapForSemanticAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForSemanticAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_optionComponentMapForSemanticAnalysis (const DownEnumerator_optionComponentMapForSemanticAnalysis &) = delete ;
  private: DownEnumerator_optionComponentMapForSemanticAnalysis & operator = (const DownEnumerator_optionComponentMapForSemanticAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_optionComponentMapForSemanticAnalysis final {
  public: UpEnumerator_optionComponentMapForSemanticAnalysis (const class GGS_optionComponentMapForSemanticAnalysis & inMap)  ;

  public: ~ UpEnumerator_optionComponentMapForSemanticAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsPredefined (LOCATION_ARGS) const ;
  public: class GGS_commandLineOptionMap current_mBoolOptionMap (LOCATION_ARGS) const ;
  public: class GGS_commandLineOptionMap current_mUIntOptionMap (LOCATION_ARGS) const ;
  public: class GGS_commandLineOptionMap current_mStringOptionMap (LOCATION_ARGS) const ;
  public: class GGS_optionComponentMapForSemanticAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForSemanticAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_optionComponentMapForSemanticAnalysis (const UpEnumerator_optionComponentMapForSemanticAnalysis &) = delete ;
  private: UpEnumerator_optionComponentMapForSemanticAnalysis & operator = (const UpEnumerator_optionComponentMapForSemanticAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_optionComponentMapForSemanticAnalysis : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_optionComponentMapForSemanticAnalysis_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_optionComponentMapForSemanticAnalysis (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_optionComponentMapForSemanticAnalysis (void) ;

//--- Handle copy
  public: GGS_optionComponentMapForSemanticAnalysis (const GGS_optionComponentMapForSemanticAnalysis & inSource) ;
  public: GGS_optionComponentMapForSemanticAnalysis & operator = (const GGS_optionComponentMapForSemanticAnalysis & inSource) ;

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
  protected: void performInsert (const class GGS_optionComponentMapForSemanticAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForSemanticAnalysis_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForSemanticAnalysis_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionComponentMapForSemanticAnalysis init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_optionComponentMapForSemanticAnalysis class_func_mapWithMapToOverride (const class GGS_optionComponentMapForSemanticAnalysis & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_bool constinArgument1,
                                 class GGS_commandLineOptionMap constinArgument2,
                                 class GGS_commandLineOptionMap constinArgument3,
                                 class GGS_commandLineOptionMap constinArgument4,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMBoolOptionMapForKey (class GGS_commandLineOptionMap constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsPredefinedForKey (class GGS_bool constinArgument0,
                                              class GGS_string constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMStringOptionMapForKey (class GGS_commandLineOptionMap constinArgument0,
                                                 class GGS_string constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMUIntOptionMapForKey (class GGS_commandLineOptionMap constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_bool & outArgument1,
                                 class GGS_commandLineOptionMap & outArgument2,
                                 class GGS_commandLineOptionMap & outArgument3,
                                 class GGS_commandLineOptionMap & outArgument4,
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

  public: class GGS_commandLineOptionMap getter_mBoolOptionMapForKey (const class GGS_string & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsPredefinedForKey (const class GGS_string & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_commandLineOptionMap getter_mStringOptionMapForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_commandLineOptionMap getter_mUIntOptionMapForKey (const class GGS_string & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_optionComponentMapForSemanticAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_optionComponentMapForSemanticAnalysis ;
  friend class DownEnumerator_optionComponentMapForSemanticAnalysis ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxComponentMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_syntaxComponentMap final {

  public: DownEnumerator_syntaxComponentMap (const class GGS_syntaxComponentMap & inMap) ;

  public: ~ DownEnumerator_syntaxComponentMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mLexiqueName (LOCATION_ARGS) const ;

  public: class GGS__5B_nonterminalDeclarationAST_5D_ current_mNonterminalDeclarationList (LOCATION_ARGS) const ;

  public: class GGS__5B_syntaxRuleAST_5D_ current_mRuleList (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHasTranslateFeature (LOCATION_ARGS) const ;

  public: class GGS_syntaxComponentMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_syntaxComponentMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_syntaxComponentMap (const DownEnumerator_syntaxComponentMap &) = delete ;
  private: DownEnumerator_syntaxComponentMap & operator = (const DownEnumerator_syntaxComponentMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_syntaxComponentMap final {
  public: UpEnumerator_syntaxComponentMap (const class GGS_syntaxComponentMap & inMap)  ;

  public: ~ UpEnumerator_syntaxComponentMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mLexiqueName (LOCATION_ARGS) const ;
  public: class GGS__5B_nonterminalDeclarationAST_5D_ current_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public: class GGS__5B_syntaxRuleAST_5D_ current_mRuleList (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHasTranslateFeature (LOCATION_ARGS) const ;
  public: class GGS_syntaxComponentMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_syntaxComponentMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_syntaxComponentMap (const UpEnumerator_syntaxComponentMap &) = delete ;
  private: UpEnumerator_syntaxComponentMap & operator = (const UpEnumerator_syntaxComponentMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_syntaxComponentMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_syntaxComponentMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_syntaxComponentMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_syntaxComponentMap (void) ;

//--- Handle copy
  public: GGS_syntaxComponentMap (const GGS_syntaxComponentMap & inSource) ;
  public: GGS_syntaxComponentMap & operator = (const GGS_syntaxComponentMap & inSource) ;

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
  protected: void performInsert (const class GGS_syntaxComponentMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_syntaxComponentMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_syntaxComponentMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxComponentMap init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxComponentMap class_func_mapWithMapToOverride (const class GGS_syntaxComponentMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring constinArgument1,
                                 class GGS__5B_nonterminalDeclarationAST_5D_ constinArgument2,
                                 class GGS__5B_syntaxRuleAST_5D_ constinArgument3,
                                 class GGS_bool constinArgument4,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMHasTranslateFeatureForKey (class GGS_bool constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexiqueNameForKey (class GGS_lstring constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMNonterminalDeclarationListForKey (class GGS__5B_nonterminalDeclarationAST_5D_ constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMRuleListForKey (class GGS__5B_syntaxRuleAST_5D_ constinArgument0,
                                          class GGS_string constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring & outArgument1,
                                 class GGS__5B_nonterminalDeclarationAST_5D_ & outArgument2,
                                 class GGS__5B_syntaxRuleAST_5D_ & outArgument3,
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

  public: class GGS_bool getter_mHasTranslateFeatureForKey (const class GGS_string & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mLexiqueNameForKey (const class GGS_string & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_nonterminalDeclarationAST_5D_ getter_mNonterminalDeclarationListForKey (const class GGS_string & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_syntaxRuleAST_5D_ getter_mRuleListForKey (const class GGS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_syntaxComponentMap getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_syntaxComponentMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_syntaxComponentMap ;
  friend class DownEnumerator_syntaxComponentMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @internalRoutineMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_internalRoutineMap final {

  public: DownEnumerator_internalRoutineMap (const class GGS_internalRoutineMap & inMap) ;

  public: ~ DownEnumerator_internalRoutineMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_routineArgumentMap current_mArgumentMap (LOCATION_ARGS) const ;

  public: class GGS_internalRoutineMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_internalRoutineMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_internalRoutineMap (const DownEnumerator_internalRoutineMap &) = delete ;
  private: DownEnumerator_internalRoutineMap & operator = (const DownEnumerator_internalRoutineMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_internalRoutineMap final {
  public: UpEnumerator_internalRoutineMap (const class GGS_internalRoutineMap & inMap)  ;

  public: ~ UpEnumerator_internalRoutineMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_routineArgumentMap current_mArgumentMap (LOCATION_ARGS) const ;
  public: class GGS_internalRoutineMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_internalRoutineMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_internalRoutineMap (const UpEnumerator_internalRoutineMap &) = delete ;
  private: UpEnumerator_internalRoutineMap & operator = (const UpEnumerator_internalRoutineMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_internalRoutineMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_internalRoutineMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_internalRoutineMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_internalRoutineMap (void) ;

//--- Handle copy
  public: GGS_internalRoutineMap (const GGS_internalRoutineMap & inSource) ;
  public: GGS_internalRoutineMap & operator = (const GGS_internalRoutineMap & inSource) ;

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
  protected: void performInsert (const class GGS_internalRoutineMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_internalRoutineMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_internalRoutineMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_internalRoutineMap init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_internalRoutineMap class_func_mapWithMapToOverride (const class GGS_internalRoutineMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_routineArgumentMap constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_insertOrReplace (class GGS_lstring constinArgument0,
                                       class GGS_routineArgumentMap constinArgument1
                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMArgumentMapForKey (class GGS_routineArgumentMap constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_routineArgumentMap & outArgument1,
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

  public: class GGS_routineArgumentMap getter_mArgumentMapForKey (const class GGS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_internalRoutineMap getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_internalRoutineMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_internalRoutineMap ;
  friend class DownEnumerator_internalRoutineMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_internalRoutineMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineMap struct
//--------------------------------------------------------------------------------------------------

class GGS_routineMap : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_internalRoutineMap mProperty_mInternalRoutineMap ;
  public: inline GGS_internalRoutineMap readProperty_mInternalRoutineMap (void) const {
    return mProperty_mInternalRoutineMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineMap (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInternalRoutineMap (const GGS_internalRoutineMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInternalRoutineMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineMap (const GGS_internalRoutineMap & in_mInternalRoutineMap) ;

//--------------------------------- Copy constructor
  public: GGS_routineMap (const GGS_routineMap & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineMap & operator = (const GGS_routineMap & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineMap init (Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticContext struct
//--------------------------------------------------------------------------------------------------

class GGS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_routineMap mProperty_routineMap ;
  public: inline GGS_routineMap readProperty_routineMap (void) const {
    return mProperty_routineMap ;
  }

  public: GGS_functionMap mProperty_mFunctionMap ;
  public: inline GGS_functionMap readProperty_mFunctionMap (void) const {
    return mProperty_mFunctionMap ;
  }

  public: GGS_filewrapperMap mProperty_mFilewrapperMap ;
  public: inline GGS_filewrapperMap readProperty_mFilewrapperMap (void) const {
    return mProperty_mFilewrapperMap ;
  }

  public: GGS_grammarMap mProperty_grammarMap ;
  public: inline GGS_grammarMap readProperty_grammarMap (void) const {
    return mProperty_grammarMap ;
  }

  public: GGS_optionComponentMapForSemanticAnalysis mProperty_mOptionComponentMapForSemanticAnalysis ;
  public: inline GGS_optionComponentMapForSemanticAnalysis readProperty_mOptionComponentMapForSemanticAnalysis (void) const {
    return mProperty_mOptionComponentMapForSemanticAnalysis ;
  }

  public: GGS_lexiqueComponentMapForSemanticAnalysis mProperty_mLexiqueComponentMapForSemanticAnalysis ;
  public: inline GGS_lexiqueComponentMapForSemanticAnalysis readProperty_mLexiqueComponentMapForSemanticAnalysis (void) const {
    return mProperty_mLexiqueComponentMapForSemanticAnalysis ;
  }

  public: GGS_syntaxComponentMap mProperty_mSyntaxComponentMapForSemanticAnalysis ;
  public: inline GGS_syntaxComponentMap readProperty_mSyntaxComponentMapForSemanticAnalysis (void) const {
    return mProperty_mSyntaxComponentMapForSemanticAnalysis ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_semanticContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setRoutineMap (const GGS_routineMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_routineMap = inValue ;
  }

  public: inline void setter_setMFunctionMap (const GGS_functionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionMap = inValue ;
  }

  public: inline void setter_setMFilewrapperMap (const GGS_filewrapperMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperMap = inValue ;
  }

  public: inline void setter_setGrammarMap (const GGS_grammarMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_grammarMap = inValue ;
  }

  public: inline void setter_setMOptionComponentMapForSemanticAnalysis (const GGS_optionComponentMapForSemanticAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionComponentMapForSemanticAnalysis = inValue ;
  }

  public: inline void setter_setMLexiqueComponentMapForSemanticAnalysis (const GGS_lexiqueComponentMapForSemanticAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexiqueComponentMapForSemanticAnalysis = inValue ;
  }

  public: inline void setter_setMSyntaxComponentMapForSemanticAnalysis (const GGS_syntaxComponentMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentMapForSemanticAnalysis = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_semanticContext (const GGS_routineMap & in_routineMap,
                               const GGS_functionMap & in_mFunctionMap,
                               const GGS_filewrapperMap & in_mFilewrapperMap,
                               const GGS_grammarMap & in_grammarMap,
                               const GGS_optionComponentMapForSemanticAnalysis & in_mOptionComponentMapForSemanticAnalysis,
                               const GGS_lexiqueComponentMapForSemanticAnalysis & in_mLexiqueComponentMapForSemanticAnalysis,
                               const GGS_syntaxComponentMap & in_mSyntaxComponentMapForSemanticAnalysis) ;

//--------------------------------- Copy constructor
  public: GGS_semanticContext (const GGS_semanticContext & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_semanticContext & operator = (const GGS_semanticContext & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticContext init (Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticContext ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @analysisContext struct
//--------------------------------------------------------------------------------------------------

class GGS_analysisContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticContext mProperty_semanticContext ;
  public: inline GGS_semanticContext readProperty_semanticContext (void) const {
    return mProperty_semanticContext ;
  }

  public: GGS_predefinedTypes mProperty_predefinedTypes ;
  public: inline GGS_predefinedTypes readProperty_predefinedTypes (void) const {
    return mProperty_predefinedTypes ;
  }

  public: GGS_string mProperty_selfObjectCppName ;
  public: inline GGS_string readProperty_selfObjectCppName (void) const {
    return mProperty_selfObjectCppName ;
  }

  public: GGS_selfAvailability mProperty_selfAvailability ;
  public: inline GGS_selfAvailability readProperty_selfAvailability (void) const {
    return mProperty_selfAvailability ;
  }

  public: GGS_string mProperty_selfObjectCppPrefixForAccessingProperty ;
  public: inline GGS_string readProperty_selfObjectCppPrefixForAccessingProperty (void) const {
    return mProperty_selfObjectCppPrefixForAccessingProperty ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_analysisContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSemanticContext (const GGS_semanticContext & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_semanticContext = inValue ;
  }

  public: inline void setter_setPredefinedTypes (const GGS_predefinedTypes & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_predefinedTypes = inValue ;
  }

  public: inline void setter_setSelfObjectCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_selfObjectCppName = inValue ;
  }

  public: inline void setter_setSelfAvailability (const GGS_selfAvailability & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_selfAvailability = inValue ;
  }

  public: inline void setter_setSelfObjectCppPrefixForAccessingProperty (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_selfObjectCppPrefixForAccessingProperty = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_analysisContext (const GGS_semanticContext & in_semanticContext,
                               const GGS_predefinedTypes & in_predefinedTypes,
                               const GGS_string & in_selfObjectCppName,
                               const GGS_selfAvailability & in_selfAvailability,
                               const GGS_string & in_selfObjectCppPrefixForAccessingProperty) ;

//--------------------------------- Copy constructor
  public: GGS_analysisContext (const GGS_analysisContext & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_analysisContext & operator = (const GGS_analysisContext & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_analysisContext init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (const class GGS_semanticContext & inOperand0,
                                                                                                                                       const class GGS_predefinedTypes & inOperand1,
                                                                                                                                       const class GGS_string & inOperand2,
                                                                                                                                       const class GGS_selfAvailability & inOperand3,
                                                                                                                                       const class GGS_string & inOperand4,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_analysisContext ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [overrideKind] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_overrideKind_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_overrideKind_5D_ (const class GGS__5B_overrideKind_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_overrideKind_5D_ (const DownEnumerator__5B_overrideKind_5D_ &) = delete ;
  private: DownEnumerator__5B_overrideKind_5D_ & operator = (const DownEnumerator__5B_overrideKind_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_overrideKind current (LOCATION_ARGS) const ;
  public: class GGS_overrideKind current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_overrideKind> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_overrideKind_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_overrideKind_5D_ (const class GGS__5B_overrideKind_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_overrideKind_5D_ (const UpEnumerator__5B_overrideKind_5D_ &) = delete ;
  private: UpEnumerator__5B_overrideKind_5D_ & operator = (const UpEnumerator__5B_overrideKind_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_overrideKind current (LOCATION_ARGS) const ;
  public: class GGS_overrideKind current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_overrideKind> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_overrideKind_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_overrideKind> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_overrideKind_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_overrideKind_5D_ (const GGS__5B_overrideKind_5D_ & inSource) ;
  public: GGS__5B_overrideKind_5D_ & operator = (const GGS__5B_overrideKind_5D_ & inSource) ;

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
  public: static GGS__5B_overrideKind_5D_ init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_overrideKind_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_overrideKind & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_overrideKind_5D_ add_operation (const GGS__5B_overrideKind_5D_ & inOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_overrideKind constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_overrideKind constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_overrideKind & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_overrideKind & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_overrideKind & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_overrideKind constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_overrideKind getter_first (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_overrideKind getter_last (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_overrideKind_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_overrideKind_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                         const class GGS_uint & constinOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_overrideKind readSubscript__3F_ (const class GGS_uint & in0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_overrideKind_5D_ ;
  friend class DownEnumerator__5B_overrideKind_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_overrideKind_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [scopeLocalVarMap] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_scopeLocalVarMap_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_scopeLocalVarMap_5D_ (const class GGS__5B_scopeLocalVarMap_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_scopeLocalVarMap_5D_ (const DownEnumerator__5B_scopeLocalVarMap_5D_ &) = delete ;
  private: DownEnumerator__5B_scopeLocalVarMap_5D_ & operator = (const DownEnumerator__5B_scopeLocalVarMap_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_scopeLocalVarMap current (LOCATION_ARGS) const ;
  public: class GGS_scopeLocalVarMap current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_scopeLocalVarMap> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_scopeLocalVarMap_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_scopeLocalVarMap_5D_ (const class GGS__5B_scopeLocalVarMap_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_scopeLocalVarMap_5D_ (const UpEnumerator__5B_scopeLocalVarMap_5D_ &) = delete ;
  private: UpEnumerator__5B_scopeLocalVarMap_5D_ & operator = (const UpEnumerator__5B_scopeLocalVarMap_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_scopeLocalVarMap current (LOCATION_ARGS) const ;
  public: class GGS_scopeLocalVarMap current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_scopeLocalVarMap> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_scopeLocalVarMap_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_scopeLocalVarMap> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_scopeLocalVarMap_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_scopeLocalVarMap_5D_ (const GGS__5B_scopeLocalVarMap_5D_ & inSource) ;
  public: GGS__5B_scopeLocalVarMap_5D_ & operator = (const GGS__5B_scopeLocalVarMap_5D_ & inSource) ;

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
  public: static GGS__5B_scopeLocalVarMap_5D_ init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_scopeLocalVarMap_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_scopeLocalVarMap & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_scopeLocalVarMap_5D_ add_operation (const GGS__5B_scopeLocalVarMap_5D_ & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_scopeLocalVarMap constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_scopeLocalVarMap constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_scopeLocalVarMap & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_scopeLocalVarMap & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_scopeLocalVarMap & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_scopeLocalVarMap constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_scopeLocalVarMap getter_first (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_scopeLocalVarMap getter_last (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_scopeLocalVarMap_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_scopeLocalVarMap_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                             const class GGS_uint & constinOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_scopeLocalVarMap readSubscript__3F_ (const class GGS_uint & in0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_scopeLocalVarMap_5D_ ;
  friend class DownEnumerator__5B_scopeLocalVarMap_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_scopeLocalVarMap_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @scopeLocalVarMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_scopeLocalVarMap final {

  public: DownEnumerator_scopeLocalVarMap (const class GGS_scopeLocalVarMap & inMap) ;

  public: ~ DownEnumerator_scopeLocalVarMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;

  public: class GGS_string current_mCppName (LOCATION_ARGS) const ;

  public: class GGS_string current_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const ;

  public: class GGS_localVariableAttributes current_mAttributes (LOCATION_ARGS) const ;

  public: class GGS_localVarValuation current_mState (LOCATION_ARGS) const ;

  public: class GGS_scopeLocalVarMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_scopeLocalVarMap (const DownEnumerator_scopeLocalVarMap &) = delete ;
  private: DownEnumerator_scopeLocalVarMap & operator = (const DownEnumerator_scopeLocalVarMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_scopeLocalVarMap final {
  public: UpEnumerator_scopeLocalVarMap (const class GGS_scopeLocalVarMap & inMap)  ;

  public: ~ UpEnumerator_scopeLocalVarMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GGS_string current_mCppName (LOCATION_ARGS) const ;
  public: class GGS_string current_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const ;
  public: class GGS_localVariableAttributes current_mAttributes (LOCATION_ARGS) const ;
  public: class GGS_localVarValuation current_mState (LOCATION_ARGS) const ;
  public: class GGS_scopeLocalVarMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_scopeLocalVarMap (const UpEnumerator_scopeLocalVarMap &) = delete ;
  private: UpEnumerator_scopeLocalVarMap & operator = (const UpEnumerator_scopeLocalVarMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_scopeLocalVarMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_scopeLocalVarMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_scopeLocalVarMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_scopeLocalVarMap (void) ;

//--- Handle copy
  public: GGS_scopeLocalVarMap (const GGS_scopeLocalVarMap & inSource) ;
  public: GGS_scopeLocalVarMap & operator = (const GGS_scopeLocalVarMap & inSource) ;

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
  protected: void performInsert (const class GGS_scopeLocalVarMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_scopeLocalVarMap init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_scopeLocalVarMap class_func_mapWithMapToOverride (const class GGS_scopeLocalVarMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_unifiedTypeMapEntry constinArgument1,
                                 class GGS_string constinArgument2,
                                 class GGS_string constinArgument3,
                                 class GGS_localVariableAttributes constinArgument4,
                                 class GGS_localVarValuation constinArgument5,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeKey (class GGS_lstring constinArgument0,
                                 class GGS_unifiedTypeMapEntry & outArgument1,
                                 class GGS_string & outArgument2,
                                 class GGS_string & outArgument3,
                                 class GGS_localVariableAttributes & outArgument4,
                                 class GGS_localVarValuation & outArgument5,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMAttributesForKey (class GGS_localVariableAttributes constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMCppNameForKey (class GGS_string constinArgument0,
                                         class GGS_string constinArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMNameForCheckingFormalParameterUsingForKey (class GGS_string constinArgument0,
                                                                     class GGS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMStateForKey (class GGS_localVarValuation constinArgument0,
                                       class GGS_string constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMTypeForKey (class GGS_unifiedTypeMapEntry constinArgument0,
                                      class GGS_string constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_unifiedTypeMapEntry & outArgument1,
                                 class GGS_string & outArgument2,
                                 class GGS_string & outArgument3,
                                 class GGS_localVariableAttributes & outArgument4,
                                 class GGS_localVarValuation & outArgument5,
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

  public: class GGS_localVariableAttributes getter_mAttributesForKey (const class GGS_string & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mCppNameForKey (const class GGS_string & constinOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mNameForCheckingFormalParameterUsingForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_localVarValuation getter_mStateForKey (const class GGS_string & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry getter_mTypeForKey (const class GGS_string & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_scopeLocalVarMap getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_scopeLocalVarMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_scopeLocalVarMap ;
  friend class DownEnumerator_scopeLocalVarMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeLocalVarMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @currentVarManager struct
//--------------------------------------------------------------------------------------------------

class GGS_currentVarManager : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_scopeLocalVarMap mProperty_mLocalVarMap ;
  public: inline GGS_scopeLocalVarMap readProperty_mLocalVarMap (void) const {
    return mProperty_mLocalVarMap ;
  }

  public: GGS__5B_scopeLocalVarMap_5D_ mProperty_mSubMaps ;
  public: inline GGS__5B_scopeLocalVarMap_5D_ readProperty_mSubMaps (void) const {
    return mProperty_mSubMaps ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_currentVarManager (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLocalVarMap (const GGS_scopeLocalVarMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocalVarMap = inValue ;
  }

  public: inline void setter_setMSubMaps (const GGS__5B_scopeLocalVarMap_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSubMaps = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_currentVarManager (const GGS_scopeLocalVarMap & in_mLocalVarMap,
                                 const GGS__5B_scopeLocalVarMap_5D_ & in_mSubMaps) ;

//--------------------------------- Copy constructor
  public: GGS_currentVarManager (const GGS_currentVarManager & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_currentVarManager & operator = (const GGS_currentVarManager & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_currentVarManager init (Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_currentVarManager ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVarManager struct
//--------------------------------------------------------------------------------------------------

class GGS_localVarManager : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_currentVarManager mProperty_mCurrentManager ;
  public: inline GGS_currentVarManager readProperty_mCurrentManager (void) const {
    return mProperty_mCurrentManager ;
  }

  public: GGS__5B_overrideKind_5D_ mProperty_mOverridenManagers ;
  public: inline GGS__5B_overrideKind_5D_ readProperty_mOverridenManagers (void) const {
    return mProperty_mOverridenManagers ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_localVarManager (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCurrentManager (const GGS_currentVarManager & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCurrentManager = inValue ;
  }

  public: inline void setter_setMOverridenManagers (const GGS__5B_overrideKind_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOverridenManagers = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_localVarManager (const GGS_currentVarManager & in_mCurrentManager,
                               const GGS__5B_overrideKind_5D_ & in_mOverridenManagers) ;

//--------------------------------- Copy constructor
  public: GGS_localVarManager (const GGS_localVarManager & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_localVarManager & operator = (const GGS_localVarManager & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVarManager init (Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarManager ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [enumerationDescriptor] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_enumerationDescriptor_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_enumerationDescriptor_5D_ (const class GGS__5B_enumerationDescriptor_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_enumerationDescriptor_5D_ (const DownEnumerator__5B_enumerationDescriptor_5D_ &) = delete ;
  private: DownEnumerator__5B_enumerationDescriptor_5D_ & operator = (const DownEnumerator__5B_enumerationDescriptor_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_enumerationDescriptor current (LOCATION_ARGS) const ;
  public: class GGS_enumerationDescriptor current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_enumerationDescriptor> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_enumerationDescriptor_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_enumerationDescriptor_5D_ (const class GGS__5B_enumerationDescriptor_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_enumerationDescriptor_5D_ (const UpEnumerator__5B_enumerationDescriptor_5D_ &) = delete ;
  private: UpEnumerator__5B_enumerationDescriptor_5D_ & operator = (const UpEnumerator__5B_enumerationDescriptor_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_enumerationDescriptor current (LOCATION_ARGS) const ;
  public: class GGS_enumerationDescriptor current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_enumerationDescriptor> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_enumerationDescriptor_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_enumerationDescriptor> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_enumerationDescriptor_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_enumerationDescriptor_5D_ (const GGS__5B_enumerationDescriptor_5D_ & inSource) ;
  public: GGS__5B_enumerationDescriptor_5D_ & operator = (const GGS__5B_enumerationDescriptor_5D_ & inSource) ;

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
  public: static GGS__5B_enumerationDescriptor_5D_ init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_enumerationDescriptor_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_enumerationDescriptor & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_enumerationDescriptor_5D_ add_operation (const GGS__5B_enumerationDescriptor_5D_ & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_enumerationDescriptor constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_enumerationDescriptor constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_enumerationDescriptor & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_enumerationDescriptor & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_enumerationDescriptor & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_enumerationDescriptor constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_enumerationDescriptor getter_first (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_enumerationDescriptor getter_last (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_enumerationDescriptor_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_enumerationDescriptor_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                  const class GGS_uint & constinOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_enumerationDescriptor readSubscript__3F_ (const class GGS_uint & in0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_enumerationDescriptor_5D_ ;
  friend class DownEnumerator__5B_enumerationDescriptor_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_enumerationDescriptor_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [functionSignatureElement] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_functionSignatureElement_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_functionSignatureElement_5D_ (const class GGS__5B_functionSignatureElement_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_functionSignatureElement_5D_ (const DownEnumerator__5B_functionSignatureElement_5D_ &) = delete ;
  private: DownEnumerator__5B_functionSignatureElement_5D_ & operator = (const DownEnumerator__5B_functionSignatureElement_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_functionSignatureElement current (LOCATION_ARGS) const ;
  public: class GGS_functionSignatureElement current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_functionSignatureElement> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_functionSignatureElement_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_functionSignatureElement_5D_ (const class GGS__5B_functionSignatureElement_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_functionSignatureElement_5D_ (const UpEnumerator__5B_functionSignatureElement_5D_ &) = delete ;
  private: UpEnumerator__5B_functionSignatureElement_5D_ & operator = (const UpEnumerator__5B_functionSignatureElement_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_functionSignatureElement current (LOCATION_ARGS) const ;
  public: class GGS_functionSignatureElement current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_functionSignatureElement> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_functionSignatureElement_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_functionSignatureElement> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_functionSignatureElement_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_functionSignatureElement_5D_ (const GGS__5B_functionSignatureElement_5D_ & inSource) ;
  public: GGS__5B_functionSignatureElement_5D_ & operator = (const GGS__5B_functionSignatureElement_5D_ & inSource) ;

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
  public: static GGS__5B_functionSignatureElement_5D_ init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_functionSignatureElement_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_functionSignatureElement & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_functionSignatureElement_5D_ add_operation (const GGS__5B_functionSignatureElement_5D_ & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_functionSignatureElement constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_functionSignatureElement constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_functionSignatureElement & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_functionSignatureElement & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_functionSignatureElement & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_functionSignatureElement constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_functionSignatureElement getter_first (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_functionSignatureElement getter_last (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_functionSignatureElement_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_functionSignatureElement_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                     const class GGS_uint & constinOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_functionSignatureElement readSubscript__3F_ (const class GGS_uint & in0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_functionSignatureElement_5D_ ;
  friend class DownEnumerator__5B_functionSignatureElement_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_functionSignatureElement_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [typedProperty] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_typedProperty_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_typedProperty_5D_ (const class GGS__5B_typedProperty_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_typedProperty_5D_ (const DownEnumerator__5B_typedProperty_5D_ &) = delete ;
  private: DownEnumerator__5B_typedProperty_5D_ & operator = (const DownEnumerator__5B_typedProperty_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_typedProperty current (LOCATION_ARGS) const ;
  public: class GGS_typedProperty current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_typedProperty> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_typedProperty_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_typedProperty_5D_ (const class GGS__5B_typedProperty_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_typedProperty_5D_ (const UpEnumerator__5B_typedProperty_5D_ &) = delete ;
  private: UpEnumerator__5B_typedProperty_5D_ & operator = (const UpEnumerator__5B_typedProperty_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_typedProperty current (LOCATION_ARGS) const ;
  public: class GGS_typedProperty current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_typedProperty> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_typedProperty_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_typedProperty> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_typedProperty_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_typedProperty_5D_ (const GGS__5B_typedProperty_5D_ & inSource) ;
  public: GGS__5B_typedProperty_5D_ & operator = (const GGS__5B_typedProperty_5D_ & inSource) ;

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
  public: static GGS__5B_typedProperty_5D_ init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_typedProperty_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_typedProperty & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_typedProperty_5D_ add_operation (const GGS__5B_typedProperty_5D_ & inOperand,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_typedProperty constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_typedProperty constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_typedProperty & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_typedProperty & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_typedProperty & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_typedProperty constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_typedProperty getter_first (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_typedProperty getter_last (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_typedProperty_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_typedProperty_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                          const class GGS_uint & constinOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_typedProperty readSubscript__3F_ (const class GGS_uint & in0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_typedProperty_5D_ ;
  friend class DownEnumerator__5B_typedProperty_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_typedProperty_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeFeatures boolset
//--------------------------------------------------------------------------------------------------

class GGS_typeFeatures : public AC_GALGAS_root {
//--------------------------------- Properties
  private: uint64_t mFlags ;
  private: bool mIsValid ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }

//--------------------------------- Default constructor
  public: GGS_typeFeatures (void) ;

//--------------------------------- Private constructor
  private: GGS_typeFeatures (const uint64_t inFlags) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeFeatures init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_typeFeatures class_func_andAssignOperatorWithExpression (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_clonable (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_comparable (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_divAssignOperatorWithExpression (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_doNotGenererateObjectCompare (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_equatable (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_generateCopyConstructorAndAssignmentOperator (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_generateDescriptionGetterUtilityMethod (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_generateSynthetizedInitializer (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_incDecOperator (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_incDecOperatorNoOVF (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_infixAddOperator (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_infixAddOperatorNoOVF (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_infixAndOperator (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_infixDivOperator (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_infixDivOperatorNoOVF (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_infixModOperator (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_infixMulOperator (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_infixMulOperatorNoOVF (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_infixOrOperator (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_infixShiftOperator (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_infixSubOperator (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_infixSubOperatorNoOVF (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_infixXorOperator (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_minusAssignOperatorWithExpression (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_mulAssignOperatorWithExpression (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_orAssignOperatorWithExpression (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_plusAssignOperatorWithExpression (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_prefixMinusOperator (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_prefixMinusOperatorNoOVF (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_prefixNotOperator (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_prefixPlusOperator (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_prefixTildeOperator (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_referenceEquatable (LOCATION_ARGS) ;

  public: static class GGS_typeFeatures class_func_xorAssignOperatorWithExpression (LOCATION_ARGS) ;

//--------------------------------- &= operator (with expression)
  public: void andAssignOperation (const GGS_typeFeatures inOperand,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- |= operator (with expression)
  public: void orAssignOperation (const GGS_typeFeatures inOperand,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- ^= operator (with expression)
  public: void xorAssignOperation (const GGS_typeFeatures inOperand,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- -= operator (with expression)
  public: void minusAssignOperation (const GGS_typeFeatures inOperand,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- & operator
  public: GGS_typeFeatures operator_and (const GGS_typeFeatures & inOperand
                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: GGS_typeFeatures operator_or (const GGS_typeFeatures & inOperand
                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public: GGS_typeFeatures operator_xor (const GGS_typeFeatures & inOperand
                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- ~ operator
  public: GGS_typeFeatures operator_tilde (LOCATION_ARGS) const ;

//--------------------------------- - operator
  public: GGS_typeFeatures substract_operation (const GGS_typeFeatures & inOperand,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_typeFeatures & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeFeatures ;

//--------------------------------------------------------------------------------------------------
//   enum headerKind
//--------------------------------------------------------------------------------------------------

class GGS_headerKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_headerKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_noHeader,
    enum_oneHeader,
    enum_twoHeaders
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
  public: static class GGS_headerKind class_func_noHeader (LOCATION_ARGS) ;

  public: static class GGS_headerKind class_func_oneHeader (LOCATION_ARGS) ;

  public: static class GGS_headerKind class_func_twoHeaders (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_headerKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isNoHeader (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isOneHeader (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isTwoHeaders (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classFunctionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_classFunctionMap final {

  public: DownEnumerator_classFunctionMap (const class GGS_classFunctionMap & inMap) ;

  public: ~ DownEnumerator_classFunctionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_functionSignatureElement_5D_ current_mArgumentTypeList (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry current_mReturnedType (LOCATION_ARGS) const ;

  public: class GGS_classFunctionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_classFunctionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_classFunctionMap (const DownEnumerator_classFunctionMap &) = delete ;
  private: DownEnumerator_classFunctionMap & operator = (const DownEnumerator_classFunctionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_classFunctionMap final {
  public: UpEnumerator_classFunctionMap (const class GGS_classFunctionMap & inMap)  ;

  public: ~ UpEnumerator_classFunctionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS__5B_functionSignatureElement_5D_ current_mArgumentTypeList (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mReturnedType (LOCATION_ARGS) const ;
  public: class GGS_classFunctionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_classFunctionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_classFunctionMap (const UpEnumerator_classFunctionMap &) = delete ;
  private: UpEnumerator_classFunctionMap & operator = (const UpEnumerator_classFunctionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_classFunctionMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_classFunctionMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_classFunctionMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_classFunctionMap (void) ;

//--- Handle copy
  public: GGS_classFunctionMap (const GGS_classFunctionMap & inSource) ;
  public: GGS_classFunctionMap & operator = (const GGS_classFunctionMap & inSource) ;

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
  protected: void performInsert (const class GGS_classFunctionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_classFunctionMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_classFunctionMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classFunctionMap init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_classFunctionMap class_func_mapWithMapToOverride (const class GGS_classFunctionMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_functionSignatureElement_5D_ constinArgument1,
                                 class GGS_bool constinArgument2,
                                 class GGS_unifiedTypeMapEntry constinArgument3,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_insertOrReplace (class GGS_lstring constinArgument0,
                                       class GGS__5B_functionSignatureElement_5D_ constinArgument1,
                                       class GGS_bool constinArgument2,
                                       class GGS_unifiedTypeMapEntry constinArgument3
                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMArgumentTypeListForKey (class GGS__5B_functionSignatureElement_5D_ constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMHasCompilerArgumentForKey (class GGS_bool constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMReturnedTypeForKey (class GGS_unifiedTypeMapEntry constinArgument0,
                                              class GGS_string constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_functionSignatureElement_5D_ & outArgument1,
                                 class GGS_bool & outArgument2,
                                 class GGS_unifiedTypeMapEntry & outArgument3,
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

  public: class GGS__5B_functionSignatureElement_5D_ getter_mArgumentTypeListForKey (const class GGS_string & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHasCompilerArgumentForKey (const class GGS_string & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry getter_mReturnedTypeForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_classFunctionMap getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_classFunctionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_classFunctionMap ;
  friend class DownEnumerator_classFunctionMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFunctionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classMethodMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_classMethodMap final {

  public: DownEnumerator_classMethodMap (const class GGS_classMethodMap & inMap) ;

  public: ~ DownEnumerator_classMethodMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterSignatureElement_5D_ current_mParameterList (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;

  public: class GGS_classMethodMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_classMethodMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_classMethodMap (const DownEnumerator_classMethodMap &) = delete ;
  private: DownEnumerator_classMethodMap & operator = (const DownEnumerator_classMethodMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_classMethodMap final {
  public: UpEnumerator_classMethodMap (const class GGS_classMethodMap & inMap)  ;

  public: ~ UpEnumerator_classMethodMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS__5B_formalParameterSignatureElement_5D_ current_mParameterList (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;
  public: class GGS_classMethodMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_classMethodMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_classMethodMap (const UpEnumerator_classMethodMap &) = delete ;
  private: UpEnumerator_classMethodMap & operator = (const UpEnumerator_classMethodMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_classMethodMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_classMethodMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_classMethodMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_classMethodMap (void) ;

//--- Handle copy
  public: GGS_classMethodMap (const GGS_classMethodMap & inSource) ;
  public: GGS_classMethodMap & operator = (const GGS_classMethodMap & inSource) ;

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
  protected: void performInsert (const class GGS_classMethodMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_classMethodMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_classMethodMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classMethodMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_classMethodMap class_func_mapWithMapToOverride (const class GGS_classMethodMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_formalParameterSignatureElement_5D_ constinArgument1,
                                 class GGS_bool constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_insertOrReplace (class GGS_lstring constinArgument0,
                                       class GGS__5B_formalParameterSignatureElement_5D_ constinArgument1,
                                       class GGS_bool constinArgument2
                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMHasCompilerArgumentForKey (class GGS_bool constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMParameterListForKey (class GGS__5B_formalParameterSignatureElement_5D_ constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_formalParameterSignatureElement_5D_ & outArgument1,
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

  public: class GGS_bool getter_mHasCompilerArgumentForKey (const class GGS_string & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterSignatureElement_5D_ getter_mParameterListForKey (const class GGS_string & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_classMethodMap getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_classMethodMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_classMethodMap ;
  friend class DownEnumerator_classMethodMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classMethodMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @getterMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_getterMap final {

  public: DownEnumerator_getterMap (const class GGS_getterMap & inMap) ;

  public: ~ DownEnumerator_getterMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_methodKind current_mKind (LOCATION_ARGS) const ;

  public: class GGS__5B_functionSignatureElement_5D_ current_mArgumentTypeList (LOCATION_ARGS) const ;

  public: class GGS_location current_mDeclarationLocation (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry current_mReturnedType (LOCATION_ARGS) const ;

  public: class GGS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;

  public: class GGS_string current_mGetterNameThatObsoletesInvokationName (LOCATION_ARGS) const ;

  public: class GGS_getterMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_getterMap (const DownEnumerator_getterMap &) = delete ;
  private: DownEnumerator_getterMap & operator = (const DownEnumerator_getterMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_getterMap final {
  public: UpEnumerator_getterMap (const class GGS_getterMap & inMap)  ;

  public: ~ UpEnumerator_getterMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_methodKind current_mKind (LOCATION_ARGS) const ;
  public: class GGS__5B_functionSignatureElement_5D_ current_mArgumentTypeList (LOCATION_ARGS) const ;
  public: class GGS_location current_mDeclarationLocation (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mReturnedType (LOCATION_ARGS) const ;
  public: class GGS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;
  public: class GGS_string current_mGetterNameThatObsoletesInvokationName (LOCATION_ARGS) const ;
  public: class GGS_getterMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_getterMap (const UpEnumerator_getterMap &) = delete ;
  private: UpEnumerator_getterMap & operator = (const UpEnumerator_getterMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_getterMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_getterMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_getterMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_getterMap (void) ;

//--- Handle copy
  public: GGS_getterMap (const GGS_getterMap & inSource) ;
  public: GGS_getterMap & operator = (const GGS_getterMap & inSource) ;

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
  protected: void performInsert (const class GGS_getterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_getterMap init (Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_getterMap class_func_mapWithMapToOverride (const class GGS_getterMap & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_methodKind constinArgument1,
                                 class GGS__5B_functionSignatureElement_5D_ constinArgument2,
                                 class GGS_location constinArgument3,
                                 class GGS_bool constinArgument4,
                                 class GGS_unifiedTypeMapEntry constinArgument5,
                                 class GGS_methodQualifier constinArgument6,
                                 class GGS_string constinArgument7,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_insertOrReplace (class GGS_lstring constinArgument0,
                                       class GGS_methodKind constinArgument1,
                                       class GGS__5B_functionSignatureElement_5D_ constinArgument2,
                                       class GGS_location constinArgument3,
                                       class GGS_bool constinArgument4,
                                       class GGS_unifiedTypeMapEntry constinArgument5,
                                       class GGS_methodQualifier constinArgument6,
                                       class GGS_string constinArgument7
                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMArgumentTypeListForKey (class GGS__5B_functionSignatureElement_5D_ constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMDeclarationLocationForKey (class GGS_location constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMGetterNameThatObsoletesInvokationNameForKey (class GGS_string constinArgument0,
                                                                       class GGS_string constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMHasCompilerArgumentForKey (class GGS_bool constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMKindForKey (class GGS_methodKind constinArgument0,
                                      class GGS_string constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMQualifierForKey (class GGS_methodQualifier constinArgument0,
                                           class GGS_string constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMReturnedTypeForKey (class GGS_unifiedTypeMapEntry constinArgument0,
                                              class GGS_string constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_methodKind & outArgument1,
                                 class GGS__5B_functionSignatureElement_5D_ & outArgument2,
                                 class GGS_location & outArgument3,
                                 class GGS_bool & outArgument4,
                                 class GGS_unifiedTypeMapEntry & outArgument5,
                                 class GGS_methodQualifier & outArgument6,
                                 class GGS_string & outArgument7,
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

  public: class GGS__5B_functionSignatureElement_5D_ getter_mArgumentTypeListForKey (const class GGS_string & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_location getter_mDeclarationLocationForKey (const class GGS_string & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mGetterNameThatObsoletesInvokationNameForKey (const class GGS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHasCompilerArgumentForKey (const class GGS_string & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_methodKind getter_mKindForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_methodQualifier getter_mQualifierForKey (const class GGS_string & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry getter_mReturnedTypeForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_getterMap getter_overriddenMap (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_getterMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_getterMap ;
  friend class DownEnumerator_getterMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getterMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @initializerMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_initializerMap final {

  public: DownEnumerator_initializerMap (const class GGS_initializerMap & inMap) ;

  public: ~ DownEnumerator_initializerMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_functionSignatureElement_5D_ current_mArgumentTypeList (LOCATION_ARGS) const ;

  public: class GGS_initializerMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_initializerMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_initializerMap (const DownEnumerator_initializerMap &) = delete ;
  private: DownEnumerator_initializerMap & operator = (const DownEnumerator_initializerMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_initializerMap final {
  public: UpEnumerator_initializerMap (const class GGS_initializerMap & inMap)  ;

  public: ~ UpEnumerator_initializerMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS__5B_functionSignatureElement_5D_ current_mArgumentTypeList (LOCATION_ARGS) const ;
  public: class GGS_initializerMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_initializerMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_initializerMap (const UpEnumerator_initializerMap &) = delete ;
  private: UpEnumerator_initializerMap & operator = (const UpEnumerator_initializerMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_initializerMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_initializerMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_initializerMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_initializerMap (void) ;

//--- Handle copy
  public: GGS_initializerMap (const GGS_initializerMap & inSource) ;
  public: GGS_initializerMap & operator = (const GGS_initializerMap & inSource) ;

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
  protected: void performInsert (const class GGS_initializerMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_initializerMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_initializerMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_initializerMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_initializerMap class_func_mapWithMapToOverride (const class GGS_initializerMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_functionSignatureElement_5D_ constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMArgumentTypeListForKey (class GGS__5B_functionSignatureElement_5D_ constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_functionSignatureElement_5D_ & outArgument1,
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

  public: class GGS__5B_functionSignatureElement_5D_ getter_mArgumentTypeListForKey (const class GGS_string & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_initializerMap getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_initializerMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_initializerMap ;
  friend class DownEnumerator_initializerMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @instanceMethodMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_instanceMethodMap final {

  public: DownEnumerator_instanceMethodMap (const class GGS_instanceMethodMap & inMap) ;

  public: ~ DownEnumerator_instanceMethodMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_methodKind current_mKind (LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterSignatureElement_5D_ current_mParameterList (LOCATION_ARGS) const ;

  public: class GGS_location current_mDeclarationLocation (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;

  public: class GGS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;

  public: class GGS_string current_mErrorMessage (LOCATION_ARGS) const ;

  public: class GGS_instanceMethodMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_instanceMethodMap (const DownEnumerator_instanceMethodMap &) = delete ;
  private: DownEnumerator_instanceMethodMap & operator = (const DownEnumerator_instanceMethodMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_instanceMethodMap final {
  public: UpEnumerator_instanceMethodMap (const class GGS_instanceMethodMap & inMap)  ;

  public: ~ UpEnumerator_instanceMethodMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_methodKind current_mKind (LOCATION_ARGS) const ;
  public: class GGS__5B_formalParameterSignatureElement_5D_ current_mParameterList (LOCATION_ARGS) const ;
  public: class GGS_location current_mDeclarationLocation (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;
  public: class GGS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;
  public: class GGS_string current_mErrorMessage (LOCATION_ARGS) const ;
  public: class GGS_instanceMethodMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_instanceMethodMap (const UpEnumerator_instanceMethodMap &) = delete ;
  private: UpEnumerator_instanceMethodMap & operator = (const UpEnumerator_instanceMethodMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_instanceMethodMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_instanceMethodMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_instanceMethodMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_instanceMethodMap (void) ;

//--- Handle copy
  public: GGS_instanceMethodMap (const GGS_instanceMethodMap & inSource) ;
  public: GGS_instanceMethodMap & operator = (const GGS_instanceMethodMap & inSource) ;

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
  protected: void performInsert (const class GGS_instanceMethodMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_instanceMethodMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_instanceMethodMap class_func_mapWithMapToOverride (const class GGS_instanceMethodMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_methodKind constinArgument1,
                                 class GGS__5B_formalParameterSignatureElement_5D_ constinArgument2,
                                 class GGS_location constinArgument3,
                                 class GGS_bool constinArgument4,
                                 class GGS_methodQualifier constinArgument5,
                                 class GGS_string constinArgument6,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMDeclarationLocationForKey (class GGS_location constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMErrorMessageForKey (class GGS_string constinArgument0,
                                              class GGS_string constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMHasCompilerArgumentForKey (class GGS_bool constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMKindForKey (class GGS_methodKind constinArgument0,
                                      class GGS_string constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMParameterListForKey (class GGS__5B_formalParameterSignatureElement_5D_ constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMQualifierForKey (class GGS_methodQualifier constinArgument0,
                                           class GGS_string constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchInheritedKey (class GGS_lstring constinArgument0,
                                          class GGS_methodKind & outArgument1,
                                          class GGS__5B_formalParameterSignatureElement_5D_ & outArgument2,
                                          class GGS_location & outArgument3,
                                          class GGS_bool & outArgument4,
                                          class GGS_methodQualifier & outArgument5,
                                          class GGS_string & outArgument6,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;

  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_methodKind & outArgument1,
                                 class GGS__5B_formalParameterSignatureElement_5D_ & outArgument2,
                                 class GGS_location & outArgument3,
                                 class GGS_bool & outArgument4,
                                 class GGS_methodQualifier & outArgument5,
                                 class GGS_string & outArgument6,
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

  public: class GGS_location getter_mDeclarationLocationForKey (const class GGS_string & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mErrorMessageForKey (const class GGS_string & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHasCompilerArgumentForKey (const class GGS_string & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_methodKind getter_mKindForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterSignatureElement_5D_ getter_mParameterListForKey (const class GGS_string & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_methodQualifier getter_mQualifierForKey (const class GGS_string & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_instanceMethodMap getter_overriddenMap (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_instanceMethodMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_instanceMethodMap ;
  friend class DownEnumerator_instanceMethodMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instanceMethodMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_propertyMap final {

  public: DownEnumerator_propertyMap (const class GGS_propertyMap & inMap) ;

  public: ~ DownEnumerator_propertyMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_AccessControl current_mAccessControl (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsConstant (LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry current_mPropertyType (LOCATION_ARGS) const ;

  public: class GGS_propertyMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_propertyMap (const DownEnumerator_propertyMap &) = delete ;
  private: DownEnumerator_propertyMap & operator = (const DownEnumerator_propertyMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_propertyMap final {
  public: UpEnumerator_propertyMap (const class GGS_propertyMap & inMap)  ;

  public: ~ UpEnumerator_propertyMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_AccessControl current_mAccessControl (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsConstant (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mPropertyType (LOCATION_ARGS) const ;
  public: class GGS_propertyMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_propertyMap (const UpEnumerator_propertyMap &) = delete ;
  private: UpEnumerator_propertyMap & operator = (const UpEnumerator_propertyMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_propertyMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_propertyMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_propertyMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_propertyMap (void) ;

//--- Handle copy
  public: GGS_propertyMap (const GGS_propertyMap & inSource) ;
  public: GGS_propertyMap & operator = (const GGS_propertyMap & inSource) ;

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
  protected: void performInsert (const class GGS_propertyMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyMap init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_propertyMap class_func_mapWithMapToOverride (const class GGS_propertyMap & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_AccessControl constinArgument1,
                                 class GGS_bool constinArgument2,
                                 class GGS_unifiedTypeMapEntry constinArgument3,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMAccessControlForKey (class GGS_AccessControl constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsConstantForKey (class GGS_bool constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMPropertyTypeForKey (class GGS_unifiedTypeMapEntry constinArgument0,
                                              class GGS_string constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_AccessControl & outArgument1,
                                 class GGS_bool & outArgument2,
                                 class GGS_unifiedTypeMapEntry & outArgument3,
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

  public: class GGS_AccessControl getter_mAccessControlForKey (const class GGS_string & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsConstantForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry getter_mPropertyTypeForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyMap getter_overriddenMap (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_propertyMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_propertyMap ;
  friend class DownEnumerator_propertyMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @setterMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_setterMap final {

  public: DownEnumerator_setterMap (const class GGS_setterMap & inMap) ;

  public: ~ DownEnumerator_setterMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_methodKind current_mKind (LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterSignatureElement_5D_ current_mParameterList (LOCATION_ARGS) const ;

  public: class GGS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;

  public: class GGS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;

  public: class GGS_string current_mErrorMessage (LOCATION_ARGS) const ;

  public: class GGS_setterMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_setterMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_setterMap (const DownEnumerator_setterMap &) = delete ;
  private: DownEnumerator_setterMap & operator = (const DownEnumerator_setterMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_setterMap final {
  public: UpEnumerator_setterMap (const class GGS_setterMap & inMap)  ;

  public: ~ UpEnumerator_setterMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_methodKind current_mKind (LOCATION_ARGS) const ;
  public: class GGS__5B_formalParameterSignatureElement_5D_ current_mParameterList (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHasCompilerArgument (LOCATION_ARGS) const ;
  public: class GGS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;
  public: class GGS_string current_mErrorMessage (LOCATION_ARGS) const ;
  public: class GGS_setterMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_setterMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_setterMap (const UpEnumerator_setterMap &) = delete ;
  private: UpEnumerator_setterMap & operator = (const UpEnumerator_setterMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_setterMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_setterMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_setterMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_setterMap (void) ;

//--- Handle copy
  public: GGS_setterMap (const GGS_setterMap & inSource) ;
  public: GGS_setterMap & operator = (const GGS_setterMap & inSource) ;

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
  protected: void performInsert (const class GGS_setterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_setterMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_setterMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_setterMap init (Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_setterMap class_func_mapWithMapToOverride (const class GGS_setterMap & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_methodKind constinArgument1,
                                 class GGS__5B_formalParameterSignatureElement_5D_ constinArgument2,
                                 class GGS_bool constinArgument3,
                                 class GGS_methodQualifier constinArgument4,
                                 class GGS_string constinArgument5,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_insertOrReplace (class GGS_lstring constinArgument0,
                                       class GGS_methodKind constinArgument1,
                                       class GGS__5B_formalParameterSignatureElement_5D_ constinArgument2,
                                       class GGS_bool constinArgument3,
                                       class GGS_methodQualifier constinArgument4,
                                       class GGS_string constinArgument5
                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMErrorMessageForKey (class GGS_string constinArgument0,
                                              class GGS_string constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMHasCompilerArgumentForKey (class GGS_bool constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMKindForKey (class GGS_methodKind constinArgument0,
                                      class GGS_string constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMParameterListForKey (class GGS__5B_formalParameterSignatureElement_5D_ constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMQualifierForKey (class GGS_methodQualifier constinArgument0,
                                           class GGS_string constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_methodKind & outArgument1,
                                 class GGS__5B_formalParameterSignatureElement_5D_ & outArgument2,
                                 class GGS_bool & outArgument3,
                                 class GGS_methodQualifier & outArgument4,
                                 class GGS_string & outArgument5,
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

  public: class GGS_string getter_mErrorMessageForKey (const class GGS_string & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHasCompilerArgumentForKey (const class GGS_string & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_methodKind getter_mKindForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterSignatureElement_5D_ getter_mParameterListForKey (const class GGS_string & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_methodQualifier getter_mQualifierForKey (const class GGS_string & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_setterMap getter_overriddenMap (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_setterMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_setterMap ;
  friend class DownEnumerator_setterMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_setterMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @subscriptMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_subscriptMap final {

  public: DownEnumerator_subscriptMap (const class GGS_subscriptMap & inMap) ;

  public: ~ DownEnumerator_subscriptMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_functionSignatureElement_5D_ current_argumentTypeList (LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry current_valueType (LOCATION_ARGS) const ;

  public: class GGS_subscriptMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_subscriptMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_subscriptMap (const DownEnumerator_subscriptMap &) = delete ;
  private: DownEnumerator_subscriptMap & operator = (const DownEnumerator_subscriptMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_subscriptMap final {
  public: UpEnumerator_subscriptMap (const class GGS_subscriptMap & inMap)  ;

  public: ~ UpEnumerator_subscriptMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS__5B_functionSignatureElement_5D_ current_argumentTypeList (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_valueType (LOCATION_ARGS) const ;
  public: class GGS_subscriptMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_subscriptMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_subscriptMap (const UpEnumerator_subscriptMap &) = delete ;
  private: UpEnumerator_subscriptMap & operator = (const UpEnumerator_subscriptMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_subscriptMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_subscriptMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_subscriptMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_subscriptMap (void) ;

//--- Handle copy
  public: GGS_subscriptMap (const GGS_subscriptMap & inSource) ;
  public: GGS_subscriptMap & operator = (const GGS_subscriptMap & inSource) ;

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
  protected: void performInsert (const class GGS_subscriptMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_subscriptMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_subscriptMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_subscriptMap init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_subscriptMap class_func_mapWithMapToOverride (const class GGS_subscriptMap & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_functionSignatureElement_5D_ constinArgument1,
                                 class GGS_unifiedTypeMapEntry constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setArgumentTypeListForKey (class GGS__5B_functionSignatureElement_5D_ constinArgument0,
                                                 class GGS_string constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setValueTypeForKey (class GGS_unifiedTypeMapEntry constinArgument0,
                                          class GGS_string constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_functionSignatureElement_5D_ & outArgument1,
                                 class GGS_unifiedTypeMapEntry & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS__5B_functionSignatureElement_5D_ getter_argumentTypeListForKey (const class GGS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

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

  public: class GGS_subscriptMap getter_overriddenMap (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry getter_valueTypeForKey (const class GGS_string & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_subscriptMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_subscriptMap ;
  friend class DownEnumerator_subscriptMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subscriptMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeDefinition struct
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeDefinition : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_typeName ;
  public: inline GGS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GGS_bool mProperty_isPredefined ;
  public: inline GGS_bool readProperty_isPredefined (void) const {
    return mProperty_isPredefined ;
  }

  public: GGS_bool mProperty_isConcrete ;
  public: inline GGS_bool readProperty_isConcrete (void) const {
    return mProperty_isConcrete ;
  }

  public: GGS_bool mProperty_isFinal ;
  public: inline GGS_bool readProperty_isFinal (void) const {
    return mProperty_isFinal ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_superType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_superType (void) const {
    return mProperty_superType ;
  }

  public: GGS_typeKindEnum mProperty_typeKind ;
  public: inline GGS_typeKindEnum readProperty_typeKind (void) const {
    return mProperty_typeKind ;
  }

  public: GGS_bool mProperty_supportCollectionValue ;
  public: inline GGS_bool readProperty_supportCollectionValue (void) const {
    return mProperty_supportCollectionValue ;
  }

  public: GGS__5B_typedProperty_5D_ mProperty_allTypedPropertyList ;
  public: inline GGS__5B_typedProperty_5D_ readProperty_allTypedPropertyList (void) const {
    return mProperty_allTypedPropertyList ;
  }

  public: GGS_propertyMap mProperty_propertyMap ;
  public: inline GGS_propertyMap readProperty_propertyMap (void) const {
    return mProperty_propertyMap ;
  }

  public: GGS__5B_typedProperty_5D_ mProperty_currentTypedPropertyList ;
  public: inline GGS__5B_typedProperty_5D_ readProperty_currentTypedPropertyList (void) const {
    return mProperty_currentTypedPropertyList ;
  }

  public: GGS_initializerMap mProperty_initializerMap ;
  public: inline GGS_initializerMap readProperty_initializerMap (void) const {
    return mProperty_initializerMap ;
  }

  public: GGS_classFunctionMap mProperty_classFunctionMap ;
  public: inline GGS_classFunctionMap readProperty_classFunctionMap (void) const {
    return mProperty_classFunctionMap ;
  }

  public: GGS_getterMap mProperty_getterMap ;
  public: inline GGS_getterMap readProperty_getterMap (void) const {
    return mProperty_getterMap ;
  }

  public: GGS_setterMap mProperty_setterMap ;
  public: inline GGS_setterMap readProperty_setterMap (void) const {
    return mProperty_setterMap ;
  }

  public: GGS_instanceMethodMap mProperty_instanceMethodMap ;
  public: inline GGS_instanceMethodMap readProperty_instanceMethodMap (void) const {
    return mProperty_instanceMethodMap ;
  }

  public: GGS_classMethodMap mProperty_classMethodMap ;
  public: inline GGS_classMethodMap readProperty_classMethodMap (void) const {
    return mProperty_classMethodMap ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_unwrappedType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_unwrappedType (void) const {
    return mProperty_unwrappedType ;
  }

  public: GGS_subscriptMap mProperty_readSubscriptMap ;
  public: inline GGS_subscriptMap readProperty_readSubscriptMap (void) const {
    return mProperty_readSubscriptMap ;
  }

  public: GGS__5B_enumerationDescriptor_5D_ mProperty_enumerationDescriptorList ;
  public: inline GGS__5B_enumerationDescriptor_5D_ readProperty_enumerationDescriptorList (void) const {
    return mProperty_enumerationDescriptorList ;
  }

  public: GGS_typeFeatures mProperty_features ;
  public: inline GGS_typeFeatures readProperty_features (void) const {
    return mProperty_features ;
  }

  public: GGS__5B_functionSignatureElement_5D_ mProperty_addAssignOperatorArguments ;
  public: inline GGS__5B_functionSignatureElement_5D_ readProperty_addAssignOperatorArguments (void) const {
    return mProperty_addAssignOperatorArguments ;
  }

  public: GGS_bool mProperty_generateHeaderInSeparateFile ;
  public: inline GGS_bool readProperty_generateHeaderInSeparateFile (void) const {
    return mProperty_generateHeaderInSeparateFile ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_typeForEnumeratedElement ;
  public: inline GGS_unifiedTypeMapEntry readProperty_typeForEnumeratedElement (void) const {
    return mProperty_typeForEnumeratedElement ;
  }

  public: GGS_string mProperty_headerFileName ;
  public: inline GGS_string readProperty_headerFileName (void) const {
    return mProperty_headerFileName ;
  }

  public: GGS_headerKind mProperty_headerKind ;
  public: inline GGS_headerKind readProperty_headerKind (void) const {
    return mProperty_headerKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeDefinition (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setIsPredefined (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isPredefined = inValue ;
  }

  public: inline void setter_setIsConcrete (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isConcrete = inValue ;
  }

  public: inline void setter_setIsFinal (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isFinal = inValue ;
  }

  public: inline void setter_setSuperType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_superType = inValue ;
  }

  public: inline void setter_setTypeKind (const GGS_typeKindEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeKind = inValue ;
  }

  public: inline void setter_setSupportCollectionValue (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_supportCollectionValue = inValue ;
  }

  public: inline void setter_setAllTypedPropertyList (const GGS__5B_typedProperty_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_allTypedPropertyList = inValue ;
  }

  public: inline void setter_setPropertyMap (const GGS_propertyMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyMap = inValue ;
  }

  public: inline void setter_setCurrentTypedPropertyList (const GGS__5B_typedProperty_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_currentTypedPropertyList = inValue ;
  }

  public: inline void setter_setInitializerMap (const GGS_initializerMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_initializerMap = inValue ;
  }

  public: inline void setter_setClassFunctionMap (const GGS_classFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_classFunctionMap = inValue ;
  }

  public: inline void setter_setGetterMap (const GGS_getterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_getterMap = inValue ;
  }

  public: inline void setter_setSetterMap (const GGS_setterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_setterMap = inValue ;
  }

  public: inline void setter_setInstanceMethodMap (const GGS_instanceMethodMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_instanceMethodMap = inValue ;
  }

  public: inline void setter_setClassMethodMap (const GGS_classMethodMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_classMethodMap = inValue ;
  }

  public: inline void setter_setUnwrappedType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_unwrappedType = inValue ;
  }

  public: inline void setter_setReadSubscriptMap (const GGS_subscriptMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_readSubscriptMap = inValue ;
  }

  public: inline void setter_setEnumerationDescriptorList (const GGS__5B_enumerationDescriptor_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_enumerationDescriptorList = inValue ;
  }

  public: inline void setter_setFeatures (const GGS_typeFeatures & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_features = inValue ;
  }

  public: inline void setter_setAddAssignOperatorArguments (const GGS__5B_functionSignatureElement_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_addAssignOperatorArguments = inValue ;
  }

  public: inline void setter_setGenerateHeaderInSeparateFile (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_generateHeaderInSeparateFile = inValue ;
  }

  public: inline void setter_setTypeForEnumeratedElement (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeForEnumeratedElement = inValue ;
  }

  public: inline void setter_setHeaderFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_headerFileName = inValue ;
  }

  public: inline void setter_setHeaderKind (const GGS_headerKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_headerKind = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_unifiedTypeDefinition (const GGS_lstring & in_typeName,
                                     const GGS_bool & in_isPredefined,
                                     const GGS_bool & in_isConcrete,
                                     const GGS_bool & in_isFinal,
                                     const GGS_unifiedTypeMapEntry & in_superType,
                                     const GGS_typeKindEnum & in_typeKind,
                                     const GGS_bool & in_supportCollectionValue,
                                     const GGS__5B_typedProperty_5D_ & in_allTypedPropertyList,
                                     const GGS_propertyMap & in_propertyMap,
                                     const GGS__5B_typedProperty_5D_ & in_currentTypedPropertyList,
                                     const GGS_initializerMap & in_initializerMap,
                                     const GGS_classFunctionMap & in_classFunctionMap,
                                     const GGS_getterMap & in_getterMap,
                                     const GGS_setterMap & in_setterMap,
                                     const GGS_instanceMethodMap & in_instanceMethodMap,
                                     const GGS_classMethodMap & in_classMethodMap,
                                     const GGS_unifiedTypeMapEntry & in_unwrappedType,
                                     const GGS_subscriptMap & in_readSubscriptMap,
                                     const GGS__5B_enumerationDescriptor_5D_ & in_enumerationDescriptorList,
                                     const GGS_typeFeatures & in_features,
                                     const GGS__5B_functionSignatureElement_5D_ & in_addAssignOperatorArguments,
                                     const GGS_bool & in_generateHeaderInSeparateFile,
                                     const GGS_unifiedTypeMapEntry & in_typeForEnumeratedElement,
                                     const GGS_string & in_headerFileName,
                                     const GGS_headerKind & in_headerKind) ;

//--------------------------------- Copy constructor
  public: GGS_unifiedTypeDefinition (const GGS_unifiedTypeDefinition & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_unifiedTypeDefinition & operator = (const GGS_unifiedTypeDefinition & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unifiedTypeDefinition init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (const class GGS_lstring & inOperand0,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_bool & inOperand1,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_bool & inOperand2,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_bool & inOperand3,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_typeKindEnum & inOperand5,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_bool & inOperand6,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS__5B_typedProperty_5D_ & inOperand7,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_propertyMap & inOperand8,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS__5B_typedProperty_5D_ & inOperand9,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_initializerMap & inOperand10,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_classFunctionMap & inOperand11,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_getterMap & inOperand12,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_setterMap & inOperand13,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_instanceMethodMap & inOperand14,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_classMethodMap & inOperand15,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_unifiedTypeMapEntry & inOperand16,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_subscriptMap & inOperand17,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS__5B_enumerationDescriptor_5D_ & inOperand18,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_typeFeatures & inOperand19,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS__5B_functionSignatureElement_5D_ & inOperand20,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_bool & inOperand21,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_unifiedTypeMapEntry & inOperand22,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_string & inOperand23,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           const class GGS_headerKind & inOperand24,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeDefinition ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@[ifTestForGeneration] generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateInstruction (const class GGS__5B_ifTestForGeneration_5D_ inObject,
                                          class GGS_stringset & io_ioInclusionSet,
                                          class GGS_uint & io_ioTemporaryVariableIndex,
                                          class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                          class GGS_string & io_ioGeneratedCode,
                                          class GGS_string & out_outTestVar,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMapEntry identifierRepresentation' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_identifierRepresentation (const class GGS_unifiedTypeMapEntry & inObject,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@unifiedTypeMapEntry addHeaderFileName'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName (const class GGS_unifiedTypeMapEntry inObject,
                                        class GGS_stringset & io_ioInclusions,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractGrammarInstructionSyntaxDirectedTranslationResult reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult init (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractGrammarInstructionSyntaxDirectedTranslationResult class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractGrammarInstructionSyntaxDirectedTranslationResult_init (Compiler * inCompiler) ;


//--- Extension proc analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_string arg_inSyntaxDirectedTranslationResultVarName,
           class GGS__5B_string_5D_ & arg_ioAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension proc analyzeSDT
  public: virtual void method_analyzeSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg__ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension proc generateCode
  public: virtual void method_generateCode (const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           const class GGS_string arg_inAccessMethodName,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) ;

  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak & operator = (const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak init_nil (void) {
    GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult bang_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult unwrappedValue (void) const ;

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
  public: static class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultNone reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultNone : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultNone init (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationResultNone class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationResultNone : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInstructionSyntaxDirectedTranslationResultNone_init (Compiler * inCompiler) ;


//--- Extension proc analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_string arg_inSyntaxDirectedTranslationResultVarName,
           class GGS__5B_string_5D_ & arg_ioAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeSDT
  public: virtual void method_analyzeSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg__ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc generateCode
  public: virtual void method_generateCode (const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           const class GGS_string arg_inAccessMethodName,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (Compiler * inCompiler
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
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone bang_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone unwrappedValue (void) const ;

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
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationDropResult reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationDropResult : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult (const class cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionSyntaxDirectedTranslationDropResult init_21_ (const class GGS_location & inOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationDropResult class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationDropResult : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInstructionSyntaxDirectedTranslationDropResult_init_21_ (const class GGS_location & inOperand0,
                                                                               Compiler * inCompiler) ;


//--- Extension proc analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_string arg_inSyntaxDirectedTranslationResultVarName,
           class GGS__5B_string_5D_ & arg_ioAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeSDT
  public: virtual void method_analyzeSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg__ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc generateCode
  public: virtual void method_generateCode (const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           const class GGS_string arg_inAccessMethodName,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (const GGS_location & in_mLocation,
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
// Phase 1: @grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult bang_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult unwrappedValue (void) const ;

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
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInVar reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInVar init_21_ (const class GGS_lstring & inOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationResultInVar class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInstructionSyntaxDirectedTranslationResultInVar_init_21_ (const class GGS_lstring & inOperand0,
                                                                                Compiler * inCompiler) ;


//--- Extension proc analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_string arg_inSyntaxDirectedTranslationResultVarName,
           class GGS__5B_string_5D_ & arg_ioAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeSDT
  public: virtual void method_analyzeSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg__ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc generateCode
  public: virtual void method_generateCode (const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           const class GGS_string arg_inAccessMethodName,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualParameterName ;


//--- Default constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (const GGS_lstring & in_mActualParameterName,
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
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar bang_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar unwrappedValue (void) const ;

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
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualParameterTypeName (void) const ;

  public: class GGS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_lstring & inOperand1,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            Compiler * inCompiler) ;


//--- Extension proc analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_string arg_inSyntaxDirectedTranslationResultVarName,
           class GGS__5B_string_5D_ & arg_ioAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeSDT
  public: virtual void method_analyzeSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg__ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc generateCode
  public: virtual void method_generateCode (const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           const class GGS_string arg_inAccessMethodName,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualParameterTypeName ;
  public: GGS_lstring mProperty_mActualParameterName ;


//--- Default constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const GGS_lstring & in_mActualParameterTypeName,
                                                                               const GGS_lstring & in_mActualParameterName,
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
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar unwrappedValue (void) const ;

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
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualParameterTypeName (void) const ;

  public: class GGS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                                    const class GGS_lstring & inOperand1,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                              const class GGS_lstring & inOperand1,
                                                                                              Compiler * inCompiler) ;


//--- Extension proc analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_string arg_inSyntaxDirectedTranslationResultVarName,
           class GGS__5B_string_5D_ & arg_ioAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeSDT
  public: virtual void method_analyzeSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg__ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc generateCode
  public: virtual void method_generateCode (const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           const class GGS_string arg_inAccessMethodName,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualParameterTypeName ;
  public: GGS_lstring mProperty_mActualParameterName ;


//--- Default constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const GGS_lstring & in_mActualParameterTypeName,
                                                                                 const GGS_lstring & in_mActualParameterName,
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
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst unwrappedValue (void) const ;

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
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionWithSourceFileForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionWithSourceFileForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionWithSourceFileForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionWithSourceFileForGeneration (const class cPtr_grammarInstructionWithSourceFileForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mGrammarName (void) const ;

  public: class GGS_string readProperty_mLabelName (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mSourceFileExpression (void) const ;

  public: class GGS__5B_actualParameterForGeneration_5D_ readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mGrammarHasTranslateFeature (void) const ;

  public: class GGS__5B_string_5D_ readProperty_mAssignementList (void) const ;

  public: class GGS_string readProperty_mSyntaxDirectedTranslationResultVarName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionWithSourceFileForGeneration init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                         const class GGS_string & inOperand1,
                                                                                                         const class GGS_string & inOperand2,
                                                                                                         const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                         const class GGS__5B_actualParameterForGeneration_5D_ & inOperand4,
                                                                                                         const class GGS_bool & inOperand5,
                                                                                                         const class GGS__5B_string_5D_ & inOperand6,
                                                                                                         const class GGS_string & inOperand7,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionWithSourceFileForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInstructionWithSourceFileForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionWithSourceFileForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInstructionWithSourceFileForGeneration_init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                   const class GGS_string & inOperand1,
                                                                                                   const class GGS_string & inOperand2,
                                                                                                   const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                   const class GGS__5B_actualParameterForGeneration_5D_ & inOperand4,
                                                                                                   const class GGS_bool & inOperand5,
                                                                                                   const class GGS__5B_string_5D_ & inOperand6,
                                                                                                   const class GGS_string & inOperand7,
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
  public: GGS_string mProperty_mGrammarName ;
  public: GGS_string mProperty_mLabelName ;
  public: GGS_semanticExpressionForGeneration mProperty_mSourceFileExpression ;
  public: GGS__5B_actualParameterForGeneration_5D_ mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mGrammarHasTranslateFeature ;
  public: GGS__5B_string_5D_ mProperty_mAssignementList ;
  public: GGS_string mProperty_mSyntaxDirectedTranslationResultVarName ;


//--- Default constructor
  public: cPtr_grammarInstructionWithSourceFileForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionWithSourceFileForGeneration (const GGS_location & in_mInstructionLocation,
                                                              const GGS_string & in_mGrammarName,
                                                              const GGS_string & in_mLabelName,
                                                              const GGS_semanticExpressionForGeneration & in_mSourceFileExpression,
                                                              const GGS__5B_actualParameterForGeneration_5D_ & in_mActualParameterList,
                                                              const GGS_bool & in_mGrammarHasTranslateFeature,
                                                              const GGS__5B_string_5D_ & in_mAssignementList,
                                                              const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
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
// Phase 1: @grammarInstructionWithSourceFileForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionWithSourceFileForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (const class GGS_grammarInstructionWithSourceFileForGeneration & inSource) ;

  public: GGS_grammarInstructionWithSourceFileForGeneration_2E_weak & operator = (const class GGS_grammarInstructionWithSourceFileForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionWithSourceFileForGeneration_2E_weak init_nil (void) {
    GGS_grammarInstructionWithSourceFileForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionWithSourceFileForGeneration bang_grammarInstructionWithSourceFileForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionWithSourceFileForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_grammarInstructionWithSourceFileForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionWithSourceExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionWithSourceExpressionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionWithSourceExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionWithSourceExpressionForGeneration (const class cPtr_grammarInstructionWithSourceExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mGrammarName (void) const ;

  public: class GGS_string readProperty_mLabelName (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mSourceStringExpression (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mNameStringExpression (void) const ;

  public: class GGS__5B_actualParameterForGeneration_5D_ readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mGrammarHasTranslateFeature (void) const ;

  public: class GGS__5B_string_5D_ readProperty_mAssignementList (void) const ;

  public: class GGS_string readProperty_mSyntaxDirectedTranslationResultVarName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionWithSourceExpressionForGeneration init_21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                                   const class GGS_string & inOperand1,
                                                                                                                   const class GGS_string & inOperand2,
                                                                                                                   const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                                   const class GGS_semanticExpressionForGeneration & inOperand4,
                                                                                                                   const class GGS__5B_actualParameterForGeneration_5D_ & inOperand5,
                                                                                                                   const class GGS_bool & inOperand6,
                                                                                                                   const class GGS__5B_string_5D_ & inOperand7,
                                                                                                                   const class GGS_string & inOperand8,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionWithSourceExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInstructionWithSourceExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionWithSourceExpressionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInstructionWithSourceExpressionForGeneration_init_21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                             const class GGS_string & inOperand1,
                                                                                                             const class GGS_string & inOperand2,
                                                                                                             const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                             const class GGS_semanticExpressionForGeneration & inOperand4,
                                                                                                             const class GGS__5B_actualParameterForGeneration_5D_ & inOperand5,
                                                                                                             const class GGS_bool & inOperand6,
                                                                                                             const class GGS__5B_string_5D_ & inOperand7,
                                                                                                             const class GGS_string & inOperand8,
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
  public: GGS_string mProperty_mGrammarName ;
  public: GGS_string mProperty_mLabelName ;
  public: GGS_semanticExpressionForGeneration mProperty_mSourceStringExpression ;
  public: GGS_semanticExpressionForGeneration mProperty_mNameStringExpression ;
  public: GGS__5B_actualParameterForGeneration_5D_ mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mGrammarHasTranslateFeature ;
  public: GGS__5B_string_5D_ mProperty_mAssignementList ;
  public: GGS_string mProperty_mSyntaxDirectedTranslationResultVarName ;


//--- Default constructor
  public: cPtr_grammarInstructionWithSourceExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionWithSourceExpressionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_string & in_mGrammarName,
                                                                    const GGS_string & in_mLabelName,
                                                                    const GGS_semanticExpressionForGeneration & in_mSourceStringExpression,
                                                                    const GGS_semanticExpressionForGeneration & in_mNameStringExpression,
                                                                    const GGS__5B_actualParameterForGeneration_5D_ & in_mActualParameterList,
                                                                    const GGS_bool & in_mGrammarHasTranslateFeature,
                                                                    const GGS__5B_string_5D_ & in_mAssignementList,
                                                                    const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
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
// Phase 1: @grammarInstructionWithSourceExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (const class GGS_grammarInstructionWithSourceExpressionForGeneration & inSource) ;

  public: GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak & operator = (const class GGS_grammarInstructionWithSourceExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak init_nil (void) {
    GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionWithSourceExpressionForGeneration bang_grammarInstructionWithSourceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionWithSourceExpressionForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [semanticInstructionAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_semanticInstructionAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_semanticInstructionAST_5D_ (const class GGS__5B_semanticInstructionAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_semanticInstructionAST_5D_ (const DownEnumerator__5B_semanticInstructionAST_5D_ &) = delete ;
  private: DownEnumerator__5B_semanticInstructionAST_5D_ & operator = (const DownEnumerator__5B_semanticInstructionAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_semanticInstructionAST current (LOCATION_ARGS) const ;
  public: class GGS_semanticInstructionAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_semanticInstructionAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_semanticInstructionAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_semanticInstructionAST_5D_ (const class GGS__5B_semanticInstructionAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_semanticInstructionAST_5D_ (const UpEnumerator__5B_semanticInstructionAST_5D_ &) = delete ;
  private: UpEnumerator__5B_semanticInstructionAST_5D_ & operator = (const UpEnumerator__5B_semanticInstructionAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_semanticInstructionAST current (LOCATION_ARGS) const ;
  public: class GGS_semanticInstructionAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_semanticInstructionAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_semanticInstructionAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_semanticInstructionAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_semanticInstructionAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_semanticInstructionAST_5D_ (const GGS__5B_semanticInstructionAST_5D_ & inSource) ;
  public: GGS__5B_semanticInstructionAST_5D_ & operator = (const GGS__5B_semanticInstructionAST_5D_ & inSource) ;

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
  public: static GGS__5B_semanticInstructionAST_5D_ init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_semanticInstructionAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_semanticInstructionAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_semanticInstructionAST_5D_ add_operation (const GGS__5B_semanticInstructionAST_5D_ & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_semanticInstructionAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_semanticInstructionAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_semanticInstructionAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_semanticInstructionAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_semanticInstructionAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_semanticInstructionAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_semanticInstructionAST getter_first (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_semanticInstructionAST getter_last (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_semanticInstructionAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_semanticInstructionAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                   const class GGS_uint & constinOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_semanticInstructionAST readSubscript__3F_ (const class GGS_uint & in0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_semanticInstructionAST_5D_ ;
  friend class DownEnumerator__5B_semanticInstructionAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_semanticInstructionAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionAST : public GGS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GGS_semanticInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_semanticInstructionAST (const class cPtr_semanticInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticInstructionAST init_21_ (const class GGS_location & inOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @semanticInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_semanticInstructionAST : public cPtr_syntaxInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticInstructionAST_init_21_ (const class GGS_location & inOperand0,
                                                Compiler * inCompiler) ;


//--- Extension proc analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS__5B_semanticInstructionForGeneration_5D_ & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

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
           class GGS_uint & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension proc transformInstructionForGrammarAnalysis
  public: virtual void method_transformInstructionForGrammarAnalysis (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_uint & arg_ioAddedNonTerminalIndex,
           class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_semanticInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_semanticInstructionAST (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @loopInstructionWithVariantForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithVariantForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithVariantForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_loopInstructionWithVariantForGeneration (const class cPtr_loopInstructionWithVariantForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mVariantExpression (void) const ;

  public: class GGS__5B_semanticInstructionForGeneration_5D_ readProperty_mFirstInstructions (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mLoopExpression (void) const ;

  public: class GGS__5B_semanticInstructionForGeneration_5D_ readProperty_mSecondInstructions (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_loopInstructionWithVariantForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                       const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand2,
                                                                                       const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                       const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithVariantForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @loopInstructionWithVariantForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_loopInstructionWithVariantForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void loopInstructionWithVariantForGeneration_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                 const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand2,
                                                                                 const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                 const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand4,
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
  public: GGS_semanticExpressionForGeneration mProperty_mVariantExpression ;
  public: GGS__5B_semanticInstructionForGeneration_5D_ mProperty_mFirstInstructions ;
  public: GGS_semanticExpressionForGeneration mProperty_mLoopExpression ;
  public: GGS__5B_semanticInstructionForGeneration_5D_ mProperty_mSecondInstructions ;


//--- Default constructor
  public: cPtr_loopInstructionWithVariantForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_loopInstructionWithVariantForGeneration (const GGS_location & in_mInstructionLocation,
                                                        const GGS_semanticExpressionForGeneration & in_mVariantExpression,
                                                        const GGS__5B_semanticInstructionForGeneration_5D_ & in_mFirstInstructions,
                                                        const GGS_semanticExpressionForGeneration & in_mLoopExpression,
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
// Phase 1: @loopInstructionWithVariantForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithVariantForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithVariantForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_loopInstructionWithVariantForGeneration_2E_weak (const class GGS_loopInstructionWithVariantForGeneration & inSource) ;

  public: GGS_loopInstructionWithVariantForGeneration_2E_weak & operator = (const class GGS_loopInstructionWithVariantForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_loopInstructionWithVariantForGeneration_2E_weak init_nil (void) {
    GGS_loopInstructionWithVariantForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_loopInstructionWithVariantForGeneration bang_loopInstructionWithVariantForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_loopInstructionWithVariantForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_loopInstructionWithVariantForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithVariantForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum methodKind
//--------------------------------------------------------------------------------------------------

class GGS_methodKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_methodKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_definedAsMember,
    enum_definedAsExtension
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
  public: static class GGS_methodKind class_func_definedAsExtension (LOCATION_ARGS) ;

  public: static class GGS_methodKind class_func_definedAsMember (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_methodKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isDefinedAsExtension (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDefinedAsMember (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @methodCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_methodCallInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_methodCallInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_methodCallInstructionForGeneration (const class cPtr_methodCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GGS_string readProperty_mMethodName (void) const ;

  public: class GGS_methodKind readProperty_mKind (void) const ;

  public: class GGS__5B_actualParameterForGeneration_5D_ readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mHasCompilerArgument (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mMethodBaseType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_methodCallInstructionForGeneration init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                              const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                              const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                                              const class GGS_string & inOperand3,
                                                                                              const class GGS_methodKind & inOperand4,
                                                                                              const class GGS__5B_actualParameterForGeneration_5D_ & inOperand5,
                                                                                              const class GGS_bool & inOperand6,
                                                                                              const class GGS_unifiedTypeMapEntry & inOperand7,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_methodCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodCallInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @methodCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_methodCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void methodCallInstructionForGeneration_init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                        const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                                        const class GGS_string & inOperand3,
                                                                                        const class GGS_methodKind & inOperand4,
                                                                                        const class GGS__5B_actualParameterForGeneration_5D_ & inOperand5,
                                                                                        const class GGS_bool & inOperand6,
                                                                                        const class GGS_unifiedTypeMapEntry & inOperand7,
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
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GGS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GGS_string mProperty_mMethodName ;
  public: GGS_methodKind mProperty_mKind ;
  public: GGS__5B_actualParameterForGeneration_5D_ mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: GGS_unifiedTypeMapEntry mProperty_mMethodBaseType ;


//--- Default constructor
  public: cPtr_methodCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_methodCallInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                   const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                   const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                   const GGS_string & in_mMethodName,
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
// Phase 1: @methodCallInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_methodCallInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_methodCallInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_methodCallInstructionForGeneration_2E_weak (const class GGS_methodCallInstructionForGeneration & inSource) ;

  public: GGS_methodCallInstructionForGeneration_2E_weak & operator = (const class GGS_methodCallInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_methodCallInstructionForGeneration_2E_weak init_nil (void) {
    GGS_methodCallInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_methodCallInstructionForGeneration bang_methodCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_methodCallInstructionForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_methodCallInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_methodCallInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodCallInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_ifInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_ifInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ifInstructionForGeneration (const class cPtr_ifInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS__5B_ifTestForGeneration_5D_ readProperty_mExpressions (void) const ;

  public: class GGS__5B_semanticInstructionForGeneration_5D_ readProperty_m_5F_then_5F_instructionList (void) const ;

  public: class GGS__5B_semanticInstructionForGeneration_5D_ readProperty_m_5F_else_5F_instructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifInstructionForGeneration init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS__5B_ifTestForGeneration_5D_ & inOperand1,
                                                                      const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand2,
                                                                      const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand3,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ifInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_ifInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ifInstructionForGeneration_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS__5B_ifTestForGeneration_5D_ & inOperand1,
                                                                const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand2,
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
  public: GGS__5B_ifTestForGeneration_5D_ mProperty_mExpressions ;
  public: GGS__5B_semanticInstructionForGeneration_5D_ mProperty_m_5F_then_5F_instructionList ;
  public: GGS__5B_semanticInstructionForGeneration_5D_ mProperty_m_5F_else_5F_instructionList ;


//--- Default constructor
  public: cPtr_ifInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ifInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                           const GGS__5B_ifTestForGeneration_5D_ & in_mExpressions,
                                           const GGS__5B_semanticInstructionForGeneration_5D_ & in_m_5F_then_5F_instructionList,
                                           const GGS__5B_semanticInstructionForGeneration_5D_ & in_m_5F_else_5F_instructionList,
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
// Phase 1: @ifInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ifInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ifInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ifInstructionForGeneration_2E_weak (const class GGS_ifInstructionForGeneration & inSource) ;

  public: GGS_ifInstructionForGeneration_2E_weak & operator = (const class GGS_ifInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ifInstructionForGeneration_2E_weak init_nil (void) {
    GGS_ifInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ifInstructionForGeneration bang_ifInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ifInstructionForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_ifInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionEnumeratedObjectElementAST struct
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionEnumeratedObjectElementAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mOptionalTypeName ;
  public: inline GGS_lstring readProperty_mOptionalTypeName (void) const {
    return mProperty_mOptionalTypeName ;
  }

  public: GGS_bool mProperty_mDeclaredAsUnused ;
  public: inline GGS_bool readProperty_mDeclaredAsUnused (void) const {
    return mProperty_mDeclaredAsUnused ;
  }

  public: GGS_lstring mProperty_mOptionalConstantName ;
  public: inline GGS_lstring readProperty_mOptionalConstantName (void) const {
    return mProperty_mOptionalConstantName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_forInstructionEnumeratedObjectElementAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionalTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionalTypeName = inValue ;
  }

  public: inline void setter_setMDeclaredAsUnused (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaredAsUnused = inValue ;
  }

  public: inline void setter_setMOptionalConstantName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionalConstantName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_forInstructionEnumeratedObjectElementAST (const GGS_lstring & in_mOptionalTypeName,
                                                        const GGS_bool & in_mDeclaredAsUnused,
                                                        const GGS_lstring & in_mOptionalConstantName) ;

//--------------------------------- Copy constructor
  public: GGS_forInstructionEnumeratedObjectElementAST (const GGS_forInstructionEnumeratedObjectElementAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_forInstructionEnumeratedObjectElementAST & operator = (const GGS_forInstructionEnumeratedObjectElementAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionEnumeratedObjectElementAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_bool & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractEnumeratedCollectionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractEnumeratedCollectionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractEnumeratedCollectionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractEnumeratedCollectionAST (const class cPtr_abstractEnumeratedCollectionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractEnumeratedCollectionAST init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractEnumeratedCollectionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractEnumeratedCollectionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractEnumeratedCollectionAST : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractEnumeratedCollectionAST_init (Compiler * inCompiler) ;


//--- Extension proc analyzeEnumeration
  public: virtual void method_analyzeEnumeration (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS__5B_localConstant_5D_ & arg_ioLocalConstantListForDoBranch,
           class GGS_string & arg_outEnumeratorCppName,
           class GGS_semanticExpressionForGeneration & arg_outEnumerationExpression,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension proc enterInSemanticContext
  public: virtual void method_enterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractEnumeratedCollectionAST (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractEnumeratedCollectionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractEnumeratedCollectionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractEnumeratedCollectionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractEnumeratedCollectionAST_2E_weak (const class GGS_abstractEnumeratedCollectionAST & inSource) ;

  public: GGS_abstractEnumeratedCollectionAST_2E_weak & operator = (const class GGS_abstractEnumeratedCollectionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractEnumeratedCollectionAST_2E_weak init_nil (void) {
    GGS_abstractEnumeratedCollectionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractEnumeratedCollectionAST bang_abstractEnumeratedCollectionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractEnumeratedCollectionAST unwrappedValue (void) const ;

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
  public: static class GGS_abstractEnumeratedCollectionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractEnumeratedCollectionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumeratedCollectionVarInExpAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumeratedCollectionVarInExpAST : public GGS_abstractEnumeratedCollectionAST {
//--------------------------------- Default constructor
  public: GGS_enumeratedCollectionVarInExpAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enumeratedCollectionVarInExpAST (const class cPtr_enumeratedCollectionVarInExpAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mEnumerationOptionalTypeName (void) const ;

  public: class GGS_lstring readProperty_mEnumerationVariable (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mEnumeratedExpression (void) const ;

  public: class GGS_location readProperty_mEndOfEnumerationExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumeratedCollectionVarInExpAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_semanticExpressionAST & inOperand2,
                                                                           const class GGS_location & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumeratedCollectionVarInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @enumeratedCollectionVarInExpAST class
//--------------------------------------------------------------------------------------------------

class cPtr_enumeratedCollectionVarInExpAST : public cPtr_abstractEnumeratedCollectionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enumeratedCollectionVarInExpAST_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_semanticExpressionAST & inOperand2,
                                                                     const class GGS_location & inOperand3,
                                                                     Compiler * inCompiler) ;


//--- Extension proc analyzeEnumeration
  public: virtual void method_analyzeEnumeration (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS__5B_localConstant_5D_ & arg_ioLocalConstantListForDoBranch,
           class GGS_string & arg_outEnumeratorCppName,
           class GGS_semanticExpressionForGeneration & arg_outEnumerationExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInSemanticContext
  public: virtual void method_enterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mEnumerationOptionalTypeName ;
  public: GGS_lstring mProperty_mEnumerationVariable ;
  public: GGS_semanticExpressionAST mProperty_mEnumeratedExpression ;
  public: GGS_location mProperty_mEndOfEnumerationExpression ;


//--- Default constructor
  public: cPtr_enumeratedCollectionVarInExpAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumeratedCollectionVarInExpAST (const GGS_lstring & in_mEnumerationOptionalTypeName,
                                                const GGS_lstring & in_mEnumerationVariable,
                                                const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                const GGS_location & in_mEndOfEnumerationExpression,
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
// Phase 1: @enumeratedCollectionVarInExpAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumeratedCollectionVarInExpAST_2E_weak : public GGS_abstractEnumeratedCollectionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enumeratedCollectionVarInExpAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enumeratedCollectionVarInExpAST_2E_weak (const class GGS_enumeratedCollectionVarInExpAST & inSource) ;

  public: GGS_enumeratedCollectionVarInExpAST_2E_weak & operator = (const class GGS_enumeratedCollectionVarInExpAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enumeratedCollectionVarInExpAST_2E_weak init_nil (void) {
    GGS_enumeratedCollectionVarInExpAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enumeratedCollectionVarInExpAST bang_enumeratedCollectionVarInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_enumeratedCollectionVarInExpAST unwrappedValue (void) const ;

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
  public: static class GGS_enumeratedCollectionVarInExpAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumeratedCollectionVarInExpAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [forInstructionEnumeratedObjectElementAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_ (const class GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_ (const DownEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_ &) = delete ;
  private: DownEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_ & operator = (const DownEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_forInstructionEnumeratedObjectElementAST current (LOCATION_ARGS) const ;
  public: class GGS_forInstructionEnumeratedObjectElementAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_forInstructionEnumeratedObjectElementAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_ (const class GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_ (const UpEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_ &) = delete ;
  private: UpEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_ & operator = (const UpEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_forInstructionEnumeratedObjectElementAST current (LOCATION_ARGS) const ;
  public: class GGS_forInstructionEnumeratedObjectElementAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_forInstructionEnumeratedObjectElementAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_forInstructionEnumeratedObjectElementAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ (const GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & inSource) ;
  public: GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & operator = (const GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & inSource) ;

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
  public: static GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ init (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_forInstructionEnumeratedObjectElementAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ add_operation (const GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_forInstructionEnumeratedObjectElementAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_forInstructionEnumeratedObjectElementAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_forInstructionEnumeratedObjectElementAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_forInstructionEnumeratedObjectElementAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_forInstructionEnumeratedObjectElementAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_forInstructionEnumeratedObjectElementAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_forInstructionEnumeratedObjectElementAST getter_first (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_forInstructionEnumeratedObjectElementAST getter_last (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                                     const class GGS_uint & constinOperand1,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_forInstructionEnumeratedObjectElementAST readSubscript__3F_ (const class GGS_uint & in0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_ ;
  friend class DownEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_forInstructionEnumeratedObjectElementAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumeratedCollectionCstListInExpAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumeratedCollectionCstListInExpAST : public GGS_abstractEnumeratedCollectionAST {
//--------------------------------- Default constructor
  public: GGS_enumeratedCollectionCstListInExpAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enumeratedCollectionCstListInExpAST (const class cPtr_enumeratedCollectionCstListInExpAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ readProperty_mElementList (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mEnumeratedExpression (void) const ;

  public: class GGS_location readProperty_mEndOfEnumerationExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumeratedCollectionCstListInExpAST init_21__21__21_ (const class GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & inOperand0,
                                                                           const class GGS_semanticExpressionAST & inOperand1,
                                                                           const class GGS_location & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumeratedCollectionCstListInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @enumeratedCollectionCstListInExpAST class
//--------------------------------------------------------------------------------------------------

class cPtr_enumeratedCollectionCstListInExpAST : public cPtr_abstractEnumeratedCollectionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enumeratedCollectionCstListInExpAST_init_21__21__21_ (const class GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & inOperand0,
                                                                     const class GGS_semanticExpressionAST & inOperand1,
                                                                     const class GGS_location & inOperand2,
                                                                     Compiler * inCompiler) ;


//--- Extension proc analyzeEnumeration
  public: virtual void method_analyzeEnumeration (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS__5B_localConstant_5D_ & arg_ioLocalConstantListForDoBranch,
           class GGS_string & arg_outEnumeratorCppName,
           class GGS_semanticExpressionForGeneration & arg_outEnumerationExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInSemanticContext
  public: virtual void method_enterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ mProperty_mElementList ;
  public: GGS_semanticExpressionAST mProperty_mEnumeratedExpression ;
  public: GGS_location mProperty_mEndOfEnumerationExpression ;


//--- Default constructor
  public: cPtr_enumeratedCollectionCstListInExpAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumeratedCollectionCstListInExpAST (const GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & in_mElementList,
                                                    const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                    const GGS_location & in_mEndOfEnumerationExpression,
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
// Phase 1: @enumeratedCollectionCstListInExpAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumeratedCollectionCstListInExpAST_2E_weak : public GGS_abstractEnumeratedCollectionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enumeratedCollectionCstListInExpAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enumeratedCollectionCstListInExpAST_2E_weak (const class GGS_enumeratedCollectionCstListInExpAST & inSource) ;

  public: GGS_enumeratedCollectionCstListInExpAST_2E_weak & operator = (const class GGS_enumeratedCollectionCstListInExpAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enumeratedCollectionCstListInExpAST_2E_weak init_nil (void) {
    GGS_enumeratedCollectionCstListInExpAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enumeratedCollectionCstListInExpAST bang_enumeratedCollectionCstListInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_enumeratedCollectionCstListInExpAST unwrappedValue (void) const ;

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
  public: static class GGS_enumeratedCollectionCstListInExpAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumeratedCollectionCstListInExpAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionEnumeratedObjectAST struct
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionEnumeratedObjectAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_mAscending ;
  public: inline GGS_bool readProperty_mAscending (void) const {
    return mProperty_mAscending ;
  }

  public: GGS_abstractEnumeratedCollectionAST mProperty_mEnumeratedCollection ;
  public: inline GGS_abstractEnumeratedCollectionAST readProperty_mEnumeratedCollection (void) const {
    return mProperty_mEnumeratedCollection ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_forInstructionEnumeratedObjectAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAscending (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAscending = inValue ;
  }

  public: inline void setter_setMEnumeratedCollection (const GGS_abstractEnumeratedCollectionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratedCollection = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_forInstructionEnumeratedObjectAST (const GGS_bool & in_mAscending,
                                                 const GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection) ;

//--------------------------------- Copy constructor
  public: GGS_forInstructionEnumeratedObjectAST (const GGS_forInstructionEnumeratedObjectAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_forInstructionEnumeratedObjectAST & operator = (const GGS_forInstructionEnumeratedObjectAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionEnumeratedObjectAST init_21__21_ (const class GGS_bool & inOperand0,
                                                                     const class GGS_abstractEnumeratedCollectionAST & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [forInstructionEnumeratedObjectAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_forInstructionEnumeratedObjectAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_forInstructionEnumeratedObjectAST_5D_ (const class GGS__5B_forInstructionEnumeratedObjectAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_forInstructionEnumeratedObjectAST_5D_ (const DownEnumerator__5B_forInstructionEnumeratedObjectAST_5D_ &) = delete ;
  private: DownEnumerator__5B_forInstructionEnumeratedObjectAST_5D_ & operator = (const DownEnumerator__5B_forInstructionEnumeratedObjectAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_forInstructionEnumeratedObjectAST current (LOCATION_ARGS) const ;
  public: class GGS_forInstructionEnumeratedObjectAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_forInstructionEnumeratedObjectAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_forInstructionEnumeratedObjectAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_forInstructionEnumeratedObjectAST_5D_ (const class GGS__5B_forInstructionEnumeratedObjectAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_forInstructionEnumeratedObjectAST_5D_ (const UpEnumerator__5B_forInstructionEnumeratedObjectAST_5D_ &) = delete ;
  private: UpEnumerator__5B_forInstructionEnumeratedObjectAST_5D_ & operator = (const UpEnumerator__5B_forInstructionEnumeratedObjectAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_forInstructionEnumeratedObjectAST current (LOCATION_ARGS) const ;
  public: class GGS_forInstructionEnumeratedObjectAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_forInstructionEnumeratedObjectAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_forInstructionEnumeratedObjectAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_forInstructionEnumeratedObjectAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_forInstructionEnumeratedObjectAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_forInstructionEnumeratedObjectAST_5D_ (const GGS__5B_forInstructionEnumeratedObjectAST_5D_ & inSource) ;
  public: GGS__5B_forInstructionEnumeratedObjectAST_5D_ & operator = (const GGS__5B_forInstructionEnumeratedObjectAST_5D_ & inSource) ;

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
  public: static GGS__5B_forInstructionEnumeratedObjectAST_5D_ init (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_forInstructionEnumeratedObjectAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_forInstructionEnumeratedObjectAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_forInstructionEnumeratedObjectAST_5D_ add_operation (const GGS__5B_forInstructionEnumeratedObjectAST_5D_ & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_forInstructionEnumeratedObjectAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_forInstructionEnumeratedObjectAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_forInstructionEnumeratedObjectAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_forInstructionEnumeratedObjectAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_forInstructionEnumeratedObjectAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_forInstructionEnumeratedObjectAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_forInstructionEnumeratedObjectAST getter_first (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_forInstructionEnumeratedObjectAST getter_last (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_forInstructionEnumeratedObjectAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_forInstructionEnumeratedObjectAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                              const class GGS_uint & constinOperand1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_forInstructionEnumeratedObjectAST readSubscript__3F_ (const class GGS_uint & in0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_forInstructionEnumeratedObjectAST_5D_ ;
  friend class DownEnumerator__5B_forInstructionEnumeratedObjectAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_forInstructionEnumeratedObjectAST_5D_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractEnumeratedCollectionAST enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInSemanticContext (class cPtr_abstractEnumeratedCollectionAST * inObject,
                                                 class GGS_unifiedTypeMap & io_ioTypeMap,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [localConstant] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_localConstant_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_localConstant_5D_ (const class GGS__5B_localConstant_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_localConstant_5D_ (const DownEnumerator__5B_localConstant_5D_ &) = delete ;
  private: DownEnumerator__5B_localConstant_5D_ & operator = (const DownEnumerator__5B_localConstant_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_localConstant current (LOCATION_ARGS) const ;
  public: class GGS_localConstant current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_localConstant> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_localConstant_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_localConstant_5D_ (const class GGS__5B_localConstant_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_localConstant_5D_ (const UpEnumerator__5B_localConstant_5D_ &) = delete ;
  private: UpEnumerator__5B_localConstant_5D_ & operator = (const UpEnumerator__5B_localConstant_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_localConstant current (LOCATION_ARGS) const ;
  public: class GGS_localConstant current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_localConstant> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_localConstant_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_localConstant> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_localConstant_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_localConstant_5D_ (const GGS__5B_localConstant_5D_ & inSource) ;
  public: GGS__5B_localConstant_5D_ & operator = (const GGS__5B_localConstant_5D_ & inSource) ;

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
  public: static GGS__5B_localConstant_5D_ init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_localConstant_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_localConstant & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_localConstant_5D_ add_operation (const GGS__5B_localConstant_5D_ & inOperand,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_localConstant constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_localConstant constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_localConstant & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_localConstant & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_localConstant & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_localConstant constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_localConstant getter_first (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_localConstant getter_last (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_localConstant_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_localConstant_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                          const class GGS_uint & constinOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_localConstant readSubscript__3F_ (const class GGS_uint & in0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_localConstant_5D_ ;
  friend class DownEnumerator__5B_localConstant_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_localConstant_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localConstant struct
//--------------------------------------------------------------------------------------------------

class GGS_localConstant : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GGS_lstring mProperty_mName ;
  public: inline GGS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GGS_bool mProperty_mNoWarningIfUnused ;
  public: inline GGS_bool readProperty_mNoWarningIfUnused (void) const {
    return mProperty_mNoWarningIfUnused ;
  }

  public: GGS_string mProperty_mCppName ;
  public: inline GGS_string readProperty_mCppName (void) const {
    return mProperty_mCppName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_localConstant (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMNoWarningIfUnused (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNoWarningIfUnused = inValue ;
  }

  public: inline void setter_setMCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_localConstant (const GGS_unifiedTypeMapEntry & in_mType,
                             const GGS_lstring & in_mName,
                             const GGS_bool & in_mNoWarningIfUnused,
                             const GGS_string & in_mCppName) ;

//--------------------------------- Copy constructor
  public: GGS_localConstant (const GGS_localConstant & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_localConstant & operator = (const GGS_localConstant & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localConstant init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                         const class GGS_lstring & inOperand1,
                                                         const class GGS_bool & inOperand2,
                                                         const class GGS_string & inOperand3,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localConstant ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractEnumeratedCollectionAST analyzeEnumeration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeEnumeration (class cPtr_abstractEnumeratedCollectionAST * inObject,
                                             const class GGS_lstring constin_inUsefulnessCallerEntityName,
                                             class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                             const class GGS_analysisContext constin_inAnalysisContext,
                                             class GGS_unifiedTypeMap & io_ioTypeMap,
                                             class GGS_localVarManager & io_ioVariableMap,
                                             class GGS__5B_localConstant_5D_ & io_ioLocalConstantListForDoBranch,
                                             class GGS_string & out_outEnumeratorCppName,
                                             class GGS_semanticExpressionForGeneration & out_outEnumerationExpression,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [forInstructionEnumeratedObjectForGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ (const class GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ (const DownEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ & operator = (const DownEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_forInstructionEnumeratedObjectForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_forInstructionEnumeratedObjectForGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_forInstructionEnumeratedObjectForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ (const class GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ (const UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ & operator = (const UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_forInstructionEnumeratedObjectForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_forInstructionEnumeratedObjectForGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_forInstructionEnumeratedObjectForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_forInstructionEnumeratedObjectForGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ (const GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ & inSource) ;
  public: GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ & operator = (const GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ & inSource) ;

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
  public: static GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ init (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_forInstructionEnumeratedObjectForGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ add_operation (const GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ & inOperand,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_forInstructionEnumeratedObjectForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_forInstructionEnumeratedObjectForGeneration constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_forInstructionEnumeratedObjectForGeneration & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_forInstructionEnumeratedObjectForGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_forInstructionEnumeratedObjectForGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_forInstructionEnumeratedObjectForGeneration constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_forInstructionEnumeratedObjectForGeneration getter_first (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_forInstructionEnumeratedObjectForGeneration getter_last (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                                        const class GGS_uint & constinOperand1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_forInstructionEnumeratedObjectForGeneration readSubscript__3F_ (const class GGS_uint & in0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ ;
  friend class DownEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_forInstructionEnumeratedObjectForGeneration_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionEnumeratedObjectForGeneration struct
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionEnumeratedObjectForGeneration : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mEnumerationOrder ;
  public: inline GGS_string readProperty_mEnumerationOrder (void) const {
    return mProperty_mEnumerationOrder ;
  }

  public: GGS_semanticExpressionForGeneration mProperty_mEnumeratedExpression ;
  public: inline GGS_semanticExpressionForGeneration readProperty_mEnumeratedExpression (void) const {
    return mProperty_mEnumeratedExpression ;
  }

  public: GGS_string mProperty_mEnumeratorCppName ;
  public: inline GGS_string readProperty_mEnumeratorCppName (void) const {
    return mProperty_mEnumeratorCppName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_forInstructionEnumeratedObjectForGeneration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEnumerationOrder (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumerationOrder = inValue ;
  }

  public: inline void setter_setMEnumeratedExpression (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratedExpression = inValue ;
  }

  public: inline void setter_setMEnumeratorCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratorCppName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_forInstructionEnumeratedObjectForGeneration (const GGS_string & in_mEnumerationOrder,
                                                           const GGS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                           const GGS_string & in_mEnumeratorCppName) ;

//--------------------------------- Copy constructor
  public: GGS_forInstructionEnumeratedObjectForGeneration (const GGS_forInstructionEnumeratedObjectForGeneration & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_forInstructionEnumeratedObjectForGeneration & operator = (const GGS_forInstructionEnumeratedObjectForGeneration & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionEnumeratedObjectForGeneration init_21__21__21_ (const class GGS_string & inOperand0,
                                                                                   const class GGS_semanticExpressionForGeneration & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_forInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_forInstructionForGeneration (const class cPtr_forInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ readProperty_mEnumeratedObjectList (void) const ;

  public: class GGS_string readProperty_mIndexVariableCppName (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mWhileExpression (void) const ;

  public: class GGS__5B_semanticInstructionForGeneration_5D_ readProperty_mBeforeInstructionList (void) const ;

  public: class GGS__5B_semanticInstructionForGeneration_5D_ readProperty_mBetweenInstructionList (void) const ;

  public: class GGS__5B_semanticInstructionForGeneration_5D_ readProperty_mDoInstructionList (void) const ;

  public: class GGS__5B_semanticInstructionForGeneration_5D_ readProperty_mAfterInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionForGeneration init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ & inOperand1,
                                                                                       const class GGS_string & inOperand2,
                                                                                       const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                       const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand4,
                                                                                       const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand5,
                                                                                       const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand6,
                                                                                       const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand7,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @forInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_forInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void forInstructionForGeneration_init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ & inOperand1,
                                                                                 const class GGS_string & inOperand2,
                                                                                 const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                 const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand4,
                                                                                 const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand5,
                                                                                 const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand6,
                                                                                 const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand7,
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
  public: GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ mProperty_mEnumeratedObjectList ;
  public: GGS_string mProperty_mIndexVariableCppName ;
  public: GGS_semanticExpressionForGeneration mProperty_mWhileExpression ;
  public: GGS__5B_semanticInstructionForGeneration_5D_ mProperty_mBeforeInstructionList ;
  public: GGS__5B_semanticInstructionForGeneration_5D_ mProperty_mBetweenInstructionList ;
  public: GGS__5B_semanticInstructionForGeneration_5D_ mProperty_mDoInstructionList ;
  public: GGS__5B_semanticInstructionForGeneration_5D_ mProperty_mAfterInstructionList ;


//--- Default constructor
  public: cPtr_forInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_forInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                            const GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ & in_mEnumeratedObjectList,
                                            const GGS_string & in_mIndexVariableCppName,
                                            const GGS_semanticExpressionForGeneration & in_mWhileExpression,
                                            const GGS__5B_semanticInstructionForGeneration_5D_ & in_mBeforeInstructionList,
                                            const GGS__5B_semanticInstructionForGeneration_5D_ & in_mBetweenInstructionList,
                                            const GGS__5B_semanticInstructionForGeneration_5D_ & in_mDoInstructionList,
                                            const GGS__5B_semanticInstructionForGeneration_5D_ & in_mAfterInstructionList,
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
// Phase 1: @forInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_forInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_forInstructionForGeneration_2E_weak (const class GGS_forInstructionForGeneration & inSource) ;

  public: GGS_forInstructionForGeneration_2E_weak & operator = (const class GGS_forInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_forInstructionForGeneration_2E_weak init_nil (void) {
    GGS_forInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_forInstructionForGeneration bang_forInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_forInstructionForGeneration unwrappedValue (void) const ;

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
  public: static class GGS_forInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [switchBranchAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_switchBranchAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_switchBranchAST_5D_ (const class GGS__5B_switchBranchAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_switchBranchAST_5D_ (const DownEnumerator__5B_switchBranchAST_5D_ &) = delete ;
  private: DownEnumerator__5B_switchBranchAST_5D_ & operator = (const DownEnumerator__5B_switchBranchAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_switchBranchAST current (LOCATION_ARGS) const ;
  public: class GGS_switchBranchAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_switchBranchAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_switchBranchAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_switchBranchAST_5D_ (const class GGS__5B_switchBranchAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_switchBranchAST_5D_ (const UpEnumerator__5B_switchBranchAST_5D_ &) = delete ;
  private: UpEnumerator__5B_switchBranchAST_5D_ & operator = (const UpEnumerator__5B_switchBranchAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_switchBranchAST current (LOCATION_ARGS) const ;
  public: class GGS_switchBranchAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_switchBranchAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_switchBranchAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_switchBranchAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_switchBranchAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_switchBranchAST_5D_ (const GGS__5B_switchBranchAST_5D_ & inSource) ;
  public: GGS__5B_switchBranchAST_5D_ & operator = (const GGS__5B_switchBranchAST_5D_ & inSource) ;

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
  public: static GGS__5B_switchBranchAST_5D_ init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_switchBranchAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_switchBranchAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_switchBranchAST_5D_ add_operation (const GGS__5B_switchBranchAST_5D_ & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_switchBranchAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_switchBranchAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_switchBranchAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_switchBranchAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_switchBranchAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_switchBranchAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_switchBranchAST getter_first (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_switchBranchAST getter_last (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_switchBranchAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_switchBranchAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                            const class GGS_uint & constinOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_switchBranchAST readSubscript__3F_ (const class GGS_uint & in0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_switchBranchAST_5D_ ;
  friend class DownEnumerator__5B_switchBranchAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_switchBranchAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [switchExtractedValuesAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_switchExtractedValuesAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_switchExtractedValuesAST_5D_ (const class GGS__5B_switchExtractedValuesAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_switchExtractedValuesAST_5D_ (const DownEnumerator__5B_switchExtractedValuesAST_5D_ &) = delete ;
  private: DownEnumerator__5B_switchExtractedValuesAST_5D_ & operator = (const DownEnumerator__5B_switchExtractedValuesAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_switchExtractedValuesAST current (LOCATION_ARGS) const ;
  public: class GGS_switchExtractedValuesAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_switchExtractedValuesAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_switchExtractedValuesAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_switchExtractedValuesAST_5D_ (const class GGS__5B_switchExtractedValuesAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_switchExtractedValuesAST_5D_ (const UpEnumerator__5B_switchExtractedValuesAST_5D_ &) = delete ;
  private: UpEnumerator__5B_switchExtractedValuesAST_5D_ & operator = (const UpEnumerator__5B_switchExtractedValuesAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_switchExtractedValuesAST current (LOCATION_ARGS) const ;
  public: class GGS_switchExtractedValuesAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_switchExtractedValuesAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_switchExtractedValuesAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_switchExtractedValuesAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_switchExtractedValuesAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_switchExtractedValuesAST_5D_ (const GGS__5B_switchExtractedValuesAST_5D_ & inSource) ;
  public: GGS__5B_switchExtractedValuesAST_5D_ & operator = (const GGS__5B_switchExtractedValuesAST_5D_ & inSource) ;

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
  public: static GGS__5B_switchExtractedValuesAST_5D_ init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_switchExtractedValuesAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_switchExtractedValuesAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_switchExtractedValuesAST_5D_ add_operation (const GGS__5B_switchExtractedValuesAST_5D_ & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_switchExtractedValuesAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_switchExtractedValuesAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_switchExtractedValuesAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_switchExtractedValuesAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_switchExtractedValuesAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_switchExtractedValuesAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_switchExtractedValuesAST getter_first (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_switchExtractedValuesAST getter_last (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_switchExtractedValuesAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_switchExtractedValuesAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                     const class GGS_uint & constinOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_switchExtractedValuesAST readSubscript__3F_ (const class GGS_uint & in0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_switchExtractedValuesAST_5D_ ;
  friend class DownEnumerator__5B_switchExtractedValuesAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_switchExtractedValuesAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchBranchAST struct
//--------------------------------------------------------------------------------------------------

class GGS_switchBranchAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_lstring_5D_ mProperty_mSwitchConstantList ;
  public: inline GGS__5B_lstring_5D_ readProperty_mSwitchConstantList (void) const {
    return mProperty_mSwitchConstantList ;
  }

  public: GGS__5B_switchExtractedValuesAST_5D_ mProperty_mAssociatedValuesExtraction ;
  public: inline GGS__5B_switchExtractedValuesAST_5D_ readProperty_mAssociatedValuesExtraction (void) const {
    return mProperty_mAssociatedValuesExtraction ;
  }

  public: GGS__5B_semanticInstructionAST_5D_ mProperty_mInstructions ;
  public: inline GGS__5B_semanticInstructionAST_5D_ readProperty_mInstructions (void) const {
    return mProperty_mInstructions ;
  }

  public: GGS_location mProperty_mEndOfBranch ;
  public: inline GGS_location readProperty_mEndOfBranch (void) const {
    return mProperty_mEndOfBranch ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_switchBranchAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSwitchConstantList (const GGS__5B_lstring_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSwitchConstantList = inValue ;
  }

  public: inline void setter_setMAssociatedValuesExtraction (const GGS__5B_switchExtractedValuesAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociatedValuesExtraction = inValue ;
  }

  public: inline void setter_setMInstructions (const GGS__5B_semanticInstructionAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructions = inValue ;
  }

  public: inline void setter_setMEndOfBranch (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfBranch = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_switchBranchAST (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                               const GGS__5B_switchExtractedValuesAST_5D_ & in_mAssociatedValuesExtraction,
                               const GGS__5B_semanticInstructionAST_5D_ & in_mInstructions,
                               const GGS_location & in_mEndOfBranch) ;

//--------------------------------- Copy constructor
  public: GGS_switchBranchAST (const GGS_switchBranchAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_switchBranchAST & operator = (const GGS_switchBranchAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchBranchAST init_21__21__21__21_ (const class GGS__5B_lstring_5D_ & inOperand0,
                                                           const class GGS__5B_switchExtractedValuesAST_5D_ & inOperand1,
                                                           const class GGS__5B_semanticInstructionAST_5D_ & inOperand2,
                                                           const class GGS_location & inOperand3,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchBranchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchExtractedValuesAST struct
//--------------------------------------------------------------------------------------------------

class GGS_switchExtractedValuesAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mExtractedValueTypeName ;
  public: inline GGS_lstring readProperty_mExtractedValueTypeName (void) const {
    return mProperty_mExtractedValueTypeName ;
  }

  public: GGS_lstring mProperty_mExtractedValueName ;
  public: inline GGS_lstring readProperty_mExtractedValueName (void) const {
    return mProperty_mExtractedValueName ;
  }

  public: GGS_bool mProperty_mMarkedAsUnused ;
  public: inline GGS_bool readProperty_mMarkedAsUnused (void) const {
    return mProperty_mMarkedAsUnused ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_switchExtractedValuesAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExtractedValueTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtractedValueTypeName = inValue ;
  }

  public: inline void setter_setMExtractedValueName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtractedValueName = inValue ;
  }

  public: inline void setter_setMMarkedAsUnused (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMarkedAsUnused = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_switchExtractedValuesAST (const GGS_lstring & in_mExtractedValueTypeName,
                                        const GGS_lstring & in_mExtractedValueName,
                                        const GGS_bool & in_mMarkedAsUnused) ;

//--------------------------------- Copy constructor
  public: GGS_switchExtractedValuesAST (const GGS_switchExtractedValuesAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_switchExtractedValuesAST & operator = (const GGS_switchExtractedValuesAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchExtractedValuesAST init_21__21__21_ (const class GGS_lstring & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchExtractedValuesAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [switchBranchForGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_switchBranchForGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_switchBranchForGeneration_5D_ (const class GGS__5B_switchBranchForGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_switchBranchForGeneration_5D_ (const DownEnumerator__5B_switchBranchForGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_switchBranchForGeneration_5D_ & operator = (const DownEnumerator__5B_switchBranchForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_switchBranchForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_switchBranchForGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_switchBranchForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_switchBranchForGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_switchBranchForGeneration_5D_ (const class GGS__5B_switchBranchForGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_switchBranchForGeneration_5D_ (const UpEnumerator__5B_switchBranchForGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_switchBranchForGeneration_5D_ & operator = (const UpEnumerator__5B_switchBranchForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_switchBranchForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_switchBranchForGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_switchBranchForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_switchBranchForGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_switchBranchForGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_switchBranchForGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_switchBranchForGeneration_5D_ (const GGS__5B_switchBranchForGeneration_5D_ & inSource) ;
  public: GGS__5B_switchBranchForGeneration_5D_ & operator = (const GGS__5B_switchBranchForGeneration_5D_ & inSource) ;

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
  public: static GGS__5B_switchBranchForGeneration_5D_ init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_switchBranchForGeneration_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_switchBranchForGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_switchBranchForGeneration_5D_ add_operation (const GGS__5B_switchBranchForGeneration_5D_ & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_switchBranchForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_switchBranchForGeneration constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_switchBranchForGeneration & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_switchBranchForGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_switchBranchForGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_switchBranchForGeneration constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_switchBranchForGeneration getter_first (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_switchBranchForGeneration getter_last (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_switchBranchForGeneration_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_switchBranchForGeneration_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                      const class GGS_uint & constinOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_switchBranchForGeneration readSubscript__3F_ (const class GGS_uint & in0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_switchBranchForGeneration_5D_ ;
  friend class DownEnumerator__5B_switchBranchForGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_switchBranchForGeneration_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [extractedAssociatedValueForGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_extractedAssociatedValueForGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_extractedAssociatedValueForGeneration_5D_ (const class GGS__5B_extractedAssociatedValueForGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_extractedAssociatedValueForGeneration_5D_ (const DownEnumerator__5B_extractedAssociatedValueForGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_extractedAssociatedValueForGeneration_5D_ & operator = (const DownEnumerator__5B_extractedAssociatedValueForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_extractedAssociatedValueForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_extractedAssociatedValueForGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_extractedAssociatedValueForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_ (const class GGS__5B_extractedAssociatedValueForGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_ (const UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_ & operator = (const UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_extractedAssociatedValueForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_extractedAssociatedValueForGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_extractedAssociatedValueForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_extractedAssociatedValueForGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_extractedAssociatedValueForGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_extractedAssociatedValueForGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_extractedAssociatedValueForGeneration_5D_ (const GGS__5B_extractedAssociatedValueForGeneration_5D_ & inSource) ;
  public: GGS__5B_extractedAssociatedValueForGeneration_5D_ & operator = (const GGS__5B_extractedAssociatedValueForGeneration_5D_ & inSource) ;

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
  public: static GGS__5B_extractedAssociatedValueForGeneration_5D_ init (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_extractedAssociatedValueForGeneration_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_extractedAssociatedValueForGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_extractedAssociatedValueForGeneration_5D_ add_operation (const GGS__5B_extractedAssociatedValueForGeneration_5D_ & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_extractedAssociatedValueForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_extractedAssociatedValueForGeneration constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_extractedAssociatedValueForGeneration & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_extractedAssociatedValueForGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_extractedAssociatedValueForGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_extractedAssociatedValueForGeneration constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_extractedAssociatedValueForGeneration getter_first (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_extractedAssociatedValueForGeneration getter_last (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_extractedAssociatedValueForGeneration_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_extractedAssociatedValueForGeneration_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                                  const class GGS_uint & constinOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_extractedAssociatedValueForGeneration readSubscript__3F_ (const class GGS_uint & in0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_ ;
  friend class DownEnumerator__5B_extractedAssociatedValueForGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_extractedAssociatedValueForGeneration_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchBranchForGeneration struct
//--------------------------------------------------------------------------------------------------

class GGS_switchBranchForGeneration : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_lstring_5D_ mProperty_mSwitchConstantList ;
  public: inline GGS__5B_lstring_5D_ readProperty_mSwitchConstantList (void) const {
    return mProperty_mSwitchConstantList ;
  }

  public: GGS__5B_extractedAssociatedValueForGeneration_5D_ mProperty_mExtractedAssociatedValuesForGeneration ;
  public: inline GGS__5B_extractedAssociatedValueForGeneration_5D_ readProperty_mExtractedAssociatedValuesForGeneration (void) const {
    return mProperty_mExtractedAssociatedValuesForGeneration ;
  }

  public: GGS_uint mProperty_mEndOfBranchLocationIndex ;
  public: inline GGS_uint readProperty_mEndOfBranchLocationIndex (void) const {
    return mProperty_mEndOfBranchLocationIndex ;
  }

  public: GGS__5B_semanticInstructionForGeneration_5D_ mProperty_mInstructions ;
  public: inline GGS__5B_semanticInstructionForGeneration_5D_ readProperty_mInstructions (void) const {
    return mProperty_mInstructions ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_switchBranchForGeneration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSwitchConstantList (const GGS__5B_lstring_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSwitchConstantList = inValue ;
  }

  public: inline void setter_setMExtractedAssociatedValuesForGeneration (const GGS__5B_extractedAssociatedValueForGeneration_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtractedAssociatedValuesForGeneration = inValue ;
  }

  public: inline void setter_setMEndOfBranchLocationIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfBranchLocationIndex = inValue ;
  }

  public: inline void setter_setMInstructions (const GGS__5B_semanticInstructionForGeneration_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructions = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_switchBranchForGeneration (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                         const GGS__5B_extractedAssociatedValueForGeneration_5D_ & in_mExtractedAssociatedValuesForGeneration,
                                         const GGS_uint & in_mEndOfBranchLocationIndex,
                                         const GGS__5B_semanticInstructionForGeneration_5D_ & in_mInstructions) ;

//--------------------------------- Copy constructor
  public: GGS_switchBranchForGeneration (const GGS_switchBranchForGeneration & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_switchBranchForGeneration & operator = (const GGS_switchBranchForGeneration & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchBranchForGeneration init_21__21__21__21_ (const class GGS__5B_lstring_5D_ & inOperand0,
                                                                     const class GGS__5B_extractedAssociatedValueForGeneration_5D_ & inOperand1,
                                                                     const class GGS_uint & inOperand2,
                                                                     const class GGS__5B_semanticInstructionForGeneration_5D_ & inOperand3,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchBranchForGeneration ;

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

