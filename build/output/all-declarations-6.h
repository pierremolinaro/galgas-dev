#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonterminalMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_nonterminalMap final {

  public: DownEnumerator_nonterminalMap (const class GGS_nonterminalMap & inMap) ;

  public: ~ DownEnumerator_nonterminalMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_nonterminalLabelMap current_mLabelMap (LOCATION_ARGS) const ;

  public: class GGS_nonterminalMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_nonterminalMap (const DownEnumerator_nonterminalMap &) = delete ;
  private: DownEnumerator_nonterminalMap & operator = (const DownEnumerator_nonterminalMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_nonterminalMap final {
  public: UpEnumerator_nonterminalMap (const class GGS_nonterminalMap & inMap)  ;

  public: ~ UpEnumerator_nonterminalMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_nonterminalLabelMap current_mLabelMap (LOCATION_ARGS) const ;
  public: class GGS_nonterminalMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_nonterminalMap (const UpEnumerator_nonterminalMap &) = delete ;
  private: UpEnumerator_nonterminalMap & operator = (const UpEnumerator_nonterminalMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_nonterminalMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_nonterminalMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_nonterminalMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_nonterminalMap (void) ;

//--- Handle copy
  public: GGS_nonterminalMap (const GGS_nonterminalMap & inSource) ;
  public: GGS_nonterminalMap & operator = (const GGS_nonterminalMap & inSource) ;

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
  protected: void performInsert (const class GGS_nonterminalMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonterminalMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonterminalMap extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonterminalMap class_func_mapWithMapToOverride (const class GGS_nonterminalMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_nonterminalLabelMap constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMLabelMapForKey (class GGS_nonterminalLabelMap constinArgument0,
                                          class GGS_string constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_nonterminalLabelMap & outArgument1,
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

  public: class GGS_nonterminalLabelMap getter_mLabelMapForKey (const class GGS_string & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_nonterminalMap getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_nonterminalMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_nonterminalMap ;
  friend class DownEnumerator_nonterminalMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonterminalMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_nonterminalMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_nonterminalLabelMap mProperty_mLabelMap ;
  public: inline GGS_nonterminalLabelMap readProperty_mLabelMap (void) const {
    return mProperty_mLabelMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_nonterminalMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLabelMap (const GGS_nonterminalLabelMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_nonterminalMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_nonterminalLabelMap & in_mLabelMap) ;

//--------------------------------- Copy constructor
  public: GGS_nonterminalMap_2E_element (const GGS_nonterminalMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_nonterminalMap_2E_element & operator = (const GGS_nonterminalMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonterminalMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_nonterminalLabelMap & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonterminalMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: nonterminalMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_nonterminalMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_nonterminalMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_nonterminalMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_nonterminalMap_2E_element_3F_ (const GGS_nonterminalMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_nonterminalMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_nonterminalMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_nonterminalMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ruleLabelImplementationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_ruleLabelImplementationList final {
  public: DownEnumerator_ruleLabelImplementationList (const class GGS_ruleLabelImplementationList & inList) ;

  public: ~ DownEnumerator_ruleLabelImplementationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public: class GGS_formalParameterListForGeneration current_mSignatureForGeneration (LOCATION_ARGS) const ;
  public: class GGS_formalParameterSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
  public: class GGS_semanticInstructionListForGeneration current_mInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ruleLabelImplementationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ruleLabelImplementationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_ruleLabelImplementationList (const DownEnumerator_ruleLabelImplementationList &) = delete ;
  private: DownEnumerator_ruleLabelImplementationList & operator = (const DownEnumerator_ruleLabelImplementationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_ruleLabelImplementationList final {
  public: UpEnumerator_ruleLabelImplementationList (const class GGS_ruleLabelImplementationList & inList)  ;

  public: ~ UpEnumerator_ruleLabelImplementationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public: class GGS_formalParameterListForGeneration current_mSignatureForGeneration (LOCATION_ARGS) const ;
  public: class GGS_formalParameterSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
  public: class GGS_semanticInstructionListForGeneration current_mInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ruleLabelImplementationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ruleLabelImplementationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_ruleLabelImplementationList (const UpEnumerator_ruleLabelImplementationList &) = delete ;
  private: UpEnumerator_ruleLabelImplementationList & operator = (const UpEnumerator_ruleLabelImplementationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @ruleLabelImplementationList list
//--------------------------------------------------------------------------------------------------

class GGS_ruleLabelImplementationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_ruleLabelImplementationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_ruleLabelImplementationList (void) ;

//--- Destructor
  public: virtual ~ GGS_ruleLabelImplementationList (void) = default ;

//--- Copy
  public: GGS_ruleLabelImplementationList (const GGS_ruleLabelImplementationList &) = default ;
  public: GGS_ruleLabelImplementationList & operator = (const GGS_ruleLabelImplementationList &) = default ;

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
  public : inline GenericArray <GGS_ruleLabelImplementationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_ruleLabelImplementationList subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_ruleLabelImplementationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mLabelName,
                                                 const class GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                 const class GGS_formalParameterSignature & in_mSignature,
                                                 const class GGS_location & in_mEndOfArgumentLocation,
                                                 const class GGS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ruleLabelImplementationList init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ruleLabelImplementationList extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ruleLabelImplementationList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_formalParameterListForGeneration & inOperand1,
                                                                                 const class GGS_formalParameterSignature & inOperand2,
                                                                                 const class GGS_location & inOperand3,
                                                                                 const class GGS_semanticInstructionListForGeneration & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_ruleLabelImplementationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_formalParameterListForGeneration & inOperand1,
                                   const class GGS_formalParameterSignature & inOperand2,
                                   const class GGS_location & inOperand3,
                                   const class GGS_semanticInstructionListForGeneration & inOperand4
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_ruleLabelImplementationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_ruleLabelImplementationList add_operation (const GGS_ruleLabelImplementationList & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_formalParameterListForGeneration constinArgument1,
                              class GGS_formalParameterSignature constinArgument2,
                              class GGS_location constinArgument3,
                              class GGS_semanticInstructionListForGeneration constinArgument4,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_formalParameterListForGeneration constinArgument1,
                                     class GGS_formalParameterSignature constinArgument2,
                                     class GGS_location constinArgument3,
                                     class GGS_semanticInstructionListForGeneration constinArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_formalParameterListForGeneration & outArgument1,
                                class GGS_formalParameterSignature & outArgument2,
                                class GGS_location & outArgument3,
                                class GGS_semanticInstructionListForGeneration & outArgument4,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_formalParameterListForGeneration & outArgument1,
                               class GGS_formalParameterSignature & outArgument2,
                               class GGS_location & outArgument3,
                               class GGS_semanticInstructionListForGeneration & outArgument4,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_formalParameterListForGeneration & outArgument1,
                                     class GGS_formalParameterSignature & outArgument2,
                                     class GGS_location & outArgument3,
                                     class GGS_semanticInstructionListForGeneration & outArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfArgumentLocationAtIndex (class GGS_location constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionListForGenerationAtIndex (class GGS_semanticInstructionListForGeneration constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMLabelNameAtIndex (class GGS_lstring constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMSignatureAtIndex (class GGS_formalParameterSignature constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMSignatureForGenerationAtIndex (class GGS_formalParameterListForGeneration constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_formalParameterListForGeneration & outArgument1,
                             class GGS_formalParameterSignature & outArgument2,
                             class GGS_location & outArgument3,
                             class GGS_semanticInstructionListForGeneration & outArgument4,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_formalParameterListForGeneration & outArgument1,
                            class GGS_formalParameterSignature & outArgument2,
                            class GGS_location & outArgument3,
                            class GGS_semanticInstructionListForGeneration & outArgument4,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfArgumentLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_semanticInstructionListForGeneration getter_mInstructionListForGenerationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mLabelNameAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_formalParameterSignature getter_mSignatureAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_formalParameterListForGeneration getter_mSignatureForGenerationAtIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_ruleLabelImplementationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_ruleLabelImplementationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_ruleLabelImplementationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_ruleLabelImplementationList ;
  friend class DownEnumerator_ruleLabelImplementationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ruleLabelImplementationList ;

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
// Phase 1: @ruleDeclarationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_ruleDeclarationList final {
  public: DownEnumerator_ruleDeclarationList (const class GGS_ruleDeclarationList & inList) ;

  public: ~ DownEnumerator_ruleDeclarationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mNonterminalName (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRuleIndex (LOCATION_ARGS) const ;
  public: class GGS_ruleLabelImplementationList current_mLabelImplementationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ruleDeclarationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ruleDeclarationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_ruleDeclarationList (const DownEnumerator_ruleDeclarationList &) = delete ;
  private: DownEnumerator_ruleDeclarationList & operator = (const DownEnumerator_ruleDeclarationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_ruleDeclarationList final {
  public: UpEnumerator_ruleDeclarationList (const class GGS_ruleDeclarationList & inList)  ;

  public: ~ UpEnumerator_ruleDeclarationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mNonterminalName (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRuleIndex (LOCATION_ARGS) const ;
  public: class GGS_ruleLabelImplementationList current_mLabelImplementationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ruleDeclarationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ruleDeclarationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_ruleDeclarationList (const UpEnumerator_ruleDeclarationList &) = delete ;
  private: UpEnumerator_ruleDeclarationList & operator = (const UpEnumerator_ruleDeclarationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @ruleDeclarationList list
//--------------------------------------------------------------------------------------------------

class GGS_ruleDeclarationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_ruleDeclarationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_ruleDeclarationList (void) ;

//--- Destructor
  public: virtual ~ GGS_ruleDeclarationList (void) = default ;

//--- Copy
  public: GGS_ruleDeclarationList (const GGS_ruleDeclarationList &) = default ;
  public: GGS_ruleDeclarationList & operator = (const GGS_ruleDeclarationList &) = default ;

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
  public : inline GenericArray <GGS_ruleDeclarationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_ruleDeclarationList subList (const int32_t inStart,
                                            const int32_t inLength,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_ruleDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mNonterminalName,
                                                 const class GGS_uint & in_mRuleIndex,
                                                 const class GGS_ruleLabelImplementationList & in_mLabelImplementationList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ruleDeclarationList init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ruleDeclarationList extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ruleDeclarationList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                         const class GGS_uint & inOperand1,
                                                                         const class GGS_ruleLabelImplementationList & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_ruleDeclarationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_uint & inOperand1,
                                   const class GGS_ruleLabelImplementationList & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_ruleDeclarationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_ruleDeclarationList add_operation (const GGS_ruleDeclarationList & inOperand,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_uint constinArgument1,
                              class GGS_ruleLabelImplementationList constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_uint constinArgument1,
                                     class GGS_ruleLabelImplementationList constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_uint & outArgument1,
                                class GGS_ruleLabelImplementationList & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_uint & outArgument1,
                               class GGS_ruleLabelImplementationList & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_uint & outArgument1,
                                     class GGS_ruleLabelImplementationList & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMLabelImplementationListAtIndex (class GGS_ruleLabelImplementationList constinArgument0,
                                                          class GGS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMNonterminalNameAtIndex (class GGS_string constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMRuleIndexAtIndex (class GGS_uint constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_uint & outArgument1,
                             class GGS_ruleLabelImplementationList & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_uint & outArgument1,
                            class GGS_ruleLabelImplementationList & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_ruleLabelImplementationList getter_mLabelImplementationListAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mNonterminalNameAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mRuleIndexAtIndex (const class GGS_uint & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_ruleDeclarationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_ruleDeclarationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_ruleDeclarationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_ruleDeclarationList ;
  friend class DownEnumerator_ruleDeclarationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ruleDeclarationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ruleDeclarationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_ruleDeclarationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mNonterminalName ;
  public: inline GGS_string readProperty_mNonterminalName (void) const {
    return mProperty_mNonterminalName ;
  }

  public: GGS_uint mProperty_mRuleIndex ;
  public: inline GGS_uint readProperty_mRuleIndex (void) const {
    return mProperty_mRuleIndex ;
  }

  public: GGS_ruleLabelImplementationList mProperty_mLabelImplementationList ;
  public: inline GGS_ruleLabelImplementationList readProperty_mLabelImplementationList (void) const {
    return mProperty_mLabelImplementationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ruleDeclarationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMNonterminalName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalName = inValue ;
  }

  public: inline void setter_setMRuleIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRuleIndex = inValue ;
  }

  public: inline void setter_setMLabelImplementationList (const GGS_ruleLabelImplementationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelImplementationList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ruleDeclarationList_2E_element (const GGS_string & in_mNonterminalName,
                                              const GGS_uint & in_mRuleIndex,
                                              const GGS_ruleLabelImplementationList & in_mLabelImplementationList) ;

//--------------------------------- Copy constructor
  public: GGS_ruleDeclarationList_2E_element (const GGS_ruleDeclarationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ruleDeclarationList_2E_element & operator = (const GGS_ruleDeclarationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ruleDeclarationList_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                      const class GGS_uint & inOperand1,
                                                                      const class GGS_ruleLabelImplementationList & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ruleDeclarationList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ruleDeclarationList_2E_element ;

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
// Phase 1: @templateInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_templateInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionForGeneration (const class cPtr_templateInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionForGeneration init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionForGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionForGeneration_init (Compiler * inCompiler) ;


//--- Extension method templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_bool & arg_ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_templateInstructionForGeneration (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionForGeneration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_templateInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionForGeneration_2E_weak (const class GGS_templateInstructionForGeneration & inSource) ;

  public: GGS_templateInstructionForGeneration_2E_weak & operator = (const class GGS_templateInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionForGeneration_2E_weak init_nil (void) {
    GGS_templateInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionForGeneration bang_templateInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInstructionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_templateInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_templateInstructionListForGeneration final {
  public: DownEnumerator_templateInstructionListForGeneration (const class GGS_templateInstructionListForGeneration & inList) ;

  public: ~ DownEnumerator_templateInstructionListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_templateInstructionForGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateInstructionListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_templateInstructionListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_templateInstructionListForGeneration (const DownEnumerator_templateInstructionListForGeneration &) = delete ;
  private: DownEnumerator_templateInstructionListForGeneration & operator = (const DownEnumerator_templateInstructionListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_templateInstructionListForGeneration final {
  public: UpEnumerator_templateInstructionListForGeneration (const class GGS_templateInstructionListForGeneration & inList)  ;

  public: ~ UpEnumerator_templateInstructionListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_templateInstructionForGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateInstructionListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_templateInstructionListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_templateInstructionListForGeneration (const UpEnumerator_templateInstructionListForGeneration &) = delete ;
  private: UpEnumerator_templateInstructionListForGeneration & operator = (const UpEnumerator_templateInstructionListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @templateInstructionListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_templateInstructionListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_templateInstructionListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_templateInstructionListForGeneration (void) = default ;

//--- Copy
  public: GGS_templateInstructionListForGeneration (const GGS_templateInstructionListForGeneration &) = default ;
  public: GGS_templateInstructionListForGeneration & operator = (const GGS_templateInstructionListForGeneration &) = default ;

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
  public : inline GenericArray <GGS_templateInstructionListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_templateInstructionListForGeneration subList (const int32_t inStart,
                                                             const int32_t inLength,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_templateInstructionListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_templateInstructionForGeneration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionListForGeneration init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionListForGeneration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionListForGeneration class_func_listWithValue (const class GGS_templateInstructionForGeneration & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_templateInstructionListForGeneration inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_templateInstructionForGeneration & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_templateInstructionListForGeneration_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_templateInstructionListForGeneration add_operation (const GGS_templateInstructionListForGeneration & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_templateInstructionForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_templateInstructionForGeneration constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_templateInstructionForGeneration & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_templateInstructionForGeneration & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_templateInstructionForGeneration & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionAtIndex (class GGS_templateInstructionForGeneration constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_templateInstructionForGeneration & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_templateInstructionForGeneration & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_templateInstructionForGeneration getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_templateInstructionListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_templateInstructionListForGeneration ;
  friend class DownEnumerator_templateInstructionListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_templateInstructionForGeneration mProperty_mInstruction ;
  public: inline GGS_templateInstructionForGeneration readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateInstructionListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_templateInstructionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateInstructionListForGeneration_2E_element (const GGS_templateInstructionForGeneration & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_templateInstructionListForGeneration_2E_element (const GGS_templateInstructionListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateInstructionListForGeneration_2E_element & operator = (const GGS_templateInstructionListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionListForGeneration_2E_element init_21_ (const class GGS_templateInstructionForGeneration & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionListForGeneration_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionListForGeneration_2E_element ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: GGS_unifiedTypeMapEntryList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
// Phase 1: @semanticDeclarationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticDeclarationForGeneration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_semanticDeclarationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_semanticDeclarationForGeneration_2E_weak (const class GGS_semanticDeclarationForGeneration & inSource) ;

  public: GGS_semanticDeclarationForGeneration_2E_weak & operator = (const class GGS_semanticDeclarationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_semanticDeclarationForGeneration_2E_weak init_nil (void) {
    GGS_semanticDeclarationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_semanticDeclarationForGeneration bang_semanticDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_semanticDeclarationForGeneration unwrappedValue (void) const ;

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
  public: static GGS_semanticDeclarationForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2E_weak ;

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
// Phase 1: @semanticTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticTypeForGeneration : public GGS_semanticDeclarationForGeneration {
//--------------------------------- Default constructor
  public: GGS_semanticTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_semanticTypeForGeneration (const class cPtr_semanticTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mSelfTypeEntry (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticTypeForGeneration init_21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticTypeForGeneration extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @semanticTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_semanticTypeForGeneration : public cPtr_semanticDeclarationForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticTypeForGeneration_init_21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                   Compiler * inCompiler) ;


//--- Extension getter appendTypeGenericImplementation
  public: virtual class GGS_string getter_appendTypeGenericImplementation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getImplementationCppFileName
  public: virtual class GGS_string getter_getImplementationCppFileName (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter hasCppHeaderFile
  public: virtual class GGS_bool getter_hasCppHeaderFile (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isPredefined
  public: virtual class GGS_bool getter_isPredefined (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mSelfTypeEntry ;


//--- Default constructor
  public: cPtr_semanticTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_semanticTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
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
// Phase 1: @semanticTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticTypeForGeneration_2E_weak : public GGS_semanticDeclarationForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_semanticTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_semanticTypeForGeneration_2E_weak (const class GGS_semanticTypeForGeneration & inSource) ;

  public: GGS_semanticTypeForGeneration_2E_weak & operator = (const class GGS_semanticTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_semanticTypeForGeneration_2E_weak init_nil (void) {
    GGS_semanticTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_semanticTypeForGeneration bang_semanticTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_semanticTypeForGeneration unwrappedValue (void) const ;

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
  public: static GGS_semanticTypeForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticTypeForGeneration_2E_weak ;

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
  public: GGS_signatureForGrammarAnalysis (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
// Phase 1: @nonterminalSymbolLabelMapForGrammarAnalysis map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis final {

  public: DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inMap) ;

  public: ~ DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_signatureForGrammarAnalysis current_mFormalParametersList (LOCATION_ARGS) const ;

  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis &) = delete ;
  private: DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis & operator = (const DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis final {
  public: UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inMap)  ;

  public: ~ UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_signatureForGrammarAnalysis current_mFormalParametersList (LOCATION_ARGS) const ;
  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis &) = delete ;
  private: UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis & operator = (const UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_nonterminalSymbolLabelMapForGrammarAnalysis : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_nonterminalSymbolLabelMapForGrammarAnalysis (void) ;

//--- Handle copy
  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) ;
  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis & operator = (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) ;

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
  protected: void performInsert (const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonterminalSymbolLabelMapForGrammarAnalysis init (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonterminalSymbolLabelMapForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonterminalSymbolLabelMapForGrammarAnalysis class_func_mapWithMapToOverride (const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand0
                                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_signatureForGrammarAnalysis constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalParametersListForKey (class GGS_signatureForGrammarAnalysis constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_signatureForGrammarAnalysis & outArgument1,
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

  public: class GGS_signatureForGrammarAnalysis getter_mFormalParametersListForKey (const class GGS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis ;
  friend class DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis ;

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
// Phase 1: @nonTerminalSymbolMapForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
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
  public: GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
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
  public: GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element (const GGS_lstring & in_lkey,
                                                                 const GGS_uint & in_mNonTerminalIndex,
                                                                 const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap) ;

//--------------------------------- Copy constructor
  public: GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element (const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & operator = (const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                         const class GGS_uint & inOperand1,
                                                                                         const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: nonTerminalSymbolMapForGrammarAnalysis.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ (const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element unwrappedValue (void) const {
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
  public: static GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalToAddList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_nonTerminalToAddList final {
  public: DownEnumerator_nonTerminalToAddList (const class GGS_nonTerminalToAddList & inList) ;

  public: ~ DownEnumerator_nonTerminalToAddList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public: class GGS_uint current_mNonTerminalToAddCount (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_nonTerminalToAddList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_nonTerminalToAddList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_nonTerminalToAddList (const DownEnumerator_nonTerminalToAddList &) = delete ;
  private: DownEnumerator_nonTerminalToAddList & operator = (const DownEnumerator_nonTerminalToAddList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_nonTerminalToAddList final {
  public: UpEnumerator_nonTerminalToAddList (const class GGS_nonTerminalToAddList & inList)  ;

  public: ~ UpEnumerator_nonTerminalToAddList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public: class GGS_uint current_mNonTerminalToAddCount (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_nonTerminalToAddList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_nonTerminalToAddList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_nonTerminalToAddList (const UpEnumerator_nonTerminalToAddList &) = delete ;
  private: UpEnumerator_nonTerminalToAddList & operator = (const UpEnumerator_nonTerminalToAddList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @nonTerminalToAddList list
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalToAddList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_nonTerminalToAddList_2E_element> mArray ;

//--- Default constructor
  public: GGS_nonTerminalToAddList (void) ;

//--- Destructor
  public: virtual ~ GGS_nonTerminalToAddList (void) = default ;

//--- Copy
  public: GGS_nonTerminalToAddList (const GGS_nonTerminalToAddList &) = default ;
  public: GGS_nonTerminalToAddList & operator = (const GGS_nonTerminalToAddList &) = default ;

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
  public : inline GenericArray <GGS_nonTerminalToAddList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_nonTerminalToAddList subList (const int32_t inStart,
                                             const int32_t inLength,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_nonTerminalToAddList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mSyntaxComponentName,
                                                 const class GGS_uint & in_mNonTerminalToAddCount
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalToAddList init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalToAddList extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonTerminalToAddList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                          const class GGS_uint & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_nonTerminalToAddList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_uint & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_nonTerminalToAddList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_nonTerminalToAddList add_operation (const GGS_nonTerminalToAddList & inOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_uint constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_uint & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_uint & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_uint & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMNonTerminalToAddCountAtIndex (class GGS_uint constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: void setter_setMSyntaxComponentNameAtIndex (class GGS_string constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_uint & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_uint & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_uint getter_mNonTerminalToAddCountAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mSyntaxComponentNameAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_nonTerminalToAddList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_nonTerminalToAddList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_nonTerminalToAddList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_nonTerminalToAddList ;
  friend class DownEnumerator_nonTerminalToAddList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalToAddList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalToAddList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalToAddList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mSyntaxComponentName ;
  public: inline GGS_string readProperty_mSyntaxComponentName (void) const {
    return mProperty_mSyntaxComponentName ;
  }

  public: GGS_uint mProperty_mNonTerminalToAddCount ;
  public: inline GGS_uint readProperty_mNonTerminalToAddCount (void) const {
    return mProperty_mNonTerminalToAddCount ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_nonTerminalToAddList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxComponentName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

  public: inline void setter_setMNonTerminalToAddCount (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalToAddCount = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_nonTerminalToAddList_2E_element (const GGS_string & in_mSyntaxComponentName,
                                               const GGS_uint & in_mNonTerminalToAddCount) ;

//--------------------------------- Copy constructor
  public: GGS_nonTerminalToAddList_2E_element (const GGS_nonTerminalToAddList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_nonTerminalToAddList_2E_element & operator = (const GGS_nonTerminalToAddList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalToAddList_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                   const class GGS_uint & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalToAddList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalToAddList_2E_element ;

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
  public: GGS_filewrapperTemplateListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
// Phase 1: @wrapperFileMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_wrapperFileMap final {

  public: DownEnumerator_wrapperFileMap (const class GGS_wrapperFileMap & inMap) ;

  public: ~ DownEnumerator_wrapperFileMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_string current_mAbsoluteFilePath (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsTextFile (LOCATION_ARGS) const ;

  public: class GGS_uint current_mWrapperDirectoryIndex (LOCATION_ARGS) const ;

  public: class GGS_uint current_mWrapperFileIndex (LOCATION_ARGS) const ;

  public: class GGS_wrapperFileMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_wrapperFileMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_wrapperFileMap (const DownEnumerator_wrapperFileMap &) = delete ;
  private: DownEnumerator_wrapperFileMap & operator = (const DownEnumerator_wrapperFileMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_wrapperFileMap final {
  public: UpEnumerator_wrapperFileMap (const class GGS_wrapperFileMap & inMap)  ;

  public: ~ UpEnumerator_wrapperFileMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mAbsoluteFilePath (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsTextFile (LOCATION_ARGS) const ;
  public: class GGS_uint current_mWrapperDirectoryIndex (LOCATION_ARGS) const ;
  public: class GGS_uint current_mWrapperFileIndex (LOCATION_ARGS) const ;
  public: class GGS_wrapperFileMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_wrapperFileMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_wrapperFileMap (const UpEnumerator_wrapperFileMap &) = delete ;
  private: UpEnumerator_wrapperFileMap & operator = (const UpEnumerator_wrapperFileMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_wrapperFileMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_wrapperFileMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_wrapperFileMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_wrapperFileMap (void) ;

//--- Handle copy
  public: GGS_wrapperFileMap (const GGS_wrapperFileMap & inSource) ;
  public: GGS_wrapperFileMap & operator = (const GGS_wrapperFileMap & inSource) ;

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
  protected: void performInsert (const class GGS_wrapperFileMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_wrapperFileMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_wrapperFileMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_wrapperFileMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_wrapperFileMap extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_wrapperFileMap class_func_mapWithMapToOverride (const class GGS_wrapperFileMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_string constinArgument1,
                                 class GGS_bool constinArgument2,
                                 class GGS_uint constinArgument3,
                                 class GGS_uint constinArgument4,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMAbsoluteFilePathForKey (class GGS_string constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsTextFileForKey (class GGS_bool constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMWrapperDirectoryIndexForKey (class GGS_uint constinArgument0,
                                                       class GGS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMWrapperFileIndexForKey (class GGS_uint constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_string & outArgument1,
                                 class GGS_bool & outArgument2,
                                 class GGS_uint & outArgument3,
                                 class GGS_uint & outArgument4,
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

  public: class GGS_string getter_mAbsoluteFilePathForKey (const class GGS_string & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsTextFileForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mWrapperDirectoryIndexForKey (const class GGS_string & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mWrapperFileIndexForKey (const class GGS_string & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_wrapperFileMap getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_wrapperFileMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_wrapperFileMap ;
  friend class DownEnumerator_wrapperFileMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_wrapperFileMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @wrapperFileMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_wrapperFileMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_string mProperty_mAbsoluteFilePath ;
  public: inline GGS_string readProperty_mAbsoluteFilePath (void) const {
    return mProperty_mAbsoluteFilePath ;
  }

  public: GGS_bool mProperty_mIsTextFile ;
  public: inline GGS_bool readProperty_mIsTextFile (void) const {
    return mProperty_mIsTextFile ;
  }

  public: GGS_uint mProperty_mWrapperDirectoryIndex ;
  public: inline GGS_uint readProperty_mWrapperDirectoryIndex (void) const {
    return mProperty_mWrapperDirectoryIndex ;
  }

  public: GGS_uint mProperty_mWrapperFileIndex ;
  public: inline GGS_uint readProperty_mWrapperFileIndex (void) const {
    return mProperty_mWrapperFileIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_wrapperFileMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAbsoluteFilePath (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAbsoluteFilePath = inValue ;
  }

  public: inline void setter_setMIsTextFile (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsTextFile = inValue ;
  }

  public: inline void setter_setMWrapperDirectoryIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWrapperDirectoryIndex = inValue ;
  }

  public: inline void setter_setMWrapperFileIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWrapperFileIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_wrapperFileMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_string & in_mAbsoluteFilePath,
                                         const GGS_bool & in_mIsTextFile,
                                         const GGS_uint & in_mWrapperDirectoryIndex,
                                         const GGS_uint & in_mWrapperFileIndex) ;

//--------------------------------- Copy constructor
  public: GGS_wrapperFileMap_2E_element (const GGS_wrapperFileMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_wrapperFileMap_2E_element & operator = (const GGS_wrapperFileMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_wrapperFileMap_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_bool & inOperand2,
                                                                         const class GGS_uint & inOperand3,
                                                                         const class GGS_uint & inOperand4,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_wrapperFileMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_wrapperFileMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: wrapperFileMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_wrapperFileMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_wrapperFileMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_wrapperFileMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_wrapperFileMap_2E_element_3F_ (const GGS_wrapperFileMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_wrapperFileMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_wrapperFileMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_wrapperFileMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_wrapperFileMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @wrapperDirectoryMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_wrapperDirectoryMap final {

  public: DownEnumerator_wrapperDirectoryMap (const class GGS_wrapperDirectoryMap & inMap) ;

  public: ~ DownEnumerator_wrapperDirectoryMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_wrapperFileMap current_mRegularFileMap (LOCATION_ARGS) const ;

  public: class GGS_wrapperDirectoryMap current_mDirectoryMap (LOCATION_ARGS) const ;

  public: class GGS_uint current_mWrapperDirectoryIndex (LOCATION_ARGS) const ;

  public: class GGS_wrapperDirectoryMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_wrapperDirectoryMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_wrapperDirectoryMap (const DownEnumerator_wrapperDirectoryMap &) = delete ;
  private: DownEnumerator_wrapperDirectoryMap & operator = (const DownEnumerator_wrapperDirectoryMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_wrapperDirectoryMap final {
  public: UpEnumerator_wrapperDirectoryMap (const class GGS_wrapperDirectoryMap & inMap)  ;

  public: ~ UpEnumerator_wrapperDirectoryMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_wrapperFileMap current_mRegularFileMap (LOCATION_ARGS) const ;
  public: class GGS_wrapperDirectoryMap current_mDirectoryMap (LOCATION_ARGS) const ;
  public: class GGS_uint current_mWrapperDirectoryIndex (LOCATION_ARGS) const ;
  public: class GGS_wrapperDirectoryMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_wrapperDirectoryMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_wrapperDirectoryMap (const UpEnumerator_wrapperDirectoryMap &) = delete ;
  private: UpEnumerator_wrapperDirectoryMap & operator = (const UpEnumerator_wrapperDirectoryMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_wrapperDirectoryMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_wrapperDirectoryMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_wrapperDirectoryMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_wrapperDirectoryMap (void) ;

//--- Handle copy
  public: GGS_wrapperDirectoryMap (const GGS_wrapperDirectoryMap & inSource) ;
  public: GGS_wrapperDirectoryMap & operator = (const GGS_wrapperDirectoryMap & inSource) ;

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
  protected: void performInsert (const class GGS_wrapperDirectoryMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_wrapperDirectoryMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_wrapperDirectoryMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_wrapperDirectoryMap init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_wrapperDirectoryMap extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_wrapperDirectoryMap class_func_mapWithMapToOverride (const class GGS_wrapperDirectoryMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_wrapperFileMap constinArgument1,
                                 class GGS_wrapperDirectoryMap constinArgument2,
                                 class GGS_uint constinArgument3,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMDirectoryMapForKey (class GGS_wrapperDirectoryMap constinArgument0,
                                              class GGS_string constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegularFileMapForKey (class GGS_wrapperFileMap constinArgument0,
                                                class GGS_string constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMWrapperDirectoryIndexForKey (class GGS_uint constinArgument0,
                                                       class GGS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_wrapperFileMap & outArgument1,
                                 class GGS_wrapperDirectoryMap & outArgument2,
                                 class GGS_uint & outArgument3,
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

  public: class GGS_wrapperDirectoryMap getter_mDirectoryMapForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_wrapperFileMap getter_mRegularFileMapForKey (const class GGS_string & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mWrapperDirectoryIndexForKey (const class GGS_string & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_wrapperDirectoryMap getter_overriddenMap (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_wrapperDirectoryMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_wrapperDirectoryMap ;
  friend class DownEnumerator_wrapperDirectoryMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @wrapperDirectoryMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_wrapperDirectoryMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_wrapperFileMap mProperty_mRegularFileMap ;
  public: inline GGS_wrapperFileMap readProperty_mRegularFileMap (void) const {
    return mProperty_mRegularFileMap ;
  }

  public: GGS_wrapperDirectoryMap mProperty_mDirectoryMap ;
  public: inline GGS_wrapperDirectoryMap readProperty_mDirectoryMap (void) const {
    return mProperty_mDirectoryMap ;
  }

  public: GGS_uint mProperty_mWrapperDirectoryIndex ;
  public: inline GGS_uint readProperty_mWrapperDirectoryIndex (void) const {
    return mProperty_mWrapperDirectoryIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_wrapperDirectoryMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRegularFileMap (const GGS_wrapperFileMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegularFileMap = inValue ;
  }

  public: inline void setter_setMDirectoryMap (const GGS_wrapperDirectoryMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDirectoryMap = inValue ;
  }

  public: inline void setter_setMWrapperDirectoryIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWrapperDirectoryIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_wrapperDirectoryMap_2E_element (const GGS_lstring & in_lkey,
                                              const GGS_wrapperFileMap & in_mRegularFileMap,
                                              const GGS_wrapperDirectoryMap & in_mDirectoryMap,
                                              const GGS_uint & in_mWrapperDirectoryIndex) ;

//--------------------------------- Copy constructor
  public: GGS_wrapperDirectoryMap_2E_element (const GGS_wrapperDirectoryMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_wrapperDirectoryMap_2E_element & operator = (const GGS_wrapperDirectoryMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_wrapperDirectoryMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_wrapperFileMap & inOperand1,
                                                                          const class GGS_wrapperDirectoryMap & inOperand2,
                                                                          const class GGS_uint & inOperand3,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_wrapperDirectoryMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: wrapperDirectoryMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_wrapperDirectoryMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_wrapperDirectoryMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_wrapperDirectoryMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_wrapperDirectoryMap_2E_element_3F_ (const GGS_wrapperDirectoryMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_wrapperDirectoryMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_wrapperDirectoryMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_wrapperDirectoryMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap_2E_element_3F_ ;

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
//
//Extension getter '@selfMutability selfIsMutable' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_selfIsMutable (const class GGS_selfMutability & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfAvailability_2E_available struct
//--------------------------------------------------------------------------------------------------

class GGS_selfAvailability_2E_available : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_type ;
  public: inline GGS_unifiedTypeMapEntry readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_selfMutability mProperty_selfMutability ;
  public: inline GGS_selfMutability readProperty_selfMutability (void) const {
    return mProperty_selfMutability ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_selfAvailability_2E_available (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setSelfMutability (const GGS_selfMutability & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_selfMutability = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_selfAvailability_2E_available (const GGS_unifiedTypeMapEntry & in_type,
                                             const GGS_selfMutability & in_selfMutability) ;

//--------------------------------- Copy constructor
  public: GGS_selfAvailability_2E_available (const GGS_selfAvailability_2E_available & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_selfAvailability_2E_available & operator = (const GGS_selfAvailability_2E_available & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfAvailability_2E_available init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                 const class GGS_selfMutability & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfAvailability_2E_available extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfAvailability_2E_available & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAvailability_2E_available ;

//--------------------------------------------------------------------------------------------------
// Phase 1: selfAvailability.available? optional
//--------------------------------------------------------------------------------------------------

class GGS_selfAvailability_2E_available_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_selfAvailability_2E_available mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_selfAvailability_2E_available_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_selfAvailability_2E_available_3F_ (const GGS_selfAvailability_2E_available & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_selfAvailability_2E_available_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_selfAvailability_2E_available unwrappedValue (void) const {
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
  public: static GGS_selfAvailability_2E_available_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfAvailability_2E_available_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAvailability_2E_available_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_syntaxDeclarationForGeneration : public GGS_semanticDeclarationForGeneration {
//--------------------------------- Default constructor
  public: GGS_syntaxDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_syntaxDeclarationForGeneration (const class cPtr_syntaxDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mSyntaxComponentName (void) const ;

  public: class GGS_string readProperty_mLexiqueName (void) const ;

  public: class GGS_nonterminalMap readProperty_mNonterminalDeclarationMap (void) const ;

  public: class GGS_ruleDeclarationList readProperty_mRuleDeclarationList (void) const ;

  public: class GGS_uint readProperty_mSelectMethodCount (void) const ;

  public: class GGS_bool readProperty_mHasIndexing (void) const ;

  public: class GGS_bool readProperty_mHasTranslateFeature (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxDeclarationForGeneration init_21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                      const class GGS_string & inOperand1,
                                                                                      const class GGS_nonterminalMap & inOperand2,
                                                                                      const class GGS_ruleDeclarationList & inOperand3,
                                                                                      const class GGS_uint & inOperand4,
                                                                                      const class GGS_bool & inOperand5,
                                                                                      const class GGS_bool & inOperand6,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxDeclarationForGeneration extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syntaxDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @syntaxDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_syntaxDeclarationForGeneration : public cPtr_semanticDeclarationForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void syntaxDeclarationForGeneration_init_21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                const class GGS_string & inOperand1,
                                                                                const class GGS_nonterminalMap & inOperand2,
                                                                                const class GGS_ruleDeclarationList & inOperand3,
                                                                                const class GGS_uint & inOperand4,
                                                                                const class GGS_bool & inOperand5,
                                                                                const class GGS_bool & inOperand6,
                                                                                Compiler * inCompiler) ;


//--- Extension getter getImplementationCppFileName
  public: virtual class GGS_string getter_getImplementationCppFileName (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter hasCppHeaderFile
  public: virtual class GGS_bool getter_hasCppHeaderFile (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isPredefined
  public: virtual class GGS_bool getter_isPredefined (Compiler * COMMA_LOCATION_ARGS) const override ;

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
  public: GGS_string mProperty_mSyntaxComponentName ;
  public: GGS_string mProperty_mLexiqueName ;
  public: GGS_nonterminalMap mProperty_mNonterminalDeclarationMap ;
  public: GGS_ruleDeclarationList mProperty_mRuleDeclarationList ;
  public: GGS_uint mProperty_mSelectMethodCount ;
  public: GGS_bool mProperty_mHasIndexing ;
  public: GGS_bool mProperty_mHasTranslateFeature ;


//--- Default constructor
  public: cPtr_syntaxDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syntaxDeclarationForGeneration (const GGS_string & in_mSyntaxComponentName,
                                               const GGS_string & in_mLexiqueName,
                                               const GGS_nonterminalMap & in_mNonterminalDeclarationMap,
                                               const GGS_ruleDeclarationList & in_mRuleDeclarationList,
                                               const GGS_uint & in_mSelectMethodCount,
                                               const GGS_bool & in_mHasIndexing,
                                               const GGS_bool & in_mHasTranslateFeature,
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
// Phase 1: @syntaxDeclarationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_syntaxDeclarationForGeneration_2E_weak : public GGS_semanticDeclarationForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_syntaxDeclarationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_syntaxDeclarationForGeneration_2E_weak (const class GGS_syntaxDeclarationForGeneration & inSource) ;

  public: GGS_syntaxDeclarationForGeneration_2E_weak & operator = (const class GGS_syntaxDeclarationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_syntaxDeclarationForGeneration_2E_weak init_nil (void) {
    GGS_syntaxDeclarationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_syntaxDeclarationForGeneration bang_syntaxDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_syntaxDeclarationForGeneration unwrappedValue (void) const ;

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
  public: static GGS_syntaxDeclarationForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syntaxDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primitiveTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_primitiveTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_primitiveTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_primitiveTypeForGeneration (const class cPtr_primitiveTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mPredefinedTypeName (void) const ;

  public: class GGS_string readProperty_mCppDeclarationString (void) const ;

  public: class GGS_bool readProperty_isPackage (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primitiveTypeForGeneration init_21__21__21__21_isPackage (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                               const class GGS_string & inOperand1,
                                                                               const class GGS_string & inOperand2,
                                                                               const class GGS_bool & inOperand3,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primitiveTypeForGeneration extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_primitiveTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @primitiveTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_primitiveTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void primitiveTypeForGeneration_init_21__21__21__21_isPackage (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_string & inOperand2,
                                                                         const class GGS_bool & inOperand3,
                                                                         Compiler * inCompiler) ;


//--- Extension getter appendPrimitiveTypeDeclaration
  public: virtual class GGS_string getter_appendPrimitiveTypeDeclaration (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendPrimitiveTypePreDeclaration
  public: virtual void method_appendPrimitiveTypePreDeclaration (class GGS_string & arg_ioHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mPredefinedTypeName ;
  public: GGS_string mProperty_mCppDeclarationString ;
  public: GGS_bool mProperty_isPackage ;


//--- Default constructor
  public: cPtr_primitiveTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_primitiveTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                           const GGS_string & in_mPredefinedTypeName,
                                           const GGS_string & in_mCppDeclarationString,
                                           const GGS_bool & in_isPackage,
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
// Phase 1: @primitiveTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_primitiveTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_primitiveTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_primitiveTypeForGeneration_2E_weak (const class GGS_primitiveTypeForGeneration & inSource) ;

  public: GGS_primitiveTypeForGeneration_2E_weak & operator = (const class GGS_primitiveTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_primitiveTypeForGeneration_2E_weak init_nil (void) {
    GGS_primitiveTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_primitiveTypeForGeneration bang_primitiveTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_primitiveTypeForGeneration unwrappedValue (void) const ;

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
  public: static GGS_primitiveTypeForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primitiveTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_primitiveTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateVariableMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_templateVariableMap final {

  public: DownEnumerator_templateVariableMap (const class GGS_templateVariableMap & inMap) ;

  public: ~ DownEnumerator_templateVariableMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;

  public: class GGS_string current_mCppName (LOCATION_ARGS) const ;

  public: class GGS_templateVariableMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_templateVariableMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_templateVariableMap (const DownEnumerator_templateVariableMap &) = delete ;
  private: DownEnumerator_templateVariableMap & operator = (const DownEnumerator_templateVariableMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_templateVariableMap final {
  public: UpEnumerator_templateVariableMap (const class GGS_templateVariableMap & inMap)  ;

  public: ~ UpEnumerator_templateVariableMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GGS_string current_mCppName (LOCATION_ARGS) const ;
  public: class GGS_templateVariableMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_templateVariableMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_templateVariableMap (const UpEnumerator_templateVariableMap &) = delete ;
  private: UpEnumerator_templateVariableMap & operator = (const UpEnumerator_templateVariableMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_templateVariableMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_templateVariableMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_templateVariableMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_templateVariableMap (void) ;

//--- Handle copy
  public: GGS_templateVariableMap (const GGS_templateVariableMap & inSource) ;
  public: GGS_templateVariableMap & operator = (const GGS_templateVariableMap & inSource) ;

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
  protected: void performInsert (const class GGS_templateVariableMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_templateVariableMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_templateVariableMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateVariableMap init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateVariableMap extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateVariableMap class_func_mapWithMapToOverride (const class GGS_templateVariableMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_unifiedTypeMapEntry constinArgument1,
                                 class GGS_string constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMCppNameForKey (class GGS_string constinArgument0,
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

  public: class GGS_string getter_mCppNameForKey (const class GGS_string & constinOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry getter_mTypeForKey (const class GGS_string & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateVariableMap getter_overriddenMap (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_templateVariableMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_templateVariableMap ;
  friend class DownEnumerator_templateVariableMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateVariableMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateVariableMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_templateVariableMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GGS_string mProperty_mCppName ;
  public: inline GGS_string readProperty_mCppName (void) const {
    return mProperty_mCppName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateVariableMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateVariableMap_2E_element (const GGS_lstring & in_lkey,
                                              const GGS_unifiedTypeMapEntry & in_mType,
                                              const GGS_string & in_mCppName) ;

//--------------------------------- Copy constructor
  public: GGS_templateVariableMap_2E_element (const GGS_templateVariableMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateVariableMap_2E_element & operator = (const GGS_templateVariableMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateVariableMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                      const class GGS_string & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateVariableMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateVariableMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: templateVariableMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_templateVariableMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_templateVariableMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_templateVariableMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_templateVariableMap_2E_element_3F_ (const GGS_templateVariableMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_templateVariableMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_templateVariableMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_templateVariableMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateVariableMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateExpressionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_templateExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateExpressionAST (const class cPtr_templateExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateExpressionAST init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateExpressionAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateExpressionAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateExpressionAST_init (Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_templateExpressionAST (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateExpressionListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_templateExpressionListAST final {
  public: DownEnumerator_templateExpressionListAST (const class GGS_templateExpressionListAST & inList) ;

  public: ~ DownEnumerator_templateExpressionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mActualSelector (LOCATION_ARGS) const ;
  public: class GGS_templateExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfExpressionLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateExpressionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_templateExpressionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_templateExpressionListAST (const DownEnumerator_templateExpressionListAST &) = delete ;
  private: DownEnumerator_templateExpressionListAST & operator = (const DownEnumerator_templateExpressionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_templateExpressionListAST final {
  public: UpEnumerator_templateExpressionListAST (const class GGS_templateExpressionListAST & inList)  ;

  public: ~ UpEnumerator_templateExpressionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mActualSelector (LOCATION_ARGS) const ;
  public: class GGS_templateExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfExpressionLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateExpressionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_templateExpressionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_templateExpressionListAST (const UpEnumerator_templateExpressionListAST &) = delete ;
  private: UpEnumerator_templateExpressionListAST & operator = (const UpEnumerator_templateExpressionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @templateExpressionListAST list
//--------------------------------------------------------------------------------------------------

class GGS_templateExpressionListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_templateExpressionListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_templateExpressionListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_templateExpressionListAST (void) = default ;

//--- Copy
  public: GGS_templateExpressionListAST (const GGS_templateExpressionListAST &) = default ;
  public: GGS_templateExpressionListAST & operator = (const GGS_templateExpressionListAST &) = default ;

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
  public : inline GenericArray <GGS_templateExpressionListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_templateExpressionListAST subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_templateExpressionListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mActualSelector,
                                                 const class GGS_templateExpressionAST & in_mExpression,
                                                 const class GGS_location & in_mEndOfExpressionLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateExpressionListAST init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateExpressionListAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateExpressionListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                               const class GGS_templateExpressionAST & inOperand1,
                                                                               const class GGS_location & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_templateExpressionListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_templateExpressionAST & inOperand1,
                                   const class GGS_location & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_templateExpressionListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_templateExpressionListAST add_operation (const GGS_templateExpressionListAST & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_templateExpressionAST constinArgument1,
                              class GGS_location constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_templateExpressionAST constinArgument1,
                                     class GGS_location constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_templateExpressionAST & outArgument1,
                                class GGS_location & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_templateExpressionAST & outArgument1,
                               class GGS_location & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_templateExpressionAST & outArgument1,
                                     class GGS_location & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMActualSelectorAtIndex (class GGS_lstring constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfExpressionLocationAtIndex (class GGS_location constinArgument0,
                                                          class GGS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMExpressionAtIndex (class GGS_templateExpressionAST constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_templateExpressionAST & outArgument1,
                             class GGS_location & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_templateExpressionAST & outArgument1,
                            class GGS_location & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mActualSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfExpressionLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateExpressionAST getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_templateExpressionListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateExpressionListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateExpressionListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_templateExpressionListAST ;
  friend class DownEnumerator_templateExpressionListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateExpressionListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateExpressionListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_templateExpressionListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: inline GGS_lstring readProperty_mActualSelector (void) const {
    return mProperty_mActualSelector ;
  }

  public: GGS_templateExpressionAST mProperty_mExpression ;
  public: inline GGS_templateExpressionAST readProperty_mExpression (void) const {
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
  public: GGS_templateExpressionListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMActualSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActualSelector = inValue ;
  }

  public: inline void setter_setMExpression (const GGS_templateExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMEndOfExpressionLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfExpressionLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateExpressionListAST_2E_element (const GGS_lstring & in_mActualSelector,
                                                    const GGS_templateExpressionAST & in_mExpression,
                                                    const GGS_location & in_mEndOfExpressionLocation) ;

//--------------------------------- Copy constructor
  public: GGS_templateExpressionListAST_2E_element (const GGS_templateExpressionListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateExpressionListAST_2E_element & operator = (const GGS_templateExpressionListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateExpressionListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_templateExpressionAST & inOperand1,
                                                                            const class GGS_location & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateExpressionListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateExpressionListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateExpressionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_templateExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateExpressionAST_2E_weak (const class GGS_templateExpressionAST & inSource) ;

  public: GGS_templateExpressionAST_2E_weak & operator = (const class GGS_templateExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateExpressionAST_2E_weak init_nil (void) {
    GGS_templateExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateExpressionAST bang_templateExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_templateExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak ;

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//--- 
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

//--- Current element access
  public: class GGS_unifiedTypeMapEntry current (LOCATION_ARGS) const ;

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }
  
//--- 
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

//--- Current element access
  public: class GGS_unifiedTypeMapEntry current (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_unifiedTypeMapEntry> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_unifiedTypeMapEntry_5D_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_unifiedTypeMapEntry> mSharedArray ;

//--------------------------------- Default constructor
  public: GGS__5B_unifiedTypeMapEntry_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_unifiedTypeMapEntry_5D_ (const GGS__5B_unifiedTypeMapEntry_5D_ & inSource) ;
  public: GGS__5B_unifiedTypeMapEntry_5D_ & operator = (const GGS__5B_unifiedTypeMapEntry_5D_ & inSource) ;

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_unifiedTypeMapEntry_5D_ ;
  friend class DownEnumerator__5B_unifiedTypeMapEntry_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_unifiedTypeMapEntry_5D_ init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__5B_unifiedTypeMapEntry_5D_ extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_unifiedTypeMapEntry_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
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


//--------------------------------- Read subscripts
  public: class GGS_unifiedTypeMapEntry readSubscript__3F_ (const class GGS_uint & in0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_unifiedTypeMapEntry_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_templateInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionAST (const class cPtr_templateInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionAST init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionAST_init (Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_templateInstructionAST (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_templateInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionAST_2E_weak (const class GGS_templateInstructionAST & inSource) ;

  public: GGS_templateInstructionAST_2E_weak & operator = (const class GGS_templateInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionAST_2E_weak init_nil (void) {
    GGS_templateInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionAST bang_templateInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_templateInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_templateInstructionListAST final {
  public: DownEnumerator_templateInstructionListAST (const class GGS_templateInstructionListAST & inList) ;

  public: ~ DownEnumerator_templateInstructionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_templateInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateInstructionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_templateInstructionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_templateInstructionListAST (const DownEnumerator_templateInstructionListAST &) = delete ;
  private: DownEnumerator_templateInstructionListAST & operator = (const DownEnumerator_templateInstructionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_templateInstructionListAST final {
  public: UpEnumerator_templateInstructionListAST (const class GGS_templateInstructionListAST & inList)  ;

  public: ~ UpEnumerator_templateInstructionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_templateInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateInstructionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_templateInstructionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_templateInstructionListAST (const UpEnumerator_templateInstructionListAST &) = delete ;
  private: UpEnumerator_templateInstructionListAST & operator = (const UpEnumerator_templateInstructionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @templateInstructionListAST list
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_templateInstructionListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_templateInstructionListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_templateInstructionListAST (void) = default ;

//--- Copy
  public: GGS_templateInstructionListAST (const GGS_templateInstructionListAST &) = default ;
  public: GGS_templateInstructionListAST & operator = (const GGS_templateInstructionListAST &) = default ;

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
  public : inline GenericArray <GGS_templateInstructionListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_templateInstructionListAST subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_templateInstructionListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_templateInstructionAST & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionListAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionListAST class_func_listWithValue (const class GGS_templateInstructionAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_templateInstructionListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_templateInstructionAST & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_templateInstructionListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_templateInstructionListAST add_operation (const GGS_templateInstructionListAST & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_templateInstructionAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_templateInstructionAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_templateInstructionAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_templateInstructionAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_templateInstructionAST & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionAtIndex (class GGS_templateInstructionAST constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_templateInstructionAST & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_templateInstructionAST & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_templateInstructionAST getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_templateInstructionListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_templateInstructionListAST ;
  friend class DownEnumerator_templateInstructionListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_templateInstructionAST mProperty_mInstruction ;
  public: inline GGS_templateInstructionAST readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateInstructionListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_templateInstructionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateInstructionListAST_2E_element (const GGS_templateInstructionAST & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_templateInstructionListAST_2E_element (const GGS_templateInstructionListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateInstructionListAST_2E_element & operator = (const GGS_templateInstructionListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionListAST_2E_element init_21_ (const class GGS_templateInstructionAST & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateClassFunctionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateClassFunctionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateClassFunctionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateClassFunctionAST (const class cPtr_templateClassFunctionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mClassFunctionName (void) const ;

  public: class GGS_templateExpressionListAST readProperty_mExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateClassFunctionAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                const class GGS_templateExpressionListAST & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateClassFunctionAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateClassFunctionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateClassFunctionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateClassFunctionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateClassFunctionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateClassFunctionAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_lstring & inOperand1,
                                                          const class GGS_templateExpressionListAST & inOperand2,
                                                          Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mClassFunctionName ;
  public: GGS_templateExpressionListAST mProperty_mExpressionList ;


//--- Default constructor
  public: cPtr_templateClassFunctionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateClassFunctionAST (const GGS_lstring & in_mTypeName,
                                         const GGS_lstring & in_mClassFunctionName,
                                         const GGS_templateExpressionListAST & in_mExpressionList,
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
// Phase 1: @templateClassFunctionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateClassFunctionAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateClassFunctionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateClassFunctionAST_2E_weak (const class GGS_templateClassFunctionAST & inSource) ;

  public: GGS_templateClassFunctionAST_2E_weak & operator = (const class GGS_templateClassFunctionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateClassFunctionAST_2E_weak init_nil (void) {
    GGS_templateClassFunctionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateClassFunctionAST bang_templateClassFunctionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateClassFunctionAST unwrappedValue (void) const ;

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
  public: static GGS_templateClassFunctionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateClassFunctionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateClassFunctionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateClassFunctionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateFileWrapperTemplateCallAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateFileWrapperTemplateCallAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateFileWrapperTemplateCallAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateFileWrapperTemplateCallAST (const class cPtr_templateFileWrapperTemplateCallAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFileWrapperName (void) const ;

  public: class GGS_lstring readProperty_mTemplateName (void) const ;

  public: class GGS_templateExpressionListAST readProperty_mOutExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateFileWrapperTemplateCallAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_templateExpressionListAST & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateFileWrapperTemplateCallAST extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateFileWrapperTemplateCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateFileWrapperTemplateCallAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateFileWrapperTemplateCallAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateFileWrapperTemplateCallAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_templateExpressionListAST & inOperand2,
                                                                    Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mFileWrapperName ;
  public: GGS_lstring mProperty_mTemplateName ;
  public: GGS_templateExpressionListAST mProperty_mOutExpressionList ;


//--- Default constructor
  public: cPtr_templateFileWrapperTemplateCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateFileWrapperTemplateCallAST (const GGS_lstring & in_mFileWrapperName,
                                                   const GGS_lstring & in_mTemplateName,
                                                   const GGS_templateExpressionListAST & in_mOutExpressionList,
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
// Phase 1: @templateFileWrapperTemplateCallAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateFileWrapperTemplateCallAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateFileWrapperTemplateCallAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateFileWrapperTemplateCallAST_2E_weak (const class GGS_templateFileWrapperTemplateCallAST & inSource) ;

  public: GGS_templateFileWrapperTemplateCallAST_2E_weak & operator = (const class GGS_templateFileWrapperTemplateCallAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateFileWrapperTemplateCallAST_2E_weak init_nil (void) {
    GGS_templateFileWrapperTemplateCallAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateFileWrapperTemplateCallAST bang_templateFileWrapperTemplateCallAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateFileWrapperTemplateCallAST unwrappedValue (void) const ;

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
  public: static GGS_templateFileWrapperTemplateCallAST_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateFileWrapperTemplateCallAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateFileWrapperTemplateCallAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateExtensionTemplateCallAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateExtensionTemplateCallAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateExtensionTemplateCallAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateExtensionTemplateCallAST (const class cPtr_templateExtensionTemplateCallAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_templateExpressionAST readProperty_mExpressionValue (void) const ;

  public: class GGS_lstring readProperty_mTemplateName (void) const ;

  public: class GGS_templateExpressionListAST readProperty_mOutExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateExtensionTemplateCallAST init_21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_templateExpressionListAST & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateExtensionTemplateCallAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateExtensionTemplateCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateExtensionTemplateCallAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateExtensionTemplateCallAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateExtensionTemplateCallAST_init_21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_templateExpressionListAST & inOperand2,
                                                                  Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_templateExpressionAST mProperty_mExpressionValue ;
  public: GGS_lstring mProperty_mTemplateName ;
  public: GGS_templateExpressionListAST mProperty_mOutExpressionList ;


//--- Default constructor
  public: cPtr_templateExtensionTemplateCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateExtensionTemplateCallAST (const GGS_templateExpressionAST & in_mExpressionValue,
                                                 const GGS_lstring & in_mTemplateName,
                                                 const GGS_templateExpressionListAST & in_mOutExpressionList,
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
// Phase 1: @templateExtensionTemplateCallAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateExtensionTemplateCallAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateExtensionTemplateCallAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateExtensionTemplateCallAST_2E_weak (const class GGS_templateExtensionTemplateCallAST & inSource) ;

  public: GGS_templateExtensionTemplateCallAST_2E_weak & operator = (const class GGS_templateExtensionTemplateCallAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateExtensionTemplateCallAST_2E_weak init_nil (void) {
    GGS_templateExtensionTemplateCallAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateExtensionTemplateCallAST bang_templateExtensionTemplateCallAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateExtensionTemplateCallAST unwrappedValue (void) const ;

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
  public: static GGS_templateExtensionTemplateCallAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateExtensionTemplateCallAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateExtensionTemplateCallAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateAndOperationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateAndOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateAndOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateAndOperationAST (const class cPtr_templateAndOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateAndOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_templateExpressionAST & inOperand1,
                                                               const class GGS_templateExpressionAST & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateAndOperationAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateAndOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateAndOperationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateAndOperationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateAndOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateAndOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                         const class GGS_templateExpressionAST & inOperand1,
                                                         const class GGS_templateExpressionAST & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateAndOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateAndOperationAST (const GGS_location & in_mOperatorLocation,
                                        const GGS_templateExpressionAST & in_mLeftExpression,
                                        const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateAndOperationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateAndOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateAndOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateAndOperationAST_2E_weak (const class GGS_templateAndOperationAST & inSource) ;

  public: GGS_templateAndOperationAST_2E_weak & operator = (const class GGS_templateAndOperationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateAndOperationAST_2E_weak init_nil (void) {
    GGS_templateAndOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateAndOperationAST bang_templateAndOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateAndOperationAST unwrappedValue (void) const ;

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
  public: static GGS_templateAndOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateAndOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateAndOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateAndOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateOrOperationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateOrOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateOrOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateOrOperationAST (const class cPtr_templateOrOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateOrOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_templateExpressionAST & inOperand1,
                                                              const class GGS_templateExpressionAST & inOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateOrOperationAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateOrOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateOrOperationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateOrOperationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateOrOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateOrOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                        const class GGS_templateExpressionAST & inOperand1,
                                                        const class GGS_templateExpressionAST & inOperand2,
                                                        Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateOrOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateOrOperationAST (const GGS_location & in_mOperatorLocation,
                                       const GGS_templateExpressionAST & in_mLeftExpression,
                                       const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateOrOperationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateOrOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateOrOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateOrOperationAST_2E_weak (const class GGS_templateOrOperationAST & inSource) ;

  public: GGS_templateOrOperationAST_2E_weak & operator = (const class GGS_templateOrOperationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateOrOperationAST_2E_weak init_nil (void) {
    GGS_templateOrOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateOrOperationAST bang_templateOrOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateOrOperationAST unwrappedValue (void) const ;

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
  public: static GGS_templateOrOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateOrOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateOrOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateOrOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateXorOperationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateXorOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateXorOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateXorOperationAST (const class cPtr_templateXorOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateXorOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_templateExpressionAST & inOperand1,
                                                               const class GGS_templateExpressionAST & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateXorOperationAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateXorOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateXorOperationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateXorOperationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateXorOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateXorOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                         const class GGS_templateExpressionAST & inOperand1,
                                                         const class GGS_templateExpressionAST & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateXorOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateXorOperationAST (const GGS_location & in_mOperatorLocation,
                                        const GGS_templateExpressionAST & in_mLeftExpression,
                                        const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateXorOperationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateXorOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateXorOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateXorOperationAST_2E_weak (const class GGS_templateXorOperationAST & inSource) ;

  public: GGS_templateXorOperationAST_2E_weak & operator = (const class GGS_templateXorOperationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateXorOperationAST_2E_weak init_nil (void) {
    GGS_templateXorOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateXorOperationAST bang_templateXorOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateXorOperationAST unwrappedValue (void) const ;

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
  public: static GGS_templateXorOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateXorOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateXorOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateXorOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateTrueBoolAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateTrueBoolAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateTrueBoolAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateTrueBoolAST (const class cPtr_templateTrueBoolAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateTrueBoolAST init_21_ (const class GGS_location & inOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateTrueBoolAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateTrueBoolAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateTrueBoolAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateTrueBoolAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateTrueBoolAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateTrueBoolAST_init_21_ (const class GGS_location & inOperand0,
                                             Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_templateTrueBoolAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateTrueBoolAST (const GGS_location & in_mLocation,
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
// Phase 1: @templateTrueBoolAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateTrueBoolAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateTrueBoolAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateTrueBoolAST_2E_weak (const class GGS_templateTrueBoolAST & inSource) ;

  public: GGS_templateTrueBoolAST_2E_weak & operator = (const class GGS_templateTrueBoolAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateTrueBoolAST_2E_weak init_nil (void) {
    GGS_templateTrueBoolAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateTrueBoolAST bang_templateTrueBoolAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateTrueBoolAST unwrappedValue (void) const ;

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
  public: static GGS_templateTrueBoolAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateTrueBoolAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateTrueBoolAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateTrueBoolAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateFalseBoolAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateFalseBoolAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateFalseBoolAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateFalseBoolAST (const class cPtr_templateFalseBoolAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateFalseBoolAST init_21_ (const class GGS_location & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateFalseBoolAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateFalseBoolAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateFalseBoolAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateFalseBoolAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateFalseBoolAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateFalseBoolAST_init_21_ (const class GGS_location & inOperand0,
                                              Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_templateFalseBoolAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateFalseBoolAST (const GGS_location & in_mLocation,
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
// Phase 1: @templateFalseBoolAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateFalseBoolAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateFalseBoolAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateFalseBoolAST_2E_weak (const class GGS_templateFalseBoolAST & inSource) ;

  public: GGS_templateFalseBoolAST_2E_weak & operator = (const class GGS_templateFalseBoolAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateFalseBoolAST_2E_weak init_nil (void) {
    GGS_templateFalseBoolAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateFalseBoolAST bang_templateFalseBoolAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateFalseBoolAST unwrappedValue (void) const ;

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
  public: static GGS_templateFalseBoolAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateFalseBoolAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateFalseBoolAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateFalseBoolAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateLiteralStringExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralStringExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateLiteralStringExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLiteralStringExpressionAST (const class cPtr_templateLiteralStringExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_stringlist readProperty_mLiteralStringList (void) const ;

  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLiteralStringExpressionAST init_21__21_ (const class GGS_stringlist & inOperand0,
                                                                      const class GGS_location & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLiteralStringExpressionAST extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralStringExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateLiteralStringExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateLiteralStringExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateLiteralStringExpressionAST_init_21__21_ (const class GGS_stringlist & inOperand0,
                                                                const class GGS_location & inOperand1,
                                                                Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_stringlist mProperty_mLiteralStringList ;
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_templateLiteralStringExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLiteralStringExpressionAST (const GGS_stringlist & in_mLiteralStringList,
                                                   const GGS_location & in_mLocation,
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
// Phase 1: @templateLiteralStringExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralStringExpressionAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateLiteralStringExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateLiteralStringExpressionAST_2E_weak (const class GGS_templateLiteralStringExpressionAST & inSource) ;

  public: GGS_templateLiteralStringExpressionAST_2E_weak & operator = (const class GGS_templateLiteralStringExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateLiteralStringExpressionAST_2E_weak init_nil (void) {
    GGS_templateLiteralStringExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateLiteralStringExpressionAST bang_templateLiteralStringExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateLiteralStringExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_templateLiteralStringExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLiteralStringExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralStringExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateLiteralUIntExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralUIntExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateLiteralUIntExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLiteralUIntExpressionAST (const class cPtr_templateLiteralUIntExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lbigint readProperty_mLiteralInt (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLiteralUIntExpressionAST init_21_ (const class GGS_lbigint & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLiteralUIntExpressionAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralUIntExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateLiteralUIntExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateLiteralUIntExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateLiteralUIntExpressionAST_init_21_ (const class GGS_lbigint & inOperand0,
                                                          Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lbigint mProperty_mLiteralInt ;


//--- Default constructor
  public: cPtr_templateLiteralUIntExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLiteralUIntExpressionAST (const GGS_lbigint & in_mLiteralInt,
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
// Phase 1: @templateLiteralUIntExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralUIntExpressionAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateLiteralUIntExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateLiteralUIntExpressionAST_2E_weak (const class GGS_templateLiteralUIntExpressionAST & inSource) ;

  public: GGS_templateLiteralUIntExpressionAST_2E_weak & operator = (const class GGS_templateLiteralUIntExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateLiteralUIntExpressionAST_2E_weak init_nil (void) {
    GGS_templateLiteralUIntExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateLiteralUIntExpressionAST bang_templateLiteralUIntExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateLiteralUIntExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_templateLiteralUIntExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLiteralUIntExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralUIntExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST_2E_weak ;

