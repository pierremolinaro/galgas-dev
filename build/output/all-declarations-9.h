#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @unusedNonTerminalSymbolMapForGrammarAnalysis map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis final {

  public: DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inMap) ;

  public: ~ DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;

  public: class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis &) = delete ;
  private: DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis & operator = (const DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis final {
  public: UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inMap)  ;

  public: ~ UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
  public: class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis &) = delete ;
  private: UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis & operator = (const UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (void) ;

//--- Handle copy
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) ;
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & operator = (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) ;

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
  protected: void performInsert (const class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis init (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis class_func_mapWithMapToOverride (const class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inOperand0
                                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMNonTerminalIndexForKey (class GGS_uint constinArgument0,
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

  public: class GGS_uint getter_mNonTerminalIndexForKey (const class GGS_string & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis ;
  friend class DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mNonTerminalIndex ;
  public: inline GGS_uint readProperty_mNonTerminalIndex (void) const {
    return mProperty_mNonTerminalIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMNonTerminalIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element (const GGS_lstring & in_lkey,
                                                                       const GGS_uint & in_mNonTerminalIndex) ;

//--------------------------------- Copy constructor
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & operator = (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_uint & inOperand1,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: unusedNonTerminalSymbolMapForGrammarAnalysis.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element unwrappedValue (void) const {
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
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalSymbolSortedListForGrammarAnalysis sorted list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis final {
//--- Constructor
  public: DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const class GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }
  public: class GGS_lstring current_mNonTerminalSymbol (LOCATION_ARGS) const ;
  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis &) = delete ;
  private: DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis & operator = (const DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis final {
//--- Constructor
  public: UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const class GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex < mElementArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }
  public: class GGS_lstring current_mNonTerminalSymbol (LOCATION_ARGS) const ;
  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis &) = delete ;
  private: UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis & operator = (const UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalSymbolSortedListForGrammarAnalysis sorted list
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalSymbolSortedListForGrammarAnalysis final : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element> mSharedArray ;

//--- Default constructor
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis (void) ;

//--- Destructor
  public: virtual ~ GGS_nonTerminalSymbolSortedListForGrammarAnalysis (void) = default ;

//--- Handle copy
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis &) = default ;
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis & operator = (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis &) = default ;

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
  public : inline GenericArray <GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element> sortedElementArray (void) const {
    return mSharedArray ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalSymbolSortedListForGrammarAnalysis init (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalSymbolSortedListForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonTerminalSymbolSortedListForGrammarAnalysis class_func_sortedListWithValue (const class GGS_lstring & inOperand0,
                                                                                                         const class GGS_uint & inOperand1,
                                                                                                         const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_uint & inOperand1,
                                   const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: void setter_insert (class GGS_lstring inArgument0,
                              class GGS_uint inArgument1,
                              class GGS_nonterminalSymbolLabelMapForGrammarAnalysis inArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_popGreatest (class GGS_lstring & outArgument0,
                                   class GGS_uint & outArgument1,
                                   class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_popSmallest (class GGS_lstring & outArgument0,
                                   class GGS_uint & outArgument1,
                                   class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_greatest (class GGS_lstring & outArgument0,
                                class GGS_uint & outArgument1,
                                class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

  public: void method_smallest (class GGS_lstring & outArgument0,
                                class GGS_uint & outArgument1,
                                class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis ;
  friend class DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalSymbolSortedListForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mNonTerminalSymbol ;
  public: inline GGS_lstring readProperty_mNonTerminalSymbol (void) const {
    return mProperty_mNonTerminalSymbol ;
  }

  public: GGS_uint mProperty_mNonTerminalIndex ;
  public: inline GGS_uint readProperty_mNonTerminalIndex (void) const {
    return mProperty_mNonTerminalIndex ;
  }

  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis mProperty_mNonterminalSymbolParametersMap ;
  public: inline GGS_nonterminalSymbolLabelMapForGrammarAnalysis readProperty_mNonterminalSymbolParametersMap (void) const {
    return mProperty_mNonterminalSymbolParametersMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMNonTerminalSymbol (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalSymbol = inValue ;
  }

  public: inline void setter_setMNonTerminalIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalIndex = inValue ;
  }

  public: inline void setter_setMNonterminalSymbolParametersMap (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalSymbolParametersMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element (const GGS_lstring & in_mNonTerminalSymbol,
                                                                        const GGS_uint & in_mNonTerminalIndex,
                                                                        const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap) ;

//--------------------------------- Copy constructor
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & operator = (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_uint & inOperand1,
                                                                                                const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @signatureForGrammarAnalysis list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_signatureForGrammarAnalysis final {
  public: DownEnumerator_signatureForGrammarAnalysis (const class GGS_signatureForGrammarAnalysis & inList) ;

  public: ~ DownEnumerator_signatureForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_formalArgumentPassingModeAST current_mFormalArgumentPassingModeForGrammarAnalysis (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mGalgasTypeNameForGrammarAnalysis (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_signatureForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_signatureForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_signatureForGrammarAnalysis (const DownEnumerator_signatureForGrammarAnalysis &) = delete ;
  private: DownEnumerator_signatureForGrammarAnalysis & operator = (const DownEnumerator_signatureForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_signatureForGrammarAnalysis final {
  public: UpEnumerator_signatureForGrammarAnalysis (const class GGS_signatureForGrammarAnalysis & inList)  ;

  public: ~ UpEnumerator_signatureForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_formalArgumentPassingModeAST current_mFormalArgumentPassingModeForGrammarAnalysis (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mGalgasTypeNameForGrammarAnalysis (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_signatureForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_signatureForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_signatureForGrammarAnalysis (const UpEnumerator_signatureForGrammarAnalysis &) = delete ;
  private: UpEnumerator_signatureForGrammarAnalysis & operator = (const UpEnumerator_signatureForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @signatureForGrammarAnalysis list
//--------------------------------------------------------------------------------------------------

class GGS_signatureForGrammarAnalysis : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_signatureForGrammarAnalysis_2E_element> mArray ;

//--- Default constructor
  public: GGS_signatureForGrammarAnalysis (void) ;

//--- Destructor
  public: virtual ~ GGS_signatureForGrammarAnalysis (void) = default ;

//--- Copy
  public: GGS_signatureForGrammarAnalysis (const GGS_signatureForGrammarAnalysis &) = default ;
  public: GGS_signatureForGrammarAnalysis & operator = (const GGS_signatureForGrammarAnalysis &) = default ;

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
  public : inline GenericArray <GGS_signatureForGrammarAnalysis_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_signatureForGrammarAnalysis subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_signatureForGrammarAnalysis (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                 const class GGS_lstring & in_mGalgasTypeNameForGrammarAnalysis
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_signatureForGrammarAnalysis init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_signatureForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_signatureForGrammarAnalysis class_func_listWithValue (const class GGS_formalArgumentPassingModeAST & inOperand0,
                                                                                 const class GGS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_signatureForGrammarAnalysis inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_formalArgumentPassingModeAST & inOperand0,
                                   const class GGS_lstring & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_signatureForGrammarAnalysis_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_signatureForGrammarAnalysis add_operation (const GGS_signatureForGrammarAnalysis & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_formalArgumentPassingModeAST constinArgument0,
                              class GGS_lstring constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_formalArgumentPassingModeAST constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_formalArgumentPassingModeAST & outArgument0,
                                class GGS_lstring & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_formalArgumentPassingModeAST & outArgument0,
                               class GGS_lstring & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_formalArgumentPassingModeAST & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalArgumentPassingModeForGrammarAnalysisAtIndex (class GGS_formalArgumentPassingModeAST constinArgument0,
                                                                              class GGS_uint constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMGalgasTypeNameForGrammarAnalysisAtIndex (class GGS_lstring constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_formalArgumentPassingModeAST & outArgument0,
                             class GGS_lstring & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_formalArgumentPassingModeAST & outArgument0,
                            class GGS_lstring & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_formalArgumentPassingModeAST getter_mFormalArgumentPassingModeForGrammarAnalysisAtIndex (const class GGS_uint & constinOperand0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mGalgasTypeNameForGrammarAnalysisAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_signatureForGrammarAnalysis getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_signatureForGrammarAnalysis getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_signatureForGrammarAnalysis getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_signatureForGrammarAnalysis ;
  friend class DownEnumerator_signatureForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_signatureForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonterminalSymbolLabelMapForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_signatureForGrammarAnalysis mProperty_mFormalParametersList ;
  public: inline GGS_signatureForGrammarAnalysis readProperty_mFormalParametersList (void) const {
    return mProperty_mFormalParametersList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFormalParametersList (const GGS_signatureForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParametersList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element (const GGS_lstring & in_lkey,
                                                                      const GGS_signatureForGrammarAnalysis & in_mFormalParametersList) ;

//--------------------------------- Copy constructor
  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & operator = (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_signatureForGrammarAnalysis & inOperand1,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: nonterminalSymbolLabelMapForGrammarAnalysis.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element unwrappedValue (void) const {
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
  public: static GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalInstructionForGrammarAnalysis : public GGS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GGS_nonTerminalInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_nonTerminalInstructionForGrammarAnalysis (const class cPtr_nonTerminalInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mNonterminalSymbolName (void) const ;

  public: class GGS_uint readProperty_mNonterminalSymbolIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalInstructionForGrammarAnalysis init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_uint & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalInstructionForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nonTerminalInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_nonTerminalInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalInstructionForGrammarAnalysis_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak : public GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak {
//--------------------------------- Default constructor
  public: GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak (const class GGS_nonTerminalInstructionForGrammarAnalysis & inSource) ;

  public: GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak & operator = (const class GGS_nonTerminalInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak init_nil (void) {
    GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_nonTerminalInstructionForGrammarAnalysis bang_nonTerminalInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_nonTerminalInstructionForGrammarAnalysis unwrappedValue (void) const ;

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
  public: static GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @branchListForGrammarAnalysis list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_branchListForGrammarAnalysis final {
  public: DownEnumerator_branchListForGrammarAnalysis (const class GGS_branchListForGrammarAnalysis & inList) ;

  public: ~ DownEnumerator_branchListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_syntaxInstructionListForGrammarAnalysis current_mSyntaxInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_branchListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_branchListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_branchListForGrammarAnalysis (const DownEnumerator_branchListForGrammarAnalysis &) = delete ;
  private: DownEnumerator_branchListForGrammarAnalysis & operator = (const DownEnumerator_branchListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_branchListForGrammarAnalysis final {
  public: UpEnumerator_branchListForGrammarAnalysis (const class GGS_branchListForGrammarAnalysis & inList)  ;

  public: ~ UpEnumerator_branchListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_syntaxInstructionListForGrammarAnalysis current_mSyntaxInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_branchListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_branchListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_branchListForGrammarAnalysis (const UpEnumerator_branchListForGrammarAnalysis &) = delete ;
  private: UpEnumerator_branchListForGrammarAnalysis & operator = (const UpEnumerator_branchListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @branchListForGrammarAnalysis list
//--------------------------------------------------------------------------------------------------

class GGS_branchListForGrammarAnalysis : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_branchListForGrammarAnalysis_2E_element> mArray ;

//--- Default constructor
  public: GGS_branchListForGrammarAnalysis (void) ;

//--- Destructor
  public: virtual ~ GGS_branchListForGrammarAnalysis (void) = default ;

//--- Copy
  public: GGS_branchListForGrammarAnalysis (const GGS_branchListForGrammarAnalysis &) = default ;
  public: GGS_branchListForGrammarAnalysis & operator = (const GGS_branchListForGrammarAnalysis &) = default ;

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
  public : inline GenericArray <GGS_branchListForGrammarAnalysis_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_branchListForGrammarAnalysis subList (const int32_t inStart,
                                                     const int32_t inLength,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_branchListForGrammarAnalysis (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_branchListForGrammarAnalysis init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_branchListForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_branchListForGrammarAnalysis class_func_listWithValue (const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_branchListForGrammarAnalysis inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_branchListForGrammarAnalysis_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_branchListForGrammarAnalysis add_operation (const GGS_branchListForGrammarAnalysis & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMSyntaxInstructionListAtIndex (class GGS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_syntaxInstructionListForGrammarAnalysis getter_mSyntaxInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_branchListForGrammarAnalysis getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_branchListForGrammarAnalysis getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_branchListForGrammarAnalysis getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_branchListForGrammarAnalysis ;
  friend class DownEnumerator_branchListForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @branchListForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_branchListForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_syntaxInstructionListForGrammarAnalysis mProperty_mSyntaxInstructionList ;
  public: inline GGS_syntaxInstructionListForGrammarAnalysis readProperty_mSyntaxInstructionList (void) const {
    return mProperty_mSyntaxInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_branchListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxInstructionList (const GGS_syntaxInstructionListForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_branchListForGrammarAnalysis_2E_element (const GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_branchListForGrammarAnalysis_2E_element (const GGS_branchListForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_branchListForGrammarAnalysis_2E_element & operator = (const GGS_branchListForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_branchListForGrammarAnalysis_2E_element init_21_ (const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_branchListForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectInstructionForGrammarAnalysis : public GGS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GGS_selectInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selectInstructionForGrammarAnalysis (const class cPtr_selectInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_branchListForGrammarAnalysis readProperty_mSelectBranchList (void) const ;

  public: class GGS_uint readProperty_mAddedNonTerminalSymbolIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selectInstructionForGrammarAnalysis init_21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_branchListForGrammarAnalysis & inOperand1,
                                                                           const class GGS_uint & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selectInstructionForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ;

#include "separateHeaderFor_selectInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectInstructionForGrammarAnalysis_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectInstructionForGrammarAnalysis_2E_weak : public GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selectInstructionForGrammarAnalysis_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selectInstructionForGrammarAnalysis_2E_weak (const class GGS_selectInstructionForGrammarAnalysis & inSource) ;

  public: GGS_selectInstructionForGrammarAnalysis_2E_weak & operator = (const class GGS_selectInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selectInstructionForGrammarAnalysis_2E_weak init_nil (void) {
    GGS_selectInstructionForGrammarAnalysis_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selectInstructionForGrammarAnalysis bang_selectInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selectInstructionForGrammarAnalysis unwrappedValue (void) const ;

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
  public: static GGS_selectInstructionForGrammarAnalysis_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selectInstructionForGrammarAnalysis_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectInstructionForGrammarAnalysis_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @repeatInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

class GGS_repeatInstructionForGrammarAnalysis : public GGS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GGS_repeatInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_repeatInstructionForGrammarAnalysis (const class cPtr_repeatInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_branchListForGrammarAnalysis readProperty_mRepeatBranchList (void) const ;

  public: class GGS_uint readProperty_mAddedNonTerminalSymbolIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_repeatInstructionForGrammarAnalysis init_21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_branchListForGrammarAnalysis & inOperand1,
                                                                           const class GGS_uint & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_repeatInstructionForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_repeatInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ;

#include "separateHeaderFor_repeatInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @repeatInstructionForGrammarAnalysis_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_repeatInstructionForGrammarAnalysis_2E_weak : public GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak {
//--------------------------------- Default constructor
  public: GGS_repeatInstructionForGrammarAnalysis_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_repeatInstructionForGrammarAnalysis_2E_weak (const class GGS_repeatInstructionForGrammarAnalysis & inSource) ;

  public: GGS_repeatInstructionForGrammarAnalysis_2E_weak & operator = (const class GGS_repeatInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_repeatInstructionForGrammarAnalysis_2E_weak init_nil (void) {
    GGS_repeatInstructionForGrammarAnalysis_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_repeatInstructionForGrammarAnalysis bang_repeatInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_repeatInstructionForGrammarAnalysis unwrappedValue (void) const ;

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
  public: static GGS_repeatInstructionForGrammarAnalysis_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_repeatInstructionForGrammarAnalysis_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_repeatInstructionForGrammarAnalysis_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxComponentListForGrammarAnalysis list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_syntaxComponentListForGrammarAnalysis final {
  public: DownEnumerator_syntaxComponentListForGrammarAnalysis (const class GGS_syntaxComponentListForGrammarAnalysis & inList) ;

  public: ~ DownEnumerator_syntaxComponentListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_productionRuleListForGrammarAnalysis current_mProductionRulesList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxComponentListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syntaxComponentListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_syntaxComponentListForGrammarAnalysis (const DownEnumerator_syntaxComponentListForGrammarAnalysis &) = delete ;
  private: DownEnumerator_syntaxComponentListForGrammarAnalysis & operator = (const DownEnumerator_syntaxComponentListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_syntaxComponentListForGrammarAnalysis final {
  public: UpEnumerator_syntaxComponentListForGrammarAnalysis (const class GGS_syntaxComponentListForGrammarAnalysis & inList)  ;

  public: ~ UpEnumerator_syntaxComponentListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_productionRuleListForGrammarAnalysis current_mProductionRulesList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxComponentListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syntaxComponentListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_syntaxComponentListForGrammarAnalysis (const UpEnumerator_syntaxComponentListForGrammarAnalysis &) = delete ;
  private: UpEnumerator_syntaxComponentListForGrammarAnalysis & operator = (const UpEnumerator_syntaxComponentListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @syntaxComponentListForGrammarAnalysis list
//--------------------------------------------------------------------------------------------------

class GGS_syntaxComponentListForGrammarAnalysis : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_syntaxComponentListForGrammarAnalysis_2E_element> mArray ;

//--- Default constructor
  public: GGS_syntaxComponentListForGrammarAnalysis (void) ;

//--- Destructor
  public: virtual ~ GGS_syntaxComponentListForGrammarAnalysis (void) = default ;

//--- Copy
  public: GGS_syntaxComponentListForGrammarAnalysis (const GGS_syntaxComponentListForGrammarAnalysis &) = default ;
  public: GGS_syntaxComponentListForGrammarAnalysis & operator = (const GGS_syntaxComponentListForGrammarAnalysis &) = default ;

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
  public : inline GenericArray <GGS_syntaxComponentListForGrammarAnalysis_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_syntaxComponentListForGrammarAnalysis subList (const int32_t inStart,
                                                              const int32_t inLength,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_syntaxComponentListForGrammarAnalysis (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                 const class GGS_lstring & in_mSyntaxComponentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxComponentListForGrammarAnalysis init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxComponentListForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxComponentListForGrammarAnalysis class_func_listWithValue (const class GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                           const class GGS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_syntaxComponentListForGrammarAnalysis inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                   const class GGS_lstring & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_syntaxComponentListForGrammarAnalysis add_operation (const GGS_syntaxComponentListForGrammarAnalysis & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_productionRuleListForGrammarAnalysis constinArgument0,
                              class GGS_lstring constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_productionRuleListForGrammarAnalysis constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                                class GGS_lstring & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                               class GGS_lstring & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMProductionRulesListAtIndex (class GGS_productionRuleListForGrammarAnalysis constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMSyntaxComponentNameAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                             class GGS_lstring & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                            class GGS_lstring & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_productionRuleListForGrammarAnalysis getter_mProductionRulesListAtIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSyntaxComponentNameAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_syntaxComponentListForGrammarAnalysis getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_syntaxComponentListForGrammarAnalysis getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_syntaxComponentListForGrammarAnalysis getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_syntaxComponentListForGrammarAnalysis ;
  friend class DownEnumerator_syntaxComponentListForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxComponentListForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_syntaxComponentListForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_productionRuleListForGrammarAnalysis mProperty_mProductionRulesList ;
  public: inline GGS_productionRuleListForGrammarAnalysis readProperty_mProductionRulesList (void) const {
    return mProperty_mProductionRulesList ;
  }

  public: GGS_lstring mProperty_mSyntaxComponentName ;
  public: inline GGS_lstring readProperty_mSyntaxComponentName (void) const {
    return mProperty_mSyntaxComponentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxComponentListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProductionRulesList (const GGS_productionRuleListForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductionRulesList = inValue ;
  }

  public: inline void setter_setMSyntaxComponentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxComponentListForGrammarAnalysis_2E_element (const GGS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                const GGS_lstring & in_mSyntaxComponentName) ;

//--------------------------------- Copy constructor
  public: GGS_syntaxComponentListForGrammarAnalysis_2E_element (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syntaxComponentListForGrammarAnalysis_2E_element & operator = (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxComponentListForGrammarAnalysis_2E_element init_21__21_ (const class GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                    const class GGS_lstring & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxComponentListForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalSymbolsMapForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mTerminalIndex ;
  public: inline GGS_uint readProperty_mTerminalIndex (void) const {
    return mProperty_mTerminalIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTerminalIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element (const GGS_lstring & in_lkey,
                                                               const GGS_uint & in_mTerminalIndex) ;

//--------------------------------- Copy constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element (const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & operator = (const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalSymbolsMapForGrammarAnalysis_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_uint & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalSymbolsMapForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: terminalSymbolsMapForGrammarAnalysis.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ (const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_terminalSymbolsMapForGrammarAnalysis_2E_element unwrappedValue (void) const {
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
  public: static GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classFuncExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_classFuncExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_classFuncExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_classFuncExpressionAST (const class cPtr_classFuncExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_typeName (void) const ;

  public: class GGS_lstring readProperty_classFuncName (void) const ;

  public: class GGS_actualOutputArgumentList readProperty_expressions (void) const ;

  public: class GGS_location readProperty_locationForOldStyleCollectionInitializerError (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classFuncExpressionAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_actualOutputArgumentList & inOperand2,
                                                                  const class GGS_location & inOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classFuncExpressionAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classFuncExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFuncExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @classFuncExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_classFuncExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void classFuncExpressionAST_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
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
  public: GGS_lstring mProperty_typeName ;
  public: GGS_lstring mProperty_classFuncName ;
  public: GGS_actualOutputArgumentList mProperty_expressions ;
  public: GGS_location mProperty_locationForOldStyleCollectionInitializerError ;


//--- Default constructor
  public: cPtr_classFuncExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_classFuncExpressionAST (const GGS_lstring & in_typeName,
                                       const GGS_lstring & in_classFuncName,
                                       const GGS_actualOutputArgumentList & in_expressions,
                                       const GGS_location & in_locationForOldStyleCollectionInitializerError,
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
// Phase 1: @classFuncExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_classFuncExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_classFuncExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_classFuncExpressionAST_2E_weak (const class GGS_classFuncExpressionAST & inSource) ;

  public: GGS_classFuncExpressionAST_2E_weak & operator = (const class GGS_classFuncExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_classFuncExpressionAST_2E_weak init_nil (void) {
    GGS_classFuncExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_classFuncExpressionAST bang_classFuncExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_classFuncExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_classFuncExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classFuncExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classFuncExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFuncExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticExpressionForGeneration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_semanticExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_semanticExpressionForGeneration_2E_weak (const class GGS_semanticExpressionForGeneration & inSource) ;

  public: GGS_semanticExpressionForGeneration_2E_weak & operator = (const class GGS_semanticExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_semanticExpressionForGeneration_2E_weak init_nil (void) {
    GGS_semanticExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_semanticExpressionForGeneration bang_semanticExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_semanticExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_semanticExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @collectionValueElementList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_collectionValueElementList final {
  public: DownEnumerator_collectionValueElementList (const class GGS_collectionValueElementList & inList) ;

  public: ~ DownEnumerator_collectionValueElementList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_location (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_collectionValueElementList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_collectionValueElementList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_collectionValueElementList (const DownEnumerator_collectionValueElementList &) = delete ;
  private: DownEnumerator_collectionValueElementList & operator = (const DownEnumerator_collectionValueElementList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_collectionValueElementList final {
  public: UpEnumerator_collectionValueElementList (const class GGS_collectionValueElementList & inList)  ;

  public: ~ UpEnumerator_collectionValueElementList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_location (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_collectionValueElementList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_collectionValueElementList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_collectionValueElementList (const UpEnumerator_collectionValueElementList &) = delete ;
  private: UpEnumerator_collectionValueElementList & operator = (const UpEnumerator_collectionValueElementList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @collectionValueElementList list
//--------------------------------------------------------------------------------------------------

class GGS_collectionValueElementList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_collectionValueElementList_2E_element> mArray ;

//--- Default constructor
  public: GGS_collectionValueElementList (void) ;

//--- Destructor
  public: virtual ~ GGS_collectionValueElementList (void) = default ;

//--- Copy
  public: GGS_collectionValueElementList (const GGS_collectionValueElementList &) = default ;
  public: GGS_collectionValueElementList & operator = (const GGS_collectionValueElementList &) = default ;

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
  public : inline GenericArray <GGS_collectionValueElementList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_collectionValueElementList subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_collectionValueElementList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_semanticExpressionAST & in_mExpression,
                                                 const class GGS_location & in_location
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_collectionValueElementList init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_collectionValueElementList extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_collectionValueElementList class_func_listWithValue (const class GGS_semanticExpressionAST & inOperand0,
                                                                                const class GGS_location & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_collectionValueElementList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_semanticExpressionAST & inOperand0,
                                   const class GGS_location & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_collectionValueElementList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_collectionValueElementList add_operation (const GGS_collectionValueElementList & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_semanticExpressionAST constinArgument0,
                              class GGS_location constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_semanticExpressionAST constinArgument0,
                                     class GGS_location constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_semanticExpressionAST & outArgument0,
                                class GGS_location & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_semanticExpressionAST & outArgument0,
                               class GGS_location & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_semanticExpressionAST & outArgument0,
                                     class GGS_location & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setLocationAtIndex (class GGS_location constinArgument0,
                                          class GGS_uint constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMExpressionAtIndex (class GGS_semanticExpressionAST constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_semanticExpressionAST & outArgument0,
                             class GGS_location & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_semanticExpressionAST & outArgument0,
                            class GGS_location & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationAtIndex (const class GGS_uint & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_semanticExpressionAST getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_collectionValueElementList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_collectionValueElementList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_collectionValueElementList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_collectionValueElementList ;
  friend class DownEnumerator_collectionValueElementList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueElementList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @collectionValueElementList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_collectionValueElementList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionAST mProperty_mExpression ;
  public: inline GGS_semanticExpressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_collectionValueElementList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_collectionValueElementList_2E_element (const GGS_semanticExpressionAST & in_mExpression,
                                                     const GGS_location & in_location) ;

//--------------------------------- Copy constructor
  public: GGS_collectionValueElementList_2E_element (const GGS_collectionValueElementList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_collectionValueElementList_2E_element & operator = (const GGS_collectionValueElementList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_collectionValueElementList_2E_element init_21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                                         const class GGS_location & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_collectionValueElementList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueElementList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @collectionValueAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_collectionValueAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_collectionValueAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_collectionValueAST (const class cPtr_collectionValueAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_collectionValueElementList readProperty_mExpressionList (void) const ;

  public: class GGS_location readProperty_mEndOfCollectionValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_collectionValueAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_collectionValueElementList & inOperand1,
                                                          const class GGS_location & inOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_collectionValueAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_collectionValueAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @collectionValueAST class
//--------------------------------------------------------------------------------------------------

class cPtr_collectionValueAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void collectionValueAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                    const class GGS_collectionValueElementList & inOperand1,
                                                    const class GGS_location & inOperand2,
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
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_collectionValueElementList mProperty_mExpressionList ;
  public: GGS_location mProperty_mEndOfCollectionValue ;


//--- Default constructor
  public: cPtr_collectionValueAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_collectionValueAST (const GGS_lstring & in_mTypeName,
                                   const GGS_collectionValueElementList & in_mExpressionList,
                                   const GGS_location & in_mEndOfCollectionValue,
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
// Phase 1: @collectionValueAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_collectionValueAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_collectionValueAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_collectionValueAST_2E_weak (const class GGS_collectionValueAST & inSource) ;

  public: GGS_collectionValueAST_2E_weak & operator = (const class GGS_collectionValueAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_collectionValueAST_2E_weak init_nil (void) {
    GGS_collectionValueAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_collectionValueAST bang_collectionValueAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_collectionValueAST unwrappedValue (void) const ;

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
  public: static GGS_collectionValueAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_collectionValueAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_collectionValueAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @collectionValueElementListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_collectionValueElementListForGeneration final {
  public: DownEnumerator_collectionValueElementListForGeneration (const class GGS_collectionValueElementListForGeneration & inList) ;

  public: ~ DownEnumerator_collectionValueElementListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticExpressionForGeneration current_expression (LOCATION_ARGS) const ;
  public: class GGS_location current_location (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_collectionValueElementListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_collectionValueElementListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_collectionValueElementListForGeneration (const DownEnumerator_collectionValueElementListForGeneration &) = delete ;
  private: DownEnumerator_collectionValueElementListForGeneration & operator = (const DownEnumerator_collectionValueElementListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_collectionValueElementListForGeneration final {
  public: UpEnumerator_collectionValueElementListForGeneration (const class GGS_collectionValueElementListForGeneration & inList)  ;

  public: ~ UpEnumerator_collectionValueElementListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticExpressionForGeneration current_expression (LOCATION_ARGS) const ;
  public: class GGS_location current_location (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_collectionValueElementListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_collectionValueElementListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_collectionValueElementListForGeneration (const UpEnumerator_collectionValueElementListForGeneration &) = delete ;
  private: UpEnumerator_collectionValueElementListForGeneration & operator = (const UpEnumerator_collectionValueElementListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @collectionValueElementListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_collectionValueElementListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_collectionValueElementListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_collectionValueElementListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_collectionValueElementListForGeneration (void) = default ;

//--- Copy
  public: GGS_collectionValueElementListForGeneration (const GGS_collectionValueElementListForGeneration &) = default ;
  public: GGS_collectionValueElementListForGeneration & operator = (const GGS_collectionValueElementListForGeneration &) = default ;

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
  public : inline GenericArray <GGS_collectionValueElementListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_collectionValueElementListForGeneration subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_collectionValueElementListForGeneration (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_semanticExpressionForGeneration & in_expression,
                                                 const class GGS_location & in_location
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_collectionValueElementListForGeneration init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_collectionValueElementListForGeneration extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_collectionValueElementListForGeneration class_func_listWithValue (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                                             const class GGS_location & inOperand1
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_collectionValueElementListForGeneration inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_semanticExpressionForGeneration & inOperand0,
                                   const class GGS_location & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_collectionValueElementListForGeneration_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_collectionValueElementListForGeneration add_operation (const GGS_collectionValueElementListForGeneration & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_semanticExpressionForGeneration constinArgument0,
                              class GGS_location constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_semanticExpressionForGeneration constinArgument0,
                                     class GGS_location constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_semanticExpressionForGeneration & outArgument0,
                                class GGS_location & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_semanticExpressionForGeneration & outArgument0,
                               class GGS_location & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_semanticExpressionForGeneration & outArgument0,
                                     class GGS_location & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setExpressionAtIndex (class GGS_semanticExpressionForGeneration constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setLocationAtIndex (class GGS_location constinArgument0,
                                          class GGS_uint constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_semanticExpressionForGeneration & outArgument0,
                             class GGS_location & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_semanticExpressionForGeneration & outArgument0,
                            class GGS_location & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_semanticExpressionForGeneration getter_expressionAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_location getter_locationAtIndex (const class GGS_uint & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_collectionValueElementListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_collectionValueElementListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_collectionValueElementListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_collectionValueElementListForGeneration ;
  friend class DownEnumerator_collectionValueElementListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueElementListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @collectionValueElementListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_collectionValueElementListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionForGeneration mProperty_expression ;
  public: inline GGS_semanticExpressionForGeneration readProperty_expression (void) const {
    return mProperty_expression ;
  }

  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_collectionValueElementListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExpression (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_expression = inValue ;
  }

  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_collectionValueElementListForGeneration_2E_element (const GGS_semanticExpressionForGeneration & in_expression,
                                                                  const GGS_location & in_location) ;

//--------------------------------- Copy constructor
  public: GGS_collectionValueElementListForGeneration_2E_element (const GGS_collectionValueElementListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_collectionValueElementListForGeneration_2E_element & operator = (const GGS_collectionValueElementListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_collectionValueElementListForGeneration_2E_element init_21__21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                                      const class GGS_location & inOperand1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_collectionValueElementListForGeneration_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueElementListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @expressionCollectionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_expressionCollectionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_expressionCollectionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_expressionCollectionForGeneration (const class cPtr_expressionCollectionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_collectionValueElementListForGeneration readProperty_expressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_expressionCollectionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                         const class GGS_location & inOperand1,
                                                                         const class GGS_collectionValueElementListForGeneration & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_expressionCollectionForGeneration extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_expressionCollectionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_expressionCollectionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @expressionCollectionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_expressionCollectionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void expressionCollectionForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   const class GGS_collectionValueElementListForGeneration & inOperand2,
                                                                   Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_collectionValueElementListForGeneration mProperty_expressionList ;


//--- Default constructor
  public: cPtr_expressionCollectionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_expressionCollectionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                  const GGS_location & in_mLocation,
                                                  const GGS_collectionValueElementListForGeneration & in_expressionList,
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
// Phase 1: @expressionCollectionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_expressionCollectionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_expressionCollectionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_expressionCollectionForGeneration_2E_weak (const class GGS_expressionCollectionForGeneration & inSource) ;

  public: GGS_expressionCollectionForGeneration_2E_weak & operator = (const class GGS_expressionCollectionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_expressionCollectionForGeneration_2E_weak init_nil (void) {
    GGS_expressionCollectionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_expressionCollectionForGeneration bang_expressionCollectionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_expressionCollectionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_expressionCollectionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_expressionCollectionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_expressionCollectionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_expressionCollectionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @varInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_varInExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_varInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_varInExpressionAST (const class cPtr_varInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mVarName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_varInExpressionAST init_21_ (const class GGS_lstring & inOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_varInExpressionAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_varInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @varInExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_varInExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void varInExpressionAST_init_21_ (const class GGS_lstring & inOperand0,
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
  public: GGS_lstring mProperty_mVarName ;


//--- Default constructor
  public: cPtr_varInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_varInExpressionAST (const GGS_lstring & in_mVarName,
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
// Phase 1: @varInExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_varInExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_varInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_varInExpressionAST_2E_weak (const class GGS_varInExpressionAST & inSource) ;

  public: GGS_varInExpressionAST_2E_weak & operator = (const class GGS_varInExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_varInExpressionAST_2E_weak init_nil (void) {
    GGS_varInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_varInExpressionAST bang_varInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_varInExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_varInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_varInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_varInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @varInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_varInExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_varInExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_varInExpressionForGeneration (const class cPtr_varInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mCppVarName (void) const ;

  public: class GGS_string readProperty_mNameForCheckingFormalParameterUsing (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_varInExpressionForGeneration init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                        const class GGS_location & inOperand1,
                                                                        const class GGS_string & inOperand2,
                                                                        const class GGS_string & inOperand3,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_varInExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_varInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @varInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_varInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void varInExpressionForGeneration_init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                  const class GGS_location & inOperand1,
                                                                  const class GGS_string & inOperand2,
                                                                  const class GGS_string & inOperand3,
                                                                  Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mCppVarName ;
  public: GGS_string mProperty_mNameForCheckingFormalParameterUsing ;


//--- Default constructor
  public: cPtr_varInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_varInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                             const GGS_location & in_mLocation,
                                             const GGS_string & in_mCppVarName,
                                             const GGS_string & in_mNameForCheckingFormalParameterUsing,
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
// Phase 1: @varInExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_varInExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_varInExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_varInExpressionForGeneration_2E_weak (const class GGS_varInExpressionForGeneration & inSource) ;

  public: GGS_varInExpressionForGeneration_2E_weak & operator = (const class GGS_varInExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_varInExpressionForGeneration_2E_weak init_nil (void) {
    GGS_varInExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_varInExpressionForGeneration bang_varInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_varInExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_varInExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_varInExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_varInExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@actualOutputArgumentList initializerSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_initializerSignature (const class GGS_actualOutputArgumentList & inObject,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@actualOutputArgumentList subscriptSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_subscriptSignature (const class GGS_actualOutputArgumentList & inObject,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@actualOutputArgumentList enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInSemanticContext (const class GGS_actualOutputArgumentList inObject,
                                             class GGS_unifiedTypeMap & io_ioTypeMap,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_optionExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_optionExpressionAST (const class cPtr_optionExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mOptionComponentName (void) const ;

  public: class GGS_lstring readProperty_mOptionEntryName (void) const ;

  public: class GGS_lstring readProperty_mOptionGetterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionExpressionAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                           const class GGS_lstring & inOperand1,
                                                           const class GGS_lstring & inOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionExpressionAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @optionExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_optionExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void optionExpressionAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_lstring & inOperand2,
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
  public: GGS_lstring mProperty_mOptionComponentName ;
  public: GGS_lstring mProperty_mOptionEntryName ;
  public: GGS_lstring mProperty_mOptionGetterName ;


//--- Default constructor
  public: cPtr_optionExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_optionExpressionAST (const GGS_lstring & in_mOptionComponentName,
                                    const GGS_lstring & in_mOptionEntryName,
                                    const GGS_lstring & in_mOptionGetterName,
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
// Phase 1: @optionExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_optionExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_optionExpressionAST_2E_weak (const class GGS_optionExpressionAST & inSource) ;

  public: GGS_optionExpressionAST_2E_weak & operator = (const class GGS_optionExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_optionExpressionAST_2E_weak init_nil (void) {
    GGS_optionExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_optionExpressionAST bang_optionExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_optionExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_optionExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionValueExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionValueExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_optionValueExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_optionValueExpressionForGeneration (const class cPtr_optionValueExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mOptionComponentIsPredefined (void) const ;

  public: class GGS_string readProperty_mOptionComponentName (void) const ;

  public: class GGS_string readProperty_mOptionEntryName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionValueExpressionForGeneration init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                  const class GGS_location & inOperand1,
                                                                                  const class GGS_bool & inOperand2,
                                                                                  const class GGS_string & inOperand3,
                                                                                  const class GGS_string & inOperand4,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionValueExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionValueExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @optionValueExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_optionValueExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void optionValueExpressionForGeneration_init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GGS_location & inOperand1,
                                                                            const class GGS_bool & inOperand2,
                                                                            const class GGS_string & inOperand3,
                                                                            const class GGS_string & inOperand4,
                                                                            Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mOptionComponentIsPredefined ;
  public: GGS_string mProperty_mOptionComponentName ;
  public: GGS_string mProperty_mOptionEntryName ;


//--- Default constructor
  public: cPtr_optionValueExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_optionValueExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                   const GGS_location & in_mLocation,
                                                   const GGS_bool & in_mOptionComponentIsPredefined,
                                                   const GGS_string & in_mOptionComponentName,
                                                   const GGS_string & in_mOptionEntryName,
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
// Phase 1: @optionValueExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionValueExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_optionValueExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_optionValueExpressionForGeneration_2E_weak (const class GGS_optionValueExpressionForGeneration & inSource) ;

  public: GGS_optionValueExpressionForGeneration_2E_weak & operator = (const class GGS_optionValueExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_optionValueExpressionForGeneration_2E_weak init_nil (void) {
    GGS_optionValueExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_optionValueExpressionForGeneration bang_optionValueExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_optionValueExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_optionValueExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionValueExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionValueExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionValueExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionCharExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionCharExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_optionCharExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_optionCharExpressionForGeneration (const class cPtr_optionCharExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mOptionComponentIsPredefined (void) const ;

  public: class GGS_string readProperty_mOptionComponentName (void) const ;

  public: class GGS_string readProperty_mOptionEntryName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionCharExpressionForGeneration init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                 const class GGS_location & inOperand1,
                                                                                 const class GGS_bool & inOperand2,
                                                                                 const class GGS_string & inOperand3,
                                                                                 const class GGS_string & inOperand4,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionCharExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionCharExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @optionCharExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_optionCharExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void optionCharExpressionForGeneration_init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GGS_location & inOperand1,
                                                                           const class GGS_bool & inOperand2,
                                                                           const class GGS_string & inOperand3,
                                                                           const class GGS_string & inOperand4,
                                                                           Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mOptionComponentIsPredefined ;
  public: GGS_string mProperty_mOptionComponentName ;
  public: GGS_string mProperty_mOptionEntryName ;


//--- Default constructor
  public: cPtr_optionCharExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_optionCharExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                  const GGS_location & in_mLocation,
                                                  const GGS_bool & in_mOptionComponentIsPredefined,
                                                  const GGS_string & in_mOptionComponentName,
                                                  const GGS_string & in_mOptionEntryName,
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
// Phase 1: @optionCharExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionCharExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_optionCharExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_optionCharExpressionForGeneration_2E_weak (const class GGS_optionCharExpressionForGeneration & inSource) ;

  public: GGS_optionCharExpressionForGeneration_2E_weak & operator = (const class GGS_optionCharExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_optionCharExpressionForGeneration_2E_weak init_nil (void) {
    GGS_optionCharExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_optionCharExpressionForGeneration bang_optionCharExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_optionCharExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_optionCharExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionCharExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionCharExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionCharExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionStringExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionStringExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_optionStringExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_optionStringExpressionForGeneration (const class cPtr_optionStringExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mOptionComponentIsPredefined (void) const ;

  public: class GGS_string readProperty_mOptionComponentName (void) const ;

  public: class GGS_string readProperty_mOptionEntryName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionStringExpressionForGeneration init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                   const class GGS_location & inOperand1,
                                                                                   const class GGS_bool & inOperand2,
                                                                                   const class GGS_string & inOperand3,
                                                                                   const class GGS_string & inOperand4,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionStringExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionStringExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @optionStringExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_optionStringExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void optionStringExpressionForGeneration_init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                             const class GGS_location & inOperand1,
                                                                             const class GGS_bool & inOperand2,
                                                                             const class GGS_string & inOperand3,
                                                                             const class GGS_string & inOperand4,
                                                                             Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mOptionComponentIsPredefined ;
  public: GGS_string mProperty_mOptionComponentName ;
  public: GGS_string mProperty_mOptionEntryName ;


//--- Default constructor
  public: cPtr_optionStringExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_optionStringExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                    const GGS_location & in_mLocation,
                                                    const GGS_bool & in_mOptionComponentIsPredefined,
                                                    const GGS_string & in_mOptionComponentName,
                                                    const GGS_string & in_mOptionEntryName,
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
// Phase 1: @optionStringExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionStringExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_optionStringExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_optionStringExpressionForGeneration_2E_weak (const class GGS_optionStringExpressionForGeneration & inSource) ;

  public: GGS_optionStringExpressionForGeneration_2E_weak & operator = (const class GGS_optionStringExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_optionStringExpressionForGeneration_2E_weak init_nil (void) {
    GGS_optionStringExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_optionStringExpressionForGeneration bang_optionStringExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_optionStringExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_optionStringExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionStringExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionStringExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionStringExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionCommentExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionCommentExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_optionCommentExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_optionCommentExpressionForGeneration (const class cPtr_optionCommentExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mOptionComponentIsPredefined (void) const ;

  public: class GGS_string readProperty_mOptionComponentName (void) const ;

  public: class GGS_string readProperty_mOptionEntryName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionCommentExpressionForGeneration init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                    const class GGS_location & inOperand1,
                                                                                    const class GGS_bool & inOperand2,
                                                                                    const class GGS_string & inOperand3,
                                                                                    const class GGS_string & inOperand4,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionCommentExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionCommentExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @optionCommentExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_optionCommentExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void optionCommentExpressionForGeneration_init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                              const class GGS_location & inOperand1,
                                                                              const class GGS_bool & inOperand2,
                                                                              const class GGS_string & inOperand3,
                                                                              const class GGS_string & inOperand4,
                                                                              Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mOptionComponentIsPredefined ;
  public: GGS_string mProperty_mOptionComponentName ;
  public: GGS_string mProperty_mOptionEntryName ;


//--- Default constructor
  public: cPtr_optionCommentExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_optionCommentExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_location & in_mLocation,
                                                     const GGS_bool & in_mOptionComponentIsPredefined,
                                                     const GGS_string & in_mOptionComponentName,
                                                     const GGS_string & in_mOptionEntryName,
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
// Phase 1: @optionCommentExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionCommentExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_optionCommentExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_optionCommentExpressionForGeneration_2E_weak (const class GGS_optionCommentExpressionForGeneration & inSource) ;

  public: GGS_optionCommentExpressionForGeneration_2E_weak & operator = (const class GGS_optionCommentExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_optionCommentExpressionForGeneration_2E_weak init_nil (void) {
    GGS_optionCommentExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_optionCommentExpressionForGeneration bang_optionCommentExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_optionCommentExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_optionCommentExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionCommentExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionCommentExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalCharExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalCharExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_literalCharExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalCharExpressionAST (const class cPtr_literalCharExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lchar readProperty_mCharacter (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalCharExpressionAST init_21_ (const class GGS_lchar & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalCharExpressionAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalCharExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalCharExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @literalCharExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_literalCharExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalCharExpressionAST_init_21_ (const class GGS_lchar & inOperand0,
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
  public: GGS_lchar mProperty_mCharacter ;


//--- Default constructor
  public: cPtr_literalCharExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalCharExpressionAST (const GGS_lchar & in_mCharacter,
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
// Phase 1: @literalCharExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalCharExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_literalCharExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_literalCharExpressionAST_2E_weak (const class GGS_literalCharExpressionAST & inSource) ;

  public: GGS_literalCharExpressionAST_2E_weak & operator = (const class GGS_literalCharExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_literalCharExpressionAST_2E_weak init_nil (void) {
    GGS_literalCharExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_literalCharExpressionAST bang_literalCharExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_literalCharExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_literalCharExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literalCharExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalCharExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalCharExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalCharExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalCharExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_literalCharExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalCharExpressionForGeneration (const class cPtr_literalCharExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_char readProperty_mCharacter (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalCharExpressionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                          const class GGS_location & inOperand1,
                                                                          const class GGS_char & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalCharExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalCharExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @literalCharExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_literalCharExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalCharExpressionForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                    const class GGS_location & inOperand1,
                                                                    const class GGS_char & inOperand2,
                                                                    Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_char mProperty_mCharacter ;


//--- Default constructor
  public: cPtr_literalCharExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalCharExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                   const GGS_location & in_mLocation,
                                                   const GGS_char & in_mCharacter,
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
// Phase 1: @literalCharExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalCharExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_literalCharExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_literalCharExpressionForGeneration_2E_weak (const class GGS_literalCharExpressionForGeneration & inSource) ;

  public: GGS_literalCharExpressionForGeneration_2E_weak & operator = (const class GGS_literalCharExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_literalCharExpressionForGeneration_2E_weak init_nil (void) {
    GGS_literalCharExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_literalCharExpressionForGeneration bang_literalCharExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_literalCharExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_literalCharExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literalCharExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalCharExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalCharExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalBigIntExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalBigIntExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_literalBigIntExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalBigIntExpressionAST (const class cPtr_literalBigIntExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lbigint readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalBigIntExpressionAST init_21_ (const class GGS_lbigint & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalBigIntExpressionAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalBigIntExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBigIntExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @literalBigIntExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_literalBigIntExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalBigIntExpressionAST_init_21_ (const class GGS_lbigint & inOperand0,
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
  public: GGS_lbigint mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalBigIntExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalBigIntExpressionAST (const GGS_lbigint & in_mValue,
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
// Phase 1: @literalBigIntExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalBigIntExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_literalBigIntExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_literalBigIntExpressionAST_2E_weak (const class GGS_literalBigIntExpressionAST & inSource) ;

  public: GGS_literalBigIntExpressionAST_2E_weak & operator = (const class GGS_literalBigIntExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_literalBigIntExpressionAST_2E_weak init_nil (void) {
    GGS_literalBigIntExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_literalBigIntExpressionAST bang_literalBigIntExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_literalBigIntExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_literalBigIntExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literalBigIntExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalBigIntExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBigIntExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalUIntExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalUIntExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_literalUIntExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalUIntExpressionForGeneration (const class cPtr_literalUIntExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalUIntExpressionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                          const class GGS_location & inOperand1,
                                                                          const class GGS_uint & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalUIntExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalUIntExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @literalUIntExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_literalUIntExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalUIntExpressionForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                    const class GGS_location & inOperand1,
                                                                    const class GGS_uint & inOperand2,
                                                                    Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalUIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalUIntExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                   const GGS_location & in_mLocation,
                                                   const GGS_uint & in_mValue,
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
// Phase 1: @literalUIntExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalUIntExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_literalUIntExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_literalUIntExpressionForGeneration_2E_weak (const class GGS_literalUIntExpressionForGeneration & inSource) ;

  public: GGS_literalUIntExpressionForGeneration_2E_weak & operator = (const class GGS_literalUIntExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_literalUIntExpressionForGeneration_2E_weak init_nil (void) {
    GGS_literalUIntExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_literalUIntExpressionForGeneration bang_literalUIntExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_literalUIntExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_literalUIntExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literalUIntExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalUIntExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalUInt_36__34_ExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalUInt_36__34_ExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_literalUInt_36__34_ExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalUInt_36__34_ExpressionForGeneration (const class cPtr_literalUInt_36__34_ExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint_36__34_ readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalUInt_36__34_ExpressionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                  const class GGS_location & inOperand1,
                                                                                  const class GGS_uint_36__34_ & inOperand2,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalUInt_36__34_ExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalUInt_36__34_ExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @literalUInt64ExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_literalUInt_36__34_ExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalUInt_36__34_ExpressionForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GGS_location & inOperand1,
                                                                            const class GGS_uint_36__34_ & inOperand2,
                                                                            Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint_36__34_ mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalUInt_36__34_ExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalUInt_36__34_ExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                           const GGS_location & in_mLocation,
                                                           const GGS_uint_36__34_ & in_mValue,
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
// Phase 1: @literalUInt_36__34_ExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak (const class GGS_literalUInt_36__34_ExpressionForGeneration & inSource) ;

  public: GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak & operator = (const class GGS_literalUInt_36__34_ExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak init_nil (void) {
    GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_literalUInt_36__34_ExpressionForGeneration bang_literalUInt_36__34_ExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_literalUInt_36__34_ExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalUInt_36__34_ExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalSIntExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalSIntExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_literalSIntExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalSIntExpressionForGeneration (const class cPtr_literalSIntExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_sint readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalSIntExpressionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                          const class GGS_location & inOperand1,
                                                                          const class GGS_sint & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalSIntExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalSIntExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @literalSIntExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_literalSIntExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalSIntExpressionForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                    const class GGS_location & inOperand1,
                                                                    const class GGS_sint & inOperand2,
                                                                    Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_sint mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalSIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalSIntExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                   const GGS_location & in_mLocation,
                                                   const GGS_sint & in_mValue,
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
// Phase 1: @literalSIntExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalSIntExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_literalSIntExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_literalSIntExpressionForGeneration_2E_weak (const class GGS_literalSIntExpressionForGeneration & inSource) ;

  public: GGS_literalSIntExpressionForGeneration_2E_weak & operator = (const class GGS_literalSIntExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_literalSIntExpressionForGeneration_2E_weak init_nil (void) {
    GGS_literalSIntExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_literalSIntExpressionForGeneration bang_literalSIntExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_literalSIntExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_literalSIntExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literalSIntExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalSIntExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalSInt_36__34_ExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalSInt_36__34_ExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_literalSInt_36__34_ExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalSInt_36__34_ExpressionForGeneration (const class cPtr_literalSInt_36__34_ExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_sint_36__34_ readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalSInt_36__34_ExpressionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                  const class GGS_location & inOperand1,
                                                                                  const class GGS_sint_36__34_ & inOperand2,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalSInt_36__34_ExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalSInt_36__34_ExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @literalSInt64ExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_literalSInt_36__34_ExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalSInt_36__34_ExpressionForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GGS_location & inOperand1,
                                                                            const class GGS_sint_36__34_ & inOperand2,
                                                                            Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_sint_36__34_ mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalSInt_36__34_ExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalSInt_36__34_ExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                           const GGS_location & in_mLocation,
                                                           const GGS_sint_36__34_ & in_mValue,
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
// Phase 1: @literalSInt_36__34_ExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak (const class GGS_literalSInt_36__34_ExpressionForGeneration & inSource) ;

  public: GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak & operator = (const class GGS_literalSInt_36__34_ExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak init_nil (void) {
    GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_literalSInt_36__34_ExpressionForGeneration bang_literalSInt_36__34_ExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_literalSInt_36__34_ExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalSInt_36__34_ExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalBigIntExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalBigIntExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_literalBigIntExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalBigIntExpressionForGeneration (const class cPtr_literalBigIntExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bigint readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalBigIntExpressionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GGS_location & inOperand1,
                                                                            const class GGS_bigint & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalBigIntExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalBigIntExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @literalBigIntExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_literalBigIntExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalBigIntExpressionForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                      const class GGS_location & inOperand1,
                                                                      const class GGS_bigint & inOperand2,
                                                                      Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bigint mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalBigIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalBigIntExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_location & in_mLocation,
                                                     const GGS_bigint & in_mValue,
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
// Phase 1: @literalBigIntExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalBigIntExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_literalBigIntExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_literalBigIntExpressionForGeneration_2E_weak (const class GGS_literalBigIntExpressionForGeneration & inSource) ;

  public: GGS_literalBigIntExpressionForGeneration_2E_weak & operator = (const class GGS_literalBigIntExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_literalBigIntExpressionForGeneration_2E_weak init_nil (void) {
    GGS_literalBigIntExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_literalBigIntExpressionForGeneration bang_literalBigIntExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_literalBigIntExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_literalBigIntExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literalBigIntExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalBigIntExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalStringExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalStringExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_literalStringExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalStringExpressionAST (const class cPtr_literalStringExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mLocation (void) const ;

  public: class GGS_stringlist readProperty_mStringSequence (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalStringExpressionAST init_21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_stringlist & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalStringExpressionAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalStringExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @literalStringExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_literalStringExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalStringExpressionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                        const class GGS_stringlist & inOperand1,
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
  public: GGS_stringlist mProperty_mStringSequence ;


//--- Default constructor
  public: cPtr_literalStringExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalStringExpressionAST (const GGS_location & in_mLocation,
                                           const GGS_stringlist & in_mStringSequence,
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
// Phase 1: @literalStringExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalStringExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_literalStringExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_literalStringExpressionAST_2E_weak (const class GGS_literalStringExpressionAST & inSource) ;

  public: GGS_literalStringExpressionAST_2E_weak & operator = (const class GGS_literalStringExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_literalStringExpressionAST_2E_weak init_nil (void) {
    GGS_literalStringExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_literalStringExpressionAST bang_literalStringExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_literalStringExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_literalStringExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literalStringExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalStringExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalStringExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalStringExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_literalStringExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalStringExpressionForGeneration (const class cPtr_literalStringExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mString (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalStringExpressionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GGS_location & inOperand1,
                                                                            const class GGS_string & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalStringExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalStringExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @literalStringExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_literalStringExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalStringExpressionForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                      const class GGS_location & inOperand1,
                                                                      const class GGS_string & inOperand2,
                                                                      Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mString ;


//--- Default constructor
  public: cPtr_literalStringExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalStringExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_location & in_mLocation,
                                                     const GGS_string & in_mString,
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
// Phase 1: @literalStringExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalStringExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_literalStringExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_literalStringExpressionForGeneration_2E_weak (const class GGS_literalStringExpressionForGeneration & inSource) ;

  public: GGS_literalStringExpressionForGeneration_2E_weak & operator = (const class GGS_literalStringExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_literalStringExpressionForGeneration_2E_weak init_nil (void) {
    GGS_literalStringExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_literalStringExpressionForGeneration bang_literalStringExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_literalStringExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_literalStringExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literalStringExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalStringExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexiqueIntrospectionExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexiqueIntrospectionExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_lexiqueIntrospectionExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexiqueIntrospectionExpressionAST (const class cPtr_lexiqueIntrospectionExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLexiqueComponentName (void) const ;

  public: class GGS_lstring readProperty_mLexiqueGetterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexiqueIntrospectionExpressionAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexiqueIntrospectionExpressionAST extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexiqueIntrospectionExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexiqueIntrospectionExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexiqueIntrospectionExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexiqueIntrospectionExpressionAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_lstring & inOperand1,
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
  public: GGS_lstring mProperty_mLexiqueComponentName ;
  public: GGS_lstring mProperty_mLexiqueGetterName ;


//--- Default constructor
  public: cPtr_lexiqueIntrospectionExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexiqueIntrospectionExpressionAST (const GGS_lstring & in_mLexiqueComponentName,
                                                  const GGS_lstring & in_mLexiqueGetterName,
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
// Phase 1: @lexiqueIntrospectionExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexiqueIntrospectionExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexiqueIntrospectionExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexiqueIntrospectionExpressionAST_2E_weak (const class GGS_lexiqueIntrospectionExpressionAST & inSource) ;

  public: GGS_lexiqueIntrospectionExpressionAST_2E_weak & operator = (const class GGS_lexiqueIntrospectionExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexiqueIntrospectionExpressionAST_2E_weak init_nil (void) {
    GGS_lexiqueIntrospectionExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexiqueIntrospectionExpressionAST bang_lexiqueIntrospectionExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexiqueIntrospectionExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_lexiqueIntrospectionExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexiqueIntrospectionExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexiqueIntrospectionExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexiqueIntrospectionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexiqueIntrospectionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_lexiqueIntrospectionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexiqueIntrospectionForGeneration (const class cPtr_lexiqueIntrospectionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mLexiqueComponentName (void) const ;

  public: class GGS_string readProperty_mLexiqueGetterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexiqueIntrospectionForGeneration init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                             const class GGS_location & inOperand1,
                                                                             const class GGS_string & inOperand2,
                                                                             const class GGS_string & inOperand3,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexiqueIntrospectionForGeneration extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexiqueIntrospectionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexiqueIntrospectionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_lexiqueIntrospectionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexiqueIntrospectionForGeneration_init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                       const class GGS_location & inOperand1,
                                                                       const class GGS_string & inOperand2,
                                                                       const class GGS_string & inOperand3,
                                                                       Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mLexiqueComponentName ;
  public: GGS_string mProperty_mLexiqueGetterName ;


//--- Default constructor
  public: cPtr_lexiqueIntrospectionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexiqueIntrospectionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                  const GGS_location & in_mLocation,
                                                  const GGS_string & in_mLexiqueComponentName,
                                                  const GGS_string & in_mLexiqueGetterName,
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
// Phase 1: @lexiqueIntrospectionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexiqueIntrospectionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexiqueIntrospectionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexiqueIntrospectionForGeneration_2E_weak (const class GGS_lexiqueIntrospectionForGeneration & inSource) ;

  public: GGS_lexiqueIntrospectionForGeneration_2E_weak & operator = (const class GGS_lexiqueIntrospectionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexiqueIntrospectionForGeneration_2E_weak init_nil (void) {
    GGS_lexiqueIntrospectionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexiqueIntrospectionForGeneration bang_lexiqueIntrospectionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexiqueIntrospectionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_lexiqueIntrospectionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexiqueIntrospectionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexiqueIntrospectionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unaryMinusExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_unaryMinusExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_unaryMinusExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_unaryMinusExpressionAST (const class cPtr_unaryMinusExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unaryMinusExpressionAST init_21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_semanticExpressionAST & inOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unaryMinusExpressionAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryMinusExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @unaryMinusExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_unaryMinusExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void unaryMinusExpressionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                     const class GGS_semanticExpressionAST & inOperand1,
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
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_unaryMinusExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_unaryMinusExpressionAST (const GGS_location & in_mOperatorLocation,
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
// Phase 1: @unaryMinusExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_unaryMinusExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_unaryMinusExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_unaryMinusExpressionAST_2E_weak (const class GGS_unaryMinusExpressionAST & inSource) ;

  public: GGS_unaryMinusExpressionAST_2E_weak & operator = (const class GGS_unaryMinusExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_unaryMinusExpressionAST_2E_weak init_nil (void) {
    GGS_unaryMinusExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_unaryMinusExpressionAST bang_unaryMinusExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_unaryMinusExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_unaryMinusExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unaryMinusExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryMinusExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unaryMinusExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_unaryMinusExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_unaryMinusExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_unaryMinusExpressionForGeneration (const class cPtr_unaryMinusExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unaryMinusExpressionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                         const class GGS_location & inOperand1,
                                                                         const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unaryMinusExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryMinusExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @unaryMinusExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_unaryMinusExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void unaryMinusExpressionForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                   Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;


//--- Default constructor
  public: cPtr_unaryMinusExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_unaryMinusExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                  const GGS_location & in_mLocation,
                                                  const GGS_semanticExpressionForGeneration & in_mExpression,
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
// Phase 1: @unaryMinusExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_unaryMinusExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_unaryMinusExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_unaryMinusExpressionForGeneration_2E_weak (const class GGS_unaryMinusExpressionForGeneration & inSource) ;

  public: GGS_unaryMinusExpressionForGeneration_2E_weak & operator = (const class GGS_unaryMinusExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_unaryMinusExpressionForGeneration_2E_weak init_nil (void) {
    GGS_unaryMinusExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_unaryMinusExpressionForGeneration bang_unaryMinusExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_unaryMinusExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_unaryMinusExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unaryMinusExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryMinusExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @notExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_notExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_notExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_notExpressionAST (const class cPtr_notExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_notExpressionAST init_21__21_ (const class GGS_location & inOperand0,
                                                    const class GGS_semanticExpressionAST & inOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_notExpressionAST extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_notExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_notExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @notExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_notExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void notExpressionAST_init_21__21_ (const class GGS_location & inOperand0,
                                              const class GGS_semanticExpressionAST & inOperand1,
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
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_notExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_notExpressionAST (const GGS_location & in_mOperatorLocation,
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
// Phase 1: @notExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_notExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_notExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_notExpressionAST_2E_weak (const class GGS_notExpressionAST & inSource) ;

  public: GGS_notExpressionAST_2E_weak & operator = (const class GGS_notExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_notExpressionAST_2E_weak init_nil (void) {
    GGS_notExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_notExpressionAST bang_notExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_notExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_notExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_notExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_notExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_notExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @notExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_notExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_notExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_notExpressionForGeneration (const class cPtr_notExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_notExpressionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                  const class GGS_location & inOperand1,
                                                                  const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_notExpressionForGeneration extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_notExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_notExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @notExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_notExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void notExpressionForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                            const class GGS_location & inOperand1,
                                                            const class GGS_semanticExpressionForGeneration & inOperand2,
                                                            Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;


//--- Default constructor
  public: cPtr_notExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_notExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                           const GGS_location & in_mLocation,
                                           const GGS_semanticExpressionForGeneration & in_mExpression,
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
// Phase 1: @notExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_notExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_notExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_notExpressionForGeneration_2E_weak (const class GGS_notExpressionForGeneration & inSource) ;

  public: GGS_notExpressionForGeneration_2E_weak & operator = (const class GGS_notExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_notExpressionForGeneration_2E_weak init_nil (void) {
    GGS_notExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_notExpressionForGeneration bang_notExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_notExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_notExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_notExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_notExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_notExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unaryWrappingMinusExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_unaryWrappingMinusExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_unaryWrappingMinusExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_unaryWrappingMinusExpressionAST (const class cPtr_unaryWrappingMinusExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unaryWrappingMinusExpressionAST init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_semanticExpressionAST & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unaryWrappingMinusExpressionAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryWrappingMinusExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @unaryWrappingMinusExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_unaryWrappingMinusExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void unaryWrappingMinusExpressionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_semanticExpressionAST & inOperand1,
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
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_unaryWrappingMinusExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_unaryWrappingMinusExpressionAST (const GGS_location & in_mOperatorLocation,
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
// Phase 1: @unaryWrappingMinusExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_unaryWrappingMinusExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_unaryWrappingMinusExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_unaryWrappingMinusExpressionAST_2E_weak (const class GGS_unaryWrappingMinusExpressionAST & inSource) ;

  public: GGS_unaryWrappingMinusExpressionAST_2E_weak & operator = (const class GGS_unaryWrappingMinusExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_unaryWrappingMinusExpressionAST_2E_weak init_nil (void) {
    GGS_unaryWrappingMinusExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_unaryWrappingMinusExpressionAST bang_unaryWrappingMinusExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_unaryWrappingMinusExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_unaryWrappingMinusExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unaryWrappingMinusExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryWrappingMinusExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unaryWrappingMinusExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_unaryWrappingMinusExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_unaryWrappingMinusExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_unaryWrappingMinusExpressionForGeneration (const class cPtr_unaryWrappingMinusExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unaryWrappingMinusExpressionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                 const class GGS_location & inOperand1,
                                                                                 const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unaryWrappingMinusExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryWrappingMinusExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @unaryWrappingMinusExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_unaryWrappingMinusExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void unaryWrappingMinusExpressionForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GGS_location & inOperand1,
                                                                           const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                           Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;


//--- Default constructor
  public: cPtr_unaryWrappingMinusExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_unaryWrappingMinusExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                          const GGS_location & in_mLocation,
                                                          const GGS_semanticExpressionForGeneration & in_mExpression,
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
// Phase 1: @unaryWrappingMinusExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_unaryWrappingMinusExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_unaryWrappingMinusExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_unaryWrappingMinusExpressionForGeneration_2E_weak (const class GGS_unaryWrappingMinusExpressionForGeneration & inSource) ;

  public: GGS_unaryWrappingMinusExpressionForGeneration_2E_weak & operator = (const class GGS_unaryWrappingMinusExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_unaryWrappingMinusExpressionForGeneration_2E_weak init_nil (void) {
    GGS_unaryWrappingMinusExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_unaryWrappingMinusExpressionForGeneration bang_unaryWrappingMinusExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_unaryWrappingMinusExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_unaryWrappingMinusExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unaryWrappingMinusExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryWrappingMinusExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperObjectInstanciationInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperObjectInstanciationInExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_filewrapperObjectInstanciationInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_filewrapperObjectInstanciationInExpressionAST (const class cPtr_filewrapperObjectInstanciationInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFilewrapperName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperObjectInstanciationInExpressionAST init_21_ (const class GGS_lstring & inOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperObjectInstanciationInExpressionAST extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperObjectInstanciationInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @filewrapperObjectInstanciationInExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperObjectInstanciationInExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperObjectInstanciationInExpressionAST_init_21_ (const class GGS_lstring & inOperand0,
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
  public: GGS_lstring mProperty_mFilewrapperName ;


//--- Default constructor
  public: cPtr_filewrapperObjectInstanciationInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperObjectInstanciationInExpressionAST (const GGS_lstring & in_mFilewrapperName,
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
// Phase 1: @filewrapperObjectInstanciationInExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak (const class GGS_filewrapperObjectInstanciationInExpressionAST & inSource) ;

  public: GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak & operator = (const class GGS_filewrapperObjectInstanciationInExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak init_nil (void) {
    GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_filewrapperObjectInstanciationInExpressionAST bang_filewrapperObjectInstanciationInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_filewrapperObjectInstanciationInExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperObjectInstanciationInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperInExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_filewrapperInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_filewrapperInExpressionAST (const class cPtr_filewrapperInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFilewrapperName (void) const ;

  public: class GGS_lstring readProperty_mFilewrapperPath (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperInExpressionAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperInExpressionAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperInExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @filewrapperInExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperInExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperInExpressionAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                        const class GGS_lstring & inOperand1,
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
  public: GGS_lstring mProperty_mFilewrapperName ;
  public: GGS_lstring mProperty_mFilewrapperPath ;


//--- Default constructor
  public: cPtr_filewrapperInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperInExpressionAST (const GGS_lstring & in_mFilewrapperName,
                                           const GGS_lstring & in_mFilewrapperPath,
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
// Phase 1: @filewrapperInExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperInExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_filewrapperInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_filewrapperInExpressionAST_2E_weak (const class GGS_filewrapperInExpressionAST & inSource) ;

  public: GGS_filewrapperInExpressionAST_2E_weak & operator = (const class GGS_filewrapperInExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_filewrapperInExpressionAST_2E_weak init_nil (void) {
    GGS_filewrapperInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_filewrapperInExpressionAST bang_filewrapperInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_filewrapperInExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_filewrapperInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperTemplateInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperTemplateInExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_filewrapperTemplateInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_filewrapperTemplateInExpressionAST (const class cPtr_filewrapperTemplateInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFilewrapperName (void) const ;

  public: class GGS_lstring readProperty_mFilewrapperTemplateName (void) const ;

  public: class GGS_actualOutputArgumentList readProperty_mExpressions (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperTemplateInExpressionAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_actualOutputArgumentList & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperTemplateInExpressionAST extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperTemplateInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @filewrapperTemplateInExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperTemplateInExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperTemplateInExpressionAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_actualOutputArgumentList & inOperand2,
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
  public: GGS_lstring mProperty_mFilewrapperName ;
  public: GGS_lstring mProperty_mFilewrapperTemplateName ;
  public: GGS_actualOutputArgumentList mProperty_mExpressions ;


//--- Default constructor
  public: cPtr_filewrapperTemplateInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperTemplateInExpressionAST (const GGS_lstring & in_mFilewrapperName,
                                                   const GGS_lstring & in_mFilewrapperTemplateName,
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
// Phase 1: @filewrapperTemplateInExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperTemplateInExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_filewrapperTemplateInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_filewrapperTemplateInExpressionAST_2E_weak (const class GGS_filewrapperTemplateInExpressionAST & inSource) ;

  public: GGS_filewrapperTemplateInExpressionAST_2E_weak & operator = (const class GGS_filewrapperTemplateInExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_filewrapperTemplateInExpressionAST_2E_weak init_nil (void) {
    GGS_filewrapperTemplateInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_filewrapperTemplateInExpressionAST bang_filewrapperTemplateInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_filewrapperTemplateInExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_filewrapperTemplateInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperTemplateInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperTemplateInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperInExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_filewrapperInExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_filewrapperInExpressionForGeneration (const class cPtr_filewrapperInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mFilewrapperName (void) const ;

  public: class GGS_string readProperty_mFilewrapperPath (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperInExpressionForGeneration init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                const class GGS_location & inOperand1,
                                                                                const class GGS_string & inOperand2,
                                                                                const class GGS_string & inOperand3,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperInExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @filewrapperInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperInExpressionForGeneration_init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                          const class GGS_location & inOperand1,
                                                                          const class GGS_string & inOperand2,
                                                                          const class GGS_string & inOperand3,
                                                                          Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mFilewrapperName ;
  public: GGS_string mProperty_mFilewrapperPath ;


//--- Default constructor
  public: cPtr_filewrapperInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_location & in_mLocation,
                                                     const GGS_string & in_mFilewrapperName,
                                                     const GGS_string & in_mFilewrapperPath,
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
// Phase 1: @filewrapperInExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperInExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_filewrapperInExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_filewrapperInExpressionForGeneration_2E_weak (const class GGS_filewrapperInExpressionForGeneration & inSource) ;

  public: GGS_filewrapperInExpressionForGeneration_2E_weak & operator = (const class GGS_filewrapperInExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_filewrapperInExpressionForGeneration_2E_weak init_nil (void) {
    GGS_filewrapperInExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_filewrapperInExpressionForGeneration bang_filewrapperInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_filewrapperInExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_filewrapperInExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperInExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperInExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperTemplateInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperTemplateInExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_filewrapperTemplateInExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_filewrapperTemplateInExpressionForGeneration (const class cPtr_filewrapperTemplateInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mFilewrapperName (void) const ;

  public: class GGS_string readProperty_mFilewrapperTemplateName (void) const ;

  public: class GGS_semanticExpressionListForGeneration readProperty_mActualOutputParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperTemplateInExpressionForGeneration init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                            const class GGS_location & inOperand1,
                                                                                            const class GGS_string & inOperand2,
                                                                                            const class GGS_string & inOperand3,
                                                                                            const class GGS_semanticExpressionListForGeneration & inOperand4,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperTemplateInExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperTemplateInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @filewrapperTemplateInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperTemplateInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperTemplateInExpressionForGeneration_init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                      const class GGS_location & inOperand1,
                                                                                      const class GGS_string & inOperand2,
                                                                                      const class GGS_string & inOperand3,
                                                                                      const class GGS_semanticExpressionListForGeneration & inOperand4,
                                                                                      Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mFilewrapperName ;
  public: GGS_string mProperty_mFilewrapperTemplateName ;
  public: GGS_semanticExpressionListForGeneration mProperty_mActualOutputParameterList ;


//--- Default constructor
  public: cPtr_filewrapperTemplateInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperTemplateInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                             const GGS_location & in_mLocation,
                                                             const GGS_string & in_mFilewrapperName,
                                                             const GGS_string & in_mFilewrapperTemplateName,
                                                             const GGS_semanticExpressionListForGeneration & in_mActualOutputParameterList,
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
// Phase 1: @filewrapperTemplateInExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperTemplateInExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_filewrapperTemplateInExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_filewrapperTemplateInExpressionForGeneration_2E_weak (const class GGS_filewrapperTemplateInExpressionForGeneration & inSource) ;

  public: GGS_filewrapperTemplateInExpressionForGeneration_2E_weak & operator = (const class GGS_filewrapperTemplateInExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_filewrapperTemplateInExpressionForGeneration_2E_weak init_nil (void) {
    GGS_filewrapperTemplateInExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_filewrapperTemplateInExpressionForGeneration bang_filewrapperTemplateInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_filewrapperTemplateInExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_filewrapperTemplateInExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperTemplateInExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperTemplateInExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperStaticPathInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperStaticPathInExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_filewrapperStaticPathInExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_filewrapperStaticPathInExpressionForGeneration (const class cPtr_filewrapperStaticPathInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mFilewrapperName (void) const ;

  public: class GGS_uint readProperty_mFilewrapperFileIndex (void) const ;

  public: class GGS_bool readProperty_mIsTextFile (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperStaticPathInExpressionForGeneration init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                              const class GGS_location & inOperand1,
                                                                                              const class GGS_string & inOperand2,
                                                                                              const class GGS_uint & inOperand3,
                                                                                              const class GGS_bool & inOperand4,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperStaticPathInExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperStaticPathInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @filewrapperStaticPathInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperStaticPathInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperStaticPathInExpressionForGeneration_init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                        const class GGS_location & inOperand1,
                                                                                        const class GGS_string & inOperand2,
                                                                                        const class GGS_uint & inOperand3,
                                                                                        const class GGS_bool & inOperand4,
                                                                                        Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mFilewrapperName ;
  public: GGS_uint mProperty_mFilewrapperFileIndex ;
  public: GGS_bool mProperty_mIsTextFile ;


//--- Default constructor
  public: cPtr_filewrapperStaticPathInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperStaticPathInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                               const GGS_location & in_mLocation,
                                                               const GGS_string & in_mFilewrapperName,
                                                               const GGS_uint & in_mFilewrapperFileIndex,
                                                               const GGS_bool & in_mIsTextFile,
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
// Phase 1: @filewrapperStaticPathInExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak (const class GGS_filewrapperStaticPathInExpressionForGeneration & inSource) ;

  public: GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak & operator = (const class GGS_filewrapperStaticPathInExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak init_nil (void) {
    GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_filewrapperStaticPathInExpressionForGeneration bang_filewrapperStaticPathInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_filewrapperStaticPathInExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperStaticPathInExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @initializerCallAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_initializerCallAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_initializerCallAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_initializerCallAST (const class cPtr_initializerCallAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_actualOutputArgumentList readProperty_mExpressions (void) const ;

  public: class GGS_location readProperty_mEndOfExpressions (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_initializerCallAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_actualOutputArgumentList & inOperand1,
                                                          const class GGS_location & inOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_initializerCallAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_initializerCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerCallAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @initializerCallAST class
//--------------------------------------------------------------------------------------------------

class cPtr_initializerCallAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void initializerCallAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                    const class GGS_actualOutputArgumentList & inOperand1,
                                                    const class GGS_location & inOperand2,
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
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_actualOutputArgumentList mProperty_mExpressions ;
  public: GGS_location mProperty_mEndOfExpressions ;


//--- Default constructor
  public: cPtr_initializerCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_initializerCallAST (const GGS_lstring & in_mTypeName,
                                   const GGS_actualOutputArgumentList & in_mExpressions,
                                   const GGS_location & in_mEndOfExpressions,
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
// Phase 1: @initializerCallAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_initializerCallAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_initializerCallAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_initializerCallAST_2E_weak (const class GGS_initializerCallAST & inSource) ;

  public: GGS_initializerCallAST_2E_weak & operator = (const class GGS_initializerCallAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_initializerCallAST_2E_weak init_nil (void) {
    GGS_initializerCallAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_initializerCallAST bang_initializerCallAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_initializerCallAST unwrappedValue (void) const ;

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
  public: static GGS_initializerCallAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_initializerCallAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_initializerCallAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerCallAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @initializerCallForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_initializerCallForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_initializerCallForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_initializerCallForGeneration (const class cPtr_initializerCallForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_initializerName (void) const ;

  public: class GGS_semanticExpressionListForGeneration readProperty_mEffectiveParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_initializerCallForGeneration init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                        const class GGS_location & inOperand1,
                                                                        const class GGS_string & inOperand2,
                                                                        const class GGS_semanticExpressionListForGeneration & inOperand3,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_initializerCallForGeneration extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_initializerCallForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerCallForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @initializerCallForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_initializerCallForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void initializerCallForGeneration_init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                  const class GGS_location & inOperand1,
                                                                  const class GGS_string & inOperand2,
                                                                  const class GGS_semanticExpressionListForGeneration & inOperand3,
                                                                  Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_initializerName ;
  public: GGS_semanticExpressionListForGeneration mProperty_mEffectiveParameterList ;


//--- Default constructor
  public: cPtr_initializerCallForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_initializerCallForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                             const GGS_location & in_mLocation,
                                             const GGS_string & in_initializerName,
                                             const GGS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
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
// Phase 1: @initializerCallForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_initializerCallForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_initializerCallForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_initializerCallForGeneration_2E_weak (const class GGS_initializerCallForGeneration & inSource) ;

  public: GGS_initializerCallForGeneration_2E_weak & operator = (const class GGS_initializerCallForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_initializerCallForGeneration_2E_weak init_nil (void) {
    GGS_initializerCallForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_initializerCallForGeneration bang_initializerCallForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_initializerCallForGeneration unwrappedValue (void) const ;

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
  public: static GGS_initializerCallForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_initializerCallForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_initializerCallForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerCallForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfInExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_selfInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selfInExpressionAST (const class cPtr_selfInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mSelfLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfInExpressionAST init_21_ (const class GGS_location & inOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfInExpressionAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfInExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selfInExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_selfInExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selfInExpressionAST_init_21_ (const class GGS_location & inOperand0,
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
  public: GGS_location mProperty_mSelfLocation ;


//--- Default constructor
  public: cPtr_selfInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfInExpressionAST (const GGS_location & in_mSelfLocation,
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
// Phase 1: @selfInExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfInExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfInExpressionAST_2E_weak (const class GGS_selfInExpressionAST & inSource) ;

  public: GGS_selfInExpressionAST_2E_weak & operator = (const class GGS_selfInExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfInExpressionAST_2E_weak init_nil (void) {
    GGS_selfInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfInExpressionAST bang_selfInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selfInExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_selfInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfInExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_selfInExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selfInExpressionForGeneration (const class cPtr_selfInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mSelfCppName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfInExpressionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                     const class GGS_location & inOperand1,
                                                                     const class GGS_string & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfInExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfInExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selfInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_selfInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selfInExpressionForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                               const class GGS_location & inOperand1,
                                                               const class GGS_string & inOperand2,
                                                               Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mSelfCppName ;


//--- Default constructor
  public: cPtr_selfInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                              const GGS_location & in_mLocation,
                                              const GGS_string & in_mSelfCppName,
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
// Phase 1: @selfInExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfInExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfInExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfInExpressionForGeneration_2E_weak (const class GGS_selfInExpressionForGeneration & inSource) ;

  public: GGS_selfInExpressionForGeneration_2E_weak & operator = (const class GGS_selfInExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfInExpressionForGeneration_2E_weak init_nil (void) {
    GGS_selfInExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfInExpressionForGeneration bang_selfInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selfInExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_selfInExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfInExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfInExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfInExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @multiplicationExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_multiplicationExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_multiplicationExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_multiplicationExpressionAST (const class cPtr_multiplicationExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_multiplicationExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_semanticExpressionAST & inOperand1,
                                                                   const class GGS_semanticExpressionAST & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_multiplicationExpressionAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_multiplicationExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multiplicationExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @multiplicationExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_multiplicationExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void multiplicationExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
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
  public: cPtr_multiplicationExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_multiplicationExpressionAST (const GGS_location & in_mOperatorLocation,
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
// Phase 1: @multiplicationExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_multiplicationExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_multiplicationExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_multiplicationExpressionAST_2E_weak (const class GGS_multiplicationExpressionAST & inSource) ;

  public: GGS_multiplicationExpressionAST_2E_weak & operator = (const class GGS_multiplicationExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_multiplicationExpressionAST_2E_weak init_nil (void) {
    GGS_multiplicationExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_multiplicationExpressionAST bang_multiplicationExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_multiplicationExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_multiplicationExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_multiplicationExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_multiplicationExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multiplicationExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @multiplicationExpressionNoOverflowAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_multiplicationExpressionNoOverflowAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_multiplicationExpressionNoOverflowAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_multiplicationExpressionNoOverflowAST (const class cPtr_multiplicationExpressionNoOverflowAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_multiplicationExpressionNoOverflowAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_semanticExpressionAST & inOperand1,
                                                                             const class GGS_semanticExpressionAST & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_multiplicationExpressionNoOverflowAST extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_multiplicationExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @multiplicationExpressionNoOverflowAST class
//--------------------------------------------------------------------------------------------------

class cPtr_multiplicationExpressionNoOverflowAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void multiplicationExpressionNoOverflowAST_init_21__21__21_ (const class GGS_location & inOperand0,
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
  public: cPtr_multiplicationExpressionNoOverflowAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_multiplicationExpressionNoOverflowAST (const GGS_location & in_mOperatorLocation,
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
// Phase 1: @multiplicationExpressionNoOverflowAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_multiplicationExpressionNoOverflowAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_multiplicationExpressionNoOverflowAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_multiplicationExpressionNoOverflowAST_2E_weak (const class GGS_multiplicationExpressionNoOverflowAST & inSource) ;

  public: GGS_multiplicationExpressionNoOverflowAST_2E_weak & operator = (const class GGS_multiplicationExpressionNoOverflowAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_multiplicationExpressionNoOverflowAST_2E_weak init_nil (void) {
    GGS_multiplicationExpressionNoOverflowAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_multiplicationExpressionNoOverflowAST bang_multiplicationExpressionNoOverflowAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_multiplicationExpressionNoOverflowAST unwrappedValue (void) const ;

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
  public: static GGS_multiplicationExpressionNoOverflowAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_multiplicationExpressionNoOverflowAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_multiplicationExpressionNoOverflowAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @divisionExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_divisionExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_divisionExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_divisionExpressionAST (const class cPtr_divisionExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_divisionExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_semanticExpressionAST & inOperand1,
                                                             const class GGS_semanticExpressionAST & inOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_divisionExpressionAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_divisionExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_divisionExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @divisionExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_divisionExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void divisionExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
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
  public: cPtr_divisionExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_divisionExpressionAST (const GGS_location & in_mOperatorLocation,
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
// Phase 1: @divisionExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_divisionExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_divisionExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_divisionExpressionAST_2E_weak (const class GGS_divisionExpressionAST & inSource) ;

  public: GGS_divisionExpressionAST_2E_weak & operator = (const class GGS_divisionExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_divisionExpressionAST_2E_weak init_nil (void) {
    GGS_divisionExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_divisionExpressionAST bang_divisionExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_divisionExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_divisionExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_divisionExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_divisionExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_divisionExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @divisionExpressionNoOverflowAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_divisionExpressionNoOverflowAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_divisionExpressionNoOverflowAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_divisionExpressionNoOverflowAST (const class cPtr_divisionExpressionNoOverflowAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_divisionExpressionNoOverflowAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_semanticExpressionAST & inOperand1,
                                                                       const class GGS_semanticExpressionAST & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_divisionExpressionNoOverflowAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_divisionExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @divisionExpressionNoOverflowAST class
//--------------------------------------------------------------------------------------------------

class cPtr_divisionExpressionNoOverflowAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void divisionExpressionNoOverflowAST_init_21__21__21_ (const class GGS_location & inOperand0,
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
  public: cPtr_divisionExpressionNoOverflowAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_divisionExpressionNoOverflowAST (const GGS_location & in_mOperatorLocation,
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
// Phase 1: @divisionExpressionNoOverflowAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_divisionExpressionNoOverflowAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_divisionExpressionNoOverflowAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_divisionExpressionNoOverflowAST_2E_weak (const class GGS_divisionExpressionNoOverflowAST & inSource) ;

  public: GGS_divisionExpressionNoOverflowAST_2E_weak & operator = (const class GGS_divisionExpressionNoOverflowAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_divisionExpressionNoOverflowAST_2E_weak init_nil (void) {
    GGS_divisionExpressionNoOverflowAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_divisionExpressionNoOverflowAST bang_divisionExpressionNoOverflowAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_divisionExpressionNoOverflowAST unwrappedValue (void) const ;

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
  public: static GGS_divisionExpressionNoOverflowAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_divisionExpressionNoOverflowAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_divisionExpressionNoOverflowAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @moduloExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_moduloExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_moduloExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_moduloExpressionAST (const class cPtr_moduloExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_moduloExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_semanticExpressionAST & inOperand1,
                                                           const class GGS_semanticExpressionAST & inOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_moduloExpressionAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_moduloExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_moduloExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @moduloExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_moduloExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void moduloExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
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
  public: cPtr_moduloExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_moduloExpressionAST (const GGS_location & in_mOperatorLocation,
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
// Phase 1: @moduloExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_moduloExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_moduloExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_moduloExpressionAST_2E_weak (const class GGS_moduloExpressionAST & inSource) ;

  public: GGS_moduloExpressionAST_2E_weak & operator = (const class GGS_moduloExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_moduloExpressionAST_2E_weak init_nil (void) {
    GGS_moduloExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_moduloExpressionAST bang_moduloExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_moduloExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_moduloExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_moduloExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_moduloExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_moduloExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @trueExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_trueExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_trueExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_trueExpressionAST (const class cPtr_trueExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_trueExpressionAST init_21_ (const class GGS_location & inOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_trueExpressionAST extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_trueExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_trueExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @trueExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_trueExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void trueExpressionAST_init_21_ (const class GGS_location & inOperand0,
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
  public: cPtr_trueExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_trueExpressionAST (const GGS_location & in_mLocation,
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
// Phase 1: @trueExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_trueExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_trueExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_trueExpressionAST_2E_weak (const class GGS_trueExpressionAST & inSource) ;

  public: GGS_trueExpressionAST_2E_weak & operator = (const class GGS_trueExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_trueExpressionAST_2E_weak init_nil (void) {
    GGS_trueExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_trueExpressionAST bang_trueExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_trueExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_trueExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_trueExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_trueExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_trueExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @falseExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_falseExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_falseExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_falseExpressionAST (const class cPtr_falseExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_falseExpressionAST init_21_ (const class GGS_location & inOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_falseExpressionAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_falseExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_falseExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @falseExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_falseExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void falseExpressionAST_init_21_ (const class GGS_location & inOperand0,
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
  public: cPtr_falseExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_falseExpressionAST (const GGS_location & in_mLocation,
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
// Phase 1: @falseExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_falseExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_falseExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_falseExpressionAST_2E_weak (const class GGS_falseExpressionAST & inSource) ;

  public: GGS_falseExpressionAST_2E_weak & operator = (const class GGS_falseExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_falseExpressionAST_2E_weak init_nil (void) {
    GGS_falseExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_falseExpressionAST bang_falseExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_falseExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_falseExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_falseExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_falseExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_falseExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @trueExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_trueExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_trueExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_trueExpressionForGeneration (const class cPtr_trueExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_trueExpressionForGeneration init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                               const class GGS_location & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_trueExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_trueExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_trueExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @trueExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_trueExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void trueExpressionForGeneration_init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                         const class GGS_location & inOperand1,
                                                         Compiler * inCompiler) ;


//--- Extension getter isTrueExpression
  public: virtual class GGS_bool getter_isTrueExpression (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_trueExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_trueExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
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
// Phase 1: @trueExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_trueExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_trueExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_trueExpressionForGeneration_2E_weak (const class GGS_trueExpressionForGeneration & inSource) ;

  public: GGS_trueExpressionForGeneration_2E_weak & operator = (const class GGS_trueExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_trueExpressionForGeneration_2E_weak init_nil (void) {
    GGS_trueExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_trueExpressionForGeneration bang_trueExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_trueExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_trueExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_trueExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_trueExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_trueExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @falseExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_falseExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_falseExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_falseExpressionForGeneration (const class cPtr_falseExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_falseExpressionForGeneration init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                const class GGS_location & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_falseExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_falseExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_falseExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @falseExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_falseExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void falseExpressionForGeneration_init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
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
  public: cPtr_falseExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_falseExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
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
// Phase 1: @falseExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_falseExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_falseExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_falseExpressionForGeneration_2E_weak (const class GGS_falseExpressionForGeneration & inSource) ;

  public: GGS_falseExpressionForGeneration_2E_weak & operator = (const class GGS_falseExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_falseExpressionForGeneration_2E_weak init_nil (void) {
    GGS_falseExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_falseExpressionForGeneration bang_falseExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_falseExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_falseExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_falseExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_falseExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_falseExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unaryPlusExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_unaryPlusExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_unaryPlusExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_unaryPlusExpressionAST (const class cPtr_unaryPlusExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unaryPlusExpressionAST init_21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_semanticExpressionAST & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unaryPlusExpressionAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryPlusExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @unaryPlusExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_unaryPlusExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void unaryPlusExpressionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                    const class GGS_semanticExpressionAST & inOperand1,
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
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_unaryPlusExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_unaryPlusExpressionAST (const GGS_location & in_mOperatorLocation,
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
// Phase 1: @unaryPlusExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_unaryPlusExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_unaryPlusExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_unaryPlusExpressionAST_2E_weak (const class GGS_unaryPlusExpressionAST & inSource) ;

  public: GGS_unaryPlusExpressionAST_2E_weak & operator = (const class GGS_unaryPlusExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_unaryPlusExpressionAST_2E_weak init_nil (void) {
    GGS_unaryPlusExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_unaryPlusExpressionAST bang_unaryPlusExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_unaryPlusExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_unaryPlusExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unaryPlusExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryPlusExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @testDynamicClassInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_testDynamicClassInExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_testDynamicClassInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_testDynamicClassInExpressionAST (const class cPtr_testDynamicClassInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mReceiverExpression (void) const ;

  public: class GGS_location readProperty_mEndOfReceiverExpression (void) const ;

  public: class GGS_dynamicTypeComparisonKind readProperty_mTypeComparisonKind (void) const ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_testDynamicClassInExpressionAST init_21__21__21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                                           const class GGS_location & inOperand1,
                                                                           const class GGS_dynamicTypeComparisonKind & inOperand2,
                                                                           const class GGS_lstring & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_testDynamicClassInExpressionAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_testDynamicClassInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @testDynamicClassInExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_testDynamicClassInExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void testDynamicClassInExpressionAST_init_21__21__21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                                     const class GGS_location & inOperand1,
                                                                     const class GGS_dynamicTypeComparisonKind & inOperand2,
                                                                     const class GGS_lstring & inOperand3,
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
  public: GGS_semanticExpressionAST mProperty_mReceiverExpression ;
  public: GGS_location mProperty_mEndOfReceiverExpression ;
  public: GGS_dynamicTypeComparisonKind mProperty_mTypeComparisonKind ;
  public: GGS_lstring mProperty_mTypeName ;


//--- Default constructor
  public: cPtr_testDynamicClassInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_testDynamicClassInExpressionAST (const GGS_semanticExpressionAST & in_mReceiverExpression,
                                                const GGS_location & in_mEndOfReceiverExpression,
                                                const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                const GGS_lstring & in_mTypeName,
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
// Phase 1: @testDynamicClassInExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_testDynamicClassInExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_testDynamicClassInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_testDynamicClassInExpressionAST_2E_weak (const class GGS_testDynamicClassInExpressionAST & inSource) ;

  public: GGS_testDynamicClassInExpressionAST_2E_weak & operator = (const class GGS_testDynamicClassInExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_testDynamicClassInExpressionAST_2E_weak init_nil (void) {
    GGS_testDynamicClassInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_testDynamicClassInExpressionAST bang_testDynamicClassInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_testDynamicClassInExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_testDynamicClassInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_testDynamicClassInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_testDynamicClassInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @castInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_castInExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_castInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_castInExpressionAST (const class cPtr_castInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mReceiverExpression (void) const ;

  public: class GGS_location readProperty_mEndOfReceiverExpression (void) const ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_castInExpressionAST init_21__21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                           const class GGS_location & inOperand1,
                                                           const class GGS_lstring & inOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_castInExpressionAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_castInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_castInExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @castInExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_castInExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void castInExpressionAST_init_21__21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                     const class GGS_location & inOperand1,
                                                     const class GGS_lstring & inOperand2,
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
  public: GGS_semanticExpressionAST mProperty_mReceiverExpression ;
  public: GGS_location mProperty_mEndOfReceiverExpression ;
  public: GGS_lstring mProperty_mTypeName ;


//--- Default constructor
  public: cPtr_castInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_castInExpressionAST (const GGS_semanticExpressionAST & in_mReceiverExpression,
                                    const GGS_location & in_mEndOfReceiverExpression,
                                    const GGS_lstring & in_mTypeName,
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
// Phase 1: @castInExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_castInExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_castInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_castInExpressionAST_2E_weak (const class GGS_castInExpressionAST & inSource) ;

  public: GGS_castInExpressionAST_2E_weak & operator = (const class GGS_castInExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_castInExpressionAST_2E_weak init_nil (void) {
    GGS_castInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_castInExpressionAST bang_castInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_castInExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_castInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_castInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_castInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_castInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @testDynamicClassInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_testDynamicClassInExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_testDynamicClassInExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_testDynamicClassInExpressionForGeneration (const class cPtr_testDynamicClassInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GGS_dynamicTypeComparisonKind readProperty_mTypeComparisonKind (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mCastType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_testDynamicClassInExpressionForGeneration init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                         const class GGS_location & inOperand1,
                                                                                         const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                                         const class GGS_dynamicTypeComparisonKind & inOperand3,
                                                                                         const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_testDynamicClassInExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_testDynamicClassInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @testDynamicClassInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_testDynamicClassInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void testDynamicClassInExpressionForGeneration_init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                   const class GGS_location & inOperand1,
                                                                                   const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                                   const class GGS_dynamicTypeComparisonKind & inOperand3,
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
  public: GGS_dynamicTypeComparisonKind mProperty_mTypeComparisonKind ;
  public: GGS_unifiedTypeMapEntry mProperty_mCastType ;


//--- Default constructor
  public: cPtr_testDynamicClassInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_testDynamicClassInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                          const GGS_location & in_mLocation,
                                                          const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                          const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
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
// Phase 1: @testDynamicClassInExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_testDynamicClassInExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_testDynamicClassInExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_testDynamicClassInExpressionForGeneration_2E_weak (const class GGS_testDynamicClassInExpressionForGeneration & inSource) ;

  public: GGS_testDynamicClassInExpressionForGeneration_2E_weak & operator = (const class GGS_testDynamicClassInExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_testDynamicClassInExpressionForGeneration_2E_weak init_nil (void) {
    GGS_testDynamicClassInExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_testDynamicClassInExpressionForGeneration bang_testDynamicClassInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_testDynamicClassInExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_testDynamicClassInExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_testDynamicClassInExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_testDynamicClassInExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extractObjectInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_extractObjectInExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_extractObjectInExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_extractObjectInExpressionForGeneration (const class cPtr_extractObjectInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GGS_string readProperty_mTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extractObjectInExpressionForGeneration init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                  const class GGS_location & inOperand1,
                                                                                  const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                                  const class GGS_string & inOperand3,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extractObjectInExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extractObjectInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @extractObjectInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_extractObjectInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void extractObjectInExpressionForGeneration_init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GGS_location & inOperand1,
                                                                            const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                            const class GGS_string & inOperand3,
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


//--- Default constructor
  public: cPtr_extractObjectInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extractObjectInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                       const GGS_location & in_mLocation,
                                                       const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                       const GGS_string & in_mTypeName,
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
// Phase 1: @extractObjectInExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_extractObjectInExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_extractObjectInExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_extractObjectInExpressionForGeneration_2E_weak (const class GGS_extractObjectInExpressionForGeneration & inSource) ;

  public: GGS_extractObjectInExpressionForGeneration_2E_weak & operator = (const class GGS_extractObjectInExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_extractObjectInExpressionForGeneration_2E_weak init_nil (void) {
    GGS_extractObjectInExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_extractObjectInExpressionForGeneration bang_extractObjectInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_extractObjectInExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_extractObjectInExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extractObjectInExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extractObjectInExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bangExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_bangExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_bangExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bangExpressionAST (const class cPtr_bangExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bangExpressionAST init_21__21_ (const class GGS_location & inOperand0,
                                                     const class GGS_semanticExpressionAST & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bangExpressionAST extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bangExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bangExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @bangExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_bangExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bangExpressionAST_init_21__21_ (const class GGS_location & inOperand0,
                                               const class GGS_semanticExpressionAST & inOperand1,
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
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_bangExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_bangExpressionAST (const GGS_location & in_mOperatorLocation,
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
// Phase 1: @bangExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_bangExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_bangExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bangExpressionAST_2E_weak (const class GGS_bangExpressionAST & inSource) ;

  public: GGS_bangExpressionAST_2E_weak & operator = (const class GGS_bangExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bangExpressionAST_2E_weak init_nil (void) {
    GGS_bangExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bangExpressionAST bang_bangExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_bangExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_bangExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bangExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bangExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bangExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bangExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_bangExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_bangExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bangExpressionForGeneration (const class cPtr_bangExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

  public: class GGS_string readProperty_mReceiverTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bangExpressionForGeneration init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                       const class GGS_location & inOperand1,
                                                                       const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                       const class GGS_string & inOperand3,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bangExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bangExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bangExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @bangExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_bangExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bangExpressionForGeneration_init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                 const class GGS_location & inOperand1,
                                                                 const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                 const class GGS_string & inOperand3,
                                                                 Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GGS_string mProperty_mReceiverTypeName ;


//--- Default constructor
  public: cPtr_bangExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_bangExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                            const GGS_location & in_mLocation,
                                            const GGS_semanticExpressionForGeneration & in_mExpression,
                                            const GGS_string & in_mReceiverTypeName,
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
// Phase 1: @bangExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_bangExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_bangExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bangExpressionForGeneration_2E_weak (const class GGS_bangExpressionForGeneration & inSource) ;

  public: GGS_bangExpressionForGeneration_2E_weak & operator = (const class GGS_bangExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bangExpressionForGeneration_2E_weak init_nil (void) {
    GGS_bangExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bangExpressionForGeneration bang_bangExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_bangExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_bangExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bangExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bangExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bangExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @rightShiftExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_rightShiftExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_rightShiftExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_rightShiftExpressionAST (const class cPtr_rightShiftExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_rightShiftExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_semanticExpressionAST & inOperand1,
                                                               const class GGS_semanticExpressionAST & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_rightShiftExpressionAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_rightShiftExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_rightShiftExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @rightShiftExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_rightShiftExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void rightShiftExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
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
  public: cPtr_rightShiftExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_rightShiftExpressionAST (const GGS_location & in_mOperatorLocation,
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
// Phase 1: @rightShiftExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_rightShiftExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_rightShiftExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_rightShiftExpressionAST_2E_weak (const class GGS_rightShiftExpressionAST & inSource) ;

  public: GGS_rightShiftExpressionAST_2E_weak & operator = (const class GGS_rightShiftExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_rightShiftExpressionAST_2E_weak init_nil (void) {
    GGS_rightShiftExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_rightShiftExpressionAST bang_rightShiftExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_rightShiftExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_rightShiftExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_rightShiftExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_rightShiftExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_rightShiftExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @leftShiftExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_leftShiftExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_leftShiftExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_leftShiftExpressionAST (const class cPtr_leftShiftExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_leftShiftExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_semanticExpressionAST & inOperand1,
                                                              const class GGS_semanticExpressionAST & inOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_leftShiftExpressionAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_leftShiftExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_leftShiftExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @leftShiftExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_leftShiftExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void leftShiftExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
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
  public: cPtr_leftShiftExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_leftShiftExpressionAST (const GGS_location & in_mOperatorLocation,
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
// Phase 1: @leftShiftExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_leftShiftExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_leftShiftExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_leftShiftExpressionAST_2E_weak (const class GGS_leftShiftExpressionAST & inSource) ;

  public: GGS_leftShiftExpressionAST_2E_weak & operator = (const class GGS_leftShiftExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_leftShiftExpressionAST_2E_weak init_nil (void) {
    GGS_leftShiftExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_leftShiftExpressionAST bang_leftShiftExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_leftShiftExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_leftShiftExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_leftShiftExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_leftShiftExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_leftShiftExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @addExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_addExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_addExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_addExpressionAST (const class cPtr_addExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_addExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                        const class GGS_semanticExpressionAST & inOperand1,
                                                        const class GGS_semanticExpressionAST & inOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_addExpressionAST extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_addExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @addExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_addExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void addExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
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
  public: cPtr_addExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_addExpressionAST (const GGS_location & in_mOperatorLocation,
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
// Phase 1: @addExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_addExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_addExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_addExpressionAST_2E_weak (const class GGS_addExpressionAST & inSource) ;

  public: GGS_addExpressionAST_2E_weak & operator = (const class GGS_addExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_addExpressionAST_2E_weak init_nil (void) {
    GGS_addExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_addExpressionAST bang_addExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_addExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_addExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_addExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_addExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @addExpressionNoOverflowAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_addExpressionNoOverflowAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_addExpressionNoOverflowAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_addExpressionNoOverflowAST (const class cPtr_addExpressionNoOverflowAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_addExpressionNoOverflowAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_semanticExpressionAST & inOperand1,
                                                                  const class GGS_semanticExpressionAST & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_addExpressionNoOverflowAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_addExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @addExpressionNoOverflowAST class
//--------------------------------------------------------------------------------------------------

class cPtr_addExpressionNoOverflowAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void addExpressionNoOverflowAST_init_21__21__21_ (const class GGS_location & inOperand0,
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
  public: cPtr_addExpressionNoOverflowAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_addExpressionNoOverflowAST (const GGS_location & in_mOperatorLocation,
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
// Phase 1: @addExpressionNoOverflowAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_addExpressionNoOverflowAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_addExpressionNoOverflowAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_addExpressionNoOverflowAST_2E_weak (const class GGS_addExpressionNoOverflowAST & inSource) ;

  public: GGS_addExpressionNoOverflowAST_2E_weak & operator = (const class GGS_addExpressionNoOverflowAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_addExpressionNoOverflowAST_2E_weak init_nil (void) {
    GGS_addExpressionNoOverflowAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_addExpressionNoOverflowAST bang_addExpressionNoOverflowAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_addExpressionNoOverflowAST unwrappedValue (void) const ;

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
  public: static GGS_addExpressionNoOverflowAST_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_addExpressionNoOverflowAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_addExpressionNoOverflowAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addExpressionNoOverflowAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @subExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_subExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_subExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_subExpressionAST (const class cPtr_subExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_subExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                        const class GGS_semanticExpressionAST & inOperand1,
                                                        const class GGS_semanticExpressionAST & inOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_subExpressionAST extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_subExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @subExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_subExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void subExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
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
  public: cPtr_subExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_subExpressionAST (const GGS_location & in_mOperatorLocation,
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
// Phase 1: @subExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_subExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_subExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_subExpressionAST_2E_weak (const class GGS_subExpressionAST & inSource) ;

  public: GGS_subExpressionAST_2E_weak & operator = (const class GGS_subExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_subExpressionAST_2E_weak init_nil (void) {
    GGS_subExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_subExpressionAST bang_subExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_subExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_subExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_subExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_subExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @subExpressionNoOverflowAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_subExpressionNoOverflowAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_subExpressionNoOverflowAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_subExpressionNoOverflowAST (const class cPtr_subExpressionNoOverflowAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_subExpressionNoOverflowAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_semanticExpressionAST & inOperand1,
                                                                  const class GGS_semanticExpressionAST & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_subExpressionNoOverflowAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_subExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @subExpressionNoOverflowAST class
//--------------------------------------------------------------------------------------------------

class cPtr_subExpressionNoOverflowAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void subExpressionNoOverflowAST_init_21__21__21_ (const class GGS_location & inOperand0,
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
  public: cPtr_subExpressionNoOverflowAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_subExpressionNoOverflowAST (const GGS_location & in_mOperatorLocation,
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
// Phase 1: @subExpressionNoOverflowAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_subExpressionNoOverflowAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_subExpressionNoOverflowAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_subExpressionNoOverflowAST_2E_weak (const class GGS_subExpressionNoOverflowAST & inSource) ;

  public: GGS_subExpressionNoOverflowAST_2E_weak & operator = (const class GGS_subExpressionNoOverflowAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_subExpressionNoOverflowAST_2E_weak init_nil (void) {
    GGS_subExpressionNoOverflowAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_subExpressionNoOverflowAST bang_subExpressionNoOverflowAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_subExpressionNoOverflowAST unwrappedValue (void) const ;

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
  public: static GGS_subExpressionNoOverflowAST_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_subExpressionNoOverflowAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_subExpressionNoOverflowAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subExpressionNoOverflowAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum binaryOperator
//--------------------------------------------------------------------------------------------------

class GGS_binaryOperator : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_binaryOperator (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_rightShift,
    enum_leftShift,
    enum_add,
    enum_addNoOverflow,
    enum_sub,
    enum_subNoOverflow,
    enum_operator_5F_and,
    enum_operator_5F_or,
    enum_operator_5F_xor,
    enum_multiply_5F_operation_5F_no_5F_ovf,
    enum_multiply_5F_operation,
    enum_divide_5F_operation,
    enum_divide_5F_operation_5F_no_5F_ovf,
    enum_modulo_5F_operation
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
  public: static GGS_binaryOperator extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_binaryOperator class_func_add (LOCATION_ARGS) ;

  public: static class GGS_binaryOperator class_func_addNoOverflow (LOCATION_ARGS) ;

  public: static class GGS_binaryOperator class_func_divide_5F_operation (LOCATION_ARGS) ;

  public: static class GGS_binaryOperator class_func_divide_5F_operation_5F_no_5F_ovf (LOCATION_ARGS) ;

  public: static class GGS_binaryOperator class_func_leftShift (LOCATION_ARGS) ;

  public: static class GGS_binaryOperator class_func_modulo_5F_operation (LOCATION_ARGS) ;

  public: static class GGS_binaryOperator class_func_multiply_5F_operation (LOCATION_ARGS) ;

  public: static class GGS_binaryOperator class_func_multiply_5F_operation_5F_no_5F_ovf (LOCATION_ARGS) ;

  public: static class GGS_binaryOperator class_func_operator_5F_and (LOCATION_ARGS) ;

  public: static class GGS_binaryOperator class_func_operator_5F_or (LOCATION_ARGS) ;

  public: static class GGS_binaryOperator class_func_operator_5F_xor (LOCATION_ARGS) ;

  public: static class GGS_binaryOperator class_func_rightShift (LOCATION_ARGS) ;

  public: static class GGS_binaryOperator class_func_sub (LOCATION_ARGS) ;

  public: static class GGS_binaryOperator class_func_subNoOverflow (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isAdd (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isAddNoOverflow (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDivide_5F_operation (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDivide_5F_operation_5F_no_5F_ovf (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLeftShift (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isModulo_5F_operation (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMultiply_5F_operation (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMultiply_5F_operation_5F_no_5F_ovf (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isOperator_5F_and (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isOperator_5F_or (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isOperator_5F_xor (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRightShift (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSub (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSubNoOverflow (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binaryOperator ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @binaryOperatorExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_binaryOperatorExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_binaryOperatorExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_binaryOperatorExpressionForGeneration (const class cPtr_binaryOperatorExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mLeftExpression (void) const ;

  public: class GGS_binaryOperator readProperty_mOperator (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_binaryOperatorExpressionForGeneration init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                     const class GGS_location & inOperand1,
                                                                                     const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                                     const class GGS_binaryOperator & inOperand3,
                                                                                     const class GGS_semanticExpressionForGeneration & inOperand4,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_binaryOperatorExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_binaryOperatorExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @binaryOperatorExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_binaryOperatorExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void binaryOperatorExpressionForGeneration_init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                               const class GGS_location & inOperand1,
                                                                               const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                               const class GGS_binaryOperator & inOperand3,
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
  public: GGS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public: GGS_binaryOperator mProperty_mOperator ;
  public: GGS_semanticExpressionForGeneration mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_binaryOperatorExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_binaryOperatorExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                      const GGS_location & in_mLocation,
                                                      const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                      const GGS_binaryOperator & in_mOperator,
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
// Phase 1: @binaryOperatorExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_binaryOperatorExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_binaryOperatorExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_binaryOperatorExpressionForGeneration_2E_weak (const class GGS_binaryOperatorExpressionForGeneration & inSource) ;

  public: GGS_binaryOperatorExpressionForGeneration_2E_weak & operator = (const class GGS_binaryOperatorExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_binaryOperatorExpressionForGeneration_2E_weak init_nil (void) {
    GGS_binaryOperatorExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_binaryOperatorExpressionForGeneration bang_binaryOperatorExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_binaryOperatorExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_binaryOperatorExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_binaryOperatorExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_binaryOperatorExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @orExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_orExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_orExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_orExpressionAST (const class cPtr_orExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_orExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                       const class GGS_semanticExpressionAST & inOperand1,
                                                       const class GGS_semanticExpressionAST & inOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_orExpressionAST extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_orExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @orExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_orExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void orExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
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
  public: cPtr_orExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_orExpressionAST (const GGS_location & in_mOperatorLocation,
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

