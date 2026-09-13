#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRoutineCallActualArgumentListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalRoutineCallActualArgumentListAST final {
  public: DownEnumerator_lexicalRoutineCallActualArgumentListAST (const class GGS_lexicalRoutineCallActualArgumentListAST & inList) ;

  public: ~ DownEnumerator_lexicalRoutineCallActualArgumentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractLexicalRoutineActualArgumentAST current_mLexicalRoutineActualArgument (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalRoutineCallActualArgumentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalRoutineCallActualArgumentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalRoutineCallActualArgumentListAST (const DownEnumerator_lexicalRoutineCallActualArgumentListAST &) = delete ;
  private: DownEnumerator_lexicalRoutineCallActualArgumentListAST & operator = (const DownEnumerator_lexicalRoutineCallActualArgumentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalRoutineCallActualArgumentListAST final {
  public: UpEnumerator_lexicalRoutineCallActualArgumentListAST (const class GGS_lexicalRoutineCallActualArgumentListAST & inList)  ;

  public: ~ UpEnumerator_lexicalRoutineCallActualArgumentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractLexicalRoutineActualArgumentAST current_mLexicalRoutineActualArgument (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalRoutineCallActualArgumentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalRoutineCallActualArgumentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalRoutineCallActualArgumentListAST (const UpEnumerator_lexicalRoutineCallActualArgumentListAST &) = delete ;
  private: UpEnumerator_lexicalRoutineCallActualArgumentListAST & operator = (const UpEnumerator_lexicalRoutineCallActualArgumentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @lexicalRoutineCallActualArgumentListAST list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineCallActualArgumentListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_lexicalRoutineCallActualArgumentListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_lexicalRoutineCallActualArgumentListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_lexicalRoutineCallActualArgumentListAST (void) = default ;

//--- Copy
  public: GGS_lexicalRoutineCallActualArgumentListAST (const GGS_lexicalRoutineCallActualArgumentListAST &) = default ;
  public: GGS_lexicalRoutineCallActualArgumentListAST & operator = (const GGS_lexicalRoutineCallActualArgumentListAST &) = default ;

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
  public : inline GenericArray <GGS_lexicalRoutineCallActualArgumentListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_lexicalRoutineCallActualArgumentListAST subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_lexicalRoutineCallActualArgumentListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalRoutineCallActualArgumentListAST init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalRoutineCallActualArgumentListAST extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalRoutineCallActualArgumentListAST class_func_listWithValue (const class GGS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_lexicalRoutineCallActualArgumentListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_lexicalRoutineCallActualArgumentListAST add_operation (const GGS_lexicalRoutineCallActualArgumentListAST & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_abstractLexicalRoutineActualArgumentAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_abstractLexicalRoutineActualArgumentAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexicalRoutineActualArgumentAtIndex (class GGS_abstractLexicalRoutineActualArgumentAST constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_abstractLexicalRoutineActualArgumentAST getter_mLexicalRoutineActualArgumentAtIndex (const class GGS_uint & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_lexicalRoutineCallActualArgumentListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalRoutineCallActualArgumentListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalRoutineCallActualArgumentListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalRoutineCallActualArgumentListAST ;
  friend class DownEnumerator_lexicalRoutineCallActualArgumentListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRoutineCallActualArgumentListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineCallActualArgumentListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractLexicalRoutineActualArgumentAST mProperty_mLexicalRoutineActualArgument ;
  public: inline GGS_abstractLexicalRoutineActualArgumentAST readProperty_mLexicalRoutineActualArgument (void) const {
    return mProperty_mLexicalRoutineActualArgument ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalRoutineCallActualArgumentListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalRoutineActualArgument (const GGS_abstractLexicalRoutineActualArgumentAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalRoutineActualArgument = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalRoutineCallActualArgumentListAST_2E_element (const GGS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalRoutineCallActualArgumentListAST_2E_element (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalRoutineCallActualArgumentListAST_2E_element & operator = (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalRoutineCallActualArgumentListAST_2E_element init_21_ (const class GGS_abstractLexicalRoutineActualArgumentAST & inOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalRoutineCallActualArgumentListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRoutineCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineCallInstructionAST : public GGS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalRoutineCallInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalRoutineCallInstructionAST (const class cPtr_lexicalRoutineCallInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRoutineName (void) const ;

  public: class GGS_lexicalRoutineCallActualArgumentListAST readProperty_mActualArgumentList (void) const ;

  public: class GGS_lstringlist readProperty_mErrorMessageList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalRoutineCallInstructionAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lexicalRoutineCallActualArgumentListAST & inOperand1,
                                                                        const class GGS_lstringlist & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalRoutineCallInstructionAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalRoutineCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalRoutineCallInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalRoutineCallInstructionAST : public cPtr_lexicalInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalRoutineCallInstructionAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lexicalRoutineCallActualArgumentListAST & inOperand1,
                                                                  const class GGS_lstringlist & inOperand2,
                                                                  Compiler * inCompiler) ;


//--- Extension getter generateLexicalInstructionCode
  public: virtual class GGS_string getter_generateLexicalInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaInstructionCode
  public: virtual class GGS_string getter_generateSwiftCocoaInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalInstructionUsesLoopLocalVariable
  public: virtual class GGS_bool getter_lexicalInstructionUsesLoopLocalVariable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalInstruction
  public: virtual void method_checkLexicalInstruction (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           class GGS_lexicalTagMap & arg_ioTagMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRoutineName ;
  public: GGS_lexicalRoutineCallActualArgumentListAST mProperty_mActualArgumentList ;
  public: GGS_lstringlist mProperty_mErrorMessageList ;


//--- Default constructor
  public: cPtr_lexicalRoutineCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalRoutineCallInstructionAST (const GGS_lstring & in_mRoutineName,
                                                 const GGS_lexicalRoutineCallActualArgumentListAST & in_mActualArgumentList,
                                                 const GGS_lstringlist & in_mErrorMessageList,
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
// Phase 1: @lexicalRoutineCallInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineCallInstructionAST_2E_weak : public GGS_lexicalInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalRoutineCallInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalRoutineCallInstructionAST_2E_weak (const class GGS_lexicalRoutineCallInstructionAST & inSource) ;

  public: GGS_lexicalRoutineCallInstructionAST_2E_weak & operator = (const class GGS_lexicalRoutineCallInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalRoutineCallInstructionAST_2E_weak init_nil (void) {
    GGS_lexicalRoutineCallInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalRoutineCallInstructionAST bang_lexicalRoutineCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalRoutineCallInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_lexicalRoutineCallInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalRoutineCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalRoutineCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateSwiftCocoaRoutineArgument (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                        const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLexicalRoutineActualArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                          class GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          const class GGS_lexicalArgumentModeAST constin_inLexicalRoutineFormalArgumentMode,
                                                          const class GGS_lexicalTypeEnum constin_inLexicalRoutineFormalArgumentType,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum lexicalArgumentModeAST
//--------------------------------------------------------------------------------------------------

class GGS_lexicalArgumentModeAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_lexicalArgumentModeAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_lexicalInputMode,
    enum_lexicalInputOutputMode
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
  public: static GGS_lexicalArgumentModeAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalArgumentModeAST class_func_lexicalInputMode (LOCATION_ARGS) ;

  public: static class GGS_lexicalArgumentModeAST class_func_lexicalInputOutputMode (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalArgumentModeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isLexicalInputMode (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLexicalInputOutputMode (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalArgumentModeAST ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateRoutineArgument (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalTagInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalTagInstructionAST : public GGS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalTagInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalTagInstructionAST (const class cPtr_lexicalTagInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLexicalTagName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalTagInstructionAST init_21_ (const class GGS_lstring & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalTagInstructionAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalTagInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTagInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalTagInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalTagInstructionAST : public cPtr_lexicalInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalTagInstructionAST_init_21_ (const class GGS_lstring & inOperand0,
                                                  Compiler * inCompiler) ;


//--- Extension getter generateLexicalInstructionCode
  public: virtual class GGS_string getter_generateLexicalInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaInstructionCode
  public: virtual class GGS_string getter_generateSwiftCocoaInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalInstructionUsesLoopLocalVariable
  public: virtual class GGS_bool getter_lexicalInstructionUsesLoopLocalVariable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalInstruction
  public: virtual void method_checkLexicalInstruction (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           class GGS_lexicalTagMap & arg_ioTagMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLexicalTagName ;


//--- Default constructor
  public: cPtr_lexicalTagInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalTagInstructionAST (const GGS_lstring & in_mLexicalTagName,
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
// Phase 1: @lexicalTagInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalTagInstructionAST_2E_weak : public GGS_lexicalInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalTagInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalTagInstructionAST_2E_weak (const class GGS_lexicalTagInstructionAST & inSource) ;

  public: GGS_lexicalTagInstructionAST_2E_weak & operator = (const class GGS_lexicalTagInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalTagInstructionAST_2E_weak init_nil (void) {
    GGS_lexicalTagInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalTagInstructionAST bang_lexicalTagInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalTagInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_lexicalTagInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalTagInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalTagInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTagInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalSelectBranchListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalSelectBranchListAST final {
  public: DownEnumerator_lexicalSelectBranchListAST (const class GGS_lexicalSelectBranchListAST & inList) ;

  public: ~ DownEnumerator_lexicalSelectBranchListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lexicalExpressionAST current_mSelectExpression (LOCATION_ARGS) const ;
  public: class GGS_lexicalInstructionListAST current_mSelectInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalSelectBranchListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalSelectBranchListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalSelectBranchListAST (const DownEnumerator_lexicalSelectBranchListAST &) = delete ;
  private: DownEnumerator_lexicalSelectBranchListAST & operator = (const DownEnumerator_lexicalSelectBranchListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalSelectBranchListAST final {
  public: UpEnumerator_lexicalSelectBranchListAST (const class GGS_lexicalSelectBranchListAST & inList)  ;

  public: ~ UpEnumerator_lexicalSelectBranchListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lexicalExpressionAST current_mSelectExpression (LOCATION_ARGS) const ;
  public: class GGS_lexicalInstructionListAST current_mSelectInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalSelectBranchListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalSelectBranchListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalSelectBranchListAST (const UpEnumerator_lexicalSelectBranchListAST &) = delete ;
  private: UpEnumerator_lexicalSelectBranchListAST & operator = (const UpEnumerator_lexicalSelectBranchListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @lexicalSelectBranchListAST list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalSelectBranchListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_lexicalSelectBranchListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_lexicalSelectBranchListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_lexicalSelectBranchListAST (void) = default ;

//--- Copy
  public: GGS_lexicalSelectBranchListAST (const GGS_lexicalSelectBranchListAST &) = default ;
  public: GGS_lexicalSelectBranchListAST & operator = (const GGS_lexicalSelectBranchListAST &) = default ;

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
  public : inline GenericArray <GGS_lexicalSelectBranchListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_lexicalSelectBranchListAST subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_lexicalSelectBranchListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lexicalExpressionAST & in_mSelectExpression,
                                                 const class GGS_lexicalInstructionListAST & in_mSelectInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalSelectBranchListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalSelectBranchListAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalSelectBranchListAST class_func_listWithValue (const class GGS_lexicalExpressionAST & inOperand0,
                                                                                const class GGS_lexicalInstructionListAST & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_lexicalSelectBranchListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lexicalExpressionAST & inOperand0,
                                   const class GGS_lexicalInstructionListAST & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_lexicalSelectBranchListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_lexicalSelectBranchListAST add_operation (const GGS_lexicalSelectBranchListAST & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lexicalExpressionAST constinArgument0,
                              class GGS_lexicalInstructionListAST constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lexicalExpressionAST constinArgument0,
                                     class GGS_lexicalInstructionListAST constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lexicalExpressionAST & outArgument0,
                                class GGS_lexicalInstructionListAST & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lexicalExpressionAST & outArgument0,
                               class GGS_lexicalInstructionListAST & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lexicalExpressionAST & outArgument0,
                                     class GGS_lexicalInstructionListAST & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMSelectExpressionAtIndex (class GGS_lexicalExpressionAST constinArgument0,
                                                   class GGS_uint constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public: void setter_setMSelectInstructionListAtIndex (class GGS_lexicalInstructionListAST constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lexicalExpressionAST & outArgument0,
                             class GGS_lexicalInstructionListAST & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lexicalExpressionAST & outArgument0,
                            class GGS_lexicalInstructionListAST & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lexicalExpressionAST getter_mSelectExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalInstructionListAST getter_mSelectInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_lexicalSelectBranchListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalSelectBranchListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalSelectBranchListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalSelectBranchListAST ;
  friend class DownEnumerator_lexicalSelectBranchListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSelectBranchListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalInstructionListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalInstructionListAST final {
  public: DownEnumerator_lexicalInstructionListAST (const class GGS_lexicalInstructionListAST & inList) ;

  public: ~ DownEnumerator_lexicalInstructionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lexicalInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalInstructionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalInstructionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalInstructionListAST (const DownEnumerator_lexicalInstructionListAST &) = delete ;
  private: DownEnumerator_lexicalInstructionListAST & operator = (const DownEnumerator_lexicalInstructionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalInstructionListAST final {
  public: UpEnumerator_lexicalInstructionListAST (const class GGS_lexicalInstructionListAST & inList)  ;

  public: ~ UpEnumerator_lexicalInstructionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lexicalInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalInstructionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalInstructionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalInstructionListAST (const UpEnumerator_lexicalInstructionListAST &) = delete ;
  private: UpEnumerator_lexicalInstructionListAST & operator = (const UpEnumerator_lexicalInstructionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @lexicalInstructionListAST list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalInstructionListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_lexicalInstructionListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_lexicalInstructionListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_lexicalInstructionListAST (void) = default ;

//--- Copy
  public: GGS_lexicalInstructionListAST (const GGS_lexicalInstructionListAST &) = default ;
  public: GGS_lexicalInstructionListAST & operator = (const GGS_lexicalInstructionListAST &) = default ;

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
  public : inline GenericArray <GGS_lexicalInstructionListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_lexicalInstructionListAST subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_lexicalInstructionListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lexicalInstructionAST & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalInstructionListAST init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalInstructionListAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalInstructionListAST class_func_listWithValue (const class GGS_lexicalInstructionAST & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_lexicalInstructionListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lexicalInstructionAST & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_lexicalInstructionListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_lexicalInstructionListAST add_operation (const GGS_lexicalInstructionListAST & inOperand,
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

  public: void setter_removeAtIndex (class GGS_lexicalInstructionAST & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionAtIndex (class GGS_lexicalInstructionAST constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lexicalInstructionAST & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lexicalInstructionAST & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lexicalInstructionAST getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_lexicalInstructionListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalInstructionListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalInstructionListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalInstructionListAST ;
  friend class DownEnumerator_lexicalInstructionListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalInstructionListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalSelectBranchListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalSelectBranchListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lexicalExpressionAST mProperty_mSelectExpression ;
  public: inline GGS_lexicalExpressionAST readProperty_mSelectExpression (void) const {
    return mProperty_mSelectExpression ;
  }

  public: GGS_lexicalInstructionListAST mProperty_mSelectInstructionList ;
  public: inline GGS_lexicalInstructionListAST readProperty_mSelectInstructionList (void) const {
    return mProperty_mSelectInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalSelectBranchListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSelectExpression (const GGS_lexicalExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelectExpression = inValue ;
  }

  public: inline void setter_setMSelectInstructionList (const GGS_lexicalInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelectInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalSelectBranchListAST_2E_element (const GGS_lexicalExpressionAST & in_mSelectExpression,
                                                     const GGS_lexicalInstructionListAST & in_mSelectInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalSelectBranchListAST_2E_element (const GGS_lexicalSelectBranchListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalSelectBranchListAST_2E_element & operator = (const GGS_lexicalSelectBranchListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalSelectBranchListAST_2E_element init_21__21_ (const class GGS_lexicalExpressionAST & inOperand0,
                                                                         const class GGS_lexicalInstructionListAST & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalSelectBranchListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSelectBranchListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalInstructionListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalInstructionListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lexicalInstructionAST mProperty_mInstruction ;
  public: inline GGS_lexicalInstructionAST readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalInstructionListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_lexicalInstructionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalInstructionListAST_2E_element (const GGS_lexicalInstructionAST & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalInstructionListAST_2E_element (const GGS_lexicalInstructionListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalInstructionListAST_2E_element & operator = (const GGS_lexicalInstructionListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalInstructionListAST_2E_element init_21_ (const class GGS_lexicalInstructionAST & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalInstructionListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalInstructionListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalSelectInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalSelectInstructionAST : public GGS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalSelectInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalSelectInstructionAST (const class cPtr_lexicalSelectInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lexicalSelectBranchListAST readProperty_mLexicalSelectBranchList (void) const ;

  public: class GGS_lexicalInstructionListAST readProperty_mDefaultInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalSelectInstructionAST init_21__21_ (const class GGS_lexicalSelectBranchListAST & inOperand0,
                                                               const class GGS_lexicalInstructionListAST & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalSelectInstructionAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalSelectInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalSelectInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalSelectInstructionAST : public cPtr_lexicalInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalSelectInstructionAST_init_21__21_ (const class GGS_lexicalSelectBranchListAST & inOperand0,
                                                         const class GGS_lexicalInstructionListAST & inOperand1,
                                                         Compiler * inCompiler) ;


//--- Extension getter generateLexicalInstructionCode
  public: virtual class GGS_string getter_generateLexicalInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaInstructionCode
  public: virtual class GGS_string getter_generateSwiftCocoaInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalInstructionUsesLoopLocalVariable
  public: virtual class GGS_bool getter_lexicalInstructionUsesLoopLocalVariable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalInstruction
  public: virtual void method_checkLexicalInstruction (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           class GGS_lexicalTagMap & arg_ioTagMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lexicalSelectBranchListAST mProperty_mLexicalSelectBranchList ;
  public: GGS_lexicalInstructionListAST mProperty_mDefaultInstructionList ;


//--- Default constructor
  public: cPtr_lexicalSelectInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalSelectInstructionAST (const GGS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
                                            const GGS_lexicalInstructionListAST & in_mDefaultInstructionList,
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
// Phase 1: @lexicalSelectInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalSelectInstructionAST_2E_weak : public GGS_lexicalInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalSelectInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalSelectInstructionAST_2E_weak (const class GGS_lexicalSelectInstructionAST & inSource) ;

  public: GGS_lexicalSelectInstructionAST_2E_weak & operator = (const class GGS_lexicalSelectInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalSelectInstructionAST_2E_weak init_nil (void) {
    GGS_lexicalSelectInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalSelectInstructionAST bang_lexicalSelectInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalSelectInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_lexicalSelectInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalSelectInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalSelectInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSelectInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalSimpleSendInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalSimpleSendInstructionAST : public GGS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalSimpleSendInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalSimpleSendInstructionAST (const class cPtr_lexicalSimpleSendInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mSentTerminal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalSimpleSendInstructionAST init_21_ (const class GGS_lstring & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalSimpleSendInstructionAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalSimpleSendInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalSimpleSendInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalSimpleSendInstructionAST : public cPtr_lexicalInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalSimpleSendInstructionAST_init_21_ (const class GGS_lstring & inOperand0,
                                                         Compiler * inCompiler) ;


//--- Extension getter generateLexicalInstructionCode
  public: virtual class GGS_string getter_generateLexicalInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaInstructionCode
  public: virtual class GGS_string getter_generateSwiftCocoaInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalInstructionUsesLoopLocalVariable
  public: virtual class GGS_bool getter_lexicalInstructionUsesLoopLocalVariable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalInstruction
  public: virtual void method_checkLexicalInstruction (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           class GGS_lexicalTagMap & arg_ioTagMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mSentTerminal ;


//--- Default constructor
  public: cPtr_lexicalSimpleSendInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalSimpleSendInstructionAST (const GGS_lstring & in_mSentTerminal,
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
// Phase 1: @lexicalSimpleSendInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalSimpleSendInstructionAST_2E_weak : public GGS_lexicalInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalSimpleSendInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalSimpleSendInstructionAST_2E_weak (const class GGS_lexicalSimpleSendInstructionAST & inSource) ;

  public: GGS_lexicalSimpleSendInstructionAST_2E_weak & operator = (const class GGS_lexicalSimpleSendInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalSimpleSendInstructionAST_2E_weak init_nil (void) {
    GGS_lexicalSimpleSendInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalSimpleSendInstructionAST bang_lexicalSimpleSendInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalSimpleSendInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_lexicalSimpleSendInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalSimpleSendInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalSimpleSendInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalLogInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalLogInstructionAST : public GGS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalLogInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalLogInstructionAST (const class cPtr_lexicalLogInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalLogInstructionAST init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalLogInstructionAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalLogInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalLogInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalLogInstructionAST : public cPtr_lexicalInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalLogInstructionAST_init (Compiler * inCompiler) ;


//--- Extension getter generateLexicalInstructionCode
  public: virtual class GGS_string getter_generateLexicalInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaInstructionCode
  public: virtual class GGS_string getter_generateSwiftCocoaInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalInstructionUsesLoopLocalVariable
  public: virtual class GGS_bool getter_lexicalInstructionUsesLoopLocalVariable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalInstruction
  public: virtual void method_checkLexicalInstruction (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           class GGS_lexicalTagMap & arg_ioTagMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_lexicalLogInstructionAST (Compiler * inCompiler
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
// Phase 1: @lexicalLogInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalLogInstructionAST_2E_weak : public GGS_lexicalInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalLogInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalLogInstructionAST_2E_weak (const class GGS_lexicalLogInstructionAST & inSource) ;

  public: GGS_lexicalLogInstructionAST_2E_weak & operator = (const class GGS_lexicalLogInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalLogInstructionAST_2E_weak init_nil (void) {
    GGS_lexicalLogInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalLogInstructionAST bang_lexicalLogInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalLogInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_lexicalLogInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalLogInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalLogInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalLogInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRewindInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRewindInstructionAST : public GGS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalRewindInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalRewindInstructionAST (const class cPtr_lexicalRewindInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLexicalTagName (void) const ;

  public: class GGS_lstring readProperty_mTerminalName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalRewindInstructionAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_lstring & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalRewindInstructionAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalRewindInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalRewindInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalRewindInstructionAST : public cPtr_lexicalInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalRewindInstructionAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                         const class GGS_lstring & inOperand1,
                                                         Compiler * inCompiler) ;


//--- Extension getter generateLexicalInstructionCode
  public: virtual class GGS_string getter_generateLexicalInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaInstructionCode
  public: virtual class GGS_string getter_generateSwiftCocoaInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalInstructionUsesLoopLocalVariable
  public: virtual class GGS_bool getter_lexicalInstructionUsesLoopLocalVariable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalInstruction
  public: virtual void method_checkLexicalInstruction (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           class GGS_lexicalTagMap & arg_ioTagMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLexicalTagName ;
  public: GGS_lstring mProperty_mTerminalName ;


//--- Default constructor
  public: cPtr_lexicalRewindInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalRewindInstructionAST (const GGS_lstring & in_mLexicalTagName,
                                            const GGS_lstring & in_mTerminalName,
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
// Phase 1: @lexicalRewindInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRewindInstructionAST_2E_weak : public GGS_lexicalInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalRewindInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalRewindInstructionAST_2E_weak (const class GGS_lexicalRewindInstructionAST & inSource) ;

  public: GGS_lexicalRewindInstructionAST_2E_weak & operator = (const class GGS_lexicalRewindInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalRewindInstructionAST_2E_weak init_nil (void) {
    GGS_lexicalRewindInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalRewindInstructionAST bang_lexicalRewindInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalRewindInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_lexicalRewindInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalRewindInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalRewindInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRewindInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalWhileBranchListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalWhileBranchListAST final {
  public: DownEnumerator_lexicalWhileBranchListAST (const class GGS_lexicalWhileBranchListAST & inList) ;

  public: ~ DownEnumerator_lexicalWhileBranchListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lexicalExpressionAST current_mWhileExpression (LOCATION_ARGS) const ;
  public: class GGS_lexicalInstructionListAST current_mWhileInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalWhileBranchListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalWhileBranchListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalWhileBranchListAST (const DownEnumerator_lexicalWhileBranchListAST &) = delete ;
  private: DownEnumerator_lexicalWhileBranchListAST & operator = (const DownEnumerator_lexicalWhileBranchListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalWhileBranchListAST final {
  public: UpEnumerator_lexicalWhileBranchListAST (const class GGS_lexicalWhileBranchListAST & inList)  ;

  public: ~ UpEnumerator_lexicalWhileBranchListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lexicalExpressionAST current_mWhileExpression (LOCATION_ARGS) const ;
  public: class GGS_lexicalInstructionListAST current_mWhileInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalWhileBranchListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalWhileBranchListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalWhileBranchListAST (const UpEnumerator_lexicalWhileBranchListAST &) = delete ;
  private: UpEnumerator_lexicalWhileBranchListAST & operator = (const UpEnumerator_lexicalWhileBranchListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @lexicalWhileBranchListAST list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalWhileBranchListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_lexicalWhileBranchListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_lexicalWhileBranchListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_lexicalWhileBranchListAST (void) = default ;

//--- Copy
  public: GGS_lexicalWhileBranchListAST (const GGS_lexicalWhileBranchListAST &) = default ;
  public: GGS_lexicalWhileBranchListAST & operator = (const GGS_lexicalWhileBranchListAST &) = default ;

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
  public : inline GenericArray <GGS_lexicalWhileBranchListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_lexicalWhileBranchListAST subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_lexicalWhileBranchListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lexicalExpressionAST & in_mWhileExpression,
                                                 const class GGS_lexicalInstructionListAST & in_mWhileInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalWhileBranchListAST init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalWhileBranchListAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalWhileBranchListAST class_func_listWithValue (const class GGS_lexicalExpressionAST & inOperand0,
                                                                               const class GGS_lexicalInstructionListAST & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_lexicalWhileBranchListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lexicalExpressionAST & inOperand0,
                                   const class GGS_lexicalInstructionListAST & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_lexicalWhileBranchListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_lexicalWhileBranchListAST add_operation (const GGS_lexicalWhileBranchListAST & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lexicalExpressionAST constinArgument0,
                              class GGS_lexicalInstructionListAST constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lexicalExpressionAST constinArgument0,
                                     class GGS_lexicalInstructionListAST constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lexicalExpressionAST & outArgument0,
                                class GGS_lexicalInstructionListAST & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lexicalExpressionAST & outArgument0,
                               class GGS_lexicalInstructionListAST & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lexicalExpressionAST & outArgument0,
                                     class GGS_lexicalInstructionListAST & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMWhileExpressionAtIndex (class GGS_lexicalExpressionAST constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMWhileInstructionListAtIndex (class GGS_lexicalInstructionListAST constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lexicalExpressionAST & outArgument0,
                             class GGS_lexicalInstructionListAST & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lexicalExpressionAST & outArgument0,
                            class GGS_lexicalInstructionListAST & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lexicalExpressionAST getter_mWhileExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalInstructionListAST getter_mWhileInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_lexicalWhileBranchListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalWhileBranchListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalWhileBranchListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalWhileBranchListAST ;
  friend class DownEnumerator_lexicalWhileBranchListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalWhileBranchListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalWhileBranchListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalWhileBranchListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lexicalExpressionAST mProperty_mWhileExpression ;
  public: inline GGS_lexicalExpressionAST readProperty_mWhileExpression (void) const {
    return mProperty_mWhileExpression ;
  }

  public: GGS_lexicalInstructionListAST mProperty_mWhileInstructionList ;
  public: inline GGS_lexicalInstructionListAST readProperty_mWhileInstructionList (void) const {
    return mProperty_mWhileInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalWhileBranchListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMWhileExpression (const GGS_lexicalExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWhileExpression = inValue ;
  }

  public: inline void setter_setMWhileInstructionList (const GGS_lexicalInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWhileInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalWhileBranchListAST_2E_element (const GGS_lexicalExpressionAST & in_mWhileExpression,
                                                    const GGS_lexicalInstructionListAST & in_mWhileInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalWhileBranchListAST_2E_element (const GGS_lexicalWhileBranchListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalWhileBranchListAST_2E_element & operator = (const GGS_lexicalWhileBranchListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalWhileBranchListAST_2E_element init_21__21_ (const class GGS_lexicalExpressionAST & inOperand0,
                                                                        const class GGS_lexicalInstructionListAST & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalWhileBranchListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalWhileBranchListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRepeatInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRepeatInstructionAST : public GGS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalRepeatInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalRepeatInstructionAST (const class cPtr_lexicalRepeatInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lexicalInstructionListAST readProperty_mRepeatedInstructionList (void) const ;

  public: class GGS_lexicalWhileBranchListAST readProperty_mLexicalWhileBranchList (void) const ;

  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalRepeatInstructionAST init_21__21__21_ (const class GGS_lexicalInstructionListAST & inOperand0,
                                                                   const class GGS_lexicalWhileBranchListAST & inOperand1,
                                                                   const class GGS_location & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalRepeatInstructionAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalRepeatInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalRepeatInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalRepeatInstructionAST : public cPtr_lexicalInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalRepeatInstructionAST_init_21__21__21_ (const class GGS_lexicalInstructionListAST & inOperand0,
                                                             const class GGS_lexicalWhileBranchListAST & inOperand1,
                                                             const class GGS_location & inOperand2,
                                                             Compiler * inCompiler) ;


//--- Extension getter generateLexicalInstructionCode
  public: virtual class GGS_string getter_generateLexicalInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaInstructionCode
  public: virtual class GGS_string getter_generateSwiftCocoaInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalInstructionUsesLoopLocalVariable
  public: virtual class GGS_bool getter_lexicalInstructionUsesLoopLocalVariable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalInstruction
  public: virtual void method_checkLexicalInstruction (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           class GGS_lexicalTagMap & arg_ioTagMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lexicalInstructionListAST mProperty_mRepeatedInstructionList ;
  public: GGS_lexicalWhileBranchListAST mProperty_mLexicalWhileBranchList ;
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_lexicalRepeatInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalRepeatInstructionAST (const GGS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                                            const GGS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList,
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
// Phase 1: @lexicalRepeatInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRepeatInstructionAST_2E_weak : public GGS_lexicalInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalRepeatInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalRepeatInstructionAST_2E_weak (const class GGS_lexicalRepeatInstructionAST & inSource) ;

  public: GGS_lexicalRepeatInstructionAST_2E_weak & operator = (const class GGS_lexicalRepeatInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalRepeatInstructionAST_2E_weak init_nil (void) {
    GGS_lexicalRepeatInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalRepeatInstructionAST bang_lexicalRepeatInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalRepeatInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_lexicalRepeatInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalRepeatInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalRepeatInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalDropInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalDropInstructionAST : public GGS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalDropInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalDropInstructionAST (const class cPtr_lexicalDropInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTerminalName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalDropInstructionAST init_21_ (const class GGS_lstring & inOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalDropInstructionAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalDropInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalDropInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalDropInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalDropInstructionAST : public cPtr_lexicalInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalDropInstructionAST_init_21_ (const class GGS_lstring & inOperand0,
                                                   Compiler * inCompiler) ;


//--- Extension getter generateLexicalInstructionCode
  public: virtual class GGS_string getter_generateLexicalInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaInstructionCode
  public: virtual class GGS_string getter_generateSwiftCocoaInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalInstructionUsesLoopLocalVariable
  public: virtual class GGS_bool getter_lexicalInstructionUsesLoopLocalVariable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalInstruction
  public: virtual void method_checkLexicalInstruction (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           class GGS_lexicalTagMap & arg_ioTagMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTerminalName ;


//--- Default constructor
  public: cPtr_lexicalDropInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalDropInstructionAST (const GGS_lstring & in_mTerminalName,
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
// Phase 1: @lexicalDropInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalDropInstructionAST_2E_weak : public GGS_lexicalInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalDropInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalDropInstructionAST_2E_weak (const class GGS_lexicalDropInstructionAST & inSource) ;

  public: GGS_lexicalDropInstructionAST_2E_weak & operator = (const class GGS_lexicalDropInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalDropInstructionAST_2E_weak init_nil (void) {
    GGS_lexicalDropInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalDropInstructionAST bang_lexicalDropInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalDropInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_lexicalDropInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalDropInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalDropInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalDropInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalWarningInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalWarningInstructionAST : public GGS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalWarningInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalWarningInstructionAST (const class cPtr_lexicalWarningInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mWarningMessageName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalWarningInstructionAST init_21_ (const class GGS_lstring & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalWarningInstructionAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalWarningInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalWarningInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalWarningInstructionAST : public cPtr_lexicalInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalWarningInstructionAST_init_21_ (const class GGS_lstring & inOperand0,
                                                      Compiler * inCompiler) ;


//--- Extension getter generateLexicalInstructionCode
  public: virtual class GGS_string getter_generateLexicalInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaInstructionCode
  public: virtual class GGS_string getter_generateSwiftCocoaInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalInstructionUsesLoopLocalVariable
  public: virtual class GGS_bool getter_lexicalInstructionUsesLoopLocalVariable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalInstruction
  public: virtual void method_checkLexicalInstruction (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           class GGS_lexicalTagMap & arg_ioTagMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mWarningMessageName ;


//--- Default constructor
  public: cPtr_lexicalWarningInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalWarningInstructionAST (const GGS_lstring & in_mWarningMessageName,
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
// Phase 1: @lexicalWarningInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalWarningInstructionAST_2E_weak : public GGS_lexicalInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalWarningInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalWarningInstructionAST_2E_weak (const class GGS_lexicalWarningInstructionAST & inSource) ;

  public: GGS_lexicalWarningInstructionAST_2E_weak & operator = (const class GGS_lexicalWarningInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalWarningInstructionAST_2E_weak init_nil (void) {
    GGS_lexicalWarningInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalWarningInstructionAST bang_lexicalWarningInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalWarningInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_lexicalWarningInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalWarningInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalWarningInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalWarningInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalErrorInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalErrorInstructionAST : public GGS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalErrorInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalErrorInstructionAST (const class cPtr_lexicalErrorInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mErrorMessageName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalErrorInstructionAST init_21_ (const class GGS_lstring & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalErrorInstructionAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalErrorInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalErrorInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalErrorInstructionAST : public cPtr_lexicalInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalErrorInstructionAST_init_21_ (const class GGS_lstring & inOperand0,
                                                    Compiler * inCompiler) ;


//--- Extension getter generateLexicalInstructionCode
  public: virtual class GGS_string getter_generateLexicalInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaInstructionCode
  public: virtual class GGS_string getter_generateSwiftCocoaInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalInstructionUsesLoopLocalVariable
  public: virtual class GGS_bool getter_lexicalInstructionUsesLoopLocalVariable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalInstruction
  public: virtual void method_checkLexicalInstruction (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           class GGS_lexicalTagMap & arg_ioTagMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mErrorMessageName ;


//--- Default constructor
  public: cPtr_lexicalErrorInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalErrorInstructionAST (const GGS_lstring & in_mErrorMessageName,
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
// Phase 1: @lexicalErrorInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalErrorInstructionAST_2E_weak : public GGS_lexicalInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalErrorInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalErrorInstructionAST_2E_weak (const class GGS_lexicalErrorInstructionAST & inSource) ;

  public: GGS_lexicalErrorInstructionAST_2E_weak & operator = (const class GGS_lexicalErrorInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalErrorInstructionAST_2E_weak init_nil (void) {
    GGS_lexicalErrorInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalErrorInstructionAST bang_lexicalErrorInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalErrorInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_lexicalErrorInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalErrorInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalErrorInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalErrorInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @headerCompositionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_headerCompositionMap final {

  public: DownEnumerator_headerCompositionMap (const class GGS_headerCompositionMap & inMap) ;

  public: ~ DownEnumerator_headerCompositionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_stringset current_mInclusion (LOCATION_ARGS) const ;

  public: class GGS_string current_mHeaderString (LOCATION_ARGS) const ;

  public: class GGS_headerCompositionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_headerCompositionMap (const DownEnumerator_headerCompositionMap &) = delete ;
  private: DownEnumerator_headerCompositionMap & operator = (const DownEnumerator_headerCompositionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_headerCompositionMap final {
  public: UpEnumerator_headerCompositionMap (const class GGS_headerCompositionMap & inMap)  ;

  public: ~ UpEnumerator_headerCompositionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_stringset current_mInclusion (LOCATION_ARGS) const ;
  public: class GGS_string current_mHeaderString (LOCATION_ARGS) const ;
  public: class GGS_headerCompositionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_headerCompositionMap (const UpEnumerator_headerCompositionMap &) = delete ;
  private: UpEnumerator_headerCompositionMap & operator = (const UpEnumerator_headerCompositionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_headerCompositionMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_headerCompositionMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_headerCompositionMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_headerCompositionMap (void) ;

//--- Handle copy
  public: GGS_headerCompositionMap (const GGS_headerCompositionMap & inSource) ;
  public: GGS_headerCompositionMap & operator = (const GGS_headerCompositionMap & inSource) ;

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
  protected: void performInsert (const class GGS_headerCompositionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerCompositionMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_headerCompositionMap init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_headerCompositionMap extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_headerCompositionMap class_func_mapWithMapToOverride (const class GGS_headerCompositionMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_stringset constinArgument1,
                                 class GGS_string constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMHeaderStringForKey (class GGS_string constinArgument0,
                                              class GGS_string constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMInclusionForKey (class GGS_stringset constinArgument0,
                                           class GGS_string constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_stringset & outArgument1,
                                 class GGS_string & outArgument2,
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

  public: class GGS_string getter_mHeaderStringForKey (const class GGS_string & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_mInclusionForKey (const class GGS_string & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_headerCompositionMap getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_headerCompositionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_headerCompositionMap ;
  friend class DownEnumerator_headerCompositionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerCompositionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @headerCompositionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_headerCompositionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_stringset mProperty_mInclusion ;
  public: inline GGS_stringset readProperty_mInclusion (void) const {
    return mProperty_mInclusion ;
  }

  public: GGS_string mProperty_mHeaderString ;
  public: inline GGS_string readProperty_mHeaderString (void) const {
    return mProperty_mHeaderString ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_headerCompositionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInclusion (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInclusion = inValue ;
  }

  public: inline void setter_setMHeaderString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHeaderString = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_headerCompositionMap_2E_element (const GGS_lstring & in_lkey,
                                               const GGS_stringset & in_mInclusion,
                                               const GGS_string & in_mHeaderString) ;

//--------------------------------- Copy constructor
  public: GGS_headerCompositionMap_2E_element (const GGS_headerCompositionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_headerCompositionMap_2E_element & operator = (const GGS_headerCompositionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_headerCompositionMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_stringset & inOperand1,
                                                                       const class GGS_string & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_headerCompositionMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerCompositionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: headerCompositionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_headerCompositionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_headerCompositionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_headerCompositionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_headerCompositionMap_2E_element_3F_ (const GGS_headerCompositionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_headerCompositionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_headerCompositionMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_headerCompositionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerCompositionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @headerRepartitionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_headerRepartitionMap final {

  public: DownEnumerator_headerRepartitionMap (const class GGS_headerRepartitionMap & inMap) ;

  public: ~ DownEnumerator_headerRepartitionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_string current_mHeaderFileName (LOCATION_ARGS) const ;

  public: class GGS_headerRepartitionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_headerRepartitionMap (const DownEnumerator_headerRepartitionMap &) = delete ;
  private: DownEnumerator_headerRepartitionMap & operator = (const DownEnumerator_headerRepartitionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_headerRepartitionMap final {
  public: UpEnumerator_headerRepartitionMap (const class GGS_headerRepartitionMap & inMap)  ;

  public: ~ UpEnumerator_headerRepartitionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mHeaderFileName (LOCATION_ARGS) const ;
  public: class GGS_headerRepartitionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_headerRepartitionMap (const UpEnumerator_headerRepartitionMap &) = delete ;
  private: UpEnumerator_headerRepartitionMap & operator = (const UpEnumerator_headerRepartitionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_headerRepartitionMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_headerRepartitionMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_headerRepartitionMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_headerRepartitionMap (void) ;

//--- Handle copy
  public: GGS_headerRepartitionMap (const GGS_headerRepartitionMap & inSource) ;
  public: GGS_headerRepartitionMap & operator = (const GGS_headerRepartitionMap & inSource) ;

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
  protected: void performInsert (const class GGS_headerRepartitionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_headerRepartitionMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_headerRepartitionMap init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_headerRepartitionMap extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_headerRepartitionMap class_func_mapWithMapToOverride (const class GGS_headerRepartitionMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_string constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMHeaderFileNameForKey (class GGS_string constinArgument0,
                                                class GGS_string constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_string & outArgument1,
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

  public: class GGS_string getter_mHeaderFileNameForKey (const class GGS_string & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_headerRepartitionMap getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_headerRepartitionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_headerRepartitionMap ;
  friend class DownEnumerator_headerRepartitionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerRepartitionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @headerRepartitionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_headerRepartitionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_string mProperty_mHeaderFileName ;
  public: inline GGS_string readProperty_mHeaderFileName (void) const {
    return mProperty_mHeaderFileName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_headerRepartitionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMHeaderFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHeaderFileName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_headerRepartitionMap_2E_element (const GGS_lstring & in_lkey,
                                               const GGS_string & in_mHeaderFileName) ;

//--------------------------------- Copy constructor
  public: GGS_headerRepartitionMap_2E_element (const GGS_headerRepartitionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_headerRepartitionMap_2E_element & operator = (const GGS_headerRepartitionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_headerRepartitionMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_string & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_headerRepartitionMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerRepartitionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: headerRepartitionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_headerRepartitionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_headerRepartitionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_headerRepartitionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_headerRepartitionMap_2E_element_3F_ (const GGS_headerRepartitionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_headerRepartitionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_headerRepartitionMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_headerRepartitionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerRepartitionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @uselessEntityLocationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_uselessEntityLocationMap final {

  public: DownEnumerator_uselessEntityLocationMap (const class GGS_uselessEntityLocationMap & inMap) ;

  public: ~ DownEnumerator_uselessEntityLocationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_string current_mUnusedEntityName (LOCATION_ARGS) const ;

  public: class GGS_location current_mLocation (LOCATION_ARGS) const ;

  public: class GGS_uselessEntityLocationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_uselessEntityLocationMap (const DownEnumerator_uselessEntityLocationMap &) = delete ;
  private: DownEnumerator_uselessEntityLocationMap & operator = (const DownEnumerator_uselessEntityLocationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_uselessEntityLocationMap final {
  public: UpEnumerator_uselessEntityLocationMap (const class GGS_uselessEntityLocationMap & inMap)  ;

  public: ~ UpEnumerator_uselessEntityLocationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mUnusedEntityName (LOCATION_ARGS) const ;
  public: class GGS_location current_mLocation (LOCATION_ARGS) const ;
  public: class GGS_uselessEntityLocationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_uselessEntityLocationMap (const UpEnumerator_uselessEntityLocationMap &) = delete ;
  private: UpEnumerator_uselessEntityLocationMap & operator = (const UpEnumerator_uselessEntityLocationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_uselessEntityLocationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_uselessEntityLocationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_uselessEntityLocationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_uselessEntityLocationMap (void) ;

//--- Handle copy
  public: GGS_uselessEntityLocationMap (const GGS_uselessEntityLocationMap & inSource) ;
  public: GGS_uselessEntityLocationMap & operator = (const GGS_uselessEntityLocationMap & inSource) ;

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
  protected: void performInsert (const class GGS_uselessEntityLocationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_uselessEntityLocationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_uselessEntityLocationMap init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_uselessEntityLocationMap extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_uselessEntityLocationMap class_func_mapWithMapToOverride (const class GGS_uselessEntityLocationMap & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_string constinArgument1,
                                 class GGS_location constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMLocationForKey (class GGS_location constinArgument0,
                                          class GGS_string constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMUnusedEntityNameForKey (class GGS_string constinArgument0,
                                                  class GGS_string constinArgument1,
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

  public: class GGS_location getter_mLocationForKey (const class GGS_string & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mUnusedEntityNameForKey (const class GGS_string & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_uselessEntityLocationMap getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_uselessEntityLocationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_uselessEntityLocationMap ;
  friend class DownEnumerator_uselessEntityLocationMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @uselessEntityLocationMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_uselessEntityLocationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_string mProperty_mUnusedEntityName ;
  public: inline GGS_string readProperty_mUnusedEntityName (void) const {
    return mProperty_mUnusedEntityName ;
  }

  public: GGS_location mProperty_mLocation ;
  public: inline GGS_location readProperty_mLocation (void) const {
    return mProperty_mLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_uselessEntityLocationMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMUnusedEntityName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedEntityName = inValue ;
  }

  public: inline void setter_setMLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_uselessEntityLocationMap_2E_element (const GGS_lstring & in_lkey,
                                                   const GGS_string & in_mUnusedEntityName,
                                                   const GGS_location & in_mLocation) ;

//--------------------------------- Copy constructor
  public: GGS_uselessEntityLocationMap_2E_element (const GGS_uselessEntityLocationMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_uselessEntityLocationMap_2E_element & operator = (const GGS_uselessEntityLocationMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_uselessEntityLocationMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_string & inOperand1,
                                                                           const class GGS_location & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_uselessEntityLocationMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: uselessEntityLocationMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_uselessEntityLocationMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_uselessEntityLocationMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_uselessEntityLocationMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_uselessEntityLocationMap_2E_element_3F_ (const GGS_uselessEntityLocationMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_uselessEntityLocationMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_uselessEntityLocationMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_uselessEntityLocationMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externProcedureDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_externProcedureDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_externProcedureDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_externProcedureDeclarationAST (const class cPtr_externProcedureDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_isFilePrivate (void) const ;

  public: class GGS_lstring readProperty_mRoutineName (void) const ;

  public: class GGS_formalParameterListAST readProperty_mFormalArgumentListAST (void) const ;

  public: class GGS_bool readProperty_usefullProcedure (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externProcedureDeclarationAST init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (const class GGS_bool & inOperand0,
                                                                                                                      const class GGS_bool & inOperand1,
                                                                                                                      const class GGS_lstring & inOperand2,
                                                                                                                      const class GGS_formalParameterListAST & inOperand3,
                                                                                                                      const class GGS_bool & inOperand4,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externProcedureDeclarationAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externProcedureDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externProcedureDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @externProcedureDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_externProcedureDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void externProcedureDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (const class GGS_bool & inOperand0,
                                                                                                                const class GGS_bool & inOperand1,
                                                                                                                const class GGS_lstring & inOperand2,
                                                                                                                const class GGS_formalParameterListAST & inOperand3,
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
  public: GGS_bool mProperty_isFilePrivate ;
  public: GGS_lstring mProperty_mRoutineName ;
  public: GGS_formalParameterListAST mProperty_mFormalArgumentListAST ;
  public: GGS_bool mProperty_usefullProcedure ;


//--- Default constructor
  public: cPtr_externProcedureDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_externProcedureDeclarationAST (const GGS_bool & in_isPredefined,
                                              const GGS_bool & in_isFilePrivate,
                                              const GGS_lstring & in_mRoutineName,
                                              const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                              const GGS_bool & in_usefullProcedure,
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
// Phase 1: @externProcedureDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_externProcedureDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_externProcedureDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_externProcedureDeclarationAST_2E_weak (const class GGS_externProcedureDeclarationAST & inSource) ;

  public: GGS_externProcedureDeclarationAST_2E_weak & operator = (const class GGS_externProcedureDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_externProcedureDeclarationAST_2E_weak init_nil (void) {
    GGS_externProcedureDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_externProcedureDeclarationAST bang_externProcedureDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_externProcedureDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_externProcedureDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externProcedureDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externProcedureDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externProcedureDeclarationAST_2E_weak ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalSentValueList extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
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
// Phase 1: @terminalList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_terminalList_2E_element : public AC_GALGAS_root {
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
  public: GGS_terminalList_2E_element (void) ;

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
  public: GGS_terminalList_2E_element (const GGS_lstring & in_mTerminalName,
                                       const GGS_lexicalSentValueList & in_mSentAttributeList,
                                       const GGS_string & in_mSyntaxErrorMessage,
                                       const GGS_bool & in_isEndOfTemplateMark,
                                       const GGS_bool & in_atomicSelection,
                                       const GGS_uint & in_mStyleIndex) ;

//--------------------------------- Copy constructor
  public: GGS_terminalList_2E_element (const GGS_terminalList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_terminalList_2E_element & operator = (const GGS_terminalList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalList_2E_element init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (const class GGS_lstring & inOperand0,
                                                                                                             const class GGS_lexicalSentValueList & inOperand1,
                                                                                                             const class GGS_string & inOperand2,
                                                                                                             const class GGS_bool & inOperand3,
                                                                                                             const class GGS_bool & inOperand4,
                                                                                                             const class GGS_uint & inOperand5,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalSentValueList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalSentValueList_2E_element : public AC_GALGAS_root {
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
  public: GGS_lexicalSentValueList_2E_element (void) ;

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
  public: GGS_lexicalSentValueList_2E_element (const GGS_lstring & in_mLexicalFormalSelector,
                                               const GGS_string & in_mLexicalAttributeName,
                                               const GGS_lexicalTypeEnum & in_mLexicalType) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalSentValueList_2E_element (const GGS_lexicalSentValueList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalSentValueList_2E_element & operator = (const GGS_lexicalSentValueList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalSentValueList_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_string & inOperand1,
                                                                       const class GGS_lexicalTypeEnum & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalSentValueList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSentValueList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalExplicitTokenListMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalExplicitTokenListMap final {

  public: DownEnumerator_lexicalExplicitTokenListMap (const class GGS_lexicalExplicitTokenListMap & inMap) ;

  public: ~ DownEnumerator_lexicalExplicitTokenListMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mTerminal (LOCATION_ARGS) const ;

  public: class GGS_bool current_atomicSelection (LOCATION_ARGS) const ;

  public: class GGS_bool current_isEndOfTemplateMark (LOCATION_ARGS) const ;

  public: class GGS_lexicalExplicitTokenListMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalExplicitTokenListMap (const DownEnumerator_lexicalExplicitTokenListMap &) = delete ;
  private: DownEnumerator_lexicalExplicitTokenListMap & operator = (const DownEnumerator_lexicalExplicitTokenListMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalExplicitTokenListMap final {
  public: UpEnumerator_lexicalExplicitTokenListMap (const class GGS_lexicalExplicitTokenListMap & inMap)  ;

  public: ~ UpEnumerator_lexicalExplicitTokenListMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mTerminal (LOCATION_ARGS) const ;
  public: class GGS_bool current_atomicSelection (LOCATION_ARGS) const ;
  public: class GGS_bool current_isEndOfTemplateMark (LOCATION_ARGS) const ;
  public: class GGS_lexicalExplicitTokenListMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalExplicitTokenListMap (const UpEnumerator_lexicalExplicitTokenListMap &) = delete ;
  private: UpEnumerator_lexicalExplicitTokenListMap & operator = (const UpEnumerator_lexicalExplicitTokenListMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_lexicalExplicitTokenListMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_lexicalExplicitTokenListMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_lexicalExplicitTokenListMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_lexicalExplicitTokenListMap (void) ;

//--- Handle copy
  public: GGS_lexicalExplicitTokenListMap (const GGS_lexicalExplicitTokenListMap & inSource) ;
  public: GGS_lexicalExplicitTokenListMap & operator = (const GGS_lexicalExplicitTokenListMap & inSource) ;

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
  protected: void performInsert (const class GGS_lexicalExplicitTokenListMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalExplicitTokenListMap init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalExplicitTokenListMap extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalExplicitTokenListMap class_func_mapWithMapToOverride (const class GGS_lexicalExplicitTokenListMap & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring constinArgument1,
                                 class GGS_bool constinArgument2,
                                 class GGS_bool constinArgument3,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setAtomicSelectionForKey (class GGS_bool constinArgument0,
                                                class GGS_string constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setIsEndOfTemplateMarkForKey (class GGS_bool constinArgument0,
                                                    class GGS_string constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMTerminalForKey (class GGS_lstring constinArgument0,
                                          class GGS_string constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring & outArgument1,
                                 class GGS_bool & outArgument2,
                                 class GGS_bool & outArgument3,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_atomicSelectionForKey (const class GGS_string & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_isEndOfTemplateMarkForKey (const class GGS_string & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mTerminalForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalExplicitTokenListMap getter_overriddenMap (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_lexicalExplicitTokenListMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalExplicitTokenListMap ;
  friend class DownEnumerator_lexicalExplicitTokenListMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalExplicitTokenListMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalExplicitTokenListMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mTerminal ;
  public: inline GGS_lstring readProperty_mTerminal (void) const {
    return mProperty_mTerminal ;
  }

  public: GGS_bool mProperty_atomicSelection ;
  public: inline GGS_bool readProperty_atomicSelection (void) const {
    return mProperty_atomicSelection ;
  }

  public: GGS_bool mProperty_isEndOfTemplateMark ;
  public: inline GGS_bool readProperty_isEndOfTemplateMark (void) const {
    return mProperty_isEndOfTemplateMark ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalExplicitTokenListMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTerminal (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminal = inValue ;
  }

  public: inline void setter_setAtomicSelection (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_atomicSelection = inValue ;
  }

  public: inline void setter_setIsEndOfTemplateMark (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isEndOfTemplateMark = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalExplicitTokenListMap_2E_element (const GGS_lstring & in_lkey,
                                                      const GGS_lstring & in_mTerminal,
                                                      const GGS_bool & in_atomicSelection,
                                                      const GGS_bool & in_isEndOfTemplateMark) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalExplicitTokenListMap_2E_element (const GGS_lexicalExplicitTokenListMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalExplicitTokenListMap_2E_element & operator = (const GGS_lexicalExplicitTokenListMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalExplicitTokenListMap_2E_element init_21__21__21_atomicSelection_21_isEndOfTemplateMark (const class GGS_lstring & inOperand0,
                                                                                                                    const class GGS_lstring & inOperand1,
                                                                                                                    const class GGS_bool & inOperand2,
                                                                                                                    const class GGS_bool & inOperand3,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalExplicitTokenListMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: lexicalExplicitTokenListMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_lexicalExplicitTokenListMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_lexicalExplicitTokenListMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_lexicalExplicitTokenListMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_lexicalExplicitTokenListMap_2E_element_3F_ (const GGS_lexicalExplicitTokenListMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_lexicalExplicitTokenListMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_lexicalExplicitTokenListMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_lexicalExplicitTokenListMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @tokenSortedlist sorted list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_tokenSortedlist final {
//--- Constructor
  public: DownEnumerator_tokenSortedlist (const class GGS_tokenSortedlist & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }
  public: class GGS_uint current_mLength (LOCATION_ARGS) const ;
  public: class GGS_string current_mName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTerminalName (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_tokenSortedlist_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_tokenSortedlist_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_tokenSortedlist (const DownEnumerator_tokenSortedlist &) = delete ;
  private: DownEnumerator_tokenSortedlist & operator = (const DownEnumerator_tokenSortedlist &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_tokenSortedlist final {
//--- Constructor
  public: UpEnumerator_tokenSortedlist (const class GGS_tokenSortedlist & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex < mElementArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }
  public: class GGS_uint current_mLength (LOCATION_ARGS) const ;
  public: class GGS_string current_mName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTerminalName (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_tokenSortedlist_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_tokenSortedlist_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_tokenSortedlist (const UpEnumerator_tokenSortedlist &) = delete ;
  private: UpEnumerator_tokenSortedlist & operator = (const UpEnumerator_tokenSortedlist &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @tokenSortedlist sorted list
//--------------------------------------------------------------------------------------------------

class GGS_tokenSortedlist final : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_tokenSortedlist_2E_element> mSharedArray ;

//--- Default constructor
  public: GGS_tokenSortedlist (void) ;

//--- Destructor
  public: virtual ~ GGS_tokenSortedlist (void) = default ;

//--- Handle copy
  public: GGS_tokenSortedlist (const GGS_tokenSortedlist &) = default ;
  public: GGS_tokenSortedlist & operator = (const GGS_tokenSortedlist &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mSharedArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mSharedArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline int32_t count (void) const { return mSharedArray.count () ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_tokenSortedlist_2E_element> sortedElementArray (void) const {
    return mSharedArray ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_tokenSortedlist init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_tokenSortedlist extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_tokenSortedlist class_func_sortedListWithValue (const class GGS_uint & inOperand0,
                                                                           const class GGS_string & inOperand1,
                                                                           const class GGS_string & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_tokenSortedlist inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_uint & inOperand0,
                                   const class GGS_string & inOperand1,
                                   const class GGS_string & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_tokenSortedlist_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: void setter_insert (class GGS_uint inArgument0,
                              class GGS_string inArgument1,
                              class GGS_string inArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_popGreatest (class GGS_uint & outArgument0,
                                   class GGS_string & outArgument1,
                                   class GGS_string & outArgument2,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_popSmallest (class GGS_uint & outArgument0,
                                   class GGS_string & outArgument1,
                                   class GGS_string & outArgument2,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_greatest (class GGS_uint & outArgument0,
                                class GGS_string & outArgument1,
                                class GGS_string & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

  public: void method_smallest (class GGS_uint & outArgument0,
                                class GGS_string & outArgument1,
                                class GGS_string & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_tokenSortedlist ;
  friend class DownEnumerator_tokenSortedlist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tokenSortedlist ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @tokenSortedlist_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_tokenSortedlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_mLength ;
  public: inline GGS_uint readProperty_mLength (void) const {
    return mProperty_mLength ;
  }

  public: GGS_string mProperty_mName ;
  public: inline GGS_string readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GGS_string mProperty_mTerminalName ;
  public: inline GGS_string readProperty_mTerminalName (void) const {
    return mProperty_mTerminalName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_tokenSortedlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLength (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLength = inValue ;
  }

  public: inline void setter_setMName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMTerminalName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_tokenSortedlist_2E_element (const GGS_uint & in_mLength,
                                          const GGS_string & in_mName,
                                          const GGS_string & in_mTerminalName) ;

//--------------------------------- Copy constructor
  public: GGS_tokenSortedlist_2E_element (const GGS_tokenSortedlist_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_tokenSortedlist_2E_element & operator = (const GGS_tokenSortedlist_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_tokenSortedlist_2E_element init_21__21__21_ (const class GGS_uint & inOperand0,
                                                                  const class GGS_string & inOperand1,
                                                                  const class GGS_string & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_tokenSortedlist_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tokenSortedlist_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalExplicitTokenListMapMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalExplicitTokenListMapMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lexicalExplicitTokenListMap mProperty_mExplicitTokenListMap ;
  public: inline GGS_lexicalExplicitTokenListMap readProperty_mExplicitTokenListMap (void) const {
    return mProperty_mExplicitTokenListMap ;
  }

  public: GGS_tokenSortedlist mProperty_mTokenSortedList ;
  public: inline GGS_tokenSortedlist readProperty_mTokenSortedList (void) const {
    return mProperty_mTokenSortedList ;
  }

  public: GGS_bool mProperty_mShouldBeGenerated ;
  public: inline GGS_bool readProperty_mShouldBeGenerated (void) const {
    return mProperty_mShouldBeGenerated ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalExplicitTokenListMapMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExplicitTokenListMap (const GGS_lexicalExplicitTokenListMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExplicitTokenListMap = inValue ;
  }

  public: inline void setter_setMTokenSortedList (const GGS_tokenSortedlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTokenSortedList = inValue ;
  }

  public: inline void setter_setMShouldBeGenerated (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mShouldBeGenerated = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalExplicitTokenListMapMap_2E_element (const GGS_lstring & in_lkey,
                                                         const GGS_lexicalExplicitTokenListMap & in_mExplicitTokenListMap,
                                                         const GGS_tokenSortedlist & in_mTokenSortedList,
                                                         const GGS_bool & in_mShouldBeGenerated) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalExplicitTokenListMapMap_2E_element (const GGS_lexicalExplicitTokenListMapMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalExplicitTokenListMapMap_2E_element & operator = (const GGS_lexicalExplicitTokenListMapMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalExplicitTokenListMapMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_lexicalExplicitTokenListMap & inOperand1,
                                                                                     const class GGS_tokenSortedlist & inOperand2,
                                                                                     const class GGS_bool & inOperand3,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalExplicitTokenListMapMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: lexicalExplicitTokenListMapMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_lexicalExplicitTokenListMapMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ (const GGS_lexicalExplicitTokenListMapMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_lexicalExplicitTokenListMapMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalMessageMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalMessageMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mLexicalMessage ;
  public: inline GGS_lstring readProperty_mLexicalMessage (void) const {
    return mProperty_mLexicalMessage ;
  }

  public: GGS_bool mProperty_mMessageIsUsed ;
  public: inline GGS_bool readProperty_mMessageIsUsed (void) const {
    return mProperty_mMessageIsUsed ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalMessageMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexicalMessage (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalMessage = inValue ;
  }

  public: inline void setter_setMMessageIsUsed (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMessageIsUsed = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalMessageMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_lstring & in_mLexicalMessage,
                                            const GGS_bool & in_mMessageIsUsed) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalMessageMap_2E_element (const GGS_lexicalMessageMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalMessageMap_2E_element & operator = (const GGS_lexicalMessageMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalMessageMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_bool & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalMessageMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalMessageMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: lexicalMessageMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_lexicalMessageMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_lexicalMessageMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_lexicalMessageMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_lexicalMessageMap_2E_element_3F_ (const GGS_lexicalMessageMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_lexicalMessageMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_lexicalMessageMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_lexicalMessageMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalMessageMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRoutineFormalArgumentList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalRoutineFormalArgumentList final {
  public: DownEnumerator_lexicalRoutineFormalArgumentList (const class GGS_lexicalRoutineFormalArgumentList & inList) ;

  public: ~ DownEnumerator_lexicalRoutineFormalArgumentList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lexicalArgumentModeAST current_mLexicalFormalArgumentMode (LOCATION_ARGS) const ;
  public: class GGS_lexicalTypeEnum current_mLexicalFormalArgumentType (LOCATION_ARGS) const ;
  public: class GGS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalRoutineFormalArgumentList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalRoutineFormalArgumentList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalRoutineFormalArgumentList (const DownEnumerator_lexicalRoutineFormalArgumentList &) = delete ;
  private: DownEnumerator_lexicalRoutineFormalArgumentList & operator = (const DownEnumerator_lexicalRoutineFormalArgumentList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalRoutineFormalArgumentList final {
  public: UpEnumerator_lexicalRoutineFormalArgumentList (const class GGS_lexicalRoutineFormalArgumentList & inList)  ;

  public: ~ UpEnumerator_lexicalRoutineFormalArgumentList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lexicalArgumentModeAST current_mLexicalFormalArgumentMode (LOCATION_ARGS) const ;
  public: class GGS_lexicalTypeEnum current_mLexicalFormalArgumentType (LOCATION_ARGS) const ;
  public: class GGS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalRoutineFormalArgumentList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalRoutineFormalArgumentList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalRoutineFormalArgumentList (const UpEnumerator_lexicalRoutineFormalArgumentList &) = delete ;
  private: UpEnumerator_lexicalRoutineFormalArgumentList & operator = (const UpEnumerator_lexicalRoutineFormalArgumentList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @lexicalRoutineFormalArgumentList list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineFormalArgumentList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_lexicalRoutineFormalArgumentList_2E_element> mArray ;

//--- Default constructor
  public: GGS_lexicalRoutineFormalArgumentList (void) ;

//--- Destructor
  public: virtual ~ GGS_lexicalRoutineFormalArgumentList (void) = default ;

//--- Copy
  public: GGS_lexicalRoutineFormalArgumentList (const GGS_lexicalRoutineFormalArgumentList &) = default ;
  public: GGS_lexicalRoutineFormalArgumentList & operator = (const GGS_lexicalRoutineFormalArgumentList &) = default ;

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
  public : inline GenericArray <GGS_lexicalRoutineFormalArgumentList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_lexicalRoutineFormalArgumentList subList (const int32_t inStart,
                                                         const int32_t inLength,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_lexicalRoutineFormalArgumentList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                 const class GGS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                 const class GGS_string & in_mArgumentNameForComment
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalRoutineFormalArgumentList init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalRoutineFormalArgumentList extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalRoutineFormalArgumentList class_func_listWithValue (const class GGS_lexicalArgumentModeAST & inOperand0,
                                                                                      const class GGS_lexicalTypeEnum & inOperand1,
                                                                                      const class GGS_string & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_lexicalRoutineFormalArgumentList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lexicalArgumentModeAST & inOperand0,
                                   const class GGS_lexicalTypeEnum & inOperand1,
                                   const class GGS_string & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_lexicalRoutineFormalArgumentList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_lexicalRoutineFormalArgumentList add_operation (const GGS_lexicalRoutineFormalArgumentList & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lexicalArgumentModeAST constinArgument0,
                              class GGS_lexicalTypeEnum constinArgument1,
                              class GGS_string constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lexicalArgumentModeAST constinArgument0,
                                     class GGS_lexicalTypeEnum constinArgument1,
                                     class GGS_string constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lexicalArgumentModeAST & outArgument0,
                                class GGS_lexicalTypeEnum & outArgument1,
                                class GGS_string & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lexicalArgumentModeAST & outArgument0,
                               class GGS_lexicalTypeEnum & outArgument1,
                               class GGS_string & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lexicalArgumentModeAST & outArgument0,
                                     class GGS_lexicalTypeEnum & outArgument1,
                                     class GGS_string & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMArgumentNameForCommentAtIndex (class GGS_string constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexicalFormalArgumentModeAtIndex (class GGS_lexicalArgumentModeAST constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexicalFormalArgumentTypeAtIndex (class GGS_lexicalTypeEnum constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lexicalArgumentModeAST & outArgument0,
                             class GGS_lexicalTypeEnum & outArgument1,
                             class GGS_string & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lexicalArgumentModeAST & outArgument0,
                            class GGS_lexicalTypeEnum & outArgument1,
                            class GGS_string & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mArgumentNameForCommentAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalArgumentModeAST getter_mLexicalFormalArgumentModeAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalTypeEnum getter_mLexicalFormalArgumentTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_lexicalRoutineFormalArgumentList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalRoutineFormalArgumentList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalRoutineFormalArgumentList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalRoutineFormalArgumentList ;
  friend class DownEnumerator_lexicalRoutineFormalArgumentList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRoutineFormalArgumentList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineFormalArgumentList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lexicalArgumentModeAST mProperty_mLexicalFormalArgumentMode ;
  public: inline GGS_lexicalArgumentModeAST readProperty_mLexicalFormalArgumentMode (void) const {
    return mProperty_mLexicalFormalArgumentMode ;
  }

  public: GGS_lexicalTypeEnum mProperty_mLexicalFormalArgumentType ;
  public: inline GGS_lexicalTypeEnum readProperty_mLexicalFormalArgumentType (void) const {
    return mProperty_mLexicalFormalArgumentType ;
  }

  public: GGS_string mProperty_mArgumentNameForComment ;
  public: inline GGS_string readProperty_mArgumentNameForComment (void) const {
    return mProperty_mArgumentNameForComment ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalRoutineFormalArgumentList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalFormalArgumentMode (const GGS_lexicalArgumentModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalFormalArgumentMode = inValue ;
  }

  public: inline void setter_setMLexicalFormalArgumentType (const GGS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalFormalArgumentType = inValue ;
  }

  public: inline void setter_setMArgumentNameForComment (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentNameForComment = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalRoutineFormalArgumentList_2E_element (const GGS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                           const GGS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                           const GGS_string & in_mArgumentNameForComment) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalRoutineFormalArgumentList_2E_element (const GGS_lexicalRoutineFormalArgumentList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalRoutineFormalArgumentList_2E_element & operator = (const GGS_lexicalRoutineFormalArgumentList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalRoutineFormalArgumentList_2E_element init_21__21__21_ (const class GGS_lexicalArgumentModeAST & inOperand0,
                                                                                   const class GGS_lexicalTypeEnum & inOperand1,
                                                                                   const class GGS_string & inOperand2,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalRoutineFormalArgumentList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRoutineMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lexicalRoutineFormalArgumentList mProperty_mLexicalRoutineFormalArgumentList ;
  public: inline GGS_lexicalRoutineFormalArgumentList readProperty_mLexicalRoutineFormalArgumentList (void) const {
    return mProperty_mLexicalRoutineFormalArgumentList ;
  }

  public: GGS_stringlist mProperty_mErrorMessageList ;
  public: inline GGS_stringlist readProperty_mErrorMessageList (void) const {
    return mProperty_mErrorMessageList ;
  }

  public: GGS_bool mProperty_mIsExtern ;
  public: inline GGS_bool readProperty_mIsExtern (void) const {
    return mProperty_mIsExtern ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalRoutineMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexicalRoutineFormalArgumentList (const GGS_lexicalRoutineFormalArgumentList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalRoutineFormalArgumentList = inValue ;
  }

  public: inline void setter_setMErrorMessageList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessageList = inValue ;
  }

  public: inline void setter_setMIsExtern (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsExtern = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalRoutineMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_lexicalRoutineFormalArgumentList & in_mLexicalRoutineFormalArgumentList,
                                            const GGS_stringlist & in_mErrorMessageList,
                                            const GGS_bool & in_mIsExtern) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalRoutineMap_2E_element (const GGS_lexicalRoutineMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalRoutineMap_2E_element & operator = (const GGS_lexicalRoutineMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalRoutineMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lexicalRoutineFormalArgumentList & inOperand1,
                                                                        const class GGS_stringlist & inOperand2,
                                                                        const class GGS_bool & inOperand3,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalRoutineMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: lexicalRoutineMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_lexicalRoutineMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_lexicalRoutineMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_lexicalRoutineMap_2E_element_3F_ (const GGS_lexicalRoutineMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_lexicalRoutineMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_lexicalRoutineMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_lexicalRoutineMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFunctionFormalArgumentList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalFunctionFormalArgumentList final {
  public: DownEnumerator_lexicalFunctionFormalArgumentList (const class GGS_lexicalFunctionFormalArgumentList & inList) ;

  public: ~ DownEnumerator_lexicalFunctionFormalArgumentList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
  public: class GGS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalFunctionFormalArgumentList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalFunctionFormalArgumentList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalFunctionFormalArgumentList (const DownEnumerator_lexicalFunctionFormalArgumentList &) = delete ;
  private: DownEnumerator_lexicalFunctionFormalArgumentList & operator = (const DownEnumerator_lexicalFunctionFormalArgumentList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalFunctionFormalArgumentList final {
  public: UpEnumerator_lexicalFunctionFormalArgumentList (const class GGS_lexicalFunctionFormalArgumentList & inList)  ;

  public: ~ UpEnumerator_lexicalFunctionFormalArgumentList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
  public: class GGS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalFunctionFormalArgumentList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalFunctionFormalArgumentList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalFunctionFormalArgumentList (const UpEnumerator_lexicalFunctionFormalArgumentList &) = delete ;
  private: UpEnumerator_lexicalFunctionFormalArgumentList & operator = (const UpEnumerator_lexicalFunctionFormalArgumentList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @lexicalFunctionFormalArgumentList list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionFormalArgumentList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_lexicalFunctionFormalArgumentList_2E_element> mArray ;

//--- Default constructor
  public: GGS_lexicalFunctionFormalArgumentList (void) ;

//--- Destructor
  public: virtual ~ GGS_lexicalFunctionFormalArgumentList (void) = default ;

//--- Copy
  public: GGS_lexicalFunctionFormalArgumentList (const GGS_lexicalFunctionFormalArgumentList &) = default ;
  public: GGS_lexicalFunctionFormalArgumentList & operator = (const GGS_lexicalFunctionFormalArgumentList &) = default ;

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
  public : inline GenericArray <GGS_lexicalFunctionFormalArgumentList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_lexicalFunctionFormalArgumentList subList (const int32_t inStart,
                                                          const int32_t inLength,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_lexicalFunctionFormalArgumentList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lexicalTypeEnum & in_mLexicalType,
                                                 const class GGS_string & in_mArgumentNameForComment
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalFunctionFormalArgumentList init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalFunctionFormalArgumentList extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalFunctionFormalArgumentList class_func_listWithValue (const class GGS_lexicalTypeEnum & inOperand0,
                                                                                       const class GGS_string & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_lexicalFunctionFormalArgumentList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lexicalTypeEnum & inOperand0,
                                   const class GGS_string & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_lexicalFunctionFormalArgumentList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_lexicalFunctionFormalArgumentList add_operation (const GGS_lexicalFunctionFormalArgumentList & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lexicalTypeEnum constinArgument0,
                              class GGS_string constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lexicalTypeEnum constinArgument0,
                                     class GGS_string constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lexicalTypeEnum & outArgument0,
                                class GGS_string & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lexicalTypeEnum & outArgument0,
                               class GGS_string & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lexicalTypeEnum & outArgument0,
                                     class GGS_string & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMArgumentNameForCommentAtIndex (class GGS_string constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexicalTypeAtIndex (class GGS_lexicalTypeEnum constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lexicalTypeEnum & outArgument0,
                             class GGS_string & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lexicalTypeEnum & outArgument0,
                            class GGS_string & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mArgumentNameForCommentAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalTypeEnum getter_mLexicalTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_lexicalFunctionFormalArgumentList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalFunctionFormalArgumentList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalFunctionFormalArgumentList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalFunctionFormalArgumentList ;
  friend class DownEnumerator_lexicalFunctionFormalArgumentList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFunctionFormalArgumentList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionFormalArgumentList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lexicalTypeEnum mProperty_mLexicalType ;
  public: inline GGS_lexicalTypeEnum readProperty_mLexicalType (void) const {
    return mProperty_mLexicalType ;
  }

  public: GGS_string mProperty_mArgumentNameForComment ;
  public: inline GGS_string readProperty_mArgumentNameForComment (void) const {
    return mProperty_mArgumentNameForComment ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalFunctionFormalArgumentList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalType (const GGS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalType = inValue ;
  }

  public: inline void setter_setMArgumentNameForComment (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentNameForComment = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalFunctionFormalArgumentList_2E_element (const GGS_lexicalTypeEnum & in_mLexicalType,
                                                            const GGS_string & in_mArgumentNameForComment) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalFunctionFormalArgumentList_2E_element (const GGS_lexicalFunctionFormalArgumentList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalFunctionFormalArgumentList_2E_element & operator = (const GGS_lexicalFunctionFormalArgumentList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalFunctionFormalArgumentList_2E_element init_21__21_ (const class GGS_lexicalTypeEnum & inOperand0,
                                                                                const class GGS_string & inOperand1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalFunctionFormalArgumentList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFunctionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lexicalFunctionFormalArgumentList mProperty_mLexicalTypeList ;
  public: inline GGS_lexicalFunctionFormalArgumentList readProperty_mLexicalTypeList (void) const {
    return mProperty_mLexicalTypeList ;
  }

  public: GGS_lexicalTypeEnum mProperty_mReturnedLexicalType ;
  public: inline GGS_lexicalTypeEnum readProperty_mReturnedLexicalType (void) const {
    return mProperty_mReturnedLexicalType ;
  }

  public: GGS_string mProperty_mReplacementFunctionName ;
  public: inline GGS_string readProperty_mReplacementFunctionName (void) const {
    return mProperty_mReplacementFunctionName ;
  }

  public: GGS_bool mProperty_mIsExtern ;
  public: inline GGS_bool readProperty_mIsExtern (void) const {
    return mProperty_mIsExtern ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalFunctionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexicalTypeList (const GGS_lexicalFunctionFormalArgumentList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalTypeList = inValue ;
  }

  public: inline void setter_setMReturnedLexicalType (const GGS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedLexicalType = inValue ;
  }

  public: inline void setter_setMReplacementFunctionName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReplacementFunctionName = inValue ;
  }

  public: inline void setter_setMIsExtern (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsExtern = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalFunctionMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_lexicalFunctionFormalArgumentList & in_mLexicalTypeList,
                                             const GGS_lexicalTypeEnum & in_mReturnedLexicalType,
                                             const GGS_string & in_mReplacementFunctionName,
                                             const GGS_bool & in_mIsExtern) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalFunctionMap_2E_element (const GGS_lexicalFunctionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalFunctionMap_2E_element & operator = (const GGS_lexicalFunctionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalFunctionMap_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lexicalFunctionFormalArgumentList & inOperand1,
                                                                             const class GGS_lexicalTypeEnum & inOperand2,
                                                                             const class GGS_string & inOperand3,
                                                                             const class GGS_bool & inOperand4,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalFunctionMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: lexicalFunctionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_lexicalFunctionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_lexicalFunctionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_lexicalFunctionMap_2E_element_3F_ (const GGS_lexicalFunctionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_lexicalFunctionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_lexicalFunctionMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_lexicalFunctionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateDelimitorList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_templateDelimitorList_2E_element : public AC_GALGAS_root {
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
  public: GGS_templateDelimitorList_2E_element (void) ;

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
  public: GGS_templateDelimitorList_2E_element (const GGS_lstring & in_mStartString,
                                                const GGS_lstring & in_mEndString,
                                                const GGS_bool & in_mPreservesStartDelimiter) ;

//--------------------------------- Copy constructor
  public: GGS_templateDelimitorList_2E_element (const GGS_templateDelimitorList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateDelimitorList_2E_element & operator = (const GGS_templateDelimitorList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateDelimitorList_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_bool & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateDelimitorList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateDelimitorList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @styleMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_styleMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mComment ;
  public: inline GGS_lstring readProperty_mComment (void) const {
    return mProperty_mComment ;
  }

  public: GGS_uint mProperty_mStyleIndex ;
  public: inline GGS_uint readProperty_mStyleIndex (void) const {
    return mProperty_mStyleIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_styleMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMComment (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mComment = inValue ;
  }

  public: inline void setter_setMStyleIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStyleIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_styleMap_2E_element (const GGS_lstring & in_lkey,
                                   const GGS_lstring & in_mComment,
                                   const GGS_uint & in_mStyleIndex) ;

//--------------------------------- Copy constructor
  public: GGS_styleMap_2E_element (const GGS_styleMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_styleMap_2E_element & operator = (const GGS_styleMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_styleMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                           const class GGS_lstring & inOperand1,
                                                           const class GGS_uint & inOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_styleMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_styleMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: styleMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_styleMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_styleMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_styleMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_styleMap_2E_element_3F_ (const GGS_styleMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_styleMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_styleMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_styleMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_styleMap_2E_element_3F_ ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalTagMap extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
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
// Phase 1: @lexicalTagMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalTagMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalTagMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalTagMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalTagMap_2E_element (const GGS_lexicalTagMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalTagMap_2E_element & operator = (const GGS_lexicalTagMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalTagMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalTagMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTagMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: lexicalTagMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_lexicalTagMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_lexicalTagMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_lexicalTagMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_lexicalTagMap_2E_element_3F_ (const GGS_lexicalTagMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_lexicalTagMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_lexicalTagMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_lexicalTagMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTagMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_terminalMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lexicalSentValueList mProperty_mSentAttributeList ;
  public: inline GGS_lexicalSentValueList readProperty_mSentAttributeList (void) const {
    return mProperty_mSentAttributeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_terminalMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSentAttributeList (const GGS_lexicalSentValueList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSentAttributeList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_terminalMap_2E_element (const GGS_lstring & in_lkey,
                                      const GGS_lexicalSentValueList & in_mSentAttributeList) ;

//--------------------------------- Copy constructor
  public: GGS_terminalMap_2E_element (const GGS_terminalMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_terminalMap_2E_element & operator = (const GGS_terminalMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_lexicalSentValueList & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: terminalMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_terminalMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_terminalMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_terminalMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_terminalMap_2E_element_3F_ (const GGS_terminalMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_terminalMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_terminalMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_terminalMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalAttributeMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalAttributeMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lexicalTypeEnum mProperty_mLexicalType ;
  public: inline GGS_lexicalTypeEnum readProperty_mLexicalType (void) const {
    return mProperty_mLexicalType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalAttributeMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexicalType (const GGS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalAttributeMap_2E_element (const GGS_lstring & in_lkey,
                                              const GGS_lexicalTypeEnum & in_mLexicalType) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalAttributeMap_2E_element (const GGS_lexicalAttributeMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalAttributeMap_2E_element & operator = (const GGS_lexicalAttributeMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalAttributeMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lexicalTypeEnum & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalAttributeMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: lexicalAttributeMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_lexicalAttributeMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_lexicalAttributeMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_lexicalAttributeMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_lexicalAttributeMap_2E_element_3F_ (const GGS_lexicalAttributeMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_lexicalAttributeMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_lexicalAttributeMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_lexicalAttributeMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @projectQualifiedFeatureMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_projectQualifiedFeatureMap final {

  public: DownEnumerator_projectQualifiedFeatureMap (const class GGS_projectQualifiedFeatureMap & inMap) ;

  public: ~ DownEnumerator_projectQualifiedFeatureMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mFeatureValue (LOCATION_ARGS) const ;

  public: class GGS_projectQualifiedFeatureMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_projectQualifiedFeatureMap (const DownEnumerator_projectQualifiedFeatureMap &) = delete ;
  private: DownEnumerator_projectQualifiedFeatureMap & operator = (const DownEnumerator_projectQualifiedFeatureMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_projectQualifiedFeatureMap final {
  public: UpEnumerator_projectQualifiedFeatureMap (const class GGS_projectQualifiedFeatureMap & inMap)  ;

  public: ~ UpEnumerator_projectQualifiedFeatureMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFeatureValue (LOCATION_ARGS) const ;
  public: class GGS_projectQualifiedFeatureMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_projectQualifiedFeatureMap (const UpEnumerator_projectQualifiedFeatureMap &) = delete ;
  private: UpEnumerator_projectQualifiedFeatureMap & operator = (const UpEnumerator_projectQualifiedFeatureMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_projectQualifiedFeatureMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_projectQualifiedFeatureMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_projectQualifiedFeatureMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_projectQualifiedFeatureMap (void) ;

//--- Handle copy
  public: GGS_projectQualifiedFeatureMap (const GGS_projectQualifiedFeatureMap & inSource) ;
  public: GGS_projectQualifiedFeatureMap & operator = (const GGS_projectQualifiedFeatureMap & inSource) ;

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
  protected: void performInsert (const class GGS_projectQualifiedFeatureMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_projectQualifiedFeatureMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_projectQualifiedFeatureMap init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_projectQualifiedFeatureMap extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_projectQualifiedFeatureMap class_func_mapWithMapToOverride (const class GGS_projectQualifiedFeatureMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMFeatureValueForKey (class GGS_lstring constinArgument0,
                                              class GGS_string constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring & outArgument1,
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

  public: class GGS_lstring getter_mFeatureValueForKey (const class GGS_string & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_projectQualifiedFeatureMap getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_projectQualifiedFeatureMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_projectQualifiedFeatureMap ;
  friend class DownEnumerator_projectQualifiedFeatureMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @projectQualifiedFeatureMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_projectQualifiedFeatureMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mFeatureValue ;
  public: inline GGS_lstring readProperty_mFeatureValue (void) const {
    return mProperty_mFeatureValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_projectQualifiedFeatureMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFeatureValue (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFeatureValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_projectQualifiedFeatureMap_2E_element (const GGS_lstring & in_lkey,
                                                     const GGS_lstring & in_mFeatureValue) ;

//--------------------------------- Copy constructor
  public: GGS_projectQualifiedFeatureMap_2E_element (const GGS_projectQualifiedFeatureMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_projectQualifiedFeatureMap_2E_element & operator = (const GGS_projectQualifiedFeatureMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_projectQualifiedFeatureMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_projectQualifiedFeatureMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: projectQualifiedFeatureMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_projectQualifiedFeatureMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_projectQualifiedFeatureMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_projectQualifiedFeatureMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_projectQualifiedFeatureMap_2E_element_3F_ (const GGS_projectQualifiedFeatureMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_projectQualifiedFeatureMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_projectQualifiedFeatureMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_projectQualifiedFeatureMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeGroupList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_XCodeGroupList final {
  public: DownEnumerator_XCodeGroupList (const class GGS_XCodeGroupList & inList) ;

  public: ~ DownEnumerator_XCodeGroupList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mGroupReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mGroupName (LOCATION_ARGS) const ;
  public: class GGS_string current_mGroupPath (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mChildrenRefs (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeGroupList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_XCodeGroupList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_XCodeGroupList (const DownEnumerator_XCodeGroupList &) = delete ;
  private: DownEnumerator_XCodeGroupList & operator = (const DownEnumerator_XCodeGroupList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_XCodeGroupList final {
  public: UpEnumerator_XCodeGroupList (const class GGS_XCodeGroupList & inList)  ;

  public: ~ UpEnumerator_XCodeGroupList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mGroupReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mGroupName (LOCATION_ARGS) const ;
  public: class GGS_string current_mGroupPath (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mChildrenRefs (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeGroupList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_XCodeGroupList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_XCodeGroupList (const UpEnumerator_XCodeGroupList &) = delete ;
  private: UpEnumerator_XCodeGroupList & operator = (const UpEnumerator_XCodeGroupList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @XCodeGroupList list
//--------------------------------------------------------------------------------------------------

class GGS_XCodeGroupList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_XCodeGroupList_2E_element> mArray ;

//--- Default constructor
  public: GGS_XCodeGroupList (void) ;

//--- Destructor
  public: virtual ~ GGS_XCodeGroupList (void) = default ;

//--- Copy
  public: GGS_XCodeGroupList (const GGS_XCodeGroupList &) = default ;
  public: GGS_XCodeGroupList & operator = (const GGS_XCodeGroupList &) = default ;

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
  public : inline GenericArray <GGS_XCodeGroupList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_XCodeGroupList subList (const int32_t inStart,
                                       const int32_t inLength,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_XCodeGroupList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_mGroupReference,
                                                 const class GGS_string & in_mGroupName,
                                                 const class GGS_string & in_mGroupPath,
                                                 const class GGS_stringlist & in_mChildrenRefs
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeGroupList init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeGroupList extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_XCodeGroupList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    const class GGS_string & inOperand2,
                                                                    const class GGS_stringlist & inOperand3
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_XCodeGroupList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_string & inOperand1,
                                   const class GGS_string & inOperand2,
                                   const class GGS_stringlist & inOperand3
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_XCodeGroupList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_XCodeGroupList add_operation (const GGS_XCodeGroupList & inOperand,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_string constinArgument1,
                              class GGS_string constinArgument2,
                              class GGS_stringlist constinArgument3,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_string constinArgument1,
                                     class GGS_string constinArgument2,
                                     class GGS_stringlist constinArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_string & outArgument1,
                                class GGS_string & outArgument2,
                                class GGS_stringlist & outArgument3,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_string & outArgument1,
                               class GGS_string & outArgument2,
                               class GGS_stringlist & outArgument3,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_string & outArgument1,
                                     class GGS_string & outArgument2,
                                     class GGS_stringlist & outArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMChildrenRefsAtIndex (class GGS_stringlist constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMGroupNameAtIndex (class GGS_string constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMGroupPathAtIndex (class GGS_string constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMGroupReferenceAtIndex (class GGS_string constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_string & outArgument1,
                             class GGS_string & outArgument2,
                             class GGS_stringlist & outArgument3,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_string & outArgument1,
                            class GGS_string & outArgument2,
                            class GGS_stringlist & outArgument3,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_stringlist getter_mChildrenRefsAtIndex (const class GGS_uint & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mGroupNameAtIndex (const class GGS_uint & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mGroupPathAtIndex (const class GGS_uint & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mGroupReferenceAtIndex (const class GGS_uint & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_XCodeGroupList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_XCodeGroupList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_XCodeGroupList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_XCodeGroupList ;
  friend class DownEnumerator_XCodeGroupList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeGroupList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeGroupList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_XCodeGroupList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mGroupReference ;
  public: inline GGS_string readProperty_mGroupReference (void) const {
    return mProperty_mGroupReference ;
  }

  public: GGS_string mProperty_mGroupName ;
  public: inline GGS_string readProperty_mGroupName (void) const {
    return mProperty_mGroupName ;
  }

  public: GGS_string mProperty_mGroupPath ;
  public: inline GGS_string readProperty_mGroupPath (void) const {
    return mProperty_mGroupPath ;
  }

  public: GGS_stringlist mProperty_mChildrenRefs ;
  public: inline GGS_stringlist readProperty_mChildrenRefs (void) const {
    return mProperty_mChildrenRefs ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_XCodeGroupList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGroupReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupReference = inValue ;
  }

  public: inline void setter_setMGroupName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupName = inValue ;
  }

  public: inline void setter_setMGroupPath (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupPath = inValue ;
  }

  public: inline void setter_setMChildrenRefs (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mChildrenRefs = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XCodeGroupList_2E_element (const GGS_string & in_mGroupReference,
                                         const GGS_string & in_mGroupName,
                                         const GGS_string & in_mGroupPath,
                                         const GGS_stringlist & in_mChildrenRefs) ;

//--------------------------------- Copy constructor
  public: GGS_XCodeGroupList_2E_element (const GGS_XCodeGroupList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XCodeGroupList_2E_element & operator = (const GGS_XCodeGroupList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeGroupList_2E_element init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     const class GGS_string & inOperand2,
                                                                     const class GGS_stringlist & inOperand3,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeGroupList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeGroupList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeToolTargetList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_XCodeToolTargetList final {
  public: DownEnumerator_XCodeToolTargetList (const class GGS_XCodeToolTargetList & inList) ;

  public: ~ DownEnumerator_XCodeToolTargetList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mTargetRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileName (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeToolTargetList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_XCodeToolTargetList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_XCodeToolTargetList (const DownEnumerator_XCodeToolTargetList &) = delete ;
  private: DownEnumerator_XCodeToolTargetList & operator = (const DownEnumerator_XCodeToolTargetList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_XCodeToolTargetList final {
  public: UpEnumerator_XCodeToolTargetList (const class GGS_XCodeToolTargetList & inList)  ;

  public: ~ UpEnumerator_XCodeToolTargetList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mTargetRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileName (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeToolTargetList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_XCodeToolTargetList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_XCodeToolTargetList (const UpEnumerator_XCodeToolTargetList &) = delete ;
  private: UpEnumerator_XCodeToolTargetList & operator = (const UpEnumerator_XCodeToolTargetList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @XCodeToolTargetList list
//--------------------------------------------------------------------------------------------------

class GGS_XCodeToolTargetList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_XCodeToolTargetList_2E_element> mArray ;

//--- Default constructor
  public: GGS_XCodeToolTargetList (void) ;

//--- Destructor
  public: virtual ~ GGS_XCodeToolTargetList (void) = default ;

//--- Copy
  public: GGS_XCodeToolTargetList (const GGS_XCodeToolTargetList &) = default ;
  public: GGS_XCodeToolTargetList & operator = (const GGS_XCodeToolTargetList &) = default ;

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
  public : inline GenericArray <GGS_XCodeToolTargetList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_XCodeToolTargetList subList (const int32_t inStart,
                                            const int32_t inLength,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_XCodeToolTargetList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_mTargetRef,
                                                 const class GGS_string & in_mTargetName,
                                                 const class GGS_string & in_mProductFileReference,
                                                 const class GGS_string & in_mProductFileName,
                                                 const class GGS_stringlist & in_mBuildPhaseRefList,
                                                 const class GGS_string & in_mBuildPhaseRef,
                                                 const class GGS_string & in_mBuildConfigurationListRef,
                                                 const class GGS_stringlist & in_mBuildConfigurationSettingList,
                                                 const class GGS_string & in_mBuildConfigurationRef,
                                                 const class GGS_stringlist & in_mFrameworksFileRefList,
                                                 const class GGS_string & in_mFrameworkBuildPhaseRef
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeToolTargetList init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeToolTargetList extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_XCodeToolTargetList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_string & inOperand2,
                                                                         const class GGS_string & inOperand3,
                                                                         const class GGS_stringlist & inOperand4,
                                                                         const class GGS_string & inOperand5,
                                                                         const class GGS_string & inOperand6,
                                                                         const class GGS_stringlist & inOperand7,
                                                                         const class GGS_string & inOperand8,
                                                                         const class GGS_stringlist & inOperand9,
                                                                         const class GGS_string & inOperand10
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_XCodeToolTargetList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_string & inOperand1,
                                   const class GGS_string & inOperand2,
                                   const class GGS_string & inOperand3,
                                   const class GGS_stringlist & inOperand4,
                                   const class GGS_string & inOperand5,
                                   const class GGS_string & inOperand6,
                                   const class GGS_stringlist & inOperand7,
                                   const class GGS_string & inOperand8,
                                   const class GGS_stringlist & inOperand9,
                                   const class GGS_string & inOperand10
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_XCodeToolTargetList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_XCodeToolTargetList add_operation (const GGS_XCodeToolTargetList & inOperand,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_string constinArgument1,
                              class GGS_string constinArgument2,
                              class GGS_string constinArgument3,
                              class GGS_stringlist constinArgument4,
                              class GGS_string constinArgument5,
                              class GGS_string constinArgument6,
                              class GGS_stringlist constinArgument7,
                              class GGS_string constinArgument8,
                              class GGS_stringlist constinArgument9,
                              class GGS_string constinArgument10,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_string constinArgument1,
                                     class GGS_string constinArgument2,
                                     class GGS_string constinArgument3,
                                     class GGS_stringlist constinArgument4,
                                     class GGS_string constinArgument5,
                                     class GGS_string constinArgument6,
                                     class GGS_stringlist constinArgument7,
                                     class GGS_string constinArgument8,
                                     class GGS_stringlist constinArgument9,
                                     class GGS_string constinArgument10,
                                     class GGS_uint constinArgument11,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_string & outArgument1,
                                class GGS_string & outArgument2,
                                class GGS_string & outArgument3,
                                class GGS_stringlist & outArgument4,
                                class GGS_string & outArgument5,
                                class GGS_string & outArgument6,
                                class GGS_stringlist & outArgument7,
                                class GGS_string & outArgument8,
                                class GGS_stringlist & outArgument9,
                                class GGS_string & outArgument10,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_string & outArgument1,
                               class GGS_string & outArgument2,
                               class GGS_string & outArgument3,
                               class GGS_stringlist & outArgument4,
                               class GGS_string & outArgument5,
                               class GGS_string & outArgument6,
                               class GGS_stringlist & outArgument7,
                               class GGS_string & outArgument8,
                               class GGS_stringlist & outArgument9,
                               class GGS_string & outArgument10,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_string & outArgument1,
                                     class GGS_string & outArgument2,
                                     class GGS_string & outArgument3,
                                     class GGS_stringlist & outArgument4,
                                     class GGS_string & outArgument5,
                                     class GGS_string & outArgument6,
                                     class GGS_stringlist & outArgument7,
                                     class GGS_string & outArgument8,
                                     class GGS_stringlist & outArgument9,
                                     class GGS_string & outArgument10,
                                     class GGS_uint constinArgument11,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMBuildConfigurationListRefAtIndex (class GGS_string constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMBuildConfigurationRefAtIndex (class GGS_string constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: void setter_setMBuildConfigurationSettingListAtIndex (class GGS_stringlist constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMBuildPhaseRefAtIndex (class GGS_string constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMBuildPhaseRefListAtIndex (class GGS_stringlist constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMFrameworkBuildPhaseRefAtIndex (class GGS_string constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMFrameworksFileRefListAtIndex (class GGS_stringlist constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: void setter_setMProductFileNameAtIndex (class GGS_string constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMProductFileReferenceAtIndex (class GGS_string constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMTargetNameAtIndex (class GGS_string constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMTargetRefAtIndex (class GGS_string constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_string & outArgument1,
                             class GGS_string & outArgument2,
                             class GGS_string & outArgument3,
                             class GGS_stringlist & outArgument4,
                             class GGS_string & outArgument5,
                             class GGS_string & outArgument6,
                             class GGS_stringlist & outArgument7,
                             class GGS_string & outArgument8,
                             class GGS_stringlist & outArgument9,
                             class GGS_string & outArgument10,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_string & outArgument1,
                            class GGS_string & outArgument2,
                            class GGS_string & outArgument3,
                            class GGS_stringlist & outArgument4,
                            class GGS_string & outArgument5,
                            class GGS_string & outArgument6,
                            class GGS_stringlist & outArgument7,
                            class GGS_string & outArgument8,
                            class GGS_stringlist & outArgument9,
                            class GGS_string & outArgument10,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mBuildConfigurationListRefAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mBuildConfigurationRefAtIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringlist getter_mBuildConfigurationSettingListAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mBuildPhaseRefAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringlist getter_mBuildPhaseRefListAtIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mFrameworkBuildPhaseRefAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringlist getter_mFrameworksFileRefListAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mProductFileNameAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mProductFileReferenceAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mTargetNameAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mTargetRefAtIndex (const class GGS_uint & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_XCodeToolTargetList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_XCodeToolTargetList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_XCodeToolTargetList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_XCodeToolTargetList ;
  friend class DownEnumerator_XCodeToolTargetList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeToolTargetList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeToolTargetList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_XCodeToolTargetList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mTargetRef ;
  public: inline GGS_string readProperty_mTargetRef (void) const {
    return mProperty_mTargetRef ;
  }

  public: GGS_string mProperty_mTargetName ;
  public: inline GGS_string readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GGS_string mProperty_mProductFileReference ;
  public: inline GGS_string readProperty_mProductFileReference (void) const {
    return mProperty_mProductFileReference ;
  }

  public: GGS_string mProperty_mProductFileName ;
  public: inline GGS_string readProperty_mProductFileName (void) const {
    return mProperty_mProductFileName ;
  }

  public: GGS_stringlist mProperty_mBuildPhaseRefList ;
  public: inline GGS_stringlist readProperty_mBuildPhaseRefList (void) const {
    return mProperty_mBuildPhaseRefList ;
  }

  public: GGS_string mProperty_mBuildPhaseRef ;
  public: inline GGS_string readProperty_mBuildPhaseRef (void) const {
    return mProperty_mBuildPhaseRef ;
  }

  public: GGS_string mProperty_mBuildConfigurationListRef ;
  public: inline GGS_string readProperty_mBuildConfigurationListRef (void) const {
    return mProperty_mBuildConfigurationListRef ;
  }

  public: GGS_stringlist mProperty_mBuildConfigurationSettingList ;
  public: inline GGS_stringlist readProperty_mBuildConfigurationSettingList (void) const {
    return mProperty_mBuildConfigurationSettingList ;
  }

  public: GGS_string mProperty_mBuildConfigurationRef ;
  public: inline GGS_string readProperty_mBuildConfigurationRef (void) const {
    return mProperty_mBuildConfigurationRef ;
  }

  public: GGS_stringlist mProperty_mFrameworksFileRefList ;
  public: inline GGS_stringlist readProperty_mFrameworksFileRefList (void) const {
    return mProperty_mFrameworksFileRefList ;
  }

  public: GGS_string mProperty_mFrameworkBuildPhaseRef ;
  public: inline GGS_string readProperty_mFrameworkBuildPhaseRef (void) const {
    return mProperty_mFrameworkBuildPhaseRef ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_XCodeToolTargetList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetRef = inValue ;
  }

  public: inline void setter_setMTargetName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMProductFileReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileReference = inValue ;
  }

  public: inline void setter_setMProductFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileName = inValue ;
  }

  public: inline void setter_setMBuildPhaseRefList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRefList = inValue ;
  }

  public: inline void setter_setMBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationListRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationListRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationSettingList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMBuildConfigurationRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMFrameworksFileRefList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworksFileRefList = inValue ;
  }

  public: inline void setter_setMFrameworkBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkBuildPhaseRef = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XCodeToolTargetList_2E_element (const GGS_string & in_mTargetRef,
                                              const GGS_string & in_mTargetName,
                                              const GGS_string & in_mProductFileReference,
                                              const GGS_string & in_mProductFileName,
                                              const GGS_stringlist & in_mBuildPhaseRefList,
                                              const GGS_string & in_mBuildPhaseRef,
                                              const GGS_string & in_mBuildConfigurationListRef,
                                              const GGS_stringlist & in_mBuildConfigurationSettingList,
                                              const GGS_string & in_mBuildConfigurationRef,
                                              const GGS_stringlist & in_mFrameworksFileRefList,
                                              const GGS_string & in_mFrameworkBuildPhaseRef) ;

//--------------------------------- Copy constructor
  public: GGS_XCodeToolTargetList_2E_element (const GGS_XCodeToolTargetList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XCodeToolTargetList_2E_element & operator = (const GGS_XCodeToolTargetList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeToolTargetList_2E_element init_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                      const class GGS_string & inOperand1,
                                                                                                      const class GGS_string & inOperand2,
                                                                                                      const class GGS_string & inOperand3,
                                                                                                      const class GGS_stringlist & inOperand4,
                                                                                                      const class GGS_string & inOperand5,
                                                                                                      const class GGS_string & inOperand6,
                                                                                                      const class GGS_stringlist & inOperand7,
                                                                                                      const class GGS_string & inOperand8,
                                                                                                      const class GGS_stringlist & inOperand9,
                                                                                                      const class GGS_string & inOperand10,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeToolTargetList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeToolTargetList_2E_element ;

