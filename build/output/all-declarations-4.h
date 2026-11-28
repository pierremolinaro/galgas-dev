#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalWarningInstructionAST & inOperand) const ;

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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalDropInstructionAST & inOperand) const ;

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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalErrorInstructionAST & inOperand) const ;

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
// Phase 1: @uselessEntityLocationMap map
//--------------------------------------------------------------------------------------------------

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

class GGS_uselessEntityLocationMap final : public AC_GALGAS_root {

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

  public: class GGS_location getter_mLocationForKey (const class GGS_string & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mUnusedEntityNameForKey (const class GGS_string & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_uselessEntityLocationMap getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_uselessEntityLocationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


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

class GGS_uselessEntityLocationMap_2E_element final : public AC_GALGAS_root {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @headerCompositionMap map
//--------------------------------------------------------------------------------------------------

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

class GGS_headerCompositionMap final : public AC_GALGAS_root {

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

  public: class GGS_string getter_mHeaderStringForKey (const class GGS_string & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_mInclusionForKey (const class GGS_string & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_headerCompositionMap getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_headerCompositionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


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

class GGS_headerCompositionMap_2E_element final : public AC_GALGAS_root {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerCompositionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @headerRepartitionMap map
//--------------------------------------------------------------------------------------------------

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

class GGS_headerRepartitionMap final : public AC_GALGAS_root {

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

  public: class GGS_string getter_mHeaderFileNameForKey (const class GGS_string & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_headerRepartitionMap getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_headerRepartitionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


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

class GGS_headerRepartitionMap_2E_element final : public AC_GALGAS_root {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerRepartitionMap_2E_element_3F_ ;

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

  public: class GGS__5B_formalParameterAST_5D_ readProperty_mFormalArgumentListAST (void) const ;

  public: class GGS_bool readProperty_usefullProcedure (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externProcedureDeclarationAST init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (const class GGS_bool & inOperand0,
                                                                                                                      const class GGS_bool & inOperand1,
                                                                                                                      const class GGS_lstring & inOperand2,
                                                                                                                      const class GGS__5B_formalParameterAST_5D_ & inOperand3,
                                                                                                                      const class GGS_bool & inOperand4,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externProcedureDeclarationAST & inOperand) const ;

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
                                                                                                                const class GGS__5B_formalParameterAST_5D_ & inOperand3,
                                                                                                                const class GGS_bool & inOperand4,
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
  public: GGS_bool mProperty_isFilePrivate ;
  public: GGS_lstring mProperty_mRoutineName ;
  public: GGS__5B_formalParameterAST_5D_ mProperty_mFormalArgumentListAST ;
  public: GGS_bool mProperty_usefullProcedure ;


//--- Default constructor
  public: cPtr_externProcedureDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_externProcedureDeclarationAST (const GGS_bool & in_isPredefined,
                                              const GGS_bool & in_isFilePrivate,
                                              const GGS_lstring & in_mRoutineName,
                                              const GGS__5B_formalParameterAST_5D_ & in_mFormalArgumentListAST,
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
// Phase 1: @routinePrototypeDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_routinePrototypeDeclarationForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_routinePrototypeDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_routinePrototypeDeclarationForGeneration (const class cPtr_routinePrototypeDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_routineMangledName (void) const ;

  public: class GGS__5B_formalParameterForGeneration_5D_ readProperty_mFormalArgumentList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routinePrototypeDeclarationForGeneration init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21_ (const class GGS_string & inOperand0,
                                                                                                                                                            const class GGS_bool & inOperand1,
                                                                                                                                                            const class GGS_string & inOperand2,
                                                                                                                                                            const class GGS_string & inOperand3,
                                                                                                                                                            const class GGS__5B_formalParameterForGeneration_5D_ & inOperand4,
                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_routinePrototypeDeclarationForGeneration & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @routinePrototypeDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_routinePrototypeDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void routinePrototypeDeclarationForGeneration_init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21_ (const class GGS_string & inOperand0,
                                                                                                                                                      const class GGS_bool & inOperand1,
                                                                                                                                                      const class GGS_string & inOperand2,
                                                                                                                                                      const class GGS_string & inOperand3,
                                                                                                                                                      const class GGS__5B_formalParameterForGeneration_5D_ & inOperand4,
                                                                                                                                                      Compiler * inCompiler) ;


//--- Extension func headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_routineMangledName ;
  public: GGS__5B_formalParameterForGeneration_5D_ mProperty_mFormalArgumentList ;


//--- Default constructor
  public: cPtr_routinePrototypeDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_routinePrototypeDeclarationForGeneration (const GGS_string & in_infoMessage,
                                                         const GGS_bool & in_generateHeader,
                                                         const GGS_string & in_implementationCppFileName,
                                                         const GGS_string & in_routineMangledName,
                                                         const GGS__5B_formalParameterForGeneration_5D_ & in_mFormalArgumentList,
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
// Phase 1: [programRuleAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_programRuleAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_programRuleAST_5D_ (const class GGS__5B_programRuleAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_programRuleAST_5D_ (const DownEnumerator__5B_programRuleAST_5D_ &) = delete ;
  private: DownEnumerator__5B_programRuleAST_5D_ & operator = (const DownEnumerator__5B_programRuleAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_programRuleAST current (LOCATION_ARGS) const ;
  public: class GGS_programRuleAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_programRuleAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_programRuleAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_programRuleAST_5D_ (const class GGS__5B_programRuleAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_programRuleAST_5D_ (const UpEnumerator__5B_programRuleAST_5D_ &) = delete ;
  private: UpEnumerator__5B_programRuleAST_5D_ & operator = (const UpEnumerator__5B_programRuleAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_programRuleAST current (LOCATION_ARGS) const ;
  public: class GGS_programRuleAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_programRuleAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_programRuleAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_programRuleAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_programRuleAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_programRuleAST_5D_ (const GGS__5B_programRuleAST_5D_ & inSource) ;
  public: GGS__5B_programRuleAST_5D_ & operator = (const GGS__5B_programRuleAST_5D_ & inSource) ;

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
  public: static GGS__5B_programRuleAST_5D_ init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_programRuleAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_programRuleAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_programRuleAST_5D_ add_operation (const GGS__5B_programRuleAST_5D_ & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_programRuleAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_programRuleAST constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_programRuleAST & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_programRuleAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_programRuleAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_programRuleAST getter_first (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_programRuleAST getter_last (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_programRuleAST_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_programRuleAST_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                           const class GGS_u_33__32_ & constinOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_programRuleAST readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_programRuleAST inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_programRuleAST_5D_ ;
  friend class DownEnumerator__5B_programRuleAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_programRuleAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @programRuleAST struct
//--------------------------------------------------------------------------------------------------

class GGS_programRuleAST final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSourceFileExtension ;
  public: inline GGS_lstring readProperty_mSourceFileExtension (void) const {
    return mProperty_mSourceFileExtension ;
  }

  public: GGS_lstring mProperty_mSourceFileHelp ;
  public: inline GGS_lstring readProperty_mSourceFileHelp (void) const {
    return mProperty_mSourceFileHelp ;
  }

  public: GGS_lstring mProperty_mSourceFileVariableName ;
  public: inline GGS_lstring readProperty_mSourceFileVariableName (void) const {
    return mProperty_mSourceFileVariableName ;
  }

  public: GGS_bool mProperty_mSourceFileVariableNameIsUnused ;
  public: inline GGS_bool readProperty_mSourceFileVariableNameIsUnused (void) const {
    return mProperty_mSourceFileVariableNameIsUnused ;
  }

  public: GGS_lstring mProperty_mReferenceGrammar ;
  public: inline GGS_lstring readProperty_mReferenceGrammar (void) const {
    return mProperty_mReferenceGrammar ;
  }

  public: GGS__5B_semanticInstructionAST_5D_ mProperty_mInstructionList ;
  public: inline GGS__5B_semanticInstructionAST_5D_ readProperty_mInstructionList (void) const {
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
  public: GGS_programRuleAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSourceFileExtension (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceFileExtension = inValue ;
  }

  public: inline void setter_setMSourceFileHelp (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceFileHelp = inValue ;
  }

  public: inline void setter_setMSourceFileVariableName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceFileVariableName = inValue ;
  }

  public: inline void setter_setMSourceFileVariableNameIsUnused (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceFileVariableNameIsUnused = inValue ;
  }

  public: inline void setter_setMReferenceGrammar (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReferenceGrammar = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS__5B_semanticInstructionAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfInstructionList (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_programRuleAST (const GGS_lstring & in_mSourceFileExtension,
                              const GGS_lstring & in_mSourceFileHelp,
                              const GGS_lstring & in_mSourceFileVariableName,
                              const GGS_bool & in_mSourceFileVariableNameIsUnused,
                              const GGS_lstring & in_mReferenceGrammar,
                              const GGS__5B_semanticInstructionAST_5D_ & in_mInstructionList,
                              const GGS_location & in_mEndOfInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_programRuleAST (const GGS_programRuleAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_programRuleAST & operator = (const GGS_programRuleAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_programRuleAST init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_lstring & inOperand2,
                                                                      const class GGS_bool & inOperand3,
                                                                      const class GGS_lstring & inOperand4,
                                                                      const class GGS__5B_semanticInstructionAST_5D_ & inOperand5,
                                                                      const class GGS_location & inOperand6,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programRuleAST ;

//--------------------------------------------------------------------------------------------------
//§Filewrapper§ 'typeDumpGenerationTemplate'
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const DirectoryWrapper gWrapperDirectory_0_typeDumpGenerationTemplate ;
extern const DirectoryWrapper gWrapperDirectory_1_typeDumpGenerationTemplate ;
extern const DirectoryWrapper gWrapperDirectory_2_typeDumpGenerationTemplate ;
extern const DirectoryWrapper gWrapperDirectory_3_typeDumpGenerationTemplate ;
extern const DirectoryWrapper gWrapperDirectory_4_typeDumpGenerationTemplate ;
extern const DirectoryWrapper gWrapperDirectory_5_typeDumpGenerationTemplate ;
extern const DirectoryWrapper gWrapperDirectory_6_typeDumpGenerationTemplate ;
extern const DirectoryWrapper gWrapperDirectory_7_typeDumpGenerationTemplate ;
extern const DirectoryWrapper gWrapperDirectory_8_typeDumpGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
// Phase 1: filewrapper @ + typeDumpGenerationTemplate
//--------------------------------------------------------------------------------------------------

class GGS_typeDumpGenerationTemplate final {

//-- Start of package generic part

//--------------------------------- GALGAS class getters
  public: static class GGS_filewrapper class_func_contents (LOCATION_ARGS) ;

  public: static class GGS_string class_func_typeDump (const class GGS_string & inOperand0,
                                                       const class GGS_unifiedTypeMap & inOperand1,
                                                       const class GGS_stringset & inOperand2,
                                                       const class GGS_string & inOperand3,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Class Methods

} ;

//--------------------------------------------------------------------------------------------------
//   enum typeDefinition
//--------------------------------------------------------------------------------------------------

class GGS_typeDefinition final : public AC_GALGAS_root {
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
  public: void getAssociatedValuesFor_solved (class GGS_unifiedTypeDefinition & out_definition) const ;

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


//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

//--- Extension proc clear
  public: virtual void method_clear (Compiler * COMMA_LOCATION_ARGS) ;

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
//
//Function 'linkForType'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_linkForType (const class GGS_string & constinArgument0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMapElementClass definition'
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeDefinition callExtensionGetter_definition (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMap_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_unifiedTypeMapElementClass mProperty_mElement ;
  public: inline GGS_unifiedTypeMapElementClass readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMElement (const GGS_unifiedTypeMapElementClass & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_unifiedTypeMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_unifiedTypeMapElementClass & in_mElement) ;

//--------------------------------- Copy constructor
  public: GGS_unifiedTypeMap_2E_element (const GGS_unifiedTypeMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_unifiedTypeMap_2E_element & operator = (const GGS_unifiedTypeMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unifiedTypeMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_unifiedTypeMapElementClass & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: unifiedTypeMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_unifiedTypeMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_unifiedTypeMap_2E_element_3F_ (const GGS_unifiedTypeMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_unifiedTypeMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_unifiedTypeMap_2E_element unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalExplicitTokenListMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalExplicitTokenListMap_2E_element final : public AC_GALGAS_root {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRoutineMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineMap_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS__5B_lexicalRoutineFormalArgumentAST_5D_ mProperty_mLexicalRoutineFormalArgumentList ;
  public: inline GGS__5B_lexicalRoutineFormalArgumentAST_5D_ readProperty_mLexicalRoutineFormalArgumentList (void) const {
    return mProperty_mLexicalRoutineFormalArgumentList ;
  }

  public: GGS__5B_string_5D_ mProperty_mErrorMessageList ;
  public: inline GGS__5B_string_5D_ readProperty_mErrorMessageList (void) const {
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

  public: inline void setter_setMLexicalRoutineFormalArgumentList (const GGS__5B_lexicalRoutineFormalArgumentAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalRoutineFormalArgumentList = inValue ;
  }

  public: inline void setter_setMErrorMessageList (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessageList = inValue ;
  }

  public: inline void setter_setMIsExtern (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsExtern = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalRoutineMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS__5B_lexicalRoutineFormalArgumentAST_5D_ & in_mLexicalRoutineFormalArgumentList,
                                            const GGS__5B_string_5D_ & in_mErrorMessageList,
                                            const GGS_bool & in_mIsExtern) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalRoutineMap_2E_element (const GGS_lexicalRoutineMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalRoutineMap_2E_element & operator = (const GGS_lexicalRoutineMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalRoutineMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS__5B_lexicalRoutineFormalArgumentAST_5D_ & inOperand1,
                                                                        const class GGS__5B_string_5D_ & inOperand2,
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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFunctionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionMap_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS__5B_lexicalFunctionFormalArgumentAST_5D_ mProperty_mLexicalTypeList ;
  public: inline GGS__5B_lexicalFunctionFormalArgumentAST_5D_ readProperty_mLexicalTypeList (void) const {
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

  public: inline void setter_setMLexicalTypeList (const GGS__5B_lexicalFunctionFormalArgumentAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
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
                                             const GGS__5B_lexicalFunctionFormalArgumentAST_5D_ & in_mLexicalTypeList,
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
                                                                             const class GGS__5B_lexicalFunctionFormalArgumentAST_5D_ & inOperand1,
                                                                             const class GGS_lexicalTypeEnum & inOperand2,
                                                                             const class GGS_string & inOperand3,
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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalTagMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalTagMap_2E_element final : public AC_GALGAS_root {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTagMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_terminalMap_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS__5B_lexicalSentValue_5D_ mProperty_mSentAttributeList ;
  public: inline GGS__5B_lexicalSentValue_5D_ readProperty_mSentAttributeList (void) const {
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

  public: inline void setter_setMSentAttributeList (const GGS__5B_lexicalSentValue_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSentAttributeList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_terminalMap_2E_element (const GGS_lstring & in_lkey,
                                      const GGS__5B_lexicalSentValue_5D_ & in_mSentAttributeList) ;

//--------------------------------- Copy constructor
  public: GGS_terminalMap_2E_element (const GGS_terminalMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_terminalMap_2E_element & operator = (const GGS_terminalMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS__5B_lexicalSentValue_5D_ & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeGroup struct
//--------------------------------------------------------------------------------------------------

class GGS_XCodeGroup final : public AC_GALGAS_root {
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

  public: GGS__5B_string_5D_ mProperty_mChildrenRefs ;
  public: inline GGS__5B_string_5D_ readProperty_mChildrenRefs (void) const {
    return mProperty_mChildrenRefs ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_XCodeGroup (void) ;

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

  public: inline void setter_setMChildrenRefs (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mChildrenRefs = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XCodeGroup (const GGS_string & in_mGroupReference,
                          const GGS_string & in_mGroupName,
                          const GGS_string & in_mGroupPath,
                          const GGS__5B_string_5D_ & in_mChildrenRefs) ;

//--------------------------------- Copy constructor
  public: GGS_XCodeGroup (const GGS_XCodeGroup & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XCodeGroup & operator = (const GGS_XCodeGroup & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeGroup init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                      const class GGS_string & inOperand1,
                                                      const class GGS_string & inOperand2,
                                                      const class GGS__5B_string_5D_ & inOperand3,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeGroup ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeToolTarget struct
//--------------------------------------------------------------------------------------------------

class GGS_XCodeToolTarget final : public AC_GALGAS_root {
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

  public: GGS__5B_string_5D_ mProperty_mBuildPhaseRefList ;
  public: inline GGS__5B_string_5D_ readProperty_mBuildPhaseRefList (void) const {
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

  public: GGS__5B_string_5D_ mProperty_mBuildConfigurationSettingList ;
  public: inline GGS__5B_string_5D_ readProperty_mBuildConfigurationSettingList (void) const {
    return mProperty_mBuildConfigurationSettingList ;
  }

  public: GGS_string mProperty_mBuildConfigurationRef ;
  public: inline GGS_string readProperty_mBuildConfigurationRef (void) const {
    return mProperty_mBuildConfigurationRef ;
  }

  public: GGS__5B_string_5D_ mProperty_mFrameworksFileRefList ;
  public: inline GGS__5B_string_5D_ readProperty_mFrameworksFileRefList (void) const {
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
  public: GGS_XCodeToolTarget (void) ;

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

  public: inline void setter_setMBuildPhaseRefList (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRefList = inValue ;
  }

  public: inline void setter_setMBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationListRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationListRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationSettingList (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMBuildConfigurationRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMFrameworksFileRefList (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworksFileRefList = inValue ;
  }

  public: inline void setter_setMFrameworkBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkBuildPhaseRef = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XCodeToolTarget (const GGS_string & in_mTargetRef,
                               const GGS_string & in_mTargetName,
                               const GGS_string & in_mProductFileReference,
                               const GGS_string & in_mProductFileName,
                               const GGS__5B_string_5D_ & in_mBuildPhaseRefList,
                               const GGS_string & in_mBuildPhaseRef,
                               const GGS_string & in_mBuildConfigurationListRef,
                               const GGS__5B_string_5D_ & in_mBuildConfigurationSettingList,
                               const GGS_string & in_mBuildConfigurationRef,
                               const GGS__5B_string_5D_ & in_mFrameworksFileRefList,
                               const GGS_string & in_mFrameworkBuildPhaseRef) ;

//--------------------------------- Copy constructor
  public: GGS_XCodeToolTarget (const GGS_XCodeToolTarget & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XCodeToolTarget & operator = (const GGS_XCodeToolTarget & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeToolTarget init_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                       const class GGS_string & inOperand1,
                                                                                       const class GGS_string & inOperand2,
                                                                                       const class GGS_string & inOperand3,
                                                                                       const class GGS__5B_string_5D_ & inOperand4,
                                                                                       const class GGS_string & inOperand5,
                                                                                       const class GGS_string & inOperand6,
                                                                                       const class GGS__5B_string_5D_ & inOperand7,
                                                                                       const class GGS_string & inOperand8,
                                                                                       const class GGS__5B_string_5D_ & inOperand9,
                                                                                       const class GGS_string & inOperand10,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeToolTarget ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeAppTarget struct
//--------------------------------------------------------------------------------------------------

class GGS_XCodeAppTarget final : public AC_GALGAS_root {
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

  public: GGS__5B_string_5D_ mProperty_mBuildPhaseRefList ;
  public: inline GGS__5B_string_5D_ readProperty_mBuildPhaseRefList (void) const {
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

  public: GGS__5B_string_5D_ mProperty_mBuildConfigurationSettingList ;
  public: inline GGS__5B_string_5D_ readProperty_mBuildConfigurationSettingList (void) const {
    return mProperty_mBuildConfigurationSettingList ;
  }

  public: GGS_string mProperty_mBuildConfigurationRef ;
  public: inline GGS_string readProperty_mBuildConfigurationRef (void) const {
    return mProperty_mBuildConfigurationRef ;
  }

  public: GGS__5B_string_5D_ mProperty_mFrameworksFileRefList ;
  public: inline GGS__5B_string_5D_ readProperty_mFrameworksFileRefList (void) const {
    return mProperty_mFrameworksFileRefList ;
  }

  public: GGS_string mProperty_mFrameworkBuildPhaseRef ;
  public: inline GGS_string readProperty_mFrameworkBuildPhaseRef (void) const {
    return mProperty_mFrameworkBuildPhaseRef ;
  }

  public: GGS__5B__32_string_5D_ mProperty_mDependentTargets ;
  public: inline GGS__5B__32_string_5D_ readProperty_mDependentTargets (void) const {
    return mProperty_mDependentTargets ;
  }

  public: GGS_string mProperty_mResourceBuildRef ;
  public: inline GGS_string readProperty_mResourceBuildRef (void) const {
    return mProperty_mResourceBuildRef ;
  }

  public: GGS__5B_string_5D_ mProperty_mResourceFileBuildRefs ;
  public: inline GGS__5B_string_5D_ readProperty_mResourceFileBuildRefs (void) const {
    return mProperty_mResourceFileBuildRefs ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_XCodeAppTarget (void) ;

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

  public: inline void setter_setMBuildPhaseRefList (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRefList = inValue ;
  }

  public: inline void setter_setMBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationListRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationListRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationSettingList (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMBuildConfigurationRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMFrameworksFileRefList (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworksFileRefList = inValue ;
  }

  public: inline void setter_setMFrameworkBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMDependentTargets (const GGS__5B__32_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDependentTargets = inValue ;
  }

  public: inline void setter_setMResourceBuildRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResourceBuildRef = inValue ;
  }

  public: inline void setter_setMResourceFileBuildRefs (const GGS__5B_string_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResourceFileBuildRefs = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XCodeAppTarget (const GGS_string & in_mTargetRef,
                              const GGS_string & in_mTargetName,
                              const GGS_string & in_mProductFileReference,
                              const GGS_string & in_mProductFileName,
                              const GGS__5B_string_5D_ & in_mBuildPhaseRefList,
                              const GGS_string & in_mBuildPhaseRef,
                              const GGS_string & in_mBuildConfigurationListRef,
                              const GGS__5B_string_5D_ & in_mBuildConfigurationSettingList,
                              const GGS_string & in_mBuildConfigurationRef,
                              const GGS__5B_string_5D_ & in_mFrameworksFileRefList,
                              const GGS_string & in_mFrameworkBuildPhaseRef,
                              const GGS__5B__32_string_5D_ & in_mDependentTargets,
                              const GGS_string & in_mResourceBuildRef,
                              const GGS__5B_string_5D_ & in_mResourceFileBuildRefs) ;

//--------------------------------- Copy constructor
  public: GGS_XCodeAppTarget (const GGS_XCodeAppTarget & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XCodeAppTarget & operator = (const GGS_XCodeAppTarget & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeAppTarget init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                  const class GGS_string & inOperand1,
                                                                                                  const class GGS_string & inOperand2,
                                                                                                  const class GGS_string & inOperand3,
                                                                                                  const class GGS__5B_string_5D_ & inOperand4,
                                                                                                  const class GGS_string & inOperand5,
                                                                                                  const class GGS_string & inOperand6,
                                                                                                  const class GGS__5B_string_5D_ & inOperand7,
                                                                                                  const class GGS_string & inOperand8,
                                                                                                  const class GGS__5B_string_5D_ & inOperand9,
                                                                                                  const class GGS_string & inOperand10,
                                                                                                  const class GGS__5B__32_string_5D_ & inOperand11,
                                                                                                  const class GGS_string & inOperand12,
                                                                                                  const class GGS__5B_string_5D_ & inOperand13,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeAppTarget ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @BuildFile struct
//--------------------------------------------------------------------------------------------------

class GGS_BuildFile final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mFileReference ;
  public: inline GGS_string readProperty_mFileReference (void) const {
    return mProperty_mFileReference ;
  }

  public: GGS_string mProperty_mFileName ;
  public: inline GGS_string readProperty_mFileName (void) const {
    return mProperty_mFileName ;
  }

  public: GGS_string mProperty_mBuildReference ;
  public: inline GGS_string readProperty_mBuildReference (void) const {
    return mProperty_mBuildReference ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_BuildFile (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFileReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileReference = inValue ;
  }

  public: inline void setter_setMFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileName = inValue ;
  }

  public: inline void setter_setMBuildReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildReference = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_BuildFile (const GGS_string & in_mFileReference,
                         const GGS_string & in_mFileName,
                         const GGS_string & in_mBuildReference) ;

//--------------------------------- Copy constructor
  public: GGS_BuildFile (const GGS_BuildFile & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_BuildFile & operator = (const GGS_BuildFile & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_BuildFile init_21__21__21_ (const class GGS_string & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_BuildFile ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [XCodeGroup] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_XCodeGroup_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_XCodeGroup_5D_ (const class GGS__5B_XCodeGroup_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_XCodeGroup_5D_ (const DownEnumerator__5B_XCodeGroup_5D_ &) = delete ;
  private: DownEnumerator__5B_XCodeGroup_5D_ & operator = (const DownEnumerator__5B_XCodeGroup_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_XCodeGroup current (LOCATION_ARGS) const ;
  public: class GGS_XCodeGroup current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_XCodeGroup> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_XCodeGroup_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_XCodeGroup_5D_ (const class GGS__5B_XCodeGroup_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_XCodeGroup_5D_ (const UpEnumerator__5B_XCodeGroup_5D_ &) = delete ;
  private: UpEnumerator__5B_XCodeGroup_5D_ & operator = (const UpEnumerator__5B_XCodeGroup_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_XCodeGroup current (LOCATION_ARGS) const ;
  public: class GGS_XCodeGroup current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_XCodeGroup> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_XCodeGroup_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_XCodeGroup> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_XCodeGroup_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_XCodeGroup_5D_ (const GGS__5B_XCodeGroup_5D_ & inSource) ;
  public: GGS__5B_XCodeGroup_5D_ & operator = (const GGS__5B_XCodeGroup_5D_ & inSource) ;

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
  public: static GGS__5B_XCodeGroup_5D_ init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_XCodeGroup_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_XCodeGroup & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_XCodeGroup_5D_ add_operation (const GGS__5B_XCodeGroup_5D_ & inOperand,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_XCodeGroup constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_XCodeGroup constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_XCodeGroup & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_XCodeGroup & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_XCodeGroup & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_XCodeGroup getter_first (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_XCodeGroup getter_last (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_XCodeGroup_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_XCodeGroup_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                       const class GGS_u_33__32_ & constinOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_XCodeGroup readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_XCodeGroup inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_XCodeGroup_5D_ ;
  friend class DownEnumerator__5B_XCodeGroup_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_XCodeGroup_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [XCodeToolTarget] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_XCodeToolTarget_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_XCodeToolTarget_5D_ (const class GGS__5B_XCodeToolTarget_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_XCodeToolTarget_5D_ (const DownEnumerator__5B_XCodeToolTarget_5D_ &) = delete ;
  private: DownEnumerator__5B_XCodeToolTarget_5D_ & operator = (const DownEnumerator__5B_XCodeToolTarget_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_XCodeToolTarget current (LOCATION_ARGS) const ;
  public: class GGS_XCodeToolTarget current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_XCodeToolTarget> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_XCodeToolTarget_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_XCodeToolTarget_5D_ (const class GGS__5B_XCodeToolTarget_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_XCodeToolTarget_5D_ (const UpEnumerator__5B_XCodeToolTarget_5D_ &) = delete ;
  private: UpEnumerator__5B_XCodeToolTarget_5D_ & operator = (const UpEnumerator__5B_XCodeToolTarget_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_XCodeToolTarget current (LOCATION_ARGS) const ;
  public: class GGS_XCodeToolTarget current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_XCodeToolTarget> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_XCodeToolTarget_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_XCodeToolTarget> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_XCodeToolTarget_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_XCodeToolTarget_5D_ (const GGS__5B_XCodeToolTarget_5D_ & inSource) ;
  public: GGS__5B_XCodeToolTarget_5D_ & operator = (const GGS__5B_XCodeToolTarget_5D_ & inSource) ;

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
  public: static GGS__5B_XCodeToolTarget_5D_ init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_XCodeToolTarget_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_XCodeToolTarget & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_XCodeToolTarget_5D_ add_operation (const GGS__5B_XCodeToolTarget_5D_ & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_XCodeToolTarget constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_XCodeToolTarget constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_XCodeToolTarget & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_XCodeToolTarget & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_XCodeToolTarget & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_XCodeToolTarget getter_first (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_XCodeToolTarget getter_last (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_XCodeToolTarget_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_XCodeToolTarget_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                            const class GGS_u_33__32_ & constinOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_XCodeToolTarget readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_XCodeToolTarget inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_XCodeToolTarget_5D_ ;
  friend class DownEnumerator__5B_XCodeToolTarget_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_XCodeToolTarget_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [XCodeAppTarget] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_XCodeAppTarget_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_XCodeAppTarget_5D_ (const class GGS__5B_XCodeAppTarget_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_XCodeAppTarget_5D_ (const DownEnumerator__5B_XCodeAppTarget_5D_ &) = delete ;
  private: DownEnumerator__5B_XCodeAppTarget_5D_ & operator = (const DownEnumerator__5B_XCodeAppTarget_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_XCodeAppTarget current (LOCATION_ARGS) const ;
  public: class GGS_XCodeAppTarget current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_XCodeAppTarget> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_XCodeAppTarget_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_XCodeAppTarget_5D_ (const class GGS__5B_XCodeAppTarget_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_XCodeAppTarget_5D_ (const UpEnumerator__5B_XCodeAppTarget_5D_ &) = delete ;
  private: UpEnumerator__5B_XCodeAppTarget_5D_ & operator = (const UpEnumerator__5B_XCodeAppTarget_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_XCodeAppTarget current (LOCATION_ARGS) const ;
  public: class GGS_XCodeAppTarget current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_XCodeAppTarget> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_XCodeAppTarget_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_XCodeAppTarget> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_XCodeAppTarget_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_XCodeAppTarget_5D_ (const GGS__5B_XCodeAppTarget_5D_ & inSource) ;
  public: GGS__5B_XCodeAppTarget_5D_ & operator = (const GGS__5B_XCodeAppTarget_5D_ & inSource) ;

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
  public: static GGS__5B_XCodeAppTarget_5D_ init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_XCodeAppTarget_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_XCodeAppTarget & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_XCodeAppTarget_5D_ add_operation (const GGS__5B_XCodeAppTarget_5D_ & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_XCodeAppTarget constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_XCodeAppTarget constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_XCodeAppTarget & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_XCodeAppTarget & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_XCodeAppTarget & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_XCodeAppTarget getter_first (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_XCodeAppTarget getter_last (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_XCodeAppTarget_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_XCodeAppTarget_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                           const class GGS_u_33__32_ & constinOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_XCodeAppTarget readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_XCodeAppTarget inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_XCodeAppTarget_5D_ ;
  friend class DownEnumerator__5B_XCodeAppTarget_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_XCodeAppTarget_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [BuildFile] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_BuildFile_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_BuildFile_5D_ (const class GGS__5B_BuildFile_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_BuildFile_5D_ (const DownEnumerator__5B_BuildFile_5D_ &) = delete ;
  private: DownEnumerator__5B_BuildFile_5D_ & operator = (const DownEnumerator__5B_BuildFile_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_BuildFile current (LOCATION_ARGS) const ;
  public: class GGS_BuildFile current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_BuildFile> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_BuildFile_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_BuildFile_5D_ (const class GGS__5B_BuildFile_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_BuildFile_5D_ (const UpEnumerator__5B_BuildFile_5D_ &) = delete ;
  private: UpEnumerator__5B_BuildFile_5D_ & operator = (const UpEnumerator__5B_BuildFile_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_BuildFile current (LOCATION_ARGS) const ;
  public: class GGS_BuildFile current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_BuildFile> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_BuildFile_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_BuildFile> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_BuildFile_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_BuildFile_5D_ (const GGS__5B_BuildFile_5D_ & inSource) ;
  public: GGS__5B_BuildFile_5D_ & operator = (const GGS__5B_BuildFile_5D_ & inSource) ;

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
  public: static GGS__5B_BuildFile_5D_ init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_BuildFile_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_BuildFile & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_BuildFile_5D_ add_operation (const GGS__5B_BuildFile_5D_ & inOperand,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_BuildFile constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_BuildFile constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_BuildFile & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_BuildFile & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_BuildFile & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_BuildFile getter_first (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_BuildFile getter_last (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_BuildFile_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_BuildFile_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                      const class GGS_u_33__32_ & constinOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_BuildFile readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_BuildFile inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_BuildFile_5D_ ;
  friend class DownEnumerator__5B_BuildFile_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_BuildFile_5D_ ;

//--------------------------------------------------------------------------------------------------
//§Filewrapper§ 'xcodeProjectGenerationFilewrapper'
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const DirectoryWrapper gWrapperDirectory_0_xcodeProjectGenerationFilewrapper ;
extern const DirectoryWrapper gWrapperDirectory_1_xcodeProjectGenerationFilewrapper ;

//--------------------------------------------------------------------------------------------------
// Phase 1: filewrapper @ + xcodeProjectGenerationFilewrapper
//--------------------------------------------------------------------------------------------------

class GGS_xcodeProjectGenerationFilewrapper final {

//-- Start of package generic part

//--------------------------------- GALGAS class getters
  public: static class GGS_filewrapper class_func_contents (LOCATION_ARGS) ;

  public: static class GGS_string class_func_xcodeproj (const class GGS_string & inOperand0,
                                                        const class GGS_string & inOperand1,
                                                        const class GGS__5B_XCodeGroup_5D_ & inOperand2,
                                                        const class GGS__5B_string_5D_ & inOperand3,
                                                        const class GGS__5B_XCodeToolTarget_5D_ & inOperand4,
                                                        const class GGS__5B_XCodeAppTarget_5D_ & inOperand5,
                                                        const class GGS__5B__32_string_5D_ & inOperand6,
                                                        const class GGS__5B__32_string_5D_ & inOperand7,
                                                        const class GGS__5B__32_string_5D_ & inOperand8,
                                                        const class GGS__5B__32_string_5D_ & inOperand9,
                                                        const class GGS__5B__32_string_5D_ & inOperand10,
                                                        const class GGS__5B__32_string_5D_ & inOperand11,
                                                        const class GGS__5B__32_string_5D_ & inOperand12,
                                                        const class GGS__5B__32_string_5D_ & inOperand13,
                                                        const class GGS__5B__32_string_5D_ & inOperand14,
                                                        const class GGS__5B__32_string_5D_ & inOperand15,
                                                        const class GGS__5B__32_string_5D_ & inOperand16,
                                                        const class GGS__5B_BuildFile_5D_ & inOperand17,
                                                        const class GGS_string & inOperand18,
                                                        const class GGS__5B_string_5D_ & inOperand19,
                                                        const class GGS_string & inOperand20,
                                                        const class GGS_string & inOperand21,
                                                        const class GGS_string & inOperand22,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Class Methods

} ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@[actualParameterAST] analyzeRoutineArguments'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeRoutineArguments (const class GGS__5B_actualParameterAST_5D_ inObject,
                                              const class GGS_lstring constin_inUsefulnessCallerEntityName,
                                              class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                              const class GGS_analysisContext constin_inAnalysisContext,
                                              class GGS_unifiedTypeMap & io_ioTypeMap,
                                              const class GGS_lstring constin_inRoutineName,
                                              const class GGS_string constin_inInvokedEntityName,
                                              const class GGS__5B_formalParameterSignatureElement_5D_ constin_inRoutineSignature,
                                              class GGS_localVarManager & io_ioVariableMap,
                                              class GGS__5B_semanticInstructionForGeneration_5D_ & io_ioInstructionListForGeneration,
                                              class GGS__5B_actualParameterForGeneration_5D_ & out_outActualParameterListForGeneration,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@actualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkAgainstFormalArgument (class cPtr_actualParameterAST * inObject,
                                                     const class GGS_lstring constin_inUsefulnessCallerEntityName,
                                                     class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const class GGS_analysisContext constin_inAnalysisContext,
                                                     class GGS_unifiedTypeMap & io_ioTypeMap,
                                                     const class GGS_lstring constin_inFormalSelector,
                                                     const class GGS_unifiedTypeMapEntry constin_inFormalArgumentType,
                                                     const class GGS_formalArgumentPassingModeAST constin_inFormalArgumentPassingMode,
                                                     class GGS_localVarManager & io_ioVariableMap,
                                                     class GGS__5B_actualParameterForGeneration_5D_ & io_ioActualParameterListForGeneration,
                                                     class GGS_stringset & io_ioExclusiveVariableSet,
                                                     class GGS__5B_semanticInstructionForGeneration_5D_ & io_ioInstructionListForGeneration,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@actualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterParameterInSemanticContext (class cPtr_actualParameterAST * inObject,
                                                          class GGS_unifiedTypeMap & io_ioTypeMap,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@actualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isCompatibleWith (const class cPtr_actualParameterAST * inObject,
                                                     const class GGS_formalArgumentPassingModeAST constin__5F_inFormalPassingMode,
                                                     const class GGS_string constin__5F_inSelector,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@actualParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInActualOutputParameterList (class cPtr_actualParameterAST * inObject,
                                                           class GGS__5B_actualOutputArgumentAST_5D_ & io_ioActualOutputArgumentList,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @outputActualParameterAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_outputActualParameterAST : public GGS_actualParameterAST {
//--------------------------------- Default constructor
  public: GGS_outputActualParameterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_outputActualParameterAST (const class cPtr_outputActualParameterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualSelector (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mOutputActualParameterExpression (void) const ;

  public: class GGS_location readProperty_mEndOfExpressionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_outputActualParameterAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_semanticExpressionAST & inOperand1,
                                                                const class GGS_location & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputActualParameterAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputActualParameterAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @outputActualParameterAST class
//--------------------------------------------------------------------------------------------------

class cPtr_outputActualParameterAST : public cPtr_actualParameterAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void outputActualParameterAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_semanticExpressionAST & inOperand1,
                                                          const class GGS_location & inOperand2,
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
  public: GGS_semanticExpressionAST mProperty_mOutputActualParameterExpression ;
  public: GGS_location mProperty_mEndOfExpressionLocation ;


//--- Default constructor
  public: cPtr_outputActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outputActualParameterAST (const GGS_lstring & in_mActualSelector,
                                         const GGS_semanticExpressionAST & in_mOutputActualParameterExpression,
                                         const GGS_location & in_mEndOfExpressionLocation,
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
// Phase 1: [unifiedTypeMapEntry] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_unifiedTypeMapEntry_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_unifiedTypeMapEntry_5D_ (const class GGS__5B_unifiedTypeMapEntry_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_unifiedTypeMapEntry_5D_ (const DownEnumerator__5B_unifiedTypeMapEntry_5D_ &) = delete ;
  private: DownEnumerator__5B_unifiedTypeMapEntry_5D_ & operator = (const DownEnumerator__5B_unifiedTypeMapEntry_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_unifiedTypeMapEntry current (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_unifiedTypeMapEntry> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_unifiedTypeMapEntry_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_unifiedTypeMapEntry_5D_ (const class GGS__5B_unifiedTypeMapEntry_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_unifiedTypeMapEntry_5D_ (const UpEnumerator__5B_unifiedTypeMapEntry_5D_ &) = delete ;
  private: UpEnumerator__5B_unifiedTypeMapEntry_5D_ & operator = (const UpEnumerator__5B_unifiedTypeMapEntry_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_unifiedTypeMapEntry current (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_unifiedTypeMapEntry> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_unifiedTypeMapEntry_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_unifiedTypeMapEntry> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_unifiedTypeMapEntry_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_unifiedTypeMapEntry_5D_ (const GGS__5B_unifiedTypeMapEntry_5D_ & inSource) ;
  public: GGS__5B_unifiedTypeMapEntry_5D_ & operator = (const GGS__5B_unifiedTypeMapEntry_5D_ & inSource) ;

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
  public: static GGS__5B_unifiedTypeMapEntry_5D_ init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_unifiedTypeMapEntry_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_unifiedTypeMapEntry & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_unifiedTypeMapEntry_5D_ add_operation (const GGS__5B_unifiedTypeMapEntry_5D_ & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_unifiedTypeMapEntry constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_unifiedTypeMapEntry constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_unifiedTypeMapEntry & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_unifiedTypeMapEntry & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_unifiedTypeMapEntry & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry getter_first (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry getter_last (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_unifiedTypeMapEntry_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_unifiedTypeMapEntry_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                                const class GGS_u_33__32_ & constinOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_unifiedTypeMapEntry readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_unifiedTypeMapEntry inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_unifiedTypeMapEntry_5D_ ;
  friend class DownEnumerator__5B_unifiedTypeMapEntry_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_unifiedTypeMapEntry_5D_ ;

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

