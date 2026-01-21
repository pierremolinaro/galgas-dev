#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_superInitInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superInitInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @parseWhenInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_parseWhenInstruction_2E_weak : public GGS_syntaxInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_parseWhenInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_parseWhenInstruction_2E_weak (const class GGS_parseWhenInstruction & inSource) ;

  public: GGS_parseWhenInstruction_2E_weak & operator = (const class GGS_parseWhenInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_parseWhenInstruction_2E_weak init_nil (void) {
    GGS_parseWhenInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_parseWhenInstruction bang_parseWhenInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_parseWhenInstruction unwrappedValue (void) const ;

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
  public: static GGS_parseWhenInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_parseWhenInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_parseWhenInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_parseWhenInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @parseWhenInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_parseWhenInstructionForGeneration : public GGS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_parseWhenInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_parseWhenInstructionForGeneration (const class cPtr_parseWhenInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mWhenExpression (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mInstructionList (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mElseInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_parseWhenInstructionForGeneration init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                             const class GGS_semanticInstructionListForGeneration & inOperand2,
                                                                             const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_parseWhenInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_parseWhenInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @parseWhenInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_parseWhenInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void parseWhenInstructionForGeneration_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                       const class GGS_semanticInstructionListForGeneration & inOperand2,
                                                                       const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                       Compiler * inCompiler) ;


//--- Extension method appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GGS_string arg_inPosfix,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mWhenExpression ;
  public: GGS_semanticInstructionListForGeneration mProperty_mInstructionList ;
  public: GGS_semanticInstructionListForGeneration mProperty_mElseInstructionList ;


//--- Default constructor
  public: cPtr_parseWhenInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_parseWhenInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                  const GGS_semanticExpressionForGeneration & in_mWhenExpression,
                                                  const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                  const GGS_semanticInstructionListForGeneration & in_mElseInstructionList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @parseWhenInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_parseWhenInstructionForGeneration_2E_weak : public GGS_syntaxInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_parseWhenInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_parseWhenInstructionForGeneration_2E_weak (const class GGS_parseWhenInstructionForGeneration & inSource) ;

  public: GGS_parseWhenInstructionForGeneration_2E_weak & operator = (const class GGS_parseWhenInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_parseWhenInstructionForGeneration_2E_weak init_nil (void) {
    GGS_parseWhenInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_parseWhenInstructionForGeneration bang_parseWhenInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_parseWhenInstructionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_parseWhenInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_parseWhenInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_parseWhenInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_fixitListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_fixitElementAST mProperty_mElement ;
  public: inline GGS_fixitElementAST readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GGS_fixitElementAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitListAST_2E_element (const GGS_fixitElementAST & in_mElement) ;

//--------------------------------- Copy constructor
  public: GGS_fixitListAST_2E_element (const GGS_fixitListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fixitListAST_2E_element & operator = (const GGS_fixitListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitListAST_2E_element init_21_ (const class GGS_fixitElementAST & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitListAST_2E_element extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitListAST_2E_element ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_warningInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_fixitListForGeneration final {
  public: DownEnumerator_fixitListForGeneration (const class GGS_fixitListForGeneration & inList) ;

  public: ~ DownEnumerator_fixitListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_fixitElementForGeneration current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_fixitListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_fixitListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_fixitListForGeneration (const DownEnumerator_fixitListForGeneration &) = delete ;
  private: DownEnumerator_fixitListForGeneration & operator = (const DownEnumerator_fixitListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_fixitListForGeneration final {
  public: UpEnumerator_fixitListForGeneration (const class GGS_fixitListForGeneration & inList)  ;

  public: ~ UpEnumerator_fixitListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_fixitElementForGeneration current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_fixitListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_fixitListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_fixitListForGeneration (const UpEnumerator_fixitListForGeneration &) = delete ;
  private: UpEnumerator_fixitListForGeneration & operator = (const UpEnumerator_fixitListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @fixitListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_fixitListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_fixitListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_fixitListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_fixitListForGeneration (void) = default ;

//--- Copy
  public: GGS_fixitListForGeneration (const GGS_fixitListForGeneration &) = default ;
  public: GGS_fixitListForGeneration & operator = (const GGS_fixitListForGeneration &) = default ;

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
  public : inline GenericArray <GGS_fixitListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_fixitListForGeneration subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_fixitListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_fixitElementForGeneration & in_mElement
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitListForGeneration init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitListForGeneration extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitListForGeneration class_func_listWithValue (const class GGS_fixitElementForGeneration & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_fixitListForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_fixitElementForGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_fixitListForGeneration_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_fixitListForGeneration add_operation (const GGS_fixitListForGeneration & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_fixitElementForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_fixitElementForGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_fixitElementForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_fixitElementForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_fixitElementForGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementAtIndex (class GGS_fixitElementForGeneration constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_fixitElementForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_fixitElementForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitElementForGeneration getter_mElementAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_fixitListForGeneration ;
  friend class DownEnumerator_fixitListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitListForGeneration ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitElementForGeneration class_func_fixItInsertAfter (const class GGS_semanticExpressionForGeneration & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_fixitElementForGeneration class_func_fixItInsertBefore (const class GGS_semanticExpressionForGeneration & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_fixitElementForGeneration class_func_fixItRemove (LOCATION_ARGS) ;

  public: static class GGS_fixitElementForGeneration class_func_fixItReplace (const class GGS_semanticExpressionForGeneration & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractFixItInsertAfter (class GGS_semanticExpressionForGeneration & outArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractFixItInsertBefore (class GGS_semanticExpressionForGeneration & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractFixItReplace (class GGS_semanticExpressionForGeneration & outArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ getter_getFixItInsertAfter (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ getter_getFixItInsertBefore (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitElementForGeneration_2E_fixItReplace_3F_ getter_getFixItReplace (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFixItInsertAfter (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFixItInsertBefore (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFixItRemove (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFixItReplace (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_fixitListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_fixitElementForGeneration mProperty_mElement ;
  public: inline GGS_fixitElementForGeneration readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GGS_fixitElementForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitListForGeneration_2E_element (const GGS_fixitElementForGeneration & in_mElement) ;

//--------------------------------- Copy constructor
  public: GGS_fixitListForGeneration_2E_element (const GGS_fixitListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fixitListForGeneration_2E_element & operator = (const GGS_fixitListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitListForGeneration_2E_element init_21_ (const class GGS_fixitElementForGeneration & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitListForGeneration_2E_element ;

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

  public: class GGS_fixitListForGeneration readProperty_mFixitListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_warningInstructionForGeneration init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                           const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                           const class GGS_fixitListForGeneration & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_warningInstructionForGeneration extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
                                                                     const class GGS_fixitListForGeneration & inOperand3,
                                                                     Compiler * inCompiler) ;


//--- Extension method generateInstruction
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
  public: GGS_fixitListForGeneration mProperty_mFixitListForGeneration ;


//--- Default constructor
  public: cPtr_warningInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_warningInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                const GGS_semanticExpressionForGeneration & in_mWarningExpression,
                                                const GGS_fixitListForGeneration & in_mFixitListForGeneration,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_warningInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_warningInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectInstruction_2E_weak : public GGS_syntaxInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selectInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selectInstruction_2E_weak (const class GGS_selectInstruction & inSource) ;

  public: GGS_selectInstruction_2E_weak & operator = (const class GGS_selectInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selectInstruction_2E_weak init_nil (void) {
    GGS_selectInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selectInstruction bang_selectInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selectInstruction unwrappedValue (void) const ;

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
  public: static GGS_selectInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selectInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstruction_2E_weak ;

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

  public: class GGS_uint readProperty_mChoiceIndex (void) const ;

  public: class GGS_listOfSemanticInstructionListForGeneration readProperty_mListOfSemanticInstructionListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selectInstructionForGeneration init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                          const class GGS_string & inOperand1,
                                                                          const class GGS_uint & inOperand2,
                                                                          const class GGS_listOfSemanticInstructionListForGeneration & inOperand3,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selectInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
                                                                    const class GGS_uint & inOperand2,
                                                                    const class GGS_listOfSemanticInstructionListForGeneration & inOperand3,
                                                                    Compiler * inCompiler) ;


//--- Extension getter compareInstructionSyntaxSignature
  public: virtual class GGS_bool getter_compareInstructionSyntaxSignature (const class GGS_semanticInstructionForGeneration inTestedInstruction,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GGS_string arg_inPosfix,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mSyntaxComponentName ;
  public: GGS_uint mProperty_mChoiceIndex ;
  public: GGS_listOfSemanticInstructionListForGeneration mProperty_mListOfSemanticInstructionListForGeneration ;


//--- Default constructor
  public: cPtr_selectInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selectInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                               const GGS_string & in_mSyntaxComponentName,
                                               const GGS_uint & in_mChoiceIndex,
                                               const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectInstructionForGeneration_2E_weak : public GGS_syntaxInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selectInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selectInstructionForGeneration_2E_weak (const class GGS_selectInstructionForGeneration & inSource) ;

  public: GGS_selectInstructionForGeneration_2E_weak & operator = (const class GGS_selectInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selectInstructionForGeneration_2E_weak init_nil (void) {
    GGS_selectInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selectInstructionForGeneration bang_selectInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selectInstructionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_selectInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selectInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @logListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_logListAST_2E_element : public AC_GALGAS_root {
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
  public: GGS_logListAST_2E_element (void) ;

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
  public: GGS_logListAST_2E_element (const GGS_lstring & in_mLogMessage,
                                     const GGS_semanticExpressionAST & in_mLogExpression) ;

//--------------------------------- Copy constructor
  public: GGS_logListAST_2E_element (const GGS_logListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_logListAST_2E_element & operator = (const GGS_logListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_logListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                         const class GGS_semanticExpressionAST & inOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_logListAST_2E_element extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logListAST_2E_element ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_logInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logInstructionAST_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @incDecInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_incDecInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_incDecInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_incDecInstructionAST_2E_weak (const class GGS_incDecInstructionAST & inSource) ;

  public: GGS_incDecInstructionAST_2E_weak & operator = (const class GGS_incDecInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_incDecInstructionAST_2E_weak init_nil (void) {
    GGS_incDecInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_incDecInstructionAST bang_incDecInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_incDecInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_incDecInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_incDecInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @incDecNoOVFInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_incDecNoOVFInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_incDecNoOVFInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_incDecNoOVFInstructionAST_2E_weak (const class GGS_incDecNoOVFInstructionAST & inSource) ;

  public: GGS_incDecNoOVFInstructionAST_2E_weak & operator = (const class GGS_incDecNoOVFInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_incDecNoOVFInstructionAST_2E_weak init_nil (void) {
    GGS_incDecNoOVFInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_incDecNoOVFInstructionAST bang_incDecNoOVFInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_incDecNoOVFInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_incDecNoOVFInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecNoOVFInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecNoOVFInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfIncDecInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfIncDecInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfIncDecInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfIncDecInstructionAST_2E_weak (const class GGS_selfIncDecInstructionAST & inSource) ;

  public: GGS_selfIncDecInstructionAST_2E_weak & operator = (const class GGS_selfIncDecInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfIncDecInstructionAST_2E_weak init_nil (void) {
    GGS_selfIncDecInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfIncDecInstructionAST bang_selfIncDecInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selfIncDecInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_selfIncDecInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfIncDecInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfIncDecInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfIncDecInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfIncDecNoOVFInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfIncDecNoOVFInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfIncDecNoOVFInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfIncDecNoOVFInstructionAST_2E_weak (const class GGS_selfIncDecNoOVFInstructionAST & inSource) ;

  public: GGS_selfIncDecNoOVFInstructionAST_2E_weak & operator = (const class GGS_selfIncDecNoOVFInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfIncDecNoOVFInstructionAST_2E_weak init_nil (void) {
    GGS_selfIncDecNoOVFInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfIncDecNoOVFInstructionAST bang_selfIncDecNoOVFInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selfIncDecNoOVFInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_selfIncDecNoOVFInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfIncDecNoOVFInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfIncDecNoOVFInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @incDecInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_incDecInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_incDecInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_incDecInstructionForGeneration (const class cPtr_incDecInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mReceiverCppName (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GGS_incDecKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_incDecInstructionForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                              const class GGS_string & inOperand1,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                              const class GGS_lstringlist & inOperand3,
                                                                              const class GGS_incDecKind & inOperand4,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_incDecInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @incDecInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_incDecInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void incDecInstructionForGeneration_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                        const class GGS_lstringlist & inOperand3,
                                                                        const class GGS_incDecKind & inOperand4,
                                                                        Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_string mProperty_mReceiverCppName ;
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GGS_lstringlist mProperty_mStructAttributeList ;
  public: GGS_incDecKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_incDecInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_incDecInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                               const GGS_string & in_mReceiverCppName,
                                               const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                               const GGS_lstringlist & in_mStructAttributeList,
                                               const GGS_incDecKind & in_mKind,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @incDecInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_incDecInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_incDecInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_incDecInstructionForGeneration_2E_weak (const class GGS_incDecInstructionForGeneration & inSource) ;

  public: GGS_incDecInstructionForGeneration_2E_weak & operator = (const class GGS_incDecInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_incDecInstructionForGeneration_2E_weak init_nil (void) {
    GGS_incDecInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_incDecInstructionForGeneration bang_incDecInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_incDecInstructionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_incDecInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_incDecInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @incDecNoOVFInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_incDecNoOVFInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_incDecNoOVFInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_incDecNoOVFInstructionForGeneration (const class cPtr_incDecNoOVFInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mReceiverCppName (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GGS_incDecKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_incDecNoOVFInstructionForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                   const class GGS_lstringlist & inOperand3,
                                                                                   const class GGS_incDecKind & inOperand4,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_incDecNoOVFInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecNoOVFInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @incDecNoOVFInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_incDecNoOVFInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void incDecNoOVFInstructionForGeneration_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                             const class GGS_lstringlist & inOperand3,
                                                                             const class GGS_incDecKind & inOperand4,
                                                                             Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_string mProperty_mReceiverCppName ;
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GGS_lstringlist mProperty_mStructAttributeList ;
  public: GGS_incDecKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_incDecNoOVFInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_incDecNoOVFInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                    const GGS_string & in_mReceiverCppName,
                                                    const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                    const GGS_lstringlist & in_mStructAttributeList,
                                                    const GGS_incDecKind & in_mKind,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @incDecNoOVFInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_incDecNoOVFInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_incDecNoOVFInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_incDecNoOVFInstructionForGeneration_2E_weak (const class GGS_incDecNoOVFInstructionForGeneration & inSource) ;

  public: GGS_incDecNoOVFInstructionForGeneration_2E_weak & operator = (const class GGS_incDecNoOVFInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_incDecNoOVFInstructionForGeneration_2E_weak init_nil (void) {
    GGS_incDecNoOVFInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_incDecNoOVFInstructionForGeneration bang_incDecNoOVFInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_incDecNoOVFInstructionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_incDecNoOVFInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecNoOVFInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecNoOVFInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @parseRewindInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_parseRewindInstruction_2E_weak : public GGS_syntaxInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_parseRewindInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_parseRewindInstruction_2E_weak (const class GGS_parseRewindInstruction & inSource) ;

  public: GGS_parseRewindInstruction_2E_weak & operator = (const class GGS_parseRewindInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_parseRewindInstruction_2E_weak init_nil (void) {
    GGS_parseRewindInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_parseRewindInstruction bang_parseRewindInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_parseRewindInstruction unwrappedValue (void) const ;

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
  public: static GGS_parseRewindInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_parseRewindInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_parseRewindInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_parseRewindInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @parseRewindInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_parseRewindInstructionForGeneration : public GGS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_parseRewindInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_parseRewindInstructionForGeneration (const class cPtr_parseRewindInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_listOfSemanticInstructionListForGeneration readProperty_mListOfSemanticInstructionListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_parseRewindInstructionForGeneration init_21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_listOfSemanticInstructionListForGeneration & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_parseRewindInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_parseRewindInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @parseRewindInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_parseRewindInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void parseRewindInstructionForGeneration_init_21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_listOfSemanticInstructionListForGeneration & inOperand1,
                                                                 Compiler * inCompiler) ;


//--- Extension method appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GGS_string arg_inPosfix,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_listOfSemanticInstructionListForGeneration mProperty_mListOfSemanticInstructionListForGeneration ;


//--- Default constructor
  public: cPtr_parseRewindInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_parseRewindInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                    const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @parseRewindInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_parseRewindInstructionForGeneration_2E_weak : public GGS_syntaxInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_parseRewindInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_parseRewindInstructionForGeneration_2E_weak (const class GGS_parseRewindInstructionForGeneration & inSource) ;

  public: GGS_parseRewindInstructionForGeneration_2E_weak & operator = (const class GGS_parseRewindInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_parseRewindInstructionForGeneration_2E_weak init_nil (void) {
    GGS_parseRewindInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_parseRewindInstructionForGeneration bang_parseRewindInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_parseRewindInstructionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_parseRewindInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_parseRewindInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_parseRewindInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @CommaSeparatedExpressionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_CommaSeparatedExpressionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_ifExpressionKind mProperty_mExpression ;
  public: inline GGS_ifExpressionKind readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_CommaSeparatedExpressionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GGS_ifExpressionKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_CommaSeparatedExpressionList_2E_element (const GGS_ifExpressionKind & in_mExpression) ;

//--------------------------------- Copy constructor
  public: GGS_CommaSeparatedExpressionList_2E_element (const GGS_CommaSeparatedExpressionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_CommaSeparatedExpressionList_2E_element & operator = (const GGS_CommaSeparatedExpressionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_CommaSeparatedExpressionList_2E_element init_21_ (const class GGS_ifExpressionKind & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_CommaSeparatedExpressionList_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_CommaSeparatedExpressionList_2E_element ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifTestListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_ifTestListForGeneration final {
  public: DownEnumerator_ifTestListForGeneration (const class GGS_ifTestListForGeneration & inList) ;

  public: ~ DownEnumerator_ifTestListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_ifTestForGeneration current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ifTestListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ifTestListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_ifTestListForGeneration (const DownEnumerator_ifTestListForGeneration &) = delete ;
  private: DownEnumerator_ifTestListForGeneration & operator = (const DownEnumerator_ifTestListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_ifTestListForGeneration final {
  public: UpEnumerator_ifTestListForGeneration (const class GGS_ifTestListForGeneration & inList)  ;

  public: ~ UpEnumerator_ifTestListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_ifTestForGeneration current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ifTestListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ifTestListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_ifTestListForGeneration (const UpEnumerator_ifTestListForGeneration &) = delete ;
  private: UpEnumerator_ifTestListForGeneration & operator = (const UpEnumerator_ifTestListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @ifTestListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_ifTestListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_ifTestListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_ifTestListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_ifTestListForGeneration (void) = default ;

//--- Copy
  public: GGS_ifTestListForGeneration (const GGS_ifTestListForGeneration &) = default ;
  public: GGS_ifTestListForGeneration & operator = (const GGS_ifTestListForGeneration &) = default ;

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
  public : inline GenericArray <GGS_ifTestListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_ifTestListForGeneration subList (const int32_t inStart,
                                                const int32_t inLength,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_ifTestListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_ifTestForGeneration & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifTestListForGeneration init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestListForGeneration extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifTestListForGeneration class_func_listWithValue (const class GGS_ifTestForGeneration & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_ifTestListForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_ifTestForGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_ifTestListForGeneration_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_ifTestListForGeneration add_operation (const GGS_ifTestListForGeneration & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_ifTestForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_ifTestForGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_ifTestForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_ifTestForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_ifTestForGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GGS_ifTestForGeneration constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_ifTestForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_ifTestForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ifTestForGeneration getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ifTestListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ifTestListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ifTestListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_ifTestListForGeneration ;
  friend class DownEnumerator_ifTestListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestListForGeneration ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestForGeneration extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractLetVarExp (class GGS_string & outArgument0,
                                                         class GGS_semanticExpressionForGeneration & outArgument1,
                                                         class GGS_unifiedTypeMapEntry & outArgument2,
                                                         class GGS_unifiedTypeMapEntry & outArgument3,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractOptionalExp (class GGS_string & outArgument0,
                                                           class GGS_bool & outArgument1,
                                                           class GGS_semanticExpressionForGeneration & outArgument2,
                                                           class GGS_unifiedTypeMapEntry & outArgument3,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractRegular (class GGS_semanticExpressionForGeneration & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_ifTestForGeneration_2E_letVarExp_3F_ getter_getLetVarExp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ifTestForGeneration_2E_optionalExp_3F_ getter_getOptionalExp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ifTestForGeneration_2E_regular_3F_ getter_getRegular (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLetVarExp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isOptionalExp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRegular (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifTestListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_ifTestListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_ifTestForGeneration mProperty_mExpression ;
  public: inline GGS_ifTestForGeneration readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifTestListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GGS_ifTestForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifTestListForGeneration_2E_element (const GGS_ifTestForGeneration & in_mExpression) ;

//--------------------------------- Copy constructor
  public: GGS_ifTestListForGeneration_2E_element (const GGS_ifTestListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ifTestListForGeneration_2E_element & operator = (const GGS_ifTestListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifTestListForGeneration_2E_element init_21_ (const class GGS_ifTestForGeneration & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestListForGeneration_2E_element ;

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

  public: class GGS_ifTestListForGeneration readProperty_mExpressions (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_m_5F_then_5F_instructionList (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_m_5F_else_5F_instructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifInstructionForGeneration init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_ifTestListForGeneration & inOperand1,
                                                                      const class GGS_semanticInstructionListForGeneration & inOperand2,
                                                                      const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifInstructionForGeneration extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
                                                                const class GGS_ifTestListForGeneration & inOperand1,
                                                                const class GGS_semanticInstructionListForGeneration & inOperand2,
                                                                const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_ifTestListForGeneration mProperty_mExpressions ;
  public: GGS_semanticInstructionListForGeneration mProperty_m_5F_then_5F_instructionList ;
  public: GGS_semanticInstructionListForGeneration mProperty_m_5F_else_5F_instructionList ;


//--- Default constructor
  public: cPtr_ifInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ifInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                           const GGS_ifTestListForGeneration & in_mExpressions,
                                           const GGS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                                           const GGS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionForGeneration_2E_weak ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentInstructionAST_2E_weak ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST_2E_weak ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assignmentInstructionForGeneration extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method generateInstruction
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assignmentInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchExtractedValuesListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_switchExtractedValuesListAST_2E_element : public AC_GALGAS_root {
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
  public: GGS_switchExtractedValuesListAST_2E_element (void) ;

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
  public: GGS_switchExtractedValuesListAST_2E_element (const GGS_lstring & in_mExtractedValueTypeName,
                                                       const GGS_lstring & in_mExtractedValueName,
                                                       const GGS_bool & in_mMarkedAsUnused) ;

//--------------------------------- Copy constructor
  public: GGS_switchExtractedValuesListAST_2E_element (const GGS_switchExtractedValuesListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_switchExtractedValuesListAST_2E_element & operator = (const GGS_switchExtractedValuesListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchExtractedValuesListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               const class GGS_bool & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchExtractedValuesListAST_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchExtractedValuesListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchBranchesAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_switchBranchesAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_lstring_5D_ mProperty_mSwitchConstantList ;
  public: inline GGS__5B_lstring_5D_ readProperty_mSwitchConstantList (void) const {
    return mProperty_mSwitchConstantList ;
  }

  public: GGS_switchExtractedValuesListAST mProperty_mAssociatedValuesExtraction ;
  public: inline GGS_switchExtractedValuesListAST readProperty_mAssociatedValuesExtraction (void) const {
    return mProperty_mAssociatedValuesExtraction ;
  }

  public: GGS_semanticInstructionListAST mProperty_mInstructions ;
  public: inline GGS_semanticInstructionListAST readProperty_mInstructions (void) const {
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
  public: GGS_switchBranchesAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSwitchConstantList (const GGS__5B_lstring_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSwitchConstantList = inValue ;
  }

  public: inline void setter_setMAssociatedValuesExtraction (const GGS_switchExtractedValuesListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociatedValuesExtraction = inValue ;
  }

  public: inline void setter_setMInstructions (const GGS_semanticInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructions = inValue ;
  }

  public: inline void setter_setMEndOfBranch (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfBranch = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_switchBranchesAST_2E_element (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                            const GGS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                            const GGS_semanticInstructionListAST & in_mInstructions,
                                            const GGS_location & in_mEndOfBranch) ;

//--------------------------------- Copy constructor
  public: GGS_switchBranchesAST_2E_element (const GGS_switchBranchesAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_switchBranchesAST_2E_element & operator = (const GGS_switchBranchesAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchBranchesAST_2E_element init_21__21__21__21_ (const class GGS__5B_lstring_5D_ & inOperand0,
                                                                        const class GGS_switchExtractedValuesListAST & inOperand1,
                                                                        const class GGS_semanticInstructionListAST & inOperand2,
                                                                        const class GGS_location & inOperand3,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchBranchesAST_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchBranchesAST_2E_element ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extractedAssociatedValuesForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_extractedAssociatedValuesForGeneration final {
  public: DownEnumerator_extractedAssociatedValuesForGeneration (const class GGS_extractedAssociatedValuesForGeneration & inList) ;

  public: ~ DownEnumerator_extractedAssociatedValuesForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GGS_string current_mCppName (LOCATION_ARGS) const ;
  public: class GGS_string current_name (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extractedAssociatedValuesForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_extractedAssociatedValuesForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extractedAssociatedValuesForGeneration (const DownEnumerator_extractedAssociatedValuesForGeneration &) = delete ;
  private: DownEnumerator_extractedAssociatedValuesForGeneration & operator = (const DownEnumerator_extractedAssociatedValuesForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extractedAssociatedValuesForGeneration final {
  public: UpEnumerator_extractedAssociatedValuesForGeneration (const class GGS_extractedAssociatedValuesForGeneration & inList)  ;

  public: ~ UpEnumerator_extractedAssociatedValuesForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GGS_string current_mCppName (LOCATION_ARGS) const ;
  public: class GGS_string current_name (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extractedAssociatedValuesForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_extractedAssociatedValuesForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extractedAssociatedValuesForGeneration (const UpEnumerator_extractedAssociatedValuesForGeneration &) = delete ;
  private: UpEnumerator_extractedAssociatedValuesForGeneration & operator = (const UpEnumerator_extractedAssociatedValuesForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @extractedAssociatedValuesForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_extractedAssociatedValuesForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_extractedAssociatedValuesForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_extractedAssociatedValuesForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_extractedAssociatedValuesForGeneration (void) = default ;

//--- Copy
  public: GGS_extractedAssociatedValuesForGeneration (const GGS_extractedAssociatedValuesForGeneration &) = default ;
  public: GGS_extractedAssociatedValuesForGeneration & operator = (const GGS_extractedAssociatedValuesForGeneration &) = default ;

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
  public : inline GenericArray <GGS_extractedAssociatedValuesForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_extractedAssociatedValuesForGeneration subList (const int32_t inStart,
                                                               const int32_t inLength,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_extractedAssociatedValuesForGeneration (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_unifiedTypeMapEntry & in_mType,
                                                 const class GGS_string & in_mCppName,
                                                 const class GGS_string & in_name
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extractedAssociatedValuesForGeneration init (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extractedAssociatedValuesForGeneration extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extractedAssociatedValuesForGeneration class_func_listWithValue (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                            const class GGS_string & inOperand1,
                                                                                            const class GGS_string & inOperand2
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_extractedAssociatedValuesForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_extractedAssociatedValuesForGeneration_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_extractedAssociatedValuesForGeneration add_operation (const GGS_extractedAssociatedValuesForGeneration & inOperand,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_unifiedTypeMapEntry constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_unifiedTypeMapEntry & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_unifiedTypeMapEntry & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_unifiedTypeMapEntry & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCppNameAtIndex (class GGS_string constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setNameAtIndex (class GGS_string constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_unifiedTypeMapEntry & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_unifiedTypeMapEntry & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mCppNameAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_nameAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extractedAssociatedValuesForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extractedAssociatedValuesForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extractedAssociatedValuesForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extractedAssociatedValuesForGeneration ;
  friend class DownEnumerator_extractedAssociatedValuesForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extractedAssociatedValuesForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extractedAssociatedValuesForGeneration_2E_element : public AC_GALGAS_root {
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
  public: GGS_extractedAssociatedValuesForGeneration_2E_element (void) ;

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
  public: GGS_extractedAssociatedValuesForGeneration_2E_element (const GGS_unifiedTypeMapEntry & in_mType,
                                                                 const GGS_string & in_mCppName,
                                                                 const GGS_string & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_extractedAssociatedValuesForGeneration_2E_element (const GGS_extractedAssociatedValuesForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extractedAssociatedValuesForGeneration_2E_element & operator = (const GGS_extractedAssociatedValuesForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extractedAssociatedValuesForGeneration_2E_element init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                         const class GGS_string & inOperand1,
                                                                                         const class GGS_string & inOperand2,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extractedAssociatedValuesForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchBranchesForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_switchBranchesForGeneration final {
  public: DownEnumerator_switchBranchesForGeneration (const class GGS_switchBranchesForGeneration & inList) ;

  public: ~ DownEnumerator_switchBranchesForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS__5B_lstring_5D_ current_mSwitchConstantList (LOCATION_ARGS) const ;
  public: class GGS_extractedAssociatedValuesForGeneration current_mExtractedAssociatedValuesForGeneration (LOCATION_ARGS) const ;
  public: class GGS_uint current_mEndOfBranchLocationIndex (LOCATION_ARGS) const ;
  public: class GGS_semanticInstructionListForGeneration current_mInstructions (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_switchBranchesForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_switchBranchesForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_switchBranchesForGeneration (const DownEnumerator_switchBranchesForGeneration &) = delete ;
  private: DownEnumerator_switchBranchesForGeneration & operator = (const DownEnumerator_switchBranchesForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_switchBranchesForGeneration final {
  public: UpEnumerator_switchBranchesForGeneration (const class GGS_switchBranchesForGeneration & inList)  ;

  public: ~ UpEnumerator_switchBranchesForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS__5B_lstring_5D_ current_mSwitchConstantList (LOCATION_ARGS) const ;
  public: class GGS_extractedAssociatedValuesForGeneration current_mExtractedAssociatedValuesForGeneration (LOCATION_ARGS) const ;
  public: class GGS_uint current_mEndOfBranchLocationIndex (LOCATION_ARGS) const ;
  public: class GGS_semanticInstructionListForGeneration current_mInstructions (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_switchBranchesForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_switchBranchesForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_switchBranchesForGeneration (const UpEnumerator_switchBranchesForGeneration &) = delete ;
  private: UpEnumerator_switchBranchesForGeneration & operator = (const UpEnumerator_switchBranchesForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @switchBranchesForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_switchBranchesForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_switchBranchesForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_switchBranchesForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_switchBranchesForGeneration (void) = default ;

//--- Copy
  public: GGS_switchBranchesForGeneration (const GGS_switchBranchesForGeneration &) = default ;
  public: GGS_switchBranchesForGeneration & operator = (const GGS_switchBranchesForGeneration &) = default ;

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
  public : inline GenericArray <GGS_switchBranchesForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_switchBranchesForGeneration subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_switchBranchesForGeneration (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                 const class GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                 const class GGS_uint & in_mEndOfBranchLocationIndex,
                                                 const class GGS_semanticInstructionListForGeneration & in_mInstructions
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchBranchesForGeneration init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchBranchesForGeneration extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_switchBranchesForGeneration class_func_listWithValue (const class GGS__5B_lstring_5D_ & inOperand0,
                                                                                 const class GGS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                 const class GGS_uint & inOperand2,
                                                                                 const class GGS_semanticInstructionListForGeneration & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_switchBranchesForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS__5B_lstring_5D_ & inOperand0,
                                                    const class GGS_extractedAssociatedValuesForGeneration & inOperand1,
                                                    const class GGS_uint & inOperand2,
                                                    const class GGS_semanticInstructionListForGeneration & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_switchBranchesForGeneration_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_switchBranchesForGeneration add_operation (const GGS_switchBranchesForGeneration & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS__5B_lstring_5D_ constinArgument0,
                                               class GGS_extractedAssociatedValuesForGeneration constinArgument1,
                                               class GGS_uint constinArgument2,
                                               class GGS_semanticInstructionListForGeneration constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS__5B_lstring_5D_ constinArgument0,
                                                      class GGS_extractedAssociatedValuesForGeneration constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      class GGS_semanticInstructionListForGeneration constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS__5B_lstring_5D_ & outArgument0,
                                                 class GGS_extractedAssociatedValuesForGeneration & outArgument1,
                                                 class GGS_uint & outArgument2,
                                                 class GGS_semanticInstructionListForGeneration & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS__5B_lstring_5D_ & outArgument0,
                                                class GGS_extractedAssociatedValuesForGeneration & outArgument1,
                                                class GGS_uint & outArgument2,
                                                class GGS_semanticInstructionListForGeneration & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS__5B_lstring_5D_ & outArgument0,
                                                      class GGS_extractedAssociatedValuesForGeneration & outArgument1,
                                                      class GGS_uint & outArgument2,
                                                      class GGS_semanticInstructionListForGeneration & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfBranchLocationIndexAtIndex (class GGS_uint constinArgument0,
                                                                            class GGS_uint constinArgument1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExtractedAssociatedValuesForGenerationAtIndex (class GGS_extractedAssociatedValuesForGeneration constinArgument0,
                                                                                          class GGS_uint constinArgument1,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionsAtIndex (class GGS_semanticInstructionListForGeneration constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSwitchConstantListAtIndex (class GGS__5B_lstring_5D_ constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS__5B_lstring_5D_ & outArgument0,
                                              class GGS_extractedAssociatedValuesForGeneration & outArgument1,
                                              class GGS_uint & outArgument2,
                                              class GGS_semanticInstructionListForGeneration & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS__5B_lstring_5D_ & outArgument0,
                                             class GGS_extractedAssociatedValuesForGeneration & outArgument1,
                                             class GGS_uint & outArgument2,
                                             class GGS_semanticInstructionListForGeneration & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mEndOfBranchLocationIndexAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extractedAssociatedValuesForGeneration getter_mExtractedAssociatedValuesForGenerationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListForGeneration getter_mInstructionsAtIndex (const class GGS_uint & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__5B_lstring_5D_ getter_mSwitchConstantListAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_switchBranchesForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_switchBranchesForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_switchBranchesForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_switchBranchesForGeneration ;
  friend class DownEnumerator_switchBranchesForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchBranchesForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchBranchesForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_switchBranchesForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_lstring_5D_ mProperty_mSwitchConstantList ;
  public: inline GGS__5B_lstring_5D_ readProperty_mSwitchConstantList (void) const {
    return mProperty_mSwitchConstantList ;
  }

  public: GGS_extractedAssociatedValuesForGeneration mProperty_mExtractedAssociatedValuesForGeneration ;
  public: inline GGS_extractedAssociatedValuesForGeneration readProperty_mExtractedAssociatedValuesForGeneration (void) const {
    return mProperty_mExtractedAssociatedValuesForGeneration ;
  }

  public: GGS_uint mProperty_mEndOfBranchLocationIndex ;
  public: inline GGS_uint readProperty_mEndOfBranchLocationIndex (void) const {
    return mProperty_mEndOfBranchLocationIndex ;
  }

  public: GGS_semanticInstructionListForGeneration mProperty_mInstructions ;
  public: inline GGS_semanticInstructionListForGeneration readProperty_mInstructions (void) const {
    return mProperty_mInstructions ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_switchBranchesForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSwitchConstantList (const GGS__5B_lstring_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSwitchConstantList = inValue ;
  }

  public: inline void setter_setMExtractedAssociatedValuesForGeneration (const GGS_extractedAssociatedValuesForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtractedAssociatedValuesForGeneration = inValue ;
  }

  public: inline void setter_setMEndOfBranchLocationIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfBranchLocationIndex = inValue ;
  }

  public: inline void setter_setMInstructions (const GGS_semanticInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructions = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_switchBranchesForGeneration_2E_element (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                      const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                      const GGS_uint & in_mEndOfBranchLocationIndex,
                                                      const GGS_semanticInstructionListForGeneration & in_mInstructions) ;

//--------------------------------- Copy constructor
  public: GGS_switchBranchesForGeneration_2E_element (const GGS_switchBranchesForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_switchBranchesForGeneration_2E_element & operator = (const GGS_switchBranchesForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchBranchesForGeneration_2E_element init_21__21__21__21_ (const class GGS__5B_lstring_5D_ & inOperand0,
                                                                                  const class GGS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                  const class GGS_uint & inOperand2,
                                                                                  const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchBranchesForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchBranchesForGeneration_2E_element ;

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

  public: class GGS_switchBranchesForGeneration readProperty_mBranches (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchInstructionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                      const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                      const class GGS_switchBranchesForGeneration & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchInstructionForGeneration extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
                                                                const class GGS_switchBranchesForGeneration & inOperand2,
                                                                Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mEnumType ;
  public: GGS_semanticExpressionForGeneration mProperty_mSwitchExpression ;
  public: GGS_switchBranchesForGeneration mProperty_mBranches ;


//--- Default constructor
  public: cPtr_switchInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_switchInstructionForGeneration (const GGS_unifiedTypeMapEntry & in_mEnumType,
                                               const GGS_semanticExpressionForGeneration & in_mSwitchExpression,
                                               const GGS_switchBranchesForGeneration & in_mBranches,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionForGeneration_2E_weak ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superMethodCallInstructionAST_2E_weak ;

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

  public: class GGS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mHasCompilerArgument (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mBaseType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_superMethodCallInstructionForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_string & inOperand1,
                                                                                       const class GGS_actualParameterListForGeneration & inOperand2,
                                                                                       const class GGS_bool & inOperand3,
                                                                                       const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_superMethodCallInstructionForGeneration extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
                                                                                 const class GGS_actualParameterListForGeneration & inOperand2,
                                                                                 const class GGS_bool & inOperand3,
                                                                                 const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_string mProperty_mMethodName ;
  public: GGS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: GGS_unifiedTypeMapEntry mProperty_mBaseType ;


//--- Default constructor
  public: cPtr_superMethodCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_superMethodCallInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                        const GGS_string & in_mMethodName,
                                                        const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                        const GGS_bool & in_mHasCompilerArgument,
                                                        const GGS_unifiedTypeMapEntry & in_mBaseType,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_superMethodCallInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration_2E_weak ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST_2E_weak ;

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

  public: class GGS_semanticInstructionListForGeneration readProperty_mFirstInstructions (void) const ;

  public: class GGS_ifTestListForGeneration readProperty_mLoopExpression (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mSecondInstructions (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_loopInstructionWithoutVariantForGeneration init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                      const class GGS_semanticInstructionListForGeneration & inOperand1,
                                                                                      const class GGS_ifTestListForGeneration & inOperand2,
                                                                                      const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loopInstructionWithoutVariantForGeneration extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
                                                                                const class GGS_semanticInstructionListForGeneration & inOperand1,
                                                                                const class GGS_ifTestListForGeneration & inOperand2,
                                                                                const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                                Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_semanticInstructionListForGeneration mProperty_mFirstInstructions ;
  public: GGS_ifTestListForGeneration mProperty_mLoopExpression ;
  public: GGS_semanticInstructionListForGeneration mProperty_mSecondInstructions ;


//--- Default constructor
  public: cPtr_loopInstructionWithoutVariantForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_loopInstructionWithoutVariantForGeneration (const GGS_location & in_mInstructionLocation,
                                                           const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                           const GGS_ifTestListForGeneration & in_mLoopExpression,
                                                           const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loopInstructionWithoutVariantForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration_2E_weak ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionAST_2E_weak ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeMethodCallInstructionForGeneration extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method generateInstruction
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeMethodCallInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration_2E_weak ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementAST_2E_fixItInsertAfter extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementAST_2E_fixItInsertAfter_3F_ extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementAST_2E_fixItInsertBefore extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementAST_2E_fixItInsertBefore_3F_ extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementAST_2E_fixItReplace extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementAST_2E_fixItReplace_3F_ extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace_3F_ ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_errorInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListAST enterFixItListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterFixItListInSemanticContext (const class GGS_fixitListAST inObject,
                                                      class GGS_unifiedTypeMap & io_ioTypeMap,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterExpressionInSemanticContext (class cPtr_semanticExpressionAST * inObject,
                                                           class GGS_unifiedTypeMap & io_ioTypeMap,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration_2E_fixItInsertAfter extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration_2E_fixItInsertBefore extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration_2E_fixItReplace extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration_2E_fixItReplace_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListForGeneration generateFixIt'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateFixIt (const class GGS_fixitListForGeneration inObject,
                                    class GGS_stringset & io_ioInclusionSet,
                                    class GGS_uint & io_ioTemporaryVariableIndex,
                                    class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                    const class GGS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                    class GGS_string & io_ioGeneratedCode,
                                    class GGS_string & out_outFixItArrayCppName,
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

  public: class GGS_stringlist readProperty_mBuiltVariableCppNameList (void) const ;

  public: class GGS_fixitListForGeneration readProperty_mFixitListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_errorInstructionForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                             const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                             const class GGS_stringlist & inOperand3,
                                                                             const class GGS_fixitListForGeneration & inOperand4,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_errorInstructionForGeneration extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
                                                                       const class GGS_stringlist & inOperand3,
                                                                       const class GGS_fixitListForGeneration & inOperand4,
                                                                       Compiler * inCompiler) ;


//--- Extension method generateInstruction
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
  public: GGS_stringlist mProperty_mBuiltVariableCppNameList ;
  public: GGS_fixitListForGeneration mProperty_mFixitListForGeneration ;


//--- Default constructor
  public: cPtr_errorInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_errorInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                              const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                              const GGS_semanticExpressionForGeneration & in_mErrorExpression,
                                              const GGS_stringlist & in_mBuiltVariableCppNameList,
                                              const GGS_fixitListForGeneration & in_mFixitListForGeneration,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_errorInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_errorInstructionForGeneration_2E_weak ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodCallInstructionAST_2E_weak ;

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

  public: class GGS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mHasCompilerArgument (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mMethodBaseType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_methodCallInstructionForGeneration init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                              const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                              const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                                              const class GGS_string & inOperand3,
                                                                                              const class GGS_methodKind & inOperand4,
                                                                                              const class GGS_actualParameterListForGeneration & inOperand5,
                                                                                              const class GGS_bool & inOperand6,
                                                                                              const class GGS_unifiedTypeMapEntry & inOperand7,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_methodCallInstructionForGeneration extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
                                                                                        const class GGS_actualParameterListForGeneration & inOperand5,
                                                                                        const class GGS_bool & inOperand6,
                                                                                        const class GGS_unifiedTypeMapEntry & inOperand7,
                                                                                        Compiler * inCompiler) ;


//--- Extension method generateInstruction
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
  public: GGS_actualParameterListForGeneration mProperty_mActualParameterList ;
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
                                                   const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                   const GGS_bool & in_mHasCompilerArgument,
                                                   const GGS_unifiedTypeMapEntry & in_mMethodBaseType,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_methodCallInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodCallInstructionForGeneration_2E_weak ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST_2E_weak ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST_2E_weak ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVariableDeclarationForGeneration extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method generateInstruction
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVariableDeclarationForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration_2E_weak ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifExpressionKind_2E_letVarExp extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifExpressionKind_2E_letVarExp_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifExpressionKind_2E_regularExp extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifExpressionKind_2E_regularExp_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp_3F_ ;

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
//Extension method '@CommaSeparatedExpressionList analyzeSemanticExpressionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeSemanticExpressionList (const class GGS_CommaSeparatedExpressionList inObject,
                                                    const class GGS_lstring constin_inUsefulnessCallerEntityName,
                                                    class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                    const class GGS_analysisContext constin_inAnalysisContext,
                                                    class GGS_unifiedTypeMap & io_ioTypeMap,
                                                    class GGS_localVarManager & io_ioVariableMap,
                                                    class GGS_ifTestListForGeneration & out_outTestListForGeneration,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

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
//Extension setter '@localVarManager insertInitializedLocalConstant'
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
//Extension setter '@localVarManager insertInitializedLocalVariable'
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
//Extension setter '@localVarManager openBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (class GGS_localVarManager & ioObject,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager openOverrideForSelectBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (class GGS_localVarManager & ioObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestForGeneration_2E_letVarExp extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestForGeneration_2E_letVarExp_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestForGeneration_2E_optionalExp extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestForGeneration_2E_optionalExp_3F_ extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestForGeneration_2E_regular extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestForGeneration_2E_regular_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular_3F_ ;

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
// Phase 1: @terminalCheckInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_terminalCheckInstructionAST_2E_weak : public GGS_syntaxInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_terminalCheckInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_terminalCheckInstructionAST_2E_weak (const class GGS_terminalCheckInstructionAST & inSource) ;

  public: GGS_terminalCheckInstructionAST_2E_weak & operator = (const class GGS_terminalCheckInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_terminalCheckInstructionAST_2E_weak init_nil (void) {
    GGS_terminalCheckInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_terminalCheckInstructionAST bang_terminalCheckInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_terminalCheckInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_terminalCheckInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_terminalCheckInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_terminalCheckInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionAST_2E_weak ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractSyntaxInstructionForGrammarAnalysis extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis ;

#include "separateHeaderFor_abstractSyntaxInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractSyntaxInstructionForGrammarAnalysis_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (const class GGS_abstractSyntaxInstructionForGrammarAnalysis & inSource) ;

  public: GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak & operator = (const class GGS_abstractSyntaxInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak init_nil (void) {
    GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractSyntaxInstructionForGrammarAnalysis bang_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractSyntaxInstructionForGrammarAnalysis unwrappedValue (void) const ;

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
  public: static GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak ;

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

  public: class GGS_terminalCheckAssignementList readProperty_mTerminalCheckAssignementList (void) const ;

  public: class GGS__32_lstringlist readProperty_mIndexingKeyList (void) const ;

  public: class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (void) const ;

  public: class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalCheckInstructionForGeneration init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_string & inOperand2,
                                                                                             const class GGS_terminalCheckAssignementList & inOperand3,
                                                                                             const class GGS__32_lstringlist & inOperand4,
                                                                                             const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand5,
                                                                                             const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalCheckInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_terminalCheckInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
                                                                                       const class GGS_terminalCheckAssignementList & inOperand3,
                                                                                       const class GGS__32_lstringlist & inOperand4,
                                                                                       const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand5,
                                                                                       const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6,
                                                                                       Compiler * inCompiler) ;


//--- Extension getter compareInstructionSyntaxSignature
  public: virtual class GGS_bool getter_compareInstructionSyntaxSignature (const class GGS_semanticInstructionForGeneration inTestedInstruction,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GGS_string arg_inPosfix,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTerminalName ;
  public: GGS_string mProperty_mLexiqueIdentifier ;
  public: GGS_terminalCheckAssignementList mProperty_mTerminalCheckAssignementList ;
  public: GGS__32_lstringlist mProperty_mIndexingKeyList ;
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationToken ;


//--- Default constructor
  public: cPtr_terminalCheckInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_terminalCheckInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                      const GGS_lstring & in_mTerminalName,
                                                      const GGS_string & in_mLexiqueIdentifier,
                                                      const GGS_terminalCheckAssignementList & in_mTerminalCheckAssignementList,
                                                      const GGS__32_lstringlist & in_mIndexingKeyList,
                                                      const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                      const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalCheckInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_terminalCheckInstructionForGeneration_2E_weak : public GGS_syntaxInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_terminalCheckInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_terminalCheckInstructionForGeneration_2E_weak (const class GGS_terminalCheckInstructionForGeneration & inSource) ;

  public: GGS_terminalCheckInstructionForGeneration_2E_weak & operator = (const class GGS_terminalCheckInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_terminalCheckInstructionForGeneration_2E_weak init_nil (void) {
    GGS_terminalCheckInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_terminalCheckInstructionForGeneration bang_terminalCheckInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_terminalCheckInstructionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_terminalCheckInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_terminalCheckInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_terminalCheckInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration_2E_weak ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantAST_2E_weak ;

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

  public: class GGS_semanticInstructionListForGeneration readProperty_mFirstInstructions (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mLoopExpression (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mSecondInstructions (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_loopInstructionWithVariantForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                       const class GGS_semanticInstructionListForGeneration & inOperand2,
                                                                                       const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                       const class GGS_semanticInstructionListForGeneration & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loopInstructionWithVariantForGeneration extractObject (const GGS_object & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
                                                                                 const class GGS_semanticInstructionListForGeneration & inOperand2,
                                                                                 const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                 const class GGS_semanticInstructionListForGeneration & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_semanticExpressionForGeneration mProperty_mVariantExpression ;
  public: GGS_semanticInstructionListForGeneration mProperty_mFirstInstructions ;
  public: GGS_semanticExpressionForGeneration mProperty_mLoopExpression ;
  public: GGS_semanticInstructionListForGeneration mProperty_mSecondInstructions ;


//--- Default constructor
  public: cPtr_loopInstructionWithVariantForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_loopInstructionWithVariantForGeneration (const GGS_location & in_mInstructionLocation,
                                                        const GGS_semanticExpressionForGeneration & in_mVariantExpression,
                                                        const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                        const GGS_semanticExpressionForGeneration & in_mLoopExpression,
                                                        const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loopInstructionWithVariantForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration_2E_weak ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxSendInstructionAST_2E_weak ;

