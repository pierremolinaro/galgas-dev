#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexiqueComponentMapForSemanticAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexiqueComponentMapForSemanticAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_bool mProperty_mIsTemplate ;
  public: inline GGS_bool readProperty_mIsTemplate (void) const {
    return mProperty_mIsTemplate ;
  }

  public: GGS_terminalMap mProperty_mTerminalMap ;
  public: inline GGS_terminalMap readProperty_mTerminalMap (void) const {
    return mProperty_mTerminalMap ;
  }

  public: GGS__5B_indexingAST_5D_ mProperty_mIndexingListAST ;
  public: inline GGS__5B_indexingAST_5D_ readProperty_mIndexingListAST (void) const {
    return mProperty_mIndexingListAST ;
  }

  public: GGS_terminalDeclarationListAST mProperty_mTerminalListAST ;
  public: inline GGS_terminalDeclarationListAST readProperty_mTerminalListAST (void) const {
    return mProperty_mTerminalListAST ;
  }

  public: GGS__5B_lexicalAttributeAST_5D_ mProperty_mLexicalAttributeListAST ;
  public: inline GGS__5B_lexicalAttributeAST_5D_ readProperty_mLexicalAttributeListAST (void) const {
    return mProperty_mLexicalAttributeListAST ;
  }

  public: GGS_lexicalStyleListAST mProperty_mLexicalStyleListAST ;
  public: inline GGS_lexicalStyleListAST readProperty_mLexicalStyleListAST (void) const {
    return mProperty_mLexicalStyleListAST ;
  }

  public: GGS_lexicalListDeclarationListAST mProperty_mLexicalListDeclarationListAST ;
  public: inline GGS_lexicalListDeclarationListAST readProperty_mLexicalListDeclarationListAST (void) const {
    return mProperty_mLexicalListDeclarationListAST ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexiqueComponentMapForSemanticAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIsTemplate (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsTemplate = inValue ;
  }

  public: inline void setter_setMTerminalMap (const GGS_terminalMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalMap = inValue ;
  }

  public: inline void setter_setMIndexingListAST (const GGS__5B_indexingAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndexingListAST = inValue ;
  }

  public: inline void setter_setMTerminalListAST (const GGS_terminalDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalListAST = inValue ;
  }

  public: inline void setter_setMLexicalAttributeListAST (const GGS__5B_lexicalAttributeAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalAttributeListAST = inValue ;
  }

  public: inline void setter_setMLexicalStyleListAST (const GGS_lexicalStyleListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalStyleListAST = inValue ;
  }

  public: inline void setter_setMLexicalListDeclarationListAST (const GGS_lexicalListDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalListDeclarationListAST = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexiqueComponentMapForSemanticAnalysis_2E_element (const GGS_lstring & in_lkey,
                                                                 const GGS_bool & in_mIsTemplate,
                                                                 const GGS_terminalMap & in_mTerminalMap,
                                                                 const GGS__5B_indexingAST_5D_ & in_mIndexingListAST,
                                                                 const GGS_terminalDeclarationListAST & in_mTerminalListAST,
                                                                 const GGS__5B_lexicalAttributeAST_5D_ & in_mLexicalAttributeListAST,
                                                                 const GGS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                                                 const GGS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST) ;

//--------------------------------- Copy constructor
  public: GGS_lexiqueComponentMapForSemanticAnalysis_2E_element (const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexiqueComponentMapForSemanticAnalysis_2E_element & operator = (const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexiqueComponentMapForSemanticAnalysis_2E_element init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                             const class GGS_bool & inOperand1,
                                                                                                             const class GGS_terminalMap & inOperand2,
                                                                                                             const class GGS__5B_indexingAST_5D_ & inOperand3,
                                                                                                             const class GGS_terminalDeclarationListAST & inOperand4,
                                                                                                             const class GGS__5B_lexicalAttributeAST_5D_ & inOperand5,
                                                                                                             const class GGS_lexicalStyleListAST & inOperand6,
                                                                                                             const class GGS_lexicalListDeclarationListAST & inOperand7,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: lexiqueComponentMapForSemanticAnalysis.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_lexiqueComponentMapForSemanticAnalysis_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ (const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_lexiqueComponentMapForSemanticAnalysis_2E_element unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxComponentMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_syntaxComponentMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mLexiqueName ;
  public: inline GGS_lstring readProperty_mLexiqueName (void) const {
    return mProperty_mLexiqueName ;
  }

  public: GGS__5B_nonterminalDeclarationAST_5D_ mProperty_mNonterminalDeclarationList ;
  public: inline GGS__5B_nonterminalDeclarationAST_5D_ readProperty_mNonterminalDeclarationList (void) const {
    return mProperty_mNonterminalDeclarationList ;
  }

  public: GGS__5B_syntaxRuleAST_5D_ mProperty_mRuleList ;
  public: inline GGS__5B_syntaxRuleAST_5D_ readProperty_mRuleList (void) const {
    return mProperty_mRuleList ;
  }

  public: GGS_bool mProperty_mHasTranslateFeature ;
  public: inline GGS_bool readProperty_mHasTranslateFeature (void) const {
    return mProperty_mHasTranslateFeature ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxComponentMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexiqueName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexiqueName = inValue ;
  }

  public: inline void setter_setMNonterminalDeclarationList (const GGS__5B_nonterminalDeclarationAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalDeclarationList = inValue ;
  }

  public: inline void setter_setMRuleList (const GGS__5B_syntaxRuleAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRuleList = inValue ;
  }

  public: inline void setter_setMHasTranslateFeature (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasTranslateFeature = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxComponentMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_lstring & in_mLexiqueName,
                                             const GGS__5B_nonterminalDeclarationAST_5D_ & in_mNonterminalDeclarationList,
                                             const GGS__5B_syntaxRuleAST_5D_ & in_mRuleList,
                                             const GGS_bool & in_mHasTranslateFeature) ;

//--------------------------------- Copy constructor
  public: GGS_syntaxComponentMap_2E_element (const GGS_syntaxComponentMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syntaxComponentMap_2E_element & operator = (const GGS_syntaxComponentMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxComponentMap_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS__5B_nonterminalDeclarationAST_5D_ & inOperand2,
                                                                             const class GGS__5B_syntaxRuleAST_5D_ & inOperand3,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: syntaxComponentMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_syntaxComponentMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_syntaxComponentMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_syntaxComponentMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_syntaxComponentMap_2E_element_3F_ (const GGS_syntaxComponentMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_syntaxComponentMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_syntaxComponentMap_2E_element unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionInitializerMapForType map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionInitializerMapForType final {

  public: DownEnumerator_extensionInitializerMapForType (const class GGS_extensionInitializerMapForType & inMap) ;

  public: ~ DownEnumerator_extensionInitializerMapForType (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_formalInputParameterAST_5D_ current_mFormalParameterList (LOCATION_ARGS) const ;

  public: class GGS_extensionInitializerMapForType_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionInitializerMapForType (const DownEnumerator_extensionInitializerMapForType &) = delete ;
  private: DownEnumerator_extensionInitializerMapForType & operator = (const DownEnumerator_extensionInitializerMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionInitializerMapForType final {
  public: UpEnumerator_extensionInitializerMapForType (const class GGS_extensionInitializerMapForType & inMap)  ;

  public: ~ UpEnumerator_extensionInitializerMapForType (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS__5B_formalInputParameterAST_5D_ current_mFormalParameterList (LOCATION_ARGS) const ;
  public: class GGS_extensionInitializerMapForType_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionInitializerMapForType (const UpEnumerator_extensionInitializerMapForType &) = delete ;
  private: UpEnumerator_extensionInitializerMapForType & operator = (const UpEnumerator_extensionInitializerMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionInitializerMapForType : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionInitializerMapForType_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionInitializerMapForType (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionInitializerMapForType (void) ;

//--- Handle copy
  public: GGS_extensionInitializerMapForType (const GGS_extensionInitializerMapForType & inSource) ;
  public: GGS_extensionInitializerMapForType & operator = (const GGS_extensionInitializerMapForType & inSource) ;

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
  protected: void performInsert (const class GGS_extensionInitializerMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionInitializerMapForType init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_extensionInitializerMapForType class_func_mapWithMapToOverride (const class GGS_extensionInitializerMapForType & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_formalInputParameterAST_5D_ constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalParameterListForKey (class GGS__5B_formalInputParameterAST_5D_ constinArgument0,
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

  public: class GGS__5B_formalInputParameterAST_5D_ getter_mFormalParameterListForKey (const class GGS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionInitializerMapForType getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_extensionInitializerMapForType_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionInitializerMapForType ;
  friend class DownEnumerator_extensionInitializerMapForType ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerMapForType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionInitializerMapForType_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionInitializerMapForType_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS__5B_formalInputParameterAST_5D_ mProperty_mFormalParameterList ;
  public: inline GGS__5B_formalInputParameterAST_5D_ readProperty_mFormalParameterList (void) const {
    return mProperty_mFormalParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionInitializerMapForType_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFormalParameterList (const GGS__5B_formalInputParameterAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionInitializerMapForType_2E_element (const GGS_lstring & in_lkey,
                                                         const GGS__5B_formalInputParameterAST_5D_ & in_mFormalParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_extensionInitializerMapForType_2E_element (const GGS_extensionInitializerMapForType_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionInitializerMapForType_2E_element & operator = (const GGS_extensionInitializerMapForType_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionInitializerMapForType_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS__5B_formalInputParameterAST_5D_ & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerMapForType_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionInitializerMapForType.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionInitializerMapForType_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionInitializerMapForType_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionInitializerMapForType_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionInitializerMapForType_2E_element_3F_ (const GGS_extensionInitializerMapForType_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionInitializerMapForType_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionInitializerMapForType_2E_element unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerMapForType_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionInitializerForBuildingContext_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionInitializerForBuildingContext_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_extensionInitializerMapForType mProperty_mExtensionInitializerMapForType ;
  public: inline GGS_extensionInitializerMapForType readProperty_mExtensionInitializerMapForType (void) const {
    return mProperty_mExtensionInitializerMapForType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionInitializerForBuildingContext_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExtensionInitializerMapForType (const GGS_extensionInitializerMapForType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtensionInitializerMapForType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionInitializerForBuildingContext_2E_element (const GGS_lstring & in_lkey,
                                                                 const GGS_extensionInitializerMapForType & in_mExtensionInitializerMapForType) ;

//--------------------------------- Copy constructor
  public: GGS_extensionInitializerForBuildingContext_2E_element (const GGS_extensionInitializerForBuildingContext_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionInitializerForBuildingContext_2E_element & operator = (const GGS_extensionInitializerForBuildingContext_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionInitializerForBuildingContext_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_extensionInitializerMapForType & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionInitializerForBuildingContext.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionInitializerForBuildingContext_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionInitializerForBuildingContext_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionInitializerForBuildingContext_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionInitializerForBuildingContext_2E_element_3F_ (const GGS_extensionInitializerForBuildingContext_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionInitializerForBuildingContext_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionInitializerForBuildingContext_2E_element unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMethodMapForType map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionMethodMapForType final {

  public: DownEnumerator_extensionMethodMapForType (const class GGS_extensionMethodMapForType & inMap) ;

  public: ~ DownEnumerator_extensionMethodMapForType (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterAST_5D_ current_mFormalParameterList (LOCATION_ARGS) const ;

  public: class GGS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;

  public: class GGS_extensionMethodMapForType_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionMethodMapForType (const DownEnumerator_extensionMethodMapForType &) = delete ;
  private: DownEnumerator_extensionMethodMapForType & operator = (const DownEnumerator_extensionMethodMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionMethodMapForType final {
  public: UpEnumerator_extensionMethodMapForType (const class GGS_extensionMethodMapForType & inMap)  ;

  public: ~ UpEnumerator_extensionMethodMapForType (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS__5B_formalParameterAST_5D_ current_mFormalParameterList (LOCATION_ARGS) const ;
  public: class GGS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;
  public: class GGS_extensionMethodMapForType_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionMethodMapForType (const UpEnumerator_extensionMethodMapForType &) = delete ;
  private: UpEnumerator_extensionMethodMapForType & operator = (const UpEnumerator_extensionMethodMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForType : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionMethodMapForType_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionMethodMapForType (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionMethodMapForType (void) ;

//--- Handle copy
  public: GGS_extensionMethodMapForType (const GGS_extensionMethodMapForType & inSource) ;
  public: GGS_extensionMethodMapForType & operator = (const GGS_extensionMethodMapForType & inSource) ;

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
  protected: void performInsert (const class GGS_extensionMethodMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodMapForType init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMethodMapForType class_func_mapWithMapToOverride (const class GGS_extensionMethodMapForType & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_formalParameterAST_5D_ constinArgument1,
                                 class GGS_methodQualifier constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalParameterListForKey (class GGS__5B_formalParameterAST_5D_ constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMQualifierForKey (class GGS_methodQualifier constinArgument0,
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

  public: class GGS__5B_formalParameterAST_5D_ getter_mFormalParameterListForKey (const class GGS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_methodQualifier getter_mQualifierForKey (const class GGS_string & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionMethodMapForType getter_overriddenMap (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_extensionMethodMapForType_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionMethodMapForType ;
  friend class DownEnumerator_extensionMethodMapForType ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMethodMapForType_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForType_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS__5B_formalParameterAST_5D_ mProperty_mFormalParameterList ;
  public: inline GGS__5B_formalParameterAST_5D_ readProperty_mFormalParameterList (void) const {
    return mProperty_mFormalParameterList ;
  }

  public: GGS_methodQualifier mProperty_mQualifier ;
  public: inline GGS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForType_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFormalParameterList (const GGS__5B_formalParameterAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

  public: inline void setter_setMQualifier (const GGS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionMethodMapForType_2E_element (const GGS_lstring & in_lkey,
                                                    const GGS__5B_formalParameterAST_5D_ & in_mFormalParameterList,
                                                    const GGS_methodQualifier & in_mQualifier) ;

//--------------------------------- Copy constructor
  public: GGS_extensionMethodMapForType_2E_element (const GGS_extensionMethodMapForType_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionMethodMapForType_2E_element & operator = (const GGS_extensionMethodMapForType_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodMapForType_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS__5B_formalParameterAST_5D_ & inOperand1,
                                                                            const class GGS_methodQualifier & inOperand2,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForType_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionMethodMapForType.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForType_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionMethodMapForType_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForType_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionMethodMapForType_2E_element_3F_ (const GGS_extensionMethodMapForType_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionMethodMapForType_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionMethodMapForType_2E_element unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForType_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMethodMapForBuildingContext_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForBuildingContext_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_extensionMethodMapForType mProperty_mExtensionMethodMapForType ;
  public: inline GGS_extensionMethodMapForType readProperty_mExtensionMethodMapForType (void) const {
    return mProperty_mExtensionMethodMapForType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForBuildingContext_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExtensionMethodMapForType (const GGS_extensionMethodMapForType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtensionMethodMapForType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionMethodMapForBuildingContext_2E_element (const GGS_lstring & in_lkey,
                                                               const GGS_extensionMethodMapForType & in_mExtensionMethodMapForType) ;

//--------------------------------- Copy constructor
  public: GGS_extensionMethodMapForBuildingContext_2E_element (const GGS_extensionMethodMapForBuildingContext_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionMethodMapForBuildingContext_2E_element & operator = (const GGS_extensionMethodMapForBuildingContext_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodMapForBuildingContext_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_extensionMethodMapForType & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionMethodMapForBuildingContext.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForBuildingContext_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionMethodMapForBuildingContext_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForBuildingContext_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionMethodMapForBuildingContext_2E_element_3F_ (const GGS_extensionMethodMapForBuildingContext_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionMethodMapForBuildingContext_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionMethodMapForBuildingContext_2E_element unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionSetterMapForType map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionSetterMapForType final {

  public: DownEnumerator_extensionSetterMapForType (const class GGS_extensionSetterMapForType & inMap) ;

  public: ~ DownEnumerator_extensionSetterMapForType (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterAST_5D_ current_mFormalParameterList (LOCATION_ARGS) const ;

  public: class GGS_extensionSetterMapForType_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionSetterMapForType (const DownEnumerator_extensionSetterMapForType &) = delete ;
  private: DownEnumerator_extensionSetterMapForType & operator = (const DownEnumerator_extensionSetterMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionSetterMapForType final {
  public: UpEnumerator_extensionSetterMapForType (const class GGS_extensionSetterMapForType & inMap)  ;

  public: ~ UpEnumerator_extensionSetterMapForType (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS__5B_formalParameterAST_5D_ current_mFormalParameterList (LOCATION_ARGS) const ;
  public: class GGS_extensionSetterMapForType_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionSetterMapForType (const UpEnumerator_extensionSetterMapForType &) = delete ;
  private: UpEnumerator_extensionSetterMapForType & operator = (const UpEnumerator_extensionSetterMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForType : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionSetterMapForType_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionSetterMapForType (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionSetterMapForType (void) ;

//--- Handle copy
  public: GGS_extensionSetterMapForType (const GGS_extensionSetterMapForType & inSource) ;
  public: GGS_extensionSetterMapForType & operator = (const GGS_extensionSetterMapForType & inSource) ;

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
  protected: void performInsert (const class GGS_extensionSetterMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterMapForType init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_extensionSetterMapForType class_func_mapWithMapToOverride (const class GGS_extensionSetterMapForType & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_formalParameterAST_5D_ constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalParameterListForKey (class GGS__5B_formalParameterAST_5D_ constinArgument0,
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

  public: class GGS__5B_formalParameterAST_5D_ getter_mFormalParameterListForKey (const class GGS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionSetterMapForType getter_overriddenMap (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_extensionSetterMapForType_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionSetterMapForType ;
  friend class DownEnumerator_extensionSetterMapForType ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionSetterMapForType_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForType_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS__5B_formalParameterAST_5D_ mProperty_mFormalParameterList ;
  public: inline GGS__5B_formalParameterAST_5D_ readProperty_mFormalParameterList (void) const {
    return mProperty_mFormalParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForType_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFormalParameterList (const GGS__5B_formalParameterAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionSetterMapForType_2E_element (const GGS_lstring & in_lkey,
                                                    const GGS__5B_formalParameterAST_5D_ & in_mFormalParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_extensionSetterMapForType_2E_element (const GGS_extensionSetterMapForType_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionSetterMapForType_2E_element & operator = (const GGS_extensionSetterMapForType_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterMapForType_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS__5B_formalParameterAST_5D_ & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForType_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionSetterMapForType.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForType_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionSetterMapForType_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForType_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionSetterMapForType_2E_element_3F_ (const GGS_extensionSetterMapForType_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionSetterMapForType_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionSetterMapForType_2E_element unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForType_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionSetterMapForBuildingContext_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForBuildingContext_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_extensionSetterMapForType mProperty_mExtensionSetterMapForType ;
  public: inline GGS_extensionSetterMapForType readProperty_mExtensionSetterMapForType (void) const {
    return mProperty_mExtensionSetterMapForType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForBuildingContext_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExtensionSetterMapForType (const GGS_extensionSetterMapForType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtensionSetterMapForType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionSetterMapForBuildingContext_2E_element (const GGS_lstring & in_lkey,
                                                               const GGS_extensionSetterMapForType & in_mExtensionSetterMapForType) ;

//--------------------------------- Copy constructor
  public: GGS_extensionSetterMapForBuildingContext_2E_element (const GGS_extensionSetterMapForBuildingContext_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionSetterMapForBuildingContext_2E_element & operator = (const GGS_extensionSetterMapForBuildingContext_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterMapForBuildingContext_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_extensionSetterMapForType & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionSetterMapForBuildingContext.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForBuildingContext_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionSetterMapForBuildingContext_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForBuildingContext_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionSetterMapForBuildingContext_2E_element_3F_ (const GGS_extensionSetterMapForBuildingContext_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionSetterMapForBuildingContext_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionSetterMapForBuildingContext_2E_element unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionGetterMapForType map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionGetterMapForType final {

  public: DownEnumerator_extensionGetterMapForType (const class GGS_extensionGetterMapForType & inMap) ;

  public: ~ DownEnumerator_extensionGetterMapForType (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mResultTypeName (LOCATION_ARGS) const ;

  public: class GGS__5B_formalInputParameterAST_5D_ current_mInputFormalParameterList (LOCATION_ARGS) const ;

  public: class GGS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;

  public: class GGS_extensionGetterMapForType_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionGetterMapForType (const DownEnumerator_extensionGetterMapForType &) = delete ;
  private: DownEnumerator_extensionGetterMapForType & operator = (const DownEnumerator_extensionGetterMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionGetterMapForType final {
  public: UpEnumerator_extensionGetterMapForType (const class GGS_extensionGetterMapForType & inMap)  ;

  public: ~ UpEnumerator_extensionGetterMapForType (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mResultTypeName (LOCATION_ARGS) const ;
  public: class GGS__5B_formalInputParameterAST_5D_ current_mInputFormalParameterList (LOCATION_ARGS) const ;
  public: class GGS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;
  public: class GGS_extensionGetterMapForType_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionGetterMapForType (const UpEnumerator_extensionGetterMapForType &) = delete ;
  private: UpEnumerator_extensionGetterMapForType & operator = (const UpEnumerator_extensionGetterMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForType : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionGetterMapForType_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionGetterMapForType (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionGetterMapForType (void) ;

//--- Handle copy
  public: GGS_extensionGetterMapForType (const GGS_extensionGetterMapForType & inSource) ;
  public: GGS_extensionGetterMapForType & operator = (const GGS_extensionGetterMapForType & inSource) ;

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
  protected: void performInsert (const class GGS_extensionGetterMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterMapForType init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_extensionGetterMapForType class_func_mapWithMapToOverride (const class GGS_extensionGetterMapForType & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring constinArgument1,
                                 class GGS__5B_formalInputParameterAST_5D_ constinArgument2,
                                 class GGS_methodQualifier constinArgument3,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMInputFormalParameterListForKey (class GGS__5B_formalInputParameterAST_5D_ constinArgument0,
                                                          class GGS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMQualifierForKey (class GGS_methodQualifier constinArgument0,
                                           class GGS_string constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMResultTypeNameForKey (class GGS_lstring constinArgument0,
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

  public: class GGS__5B_formalInputParameterAST_5D_ getter_mInputFormalParameterListForKey (const class GGS_string & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_methodQualifier getter_mQualifierForKey (const class GGS_string & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mResultTypeNameForKey (const class GGS_string & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionGetterMapForType getter_overriddenMap (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_extensionGetterMapForType_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionGetterMapForType ;
  friend class DownEnumerator_extensionGetterMapForType ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionGetterMapForType_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForType_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mResultTypeName ;
  public: inline GGS_lstring readProperty_mResultTypeName (void) const {
    return mProperty_mResultTypeName ;
  }

  public: GGS__5B_formalInputParameterAST_5D_ mProperty_mInputFormalParameterList ;
  public: inline GGS__5B_formalInputParameterAST_5D_ readProperty_mInputFormalParameterList (void) const {
    return mProperty_mInputFormalParameterList ;
  }

  public: GGS_methodQualifier mProperty_mQualifier ;
  public: inline GGS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForType_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMResultTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultTypeName = inValue ;
  }

  public: inline void setter_setMInputFormalParameterList (const GGS__5B_formalInputParameterAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInputFormalParameterList = inValue ;
  }

  public: inline void setter_setMQualifier (const GGS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionGetterMapForType_2E_element (const GGS_lstring & in_lkey,
                                                    const GGS_lstring & in_mResultTypeName,
                                                    const GGS__5B_formalInputParameterAST_5D_ & in_mInputFormalParameterList,
                                                    const GGS_methodQualifier & in_mQualifier) ;

//--------------------------------- Copy constructor
  public: GGS_extensionGetterMapForType_2E_element (const GGS_extensionGetterMapForType_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionGetterMapForType_2E_element & operator = (const GGS_extensionGetterMapForType_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterMapForType_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS__5B_formalInputParameterAST_5D_ & inOperand2,
                                                                                const class GGS_methodQualifier & inOperand3,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForType_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionGetterMapForType.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForType_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionGetterMapForType_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForType_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionGetterMapForType_2E_element_3F_ (const GGS_extensionGetterMapForType_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionGetterMapForType_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionGetterMapForType_2E_element unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForType_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionGetterMapForBuildingContext_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForBuildingContext_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_extensionGetterMapForType mProperty_mExtensionGetterMapForType ;
  public: inline GGS_extensionGetterMapForType readProperty_mExtensionGetterMapForType (void) const {
    return mProperty_mExtensionGetterMapForType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForBuildingContext_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExtensionGetterMapForType (const GGS_extensionGetterMapForType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtensionGetterMapForType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionGetterMapForBuildingContext_2E_element (const GGS_lstring & in_lkey,
                                                               const GGS_extensionGetterMapForType & in_mExtensionGetterMapForType) ;

//--------------------------------- Copy constructor
  public: GGS_extensionGetterMapForBuildingContext_2E_element (const GGS_extensionGetterMapForBuildingContext_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionGetterMapForBuildingContext_2E_element & operator = (const GGS_extensionGetterMapForBuildingContext_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterMapForBuildingContext_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_extensionGetterMapForType & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionGetterMapForBuildingContext.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForBuildingContext_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionGetterMapForBuildingContext_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForBuildingContext_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionGetterMapForBuildingContext_2E_element_3F_ (const GGS_extensionGetterMapForBuildingContext_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionGetterMapForBuildingContext_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionGetterMapForBuildingContext_2E_element unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@semanticDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_keyRepresentation (const class cPtr_semanticDeclarationAST * inObject,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @wrapperExtensionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_wrapperExtensionMap final {

  public: DownEnumerator_wrapperExtensionMap (const class GGS_wrapperExtensionMap & inMap) ;

  public: ~ DownEnumerator_wrapperExtensionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_wrapperExtensionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_wrapperExtensionMap (const DownEnumerator_wrapperExtensionMap &) = delete ;
  private: DownEnumerator_wrapperExtensionMap & operator = (const DownEnumerator_wrapperExtensionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_wrapperExtensionMap final {
  public: UpEnumerator_wrapperExtensionMap (const class GGS_wrapperExtensionMap & inMap)  ;

  public: ~ UpEnumerator_wrapperExtensionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_wrapperExtensionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_wrapperExtensionMap (const UpEnumerator_wrapperExtensionMap &) = delete ;
  private: UpEnumerator_wrapperExtensionMap & operator = (const UpEnumerator_wrapperExtensionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_wrapperExtensionMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_wrapperExtensionMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_wrapperExtensionMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_wrapperExtensionMap (void) ;

//--- Handle copy
  public: GGS_wrapperExtensionMap (const GGS_wrapperExtensionMap & inSource) ;
  public: GGS_wrapperExtensionMap & operator = (const GGS_wrapperExtensionMap & inSource) ;

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
  protected: void performInsert (const class GGS_wrapperExtensionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_wrapperExtensionMap init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_wrapperExtensionMap class_func_mapWithMapToOverride (const class GGS_wrapperExtensionMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
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

  public: class GGS_wrapperExtensionMap getter_overriddenMap (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_wrapperExtensionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_wrapperExtensionMap ;
  friend class DownEnumerator_wrapperExtensionMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_wrapperExtensionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @wrapperExtensionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_wrapperExtensionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_wrapperExtensionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_wrapperExtensionMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_wrapperExtensionMap_2E_element (const GGS_wrapperExtensionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_wrapperExtensionMap_2E_element & operator = (const GGS_wrapperExtensionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_wrapperExtensionMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_wrapperExtensionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: wrapperExtensionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_wrapperExtensionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_wrapperExtensionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_wrapperExtensionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_wrapperExtensionMap_2E_element_3F_ (const GGS_wrapperExtensionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_wrapperExtensionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_wrapperExtensionMap_2E_element unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_wrapperExtensionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@semanticDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addAssociatedElement (class cPtr_semanticDeclarationAST * inObject,
                                               class GGS_galgasDeclarationAST & io__5F_ioDeclarations,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [galgas3SyntaxExtensionAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ (const class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ (const DownEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ &) = delete ;
  private: DownEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ & operator = (const DownEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

//--- Current element access
  public: class GGS_galgas_33_SyntaxExtensionAST current (LOCATION_ARGS) const ;
  public: class GGS_galgas_33_SyntaxExtensionAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_galgas_33_SyntaxExtensionAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ (const class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ (const UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ &) = delete ;
  private: UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ & operator = (const UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

//--- Current element access
  public: class GGS_galgas_33_SyntaxExtensionAST current (LOCATION_ARGS) const ;
  public: class GGS_galgas_33_SyntaxExtensionAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_galgas_33_SyntaxExtensionAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_galgas_33_SyntaxExtensionAST> mSharedArray ;

//--------------------------------- Default constructor
  public: GGS__5B_galgas_33_SyntaxExtensionAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_galgas_33_SyntaxExtensionAST_5D_ (const GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inSource) ;
  public: GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & operator = (const GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ ;
  friend class DownEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_galgas_33_SyntaxExtensionAST_5D_ init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_galgas_33_SyntaxExtensionAST_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_galgas_33_SyntaxExtensionAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_galgas_33_SyntaxExtensionAST_5D_ add_operation (const GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_galgas_33_SyntaxExtensionAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_galgas_33_SyntaxExtensionAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_galgas_33_SyntaxExtensionAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_galgas_33_SyntaxExtensionAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_galgas_33_SyntaxExtensionAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_galgas_33_SyntaxExtensionAST getter_first (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_galgas_33_SyntaxExtensionAST getter_last (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                         const class GGS_uint & constinOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_galgas_33_SyntaxExtensionAST readSubscript__3F_ (const class GGS_uint & in0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ ;
  friend class DownEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_galgas_33_SyntaxExtensionAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxExtensionsDictionary_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_syntaxExtensionsDictionary_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_key ;
  public: inline GGS_string readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GGS__5B_galgas_33_SyntaxExtensionAST_5D_ mProperty_extensionList ;
  public: inline GGS__5B_galgas_33_SyntaxExtensionAST_5D_ readProperty_extensionList (void) const {
    return mProperty_extensionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxExtensionsDictionary_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setExtensionList (const GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_extensionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxExtensionsDictionary_2E_element (const GGS_string & in_key,
                                                     const GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & in_extensionList) ;

//--------------------------------- Copy constructor
  public: GGS_syntaxExtensionsDictionary_2E_element (const GGS_syntaxExtensionsDictionary_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syntaxExtensionsDictionary_2E_element & operator = (const GGS_syntaxExtensionsDictionary_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxExtensionsDictionary_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                         const class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: syntaxExtensionsDictionary.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_syntaxExtensionsDictionary_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_syntaxExtensionsDictionary_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_syntaxExtensionsDictionary_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_syntaxExtensionsDictionary_2E_element_3F_ (const GGS_syntaxExtensionsDictionary_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_syntaxExtensionsDictionary_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_syntaxExtensionsDictionary_2E_element unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxExtensionsDictionary dictionary enumerator
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericDictionary.h"

//--------------------------------------------------------------------------------------------------

class DownEnumerator_syntaxExtensionsDictionary final {
  public: DownEnumerator_syntaxExtensionsDictionary (const class GGS_syntaxExtensionsDictionary & inOperand) ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_string current_key (UNUSED_LOCATION_ARGS) const ;

  public: class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ current_extensionList (UNUSED_LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_syntaxExtensionsDictionary_2E_element current (UNUSED_LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_syntaxExtensionsDictionary_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_syntaxExtensionsDictionary (const DownEnumerator_syntaxExtensionsDictionary &) = delete ;
  private: DownEnumerator_syntaxExtensionsDictionary & operator = (const DownEnumerator_syntaxExtensionsDictionary &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_syntaxExtensionsDictionary final {
  public: UpEnumerator_syntaxExtensionsDictionary (const class GGS_syntaxExtensionsDictionary & inOperand)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: class GGS_string current_key (UNUSED_LOCATION_ARGS) const ;
  public: class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ current_extensionList (UNUSED_LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxExtensionsDictionary_2E_element current (UNUSED_LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_syntaxExtensionsDictionary_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_syntaxExtensionsDictionary (const UpEnumerator_syntaxExtensionsDictionary &) = delete ;
  private: UpEnumerator_syntaxExtensionsDictionary & operator = (const UpEnumerator_syntaxExtensionsDictionary &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxExtensionsDictionary dict
//--------------------------------------------------------------------------------------------------

class GGS_syntaxExtensionsDictionary final : public GenericDictionary <GGS_string, GGS_syntaxExtensionsDictionary_2E_element> {

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_syntaxExtensionsDictionary (void) = default ;

//--------------------------------- Build
  protected: static GGS_syntaxExtensionsDictionary builtDictionary (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxExtensionsDictionary init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inOperand1,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_syntaxExtensionsDictionary_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: void setter_insert (class GGS_string constinArgument0,
                              class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeKey (class GGS_string constinArgument0,
                                 class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setExtensionListForKey (class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ constinArgument0,
                                              class GGS_string constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_string constinArgument0,
                                 class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ getter_extensionListForKey (const class GGS_string & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_syntaxExtensionsDictionary_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_syntaxExtensionsDictionary ;
  friend class DownEnumerator_syntaxExtensionsDictionary ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxExtensions struct
//--------------------------------------------------------------------------------------------------

class GGS_syntaxExtensions : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_syntaxExtensionsDictionary mProperty_dictionary ;
  public: inline GGS_syntaxExtensionsDictionary readProperty_dictionary (void) const {
    return mProperty_dictionary ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxExtensions (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDictionary (const GGS_syntaxExtensionsDictionary & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_dictionary = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxExtensions (const GGS_syntaxExtensionsDictionary & in_dictionary) ;

//--------------------------------- Copy constructor
  public: GGS_syntaxExtensions (const GGS_syntaxExtensions & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syntaxExtensions & operator = (const GGS_syntaxExtensions & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxExtensions init (Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxExtensions ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgasDeclarationAST struct
//--------------------------------------------------------------------------------------------------

class GGS_galgasDeclarationAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_semanticDeclarationAST_5D_ mProperty_mDeclarationList ;
  public: inline GGS__5B_semanticDeclarationAST_5D_ readProperty_mDeclarationList (void) const {
    return mProperty_mDeclarationList ;
  }

  public: GGS_stringset mProperty_implicitTypeDeclarationSet ;
  public: inline GGS_stringset readProperty_implicitTypeDeclarationSet (void) const {
    return mProperty_implicitTypeDeclarationSet ;
  }

  public: GGS__5B_syntaxComponentAST_5D_ mProperty_mSyntaxComponentList ;
  public: inline GGS__5B_syntaxComponentAST_5D_ readProperty_mSyntaxComponentList (void) const {
    return mProperty_mSyntaxComponentList ;
  }

  public: GGS_syntaxExtensions mProperty_mSyntaxExtensions ;
  public: inline GGS_syntaxExtensions readProperty_mSyntaxExtensions (void) const {
    return mProperty_mSyntaxExtensions ;
  }

  public: GGS__5B_galgasGUIComponentAST_5D_ mProperty_mGUIComponentList ;
  public: inline GGS__5B_galgasGUIComponentAST_5D_ readProperty_mGUIComponentList (void) const {
    return mProperty_mGUIComponentList ;
  }

  public: GGS__5B_prologueEpilogueAST_5D_ mProperty_mPrologueDeclarationList ;
  public: inline GGS__5B_prologueEpilogueAST_5D_ readProperty_mPrologueDeclarationList (void) const {
    return mProperty_mPrologueDeclarationList ;
  }

  public: GGS__5B_programRuleAST_5D_ mProperty_mSourceRuleList ;
  public: inline GGS__5B_programRuleAST_5D_ readProperty_mSourceRuleList (void) const {
    return mProperty_mSourceRuleList ;
  }

  public: GGS__5B_prologueEpilogueAST_5D_ mProperty_mEpilogueDeclarationList ;
  public: inline GGS__5B_prologueEpilogueAST_5D_ readProperty_mEpilogueDeclarationList (void) const {
    return mProperty_mEpilogueDeclarationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_galgasDeclarationAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclarationList (const GGS__5B_semanticDeclarationAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationList = inValue ;
  }

  public: inline void setter_setImplicitTypeDeclarationSet (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_implicitTypeDeclarationSet = inValue ;
  }

  public: inline void setter_setMSyntaxComponentList (const GGS__5B_syntaxComponentAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentList = inValue ;
  }

  public: inline void setter_setMSyntaxExtensions (const GGS_syntaxExtensions & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxExtensions = inValue ;
  }

  public: inline void setter_setMGUIComponentList (const GGS__5B_galgasGUIComponentAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGUIComponentList = inValue ;
  }

  public: inline void setter_setMPrologueDeclarationList (const GGS__5B_prologueEpilogueAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPrologueDeclarationList = inValue ;
  }

  public: inline void setter_setMSourceRuleList (const GGS__5B_programRuleAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceRuleList = inValue ;
  }

  public: inline void setter_setMEpilogueDeclarationList (const GGS__5B_prologueEpilogueAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEpilogueDeclarationList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_galgasDeclarationAST (const GGS__5B_semanticDeclarationAST_5D_ & in_mDeclarationList,
                                    const GGS_stringset & in_implicitTypeDeclarationSet,
                                    const GGS__5B_syntaxComponentAST_5D_ & in_mSyntaxComponentList,
                                    const GGS_syntaxExtensions & in_mSyntaxExtensions,
                                    const GGS__5B_galgasGUIComponentAST_5D_ & in_mGUIComponentList,
                                    const GGS__5B_prologueEpilogueAST_5D_ & in_mPrologueDeclarationList,
                                    const GGS__5B_programRuleAST_5D_ & in_mSourceRuleList,
                                    const GGS__5B_prologueEpilogueAST_5D_ & in_mEpilogueDeclarationList) ;

//--------------------------------- Copy constructor
  public: GGS_galgasDeclarationAST (const GGS_galgasDeclarationAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_galgasDeclarationAST & operator = (const GGS_galgasDeclarationAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgasDeclarationAST init (Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgasDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVariableAttributes boolset
//--------------------------------------------------------------------------------------------------

class GGS_localVariableAttributes : public AC_GALGAS_root {
//--------------------------------- Properties
  private: uint64_t mFlags ;
  private: bool mIsValid ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }

//--------------------------------- Default constructor
  public: GGS_localVariableAttributes (void) ;

//--------------------------------- Private constructor
  private: GGS_localVariableAttributes (const uint64_t inFlags) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVariableAttributes init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_localVariableAttributes class_func_acceptInitializedStateAsFinalState (LOCATION_ARGS) ;

  public: static class GGS_localVariableAttributes class_func_acceptReadStateAsFinalState (LOCATION_ARGS) ;

  public: static class GGS_localVariableAttributes class_func_rejectDeclaredStateAsFinalState (LOCATION_ARGS) ;

  public: static class GGS_localVariableAttributes class_func_rejectWriteInInitializedAndReadStates (LOCATION_ARGS) ;

  public: static class GGS_localVariableAttributes class_func_suggestDeclareUnusedParameterAsUnused (LOCATION_ARGS) ;

  public: static class GGS_localVariableAttributes class_func_warnsOnAnyAcces (LOCATION_ARGS) ;

//--------------------------------- &= operator (with expression)
  public: void andAssignOperation (const GGS_localVariableAttributes inOperand,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- |= operator (with expression)
  public: void orAssignOperation (const GGS_localVariableAttributes inOperand,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- ^= operator (with expression)
  public: void xorAssignOperation (const GGS_localVariableAttributes inOperand,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- -= operator (with expression)
  public: void minusAssignOperation (const GGS_localVariableAttributes inOperand,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- & operator
  public: GGS_localVariableAttributes operator_and (const GGS_localVariableAttributes & inOperand
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: GGS_localVariableAttributes operator_or (const GGS_localVariableAttributes & inOperand
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public: GGS_localVariableAttributes operator_xor (const GGS_localVariableAttributes & inOperand
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- ~ operator
  public: GGS_localVariableAttributes operator_tilde (LOCATION_ARGS) const ;

//--------------------------------- - operator
  public: GGS_localVariableAttributes substract_operation (const GGS_localVariableAttributes & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_localVariableAttributes & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableAttributes ;

//--------------------------------------------------------------------------------------------------
//   enum localVarValuation
//--------------------------------------------------------------------------------------------------

class GGS_localVarValuation : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_localVarValuation (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_invalid,
    enum_declared,
    enum_initialized,
    enum_read,
    enum_mutated
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_declared (class GGS_bool & out_usedInSubscope) const ;

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
  public: static class GGS_localVarValuation class_func_declared (const class GGS_bool & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_localVarValuation class_func_initialized (LOCATION_ARGS) ;

  public: static class GGS_localVarValuation class_func_invalid (LOCATION_ARGS) ;

  public: static class GGS_localVarValuation class_func_mutated (LOCATION_ARGS) ;

  public: static class GGS_localVarValuation class_func_read (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVarValuation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractDeclared (class GGS_bool & outArgument0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_localVarValuation_2E_declared_3F_ getter_getDeclared (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDeclared (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isInitialized (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isInvalid (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMutated (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRead (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarValuation ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVarValuation_2E_declared struct
//--------------------------------------------------------------------------------------------------

class GGS_localVarValuation_2E_declared : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_usedInSubscope ;
  public: inline GGS_bool readProperty_usedInSubscope (void) const {
    return mProperty_usedInSubscope ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_localVarValuation_2E_declared (void) ;

//--------------------------------- Property setters
  public: inline void setter_setUsedInSubscope (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_usedInSubscope = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_localVarValuation_2E_declared (const GGS_bool & in_usedInSubscope) ;

//--------------------------------- Copy constructor
  public: GGS_localVarValuation_2E_declared (const GGS_localVarValuation_2E_declared & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_localVarValuation_2E_declared & operator = (const GGS_localVarValuation_2E_declared & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVarValuation_2E_declared init_21_ (const class GGS_bool & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVarValuation_2E_declared & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarValuation_2E_declared ;

//--------------------------------------------------------------------------------------------------
// Phase 1: localVarValuation.declared? optional
//--------------------------------------------------------------------------------------------------

class GGS_localVarValuation_2E_declared_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_localVarValuation_2E_declared mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_localVarValuation_2E_declared_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_localVarValuation_2E_declared_3F_ (const GGS_localVarValuation_2E_declared & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_localVarValuation_2E_declared_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_localVarValuation_2E_declared unwrappedValue (void) const {
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
  public: ComparisonResult objectCompare (const GGS_localVarValuation_2E_declared_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarValuation_2E_declared_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @scopeLocalVarMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_scopeLocalVarMap_2E_element : public AC_GALGAS_root {
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

  public: GGS_string mProperty_mNameForCheckingFormalParameterUsing ;
  public: inline GGS_string readProperty_mNameForCheckingFormalParameterUsing (void) const {
    return mProperty_mNameForCheckingFormalParameterUsing ;
  }

  public: GGS_localVariableAttributes mProperty_mAttributes ;
  public: inline GGS_localVariableAttributes readProperty_mAttributes (void) const {
    return mProperty_mAttributes ;
  }

  public: GGS_localVarValuation mProperty_mState ;
  public: inline GGS_localVarValuation readProperty_mState (void) const {
    return mProperty_mState ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_scopeLocalVarMap_2E_element (void) ;

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

  public: inline void setter_setMNameForCheckingFormalParameterUsing (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNameForCheckingFormalParameterUsing = inValue ;
  }

  public: inline void setter_setMAttributes (const GGS_localVariableAttributes & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributes = inValue ;
  }

  public: inline void setter_setMState (const GGS_localVarValuation & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mState = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_scopeLocalVarMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_unifiedTypeMapEntry & in_mType,
                                           const GGS_string & in_mCppName,
                                           const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                           const GGS_localVariableAttributes & in_mAttributes,
                                           const GGS_localVarValuation & in_mState) ;

//--------------------------------- Copy constructor
  public: GGS_scopeLocalVarMap_2E_element (const GGS_scopeLocalVarMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_scopeLocalVarMap_2E_element & operator = (const GGS_scopeLocalVarMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_scopeLocalVarMap_2E_element init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                               const class GGS_string & inOperand2,
                                                                               const class GGS_string & inOperand3,
                                                                               const class GGS_localVariableAttributes & inOperand4,
                                                                               const class GGS_localVarValuation & inOperand5,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeLocalVarMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: scopeLocalVarMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_scopeLocalVarMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_scopeLocalVarMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_scopeLocalVarMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_scopeLocalVarMap_2E_element_3F_ (const GGS_scopeLocalVarMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_scopeLocalVarMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_scopeLocalVarMap_2E_element unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeLocalVarMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVarMapListForLLVM_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_localVarMapListForLLVM_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_scopeLocalVarMap mProperty_mMap ;
  public: inline GGS_scopeLocalVarMap readProperty_mMap (void) const {
    return mProperty_mMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_localVarMapListForLLVM_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMap (const GGS_scopeLocalVarMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_localVarMapListForLLVM_2E_element (const GGS_scopeLocalVarMap & in_mMap) ;

//--------------------------------- Copy constructor
  public: GGS_localVarMapListForLLVM_2E_element (const GGS_localVarMapListForLLVM_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_localVarMapListForLLVM_2E_element & operator = (const GGS_localVarMapListForLLVM_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVarMapListForLLVM_2E_element init_21_ (const class GGS_scopeLocalVarMap & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarMapListForLLVM_2E_element ;

//--------------------------------------------------------------------------------------------------
//   enum overrideKind
//--------------------------------------------------------------------------------------------------

class GGS_overrideKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_overrideKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_selectOverrideFirstBranch,
    enum_selectOverrideNextBranches,
    enum_repeatOverride
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selectOverrideFirstBranch (class GGS_currentVarManager & out_savedManager) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_selectOverrideNextBranches (class GGS_currentVarManager & out_savedManager,
                                                                                   class GGS_currentVarManager & out_referenceManager) const ;

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
  public: static class GGS_overrideKind class_func_repeatOverride (LOCATION_ARGS) ;

  public: static class GGS_overrideKind class_func_selectOverrideFirstBranch (const class GGS_currentVarManager & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_overrideKind class_func_selectOverrideNextBranches (const class GGS_currentVarManager & inOperand0,
                                                                               const class GGS_currentVarManager & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractSelectOverrideFirstBranch (class GGS_currentVarManager & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelectOverrideNextBranches (class GGS_currentVarManager & outArgument0,
                                                         class GGS_currentVarManager & outArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ getter_getSelectOverrideFirstBranch (LOCATION_ARGS) const ;

  public: class GGS_overrideKind_2E_selectOverrideNextBranches_3F_ getter_getSelectOverrideNextBranches (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRepeatOverride (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelectOverrideFirstBranch (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelectOverrideNextBranches (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @overrideKind_2E_selectOverrideFirstBranch struct
//--------------------------------------------------------------------------------------------------

class GGS_overrideKind_2E_selectOverrideFirstBranch : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_currentVarManager mProperty_savedManager ;
  public: inline GGS_currentVarManager readProperty_savedManager (void) const {
    return mProperty_savedManager ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_overrideKind_2E_selectOverrideFirstBranch (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSavedManager (const GGS_currentVarManager & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_savedManager = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_overrideKind_2E_selectOverrideFirstBranch (const GGS_currentVarManager & in_savedManager) ;

//--------------------------------- Copy constructor
  public: GGS_overrideKind_2E_selectOverrideFirstBranch (const GGS_overrideKind_2E_selectOverrideFirstBranch & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_overrideKind_2E_selectOverrideFirstBranch & operator = (const GGS_overrideKind_2E_selectOverrideFirstBranch & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overrideKind_2E_selectOverrideFirstBranch init_21_ (const class GGS_currentVarManager & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch ;

//--------------------------------------------------------------------------------------------------
// Phase 1: overrideKind.selectOverrideFirstBranch? optional
//--------------------------------------------------------------------------------------------------

class GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_overrideKind_2E_selectOverrideFirstBranch mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ (const GGS_overrideKind_2E_selectOverrideFirstBranch & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_overrideKind_2E_selectOverrideFirstBranch unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @overrideKind_2E_selectOverrideNextBranches struct
//--------------------------------------------------------------------------------------------------

class GGS_overrideKind_2E_selectOverrideNextBranches : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_currentVarManager mProperty_savedManager ;
  public: inline GGS_currentVarManager readProperty_savedManager (void) const {
    return mProperty_savedManager ;
  }

  public: GGS_currentVarManager mProperty_referenceManager ;
  public: inline GGS_currentVarManager readProperty_referenceManager (void) const {
    return mProperty_referenceManager ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_overrideKind_2E_selectOverrideNextBranches (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSavedManager (const GGS_currentVarManager & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_savedManager = inValue ;
  }

  public: inline void setter_setReferenceManager (const GGS_currentVarManager & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_referenceManager = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_overrideKind_2E_selectOverrideNextBranches (const GGS_currentVarManager & in_savedManager,
                                                          const GGS_currentVarManager & in_referenceManager) ;

//--------------------------------- Copy constructor
  public: GGS_overrideKind_2E_selectOverrideNextBranches (const GGS_overrideKind_2E_selectOverrideNextBranches & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_overrideKind_2E_selectOverrideNextBranches & operator = (const GGS_overrideKind_2E_selectOverrideNextBranches & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overrideKind_2E_selectOverrideNextBranches init_21__21_ (const class GGS_currentVarManager & inOperand0,
                                                                              const class GGS_currentVarManager & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches ;

//--------------------------------------------------------------------------------------------------
// Phase 1: overrideKind.selectOverrideNextBranches? optional
//--------------------------------------------------------------------------------------------------

class GGS_overrideKind_2E_selectOverrideNextBranches_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_overrideKind_2E_selectOverrideNextBranches mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_overrideKind_2E_selectOverrideNextBranches_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_overrideKind_2E_selectOverrideNextBranches_3F_ (const GGS_overrideKind_2E_selectOverrideNextBranches & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_overrideKind_2E_selectOverrideNextBranches_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_overrideKind_2E_selectOverrideNextBranches unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @openedOverrideList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_openedOverrideList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_overrideKind mProperty_mOverrideKind ;
  public: inline GGS_overrideKind readProperty_mOverrideKind (void) const {
    return mProperty_mOverrideKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_openedOverrideList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOverrideKind (const GGS_overrideKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOverrideKind = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_openedOverrideList_2E_element (const GGS_overrideKind & in_mOverrideKind) ;

//--------------------------------- Copy constructor
  public: GGS_openedOverrideList_2E_element (const GGS_openedOverrideList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_openedOverrideList_2E_element & operator = (const GGS_openedOverrideList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_openedOverrideList_2E_element init_21_ (const class GGS_overrideKind & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_openedOverrideList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@currentVarManager checkSelfObjectIsFullyInitialized'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSelfObjectIsFullyInitialized (const class GGS_currentVarManager inObject,
                                                        const class GGS_location constin_inErrorLocation,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@currentVarManager neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (class GGS_currentVarManager & ioObject,
                                    const class GGS_lstring constin_inVarName,
                                    class GGS_unifiedTypeMapEntry & out_outType,
                                    class GGS_string & out_outCppName,
                                    class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarMapListForLLVM neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (class GGS_localVarMapListForLLVM & ioObject,
                                    const class GGS_lstring constin_inVarName,
                                    const class GGS_uint constin_inIndex,
                                    class GGS_unifiedTypeMapEntry & out_outType,
                                    class GGS_string & out_outCppName,
                                    class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@currentVarManager searchForDropAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForDropAccess (class GGS_currentVarManager & ioObject,
                                          const class GGS_lstring constin_inVarName,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarValuation checkFinalState'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkFinalState (const class GGS_localVarValuation inObject,
                                      const class GGS_lstring constin_inVarName,
                                      const class GGS_localVariableAttributes constin_inAttributes,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@currentVarManager searchForWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForWriteAccess (class GGS_currentVarManager & ioObject,
                                           const class GGS_lstring constin_inVarName,
                                           class GGS_unifiedTypeMapEntry & out_outType,
                                           class GGS_string & out_outCppName,
                                           class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarMapListForLLVM writeAccessInSubMap'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_writeAccessInSubMap (class GGS_localVarMapListForLLVM & ioObject,
                                          const class GGS_lstring constin_inVarName,
                                          const class GGS_uint constin_inIndex,
                                          class GGS_unifiedTypeMapEntry & out_outType,
                                          class GGS_string & out_outCppName,
                                          class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarValuation writeTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_writeTransition (class GGS_localVarValuation & ioObject,
                                      const class GGS_lstring constin_inVarName,
                                      const class GGS_bool constin_inOverridenMap,
                                      const class GGS_localVariableAttributes constin_inAttributes,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@currentVarManager searchForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadAccess (class GGS_currentVarManager & ioObject,
                                          const class GGS_lstring constin_inVarName,
                                          class GGS_unifiedTypeMapEntry & out_outType,
                                          class GGS_string & out_outCppName,
                                          class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarMapListForLLVM readAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readAccess (class GGS_localVarMapListForLLVM & ioObject,
                                 const class GGS_lstring constin_inVarName,
                                 const class GGS_uint constin_inIndex,
                                 class GGS_unifiedTypeMapEntry & out_outType,
                                 class GGS_string & out_outCppName,
                                 class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarValuation readTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readTransition (class GGS_localVarValuation & ioObject,
                                     const class GGS_lstring constin_inVarName,
                                     const class GGS_localVariableAttributes constin_inAttributes,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@currentVarManager searchForReadWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadWriteAccess (class GGS_currentVarManager & ioObject,
                                               const class GGS_lstring constin_inVarName,
                                               class GGS_unifiedTypeMapEntry & out_outType,
                                               class GGS_string & out_outCppName,
                                               class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarMapListForLLVM readWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readWriteAccess (class GGS_localVarMapListForLLVM & ioObject,
                                      const class GGS_lstring constin_inVarName,
                                      const class GGS_uint constin_inIndex,
                                      class GGS_unifiedTypeMapEntry & out_outType,
                                      class GGS_string & out_outCppName,
                                      class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarValuation readWriteTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readWriteTransition (class GGS_localVarValuation & ioObject,
                                          const class GGS_lstring constin_inVarName,
                                          const class GGS_bool constin_inOverridenMap,
                                          const class GGS_localVariableAttributes constin_inAttributes,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@currentVarManager openScope'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openScope (class GGS_currentVarManager & ioObject,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@currentVarManager closeScope'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeScope (class GGS_currentVarManager & ioObject,
                                 const class GGS_location constin_inErrorLocation,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@scopeLocalVarMap checkFinalStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkFinalStates (const class GGS_scopeLocalVarMap inObject,
                                       const class GGS_location constin__5F_inErrorLocation,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@currentVarManager insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_currentVarManager & ioObject,
                                const class GGS_lstring constin_inVarName,
                                const class GGS_unifiedTypeMapEntry constin_inType,
                                const class GGS_string constin_inCppName,
                                const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                const class GGS_localVariableAttributes constin_inAttributes,
                                const class GGS_localVarValuation constin_inState,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@currentVarManager checkAutomatonStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const class GGS_currentVarManager inObject,
                                           const class GGS_location constin_inErrorLocation,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarValuation combineValuationWith'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_combineValuationWith (const class GGS_localVarValuation inObject,
                                           const class GGS_localVarValuation constin_inOther,
                                           class GGS_localVarValuation & out_outResult,
                                           class GGS_string & io__5F_ioErrorMessage,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@scopeLocalVarMap combineMapWith'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_combineMapWith (class GGS_scopeLocalVarMap & ioObject,
                                     const class GGS_scopeLocalVarMap constin_inOtherMap,
                                     class GGS_string & io_ioErrorMessage,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@currentVarManager combineManagerWith'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_combineManagerWith (class GGS_currentVarManager & ioObject,
                                         const class GGS_currentVarManager constin_inOtherManager,
                                         const class GGS_location constin_inErrorLocation,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMap_2E_element : public AC_GALGAS_root {
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

//--------------------------------- Read subscripts


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

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element_3F_ ;

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
//
//Extension mutating proc '@unifiedTypeMap makeEntryFromString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntryFromString (class GGS_unifiedTypeMap & ioObject,
                                          const class GGS_string constin_inKey,
                                          class GGS_unifiedTypeMapEntry & out_outEntry,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMap typeMapEntryOrNullForLKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry extensionGetter_typeMapEntryOrNullForLKey (const class GGS_unifiedTypeMap & inObject,
                                                                         const class GGS_lstring & constinArgument0,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@unifiedTypeMap insertType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertType (class GGS_unifiedTypeMap & ioObject,
                                 const class GGS_lstring constin_inTypeName,
                                 const class GGS_unifiedTypeDefinition constin_inTypeDefinition,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMap typeDefinition' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeDefinition extensionGetter_typeDefinition (const class GGS_unifiedTypeMap & inObject,
                                                                const class GGS_lstring & constinArgument0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeDefinition_2E_solved struct
//--------------------------------------------------------------------------------------------------

class GGS_typeDefinition_2E_solved : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeDefinition mProperty_definition ;
  public: inline GGS_unifiedTypeDefinition readProperty_definition (void) const {
    return mProperty_definition ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeDefinition_2E_solved (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDefinition (const GGS_unifiedTypeDefinition & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_definition = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeDefinition_2E_solved (const GGS_unifiedTypeDefinition & in_definition) ;

//--------------------------------- Copy constructor
  public: GGS_typeDefinition_2E_solved (const GGS_typeDefinition_2E_solved & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeDefinition_2E_solved & operator = (const GGS_typeDefinition_2E_solved & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeDefinition_2E_solved init_21_ (const class GGS_unifiedTypeDefinition & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeDefinition.solved? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeDefinition_2E_solved_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeDefinition_2E_solved mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeDefinition_2E_solved_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeDefinition_2E_solved_3F_ (const GGS_typeDefinition_2E_solved & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeDefinition_2E_solved_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeDefinition_2E_solved unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved_3F_ ;

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
//Extension func '@unifiedTypeMapEntry typeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_typeName (const class GGS_unifiedTypeMapEntry & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMapEntry baseType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry extensionGetter_baseType (const class GGS_unifiedTypeMapEntry & inObject,
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
//
//Extension proc '@unifiedTypeMapEntry addHeaderFileName1'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName_31_ (const class GGS_unifiedTypeMapEntry inObject,
                                            class GGS_stringset & io_ioInclusions,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [acceptableParameter] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_acceptableParameter_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_acceptableParameter_5D_ (const class GGS__5B_acceptableParameter_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_acceptableParameter_5D_ (const DownEnumerator__5B_acceptableParameter_5D_ &) = delete ;
  private: DownEnumerator__5B_acceptableParameter_5D_ & operator = (const DownEnumerator__5B_acceptableParameter_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

//--- Current element access
  public: class GGS_acceptableParameter current (LOCATION_ARGS) const ;
  public: class GGS_acceptableParameter current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_acceptableParameter> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_acceptableParameter_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_acceptableParameter_5D_ (const class GGS__5B_acceptableParameter_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_acceptableParameter_5D_ (const UpEnumerator__5B_acceptableParameter_5D_ &) = delete ;
  private: UpEnumerator__5B_acceptableParameter_5D_ & operator = (const UpEnumerator__5B_acceptableParameter_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

//--- Current element access
  public: class GGS_acceptableParameter current (LOCATION_ARGS) const ;
  public: class GGS_acceptableParameter current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_acceptableParameter> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_acceptableParameter_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_acceptableParameter> mSharedArray ;

//--------------------------------- Default constructor
  public: GGS__5B_acceptableParameter_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_acceptableParameter_5D_ (const GGS__5B_acceptableParameter_5D_ & inSource) ;
  public: GGS__5B_acceptableParameter_5D_ & operator = (const GGS__5B_acceptableParameter_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_acceptableParameter_5D_ ;
  friend class DownEnumerator__5B_acceptableParameter_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_acceptableParameter_5D_ init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_acceptableParameter_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_acceptableParameter & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_acceptableParameter_5D_ add_operation (const GGS__5B_acceptableParameter_5D_ & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_acceptableParameter constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_acceptableParameter constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_acceptableParameter & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_acceptableParameter & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_acceptableParameter & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_acceptableParameter getter_first (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_acceptableParameter getter_last (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_acceptableParameter_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_acceptableParameter_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                const class GGS_uint & constinOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_acceptableParameter readSubscript__3F_ (const class GGS_uint & in0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_acceptableParameter_5D_ ;
  friend class DownEnumerator__5B_acceptableParameter_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_acceptableParameter_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @acceptableParameter struct
//--------------------------------------------------------------------------------------------------

class GGS_acceptableParameter : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_formalParameterSignature mProperty_mRoutineSignature ;
  public: inline GGS_formalParameterSignature readProperty_mRoutineSignature (void) const {
    return mProperty_mRoutineSignature ;
  }

  public: GGS_bool mProperty_mIsFilePrivate ;
  public: inline GGS_bool readProperty_mIsFilePrivate (void) const {
    return mProperty_mIsFilePrivate ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_acceptableParameter (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutineSignature (const GGS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineSignature = inValue ;
  }

  public: inline void setter_setMIsFilePrivate (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsFilePrivate = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_acceptableParameter (const GGS_formalParameterSignature & in_mRoutineSignature,
                                   const GGS_bool & in_mIsFilePrivate) ;

//--------------------------------- Copy constructor
  public: GGS_acceptableParameter (const GGS_acceptableParameter & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_acceptableParameter & operator = (const GGS_acceptableParameter & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_acceptableParameter init_21__21_ (const class GGS_formalParameterSignature & inOperand0,
                                                       const class GGS_bool & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_acceptableParameter ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineArgumentMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineArgumentMap final {

  public: DownEnumerator_routineArgumentMap (const class GGS_routineArgumentMap & inMap) ;

  public: ~ DownEnumerator_routineArgumentMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_formalParameterSignature current_mRoutineSignature (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsFilePrivate (LOCATION_ARGS) const ;

  public: class GGS_routineArgumentMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_routineArgumentMap (const DownEnumerator_routineArgumentMap &) = delete ;
  private: DownEnumerator_routineArgumentMap & operator = (const DownEnumerator_routineArgumentMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineArgumentMap final {
  public: UpEnumerator_routineArgumentMap (const class GGS_routineArgumentMap & inMap)  ;

  public: ~ UpEnumerator_routineArgumentMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_formalParameterSignature current_mRoutineSignature (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsFilePrivate (LOCATION_ARGS) const ;
  public: class GGS_routineArgumentMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_routineArgumentMap (const UpEnumerator_routineArgumentMap &) = delete ;
  private: UpEnumerator_routineArgumentMap & operator = (const UpEnumerator_routineArgumentMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_routineArgumentMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_routineArgumentMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_routineArgumentMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_routineArgumentMap (void) ;

//--- Handle copy
  public: GGS_routineArgumentMap (const GGS_routineArgumentMap & inSource) ;
  public: GGS_routineArgumentMap & operator = (const GGS_routineArgumentMap & inSource) ;

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
  protected: void performInsert (const class GGS_routineArgumentMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineArgumentMap init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_routineArgumentMap class_func_mapWithMapToOverride (const class GGS_routineArgumentMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_formalParameterSignature constinArgument1,
                                 class GGS_bool constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsFilePrivateForKey (class GGS_bool constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMRoutineSignatureForKey (class GGS_formalParameterSignature constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_formalParameterSignature & outArgument1,
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

  public: class GGS_bool getter_mIsFilePrivateForKey (const class GGS_string & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_formalParameterSignature getter_mRoutineSignatureForKey (const class GGS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_routineArgumentMap getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_routineArgumentMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_routineArgumentMap ;
  friend class DownEnumerator_routineArgumentMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineArgumentMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @internalRoutineMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_internalRoutineMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_routineArgumentMap mProperty_mArgumentMap ;
  public: inline GGS_routineArgumentMap readProperty_mArgumentMap (void) const {
    return mProperty_mArgumentMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_internalRoutineMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMArgumentMap (const GGS_routineArgumentMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_internalRoutineMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_routineArgumentMap & in_mArgumentMap) ;

//--------------------------------- Copy constructor
  public: GGS_internalRoutineMap_2E_element (const GGS_internalRoutineMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_internalRoutineMap_2E_element & operator = (const GGS_internalRoutineMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_internalRoutineMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_routineArgumentMap & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_internalRoutineMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: internalRoutineMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_internalRoutineMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_internalRoutineMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_internalRoutineMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_internalRoutineMap_2E_element_3F_ (const GGS_internalRoutineMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_internalRoutineMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_internalRoutineMap_2E_element unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_internalRoutineMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineArgumentMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_routineArgumentMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_formalParameterSignature mProperty_mRoutineSignature ;
  public: inline GGS_formalParameterSignature readProperty_mRoutineSignature (void) const {
    return mProperty_mRoutineSignature ;
  }

  public: GGS_bool mProperty_mIsFilePrivate ;
  public: inline GGS_bool readProperty_mIsFilePrivate (void) const {
    return mProperty_mIsFilePrivate ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineArgumentMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRoutineSignature (const GGS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineSignature = inValue ;
  }

  public: inline void setter_setMIsFilePrivate (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsFilePrivate = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineArgumentMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_formalParameterSignature & in_mRoutineSignature,
                                             const GGS_bool & in_mIsFilePrivate) ;

//--------------------------------- Copy constructor
  public: GGS_routineArgumentMap_2E_element (const GGS_routineArgumentMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineArgumentMap_2E_element & operator = (const GGS_routineArgumentMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineArgumentMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineArgumentMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: routineArgumentMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_routineArgumentMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_routineArgumentMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_routineArgumentMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_routineArgumentMap_2E_element_3F_ (const GGS_routineArgumentMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_routineArgumentMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_routineArgumentMap_2E_element unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineArgumentMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgas_33_SyntaxExtensionAST struct
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_SyntaxExtensionAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSyntaxComponentName ;
  public: inline GGS_lstring readProperty_mSyntaxComponentName (void) const {
    return mProperty_mSyntaxComponentName ;
  }

  public: GGS__5B_nonterminalDeclarationAST_5D_ mProperty_mNonterminalDeclarationList ;
  public: inline GGS__5B_nonterminalDeclarationAST_5D_ readProperty_mNonterminalDeclarationList (void) const {
    return mProperty_mNonterminalDeclarationList ;
  }

  public: GGS__5B_syntaxRuleAST_5D_ mProperty_mRuleList ;
  public: inline GGS__5B_syntaxRuleAST_5D_ readProperty_mRuleList (void) const {
    return mProperty_mRuleList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_galgas_33_SyntaxExtensionAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxComponentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

  public: inline void setter_setMNonterminalDeclarationList (const GGS__5B_nonterminalDeclarationAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalDeclarationList = inValue ;
  }

  public: inline void setter_setMRuleList (const GGS__5B_syntaxRuleAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRuleList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_galgas_33_SyntaxExtensionAST (const GGS_lstring & in_mSyntaxComponentName,
                                            const GGS__5B_nonterminalDeclarationAST_5D_ & in_mNonterminalDeclarationList,
                                            const GGS__5B_syntaxRuleAST_5D_ & in_mRuleList) ;

//--------------------------------- Copy constructor
  public: GGS_galgas_33_SyntaxExtensionAST (const GGS_galgas_33_SyntaxExtensionAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_galgas_33_SyntaxExtensionAST & operator = (const GGS_galgas_33_SyntaxExtensionAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgas_33_SyntaxExtensionAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS__5B_nonterminalDeclarationAST_5D_ & inOperand1,
                                                                    const class GGS__5B_syntaxRuleAST_5D_ & inOperand2,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionAST ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@syntaxExtensions listForKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ extensionGetter_listForKey (const class GGS_syntaxExtensions & inObject,
                                                                           const class GGS_string & constinArgument0,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticExpressionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_semanticExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_semanticExpressionAST_2E_weak (const class GGS_semanticExpressionAST & inSource) ;

  public: GGS_semanticExpressionAST_2E_weak & operator = (const class GGS_semanticExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_semanticExpressionAST_2E_weak init_nil (void) {
    GGS_semanticExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_semanticExpressionAST bang_semanticExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_semanticExpressionAST unwrappedValue (void) const ;

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
  public: static class GGS_semanticExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@formalArgumentPassingModeAST string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_formalArgumentPassingModeAST & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@formalArgumentPassingModeAST formalArgumentMessage' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_formalArgumentMessage (const class GGS_formalArgumentPassingModeAST & inObject,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@[formalParameterAST] keyRepresentation' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_keyRepresentation (const class GGS__5B_formalParameterAST_5D_ & inObject,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@[formalInputParameterAST] initializerSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_initializerSignature (const class GGS__5B_formalInputParameterAST_5D_ & inObject,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractInputParameter class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractInputParameter : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractInputParameter_init (Compiler * inCompiler) ;


//--- Extension proc analyzeInputParameter
  public: virtual void method_analyzeInputParameter (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lexicalTypeEnum arg_inRequiredLexicalType,
           const class GGS_string arg_inLexicalAttributeName,
           class GGS__5B_terminalCheckAssignement_5D_ & arg_ioTerminalCheckAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractInputParameter (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractInputParameter_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractInputParameter_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractInputParameter_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractInputParameter_2E_weak (const class GGS_abstractInputParameter & inSource) ;

  public: GGS_abstractInputParameter_2E_weak & operator = (const class GGS_abstractInputParameter & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractInputParameter_2E_weak init_nil (void) {
    GGS_abstractInputParameter_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractInputParameter bang_abstractInputParameter_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractInputParameter unwrappedValue (void) const ;

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
  public: static class GGS_abstractInputParameter_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractInputParameter_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractInputParameter_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @inputParameterAnonymousVariable reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterAnonymousVariable : public GGS_abstractInputParameter {
//--------------------------------- Default constructor
  public: GGS_inputParameterAnonymousVariable (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputParameterAnonymousVariable (const class cPtr_inputParameterAnonymousVariable * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputParameterAnonymousVariable init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterAnonymousVariable & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inputParameterAnonymousVariable class
//--------------------------------------------------------------------------------------------------

class cPtr_inputParameterAnonymousVariable : public cPtr_abstractInputParameter {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputParameterAnonymousVariable_init (Compiler * inCompiler) ;


//--- Extension proc analyzeInputParameter
  public: virtual void method_analyzeInputParameter (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lexicalTypeEnum arg_inRequiredLexicalType,
           const class GGS_string arg_inLexicalAttributeName,
           class GGS__5B_terminalCheckAssignement_5D_ & arg_ioTerminalCheckAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_inputParameterAnonymousVariable (Compiler * inCompiler
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
// Phase 1: @inputParameterAnonymousVariable_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterAnonymousVariable_2E_weak : public GGS_abstractInputParameter_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputParameterAnonymousVariable_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputParameterAnonymousVariable_2E_weak (const class GGS_inputParameterAnonymousVariable & inSource) ;

  public: GGS_inputParameterAnonymousVariable_2E_weak & operator = (const class GGS_inputParameterAnonymousVariable & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_inputParameterAnonymousVariable_2E_weak init_nil (void) {
    GGS_inputParameterAnonymousVariable_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inputParameterAnonymousVariable bang_inputParameterAnonymousVariable_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_inputParameterAnonymousVariable unwrappedValue (void) const ;

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
  public: static class GGS_inputParameterAnonymousVariable_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterAnonymousVariable_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterAnonymousVariable_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @inputParameterVariable reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterVariable : public GGS_abstractInputParameter {
//--------------------------------- Default constructor
  public: GGS_inputParameterVariable (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputParameterVariable (const class cPtr_inputParameterVariable * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputParameterVariable init_21_ (const class GGS_lstring & inOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterVariable & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterVariable ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inputParameterVariable class
//--------------------------------------------------------------------------------------------------

class cPtr_inputParameterVariable : public cPtr_abstractInputParameter {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputParameterVariable_init_21_ (const class GGS_lstring & inOperand0,
                                                Compiler * inCompiler) ;


//--- Extension proc analyzeInputParameter
  public: virtual void method_analyzeInputParameter (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lexicalTypeEnum arg_inRequiredLexicalType,
           const class GGS_string arg_inLexicalAttributeName,
           class GGS__5B_terminalCheckAssignement_5D_ & arg_ioTerminalCheckAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualParameterName ;


//--- Default constructor
  public: cPtr_inputParameterVariable (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputParameterVariable (const GGS_lstring & in_mActualParameterName,
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
// Phase 1: @inputParameterVariable_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterVariable_2E_weak : public GGS_abstractInputParameter_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputParameterVariable_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputParameterVariable_2E_weak (const class GGS_inputParameterVariable & inSource) ;

  public: GGS_inputParameterVariable_2E_weak & operator = (const class GGS_inputParameterVariable & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_inputParameterVariable_2E_weak init_nil (void) {
    GGS_inputParameterVariable_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inputParameterVariable bang_inputParameterVariable_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_inputParameterVariable unwrappedValue (void) const ;

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
  public: static class GGS_inputParameterVariable_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterVariable_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterVariable_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @inputParameterDeclaredVariable reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterDeclaredVariable : public GGS_abstractInputParameter {
//--------------------------------- Default constructor
  public: GGS_inputParameterDeclaredVariable (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputParameterDeclaredVariable (const class cPtr_inputParameterDeclaredVariable * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualParameterTypeName (void) const ;

  public: class GGS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputParameterDeclaredVariable init_21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterDeclaredVariable & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inputParameterDeclaredVariable class
//--------------------------------------------------------------------------------------------------

class cPtr_inputParameterDeclaredVariable : public cPtr_abstractInputParameter {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputParameterDeclaredVariable_init_21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            Compiler * inCompiler) ;


//--- Extension proc analyzeInputParameter
  public: virtual void method_analyzeInputParameter (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lexicalTypeEnum arg_inRequiredLexicalType,
           const class GGS_string arg_inLexicalAttributeName,
           class GGS__5B_terminalCheckAssignement_5D_ & arg_ioTerminalCheckAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualParameterTypeName ;
  public: GGS_lstring mProperty_mActualParameterName ;


//--- Default constructor
  public: cPtr_inputParameterDeclaredVariable (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputParameterDeclaredVariable (const GGS_lstring & in_mActualParameterTypeName,
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
// Phase 1: @inputParameterDeclaredVariable_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterDeclaredVariable_2E_weak : public GGS_abstractInputParameter_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputParameterDeclaredVariable_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputParameterDeclaredVariable_2E_weak (const class GGS_inputParameterDeclaredVariable & inSource) ;

  public: GGS_inputParameterDeclaredVariable_2E_weak & operator = (const class GGS_inputParameterDeclaredVariable & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_inputParameterDeclaredVariable_2E_weak init_nil (void) {
    GGS_inputParameterDeclaredVariable_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inputParameterDeclaredVariable bang_inputParameterDeclaredVariable_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_inputParameterDeclaredVariable unwrappedValue (void) const ;

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
  public: static class GGS_inputParameterDeclaredVariable_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterDeclaredVariable_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterDeclaredVariable_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @inputParameterDeclaredConstant reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterDeclaredConstant : public GGS_abstractInputParameter {
//--------------------------------- Default constructor
  public: GGS_inputParameterDeclaredConstant (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputParameterDeclaredConstant (const class cPtr_inputParameterDeclaredConstant * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualParameterTypeName (void) const ;

  public: class GGS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputParameterDeclaredConstant init_21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterDeclaredConstant & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inputParameterDeclaredConstant class
//--------------------------------------------------------------------------------------------------

class cPtr_inputParameterDeclaredConstant : public cPtr_abstractInputParameter {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputParameterDeclaredConstant_init_21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            Compiler * inCompiler) ;


//--- Extension proc analyzeInputParameter
  public: virtual void method_analyzeInputParameter (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lexicalTypeEnum arg_inRequiredLexicalType,
           const class GGS_string arg_inLexicalAttributeName,
           class GGS__5B_terminalCheckAssignement_5D_ & arg_ioTerminalCheckAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualParameterTypeName ;
  public: GGS_lstring mProperty_mActualParameterName ;


//--- Default constructor
  public: cPtr_inputParameterDeclaredConstant (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputParameterDeclaredConstant (const GGS_lstring & in_mActualParameterTypeName,
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
// Phase 1: @inputParameterDeclaredConstant_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterDeclaredConstant_2E_weak : public GGS_abstractInputParameter_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputParameterDeclaredConstant_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputParameterDeclaredConstant_2E_weak (const class GGS_inputParameterDeclaredConstant & inSource) ;

  public: GGS_inputParameterDeclaredConstant_2E_weak & operator = (const class GGS_inputParameterDeclaredConstant & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_inputParameterDeclaredConstant_2E_weak init_nil (void) {
    GGS_inputParameterDeclaredConstant_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inputParameterDeclaredConstant bang_inputParameterDeclaredConstant_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_inputParameterDeclaredConstant unwrappedValue (void) const ;

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
  public: static class GGS_inputParameterDeclaredConstant_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterDeclaredConstant_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externFunctionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_externFunctionDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_externFunctionDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_externFunctionDeclarationAST (const class cPtr_externFunctionDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFunctionName (void) const ;

  public: class GGS__5B_formalInputParameterAST_5D_ readProperty_mFormalArgumentList (void) const ;

  public: class GGS_lstring readProperty_mResultTypeName (void) const ;

  public: class GGS_bool readProperty_usefullFunc (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externFunctionDeclarationAST init_21_isPredefined_21__21__21__21_usefullFunc (const class GGS_bool & inOperand0,
                                                                                                   const class GGS_lstring & inOperand1,
                                                                                                   const class GGS__5B_formalInputParameterAST_5D_ & inOperand2,
                                                                                                   const class GGS_lstring & inOperand3,
                                                                                                   const class GGS_bool & inOperand4,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externFunctionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @externFunctionDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_externFunctionDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void externFunctionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc (const class GGS_bool & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS__5B_formalInputParameterAST_5D_ & inOperand2,
                                                                                             const class GGS_lstring & inOperand3,
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
  public: GGS_lstring mProperty_mFunctionName ;
  public: GGS__5B_formalInputParameterAST_5D_ mProperty_mFormalArgumentList ;
  public: GGS_lstring mProperty_mResultTypeName ;
  public: GGS_bool mProperty_usefullFunc ;


//--- Default constructor
  public: cPtr_externFunctionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_externFunctionDeclarationAST (const GGS_bool & in_isPredefined,
                                             const GGS_lstring & in_mFunctionName,
                                             const GGS__5B_formalInputParameterAST_5D_ & in_mFormalArgumentList,
                                             const GGS_lstring & in_mResultTypeName,
                                             const GGS_bool & in_usefullFunc,
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
// Phase 1: @externFunctionDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_externFunctionDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_externFunctionDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_externFunctionDeclarationAST_2E_weak (const class GGS_externFunctionDeclarationAST & inSource) ;

  public: GGS_externFunctionDeclarationAST_2E_weak & operator = (const class GGS_externFunctionDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_externFunctionDeclarationAST_2E_weak init_nil (void) {
    GGS_externFunctionDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_externFunctionDeclarationAST bang_externFunctionDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_externFunctionDeclarationAST unwrappedValue (void) const ;

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
  public: static class GGS_externFunctionDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externFunctionDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @functionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_functionDeclarationAST : public GGS_externFunctionDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_functionDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_functionDeclarationAST (const class cPtr_functionDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mResultVariableName (void) const ;

  public: class GGS__5B_semanticInstructionAST_5D_ readProperty_mFunctionInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfFunctionInstructionList (void) const ;

  public: class GGS_bool readProperty_mIsInternal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionDeclarationAST init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                             const class GGS_lstring & inOperand1,
                                                                                                             const class GGS__5B_formalInputParameterAST_5D_ & inOperand2,
                                                                                                             const class GGS_lstring & inOperand3,
                                                                                                             const class GGS_bool & inOperand4,
                                                                                                             const class GGS_lstring & inOperand5,
                                                                                                             const class GGS__5B_semanticInstructionAST_5D_ & inOperand6,
                                                                                                             const class GGS_location & inOperand7,
                                                                                                             const class GGS_bool & inOperand8,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @functionDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_functionDeclarationAST : public cPtr_externFunctionDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void functionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                       const class GGS_lstring & inOperand1,
                                                                                                       const class GGS__5B_formalInputParameterAST_5D_ & inOperand2,
                                                                                                       const class GGS_lstring & inOperand3,
                                                                                                       const class GGS_bool & inOperand4,
                                                                                                       const class GGS_lstring & inOperand5,
                                                                                                       const class GGS__5B_semanticInstructionAST_5D_ & inOperand6,
                                                                                                       const class GGS_location & inOperand7,
                                                                                                       const class GGS_bool & inOperand8,
                                                                                                       Compiler * inCompiler) ;


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
  public: GGS_lstring mProperty_mResultVariableName ;
  public: GGS__5B_semanticInstructionAST_5D_ mProperty_mFunctionInstructionList ;
  public: GGS_location mProperty_mEndOfFunctionInstructionList ;
  public: GGS_bool mProperty_mIsInternal ;


//--- Default constructor
  public: cPtr_functionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_functionDeclarationAST (const GGS_bool & in_isPredefined,
                                       const GGS_lstring & in_mFunctionName,
                                       const GGS__5B_formalInputParameterAST_5D_ & in_mFormalArgumentList,
                                       const GGS_lstring & in_mResultTypeName,
                                       const GGS_bool & in_usefullFunc,
                                       const GGS_lstring & in_mResultVariableName,
                                       const GGS__5B_semanticInstructionAST_5D_ & in_mFunctionInstructionList,
                                       const GGS_location & in_mEndOfFunctionInstructionList,
                                       const GGS_bool & in_mIsInternal,
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
// Phase 1: @functionDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_functionDeclarationAST_2E_weak : public GGS_externFunctionDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_functionDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_functionDeclarationAST_2E_weak (const class GGS_functionDeclarationAST & inSource) ;

  public: GGS_functionDeclarationAST_2E_weak & operator = (const class GGS_functionDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_functionDeclarationAST_2E_weak init_nil (void) {
    GGS_functionDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_functionDeclarationAST bang_functionDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_functionDeclarationAST unwrappedValue (void) const ;

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
  public: static class GGS_functionDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @onceFunctionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_onceFunctionDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_onceFunctionDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_onceFunctionDeclarationAST (const class cPtr_onceFunctionDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFunctionName (void) const ;

  public: class GGS_lstring readProperty_mResultTypeName (void) const ;

  public: class GGS_lstring readProperty_mResultVariableName (void) const ;

  public: class GGS__5B_semanticInstructionAST_5D_ readProperty_mFunctionInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfFunctionInstructionList (void) const ;

  public: class GGS_bool readProperty_mIsInternal (void) const ;

  public: class GGS_bool readProperty_mIsUsefull (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_onceFunctionDeclarationAST init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                  const class GGS_lstring & inOperand1,
                                                                                                  const class GGS_lstring & inOperand2,
                                                                                                  const class GGS_lstring & inOperand3,
                                                                                                  const class GGS__5B_semanticInstructionAST_5D_ & inOperand4,
                                                                                                  const class GGS_location & inOperand5,
                                                                                                  const class GGS_bool & inOperand6,
                                                                                                  const class GGS_bool & inOperand7,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_onceFunctionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @onceFunctionDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_onceFunctionDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void onceFunctionDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            const class GGS_lstring & inOperand2,
                                                                                            const class GGS_lstring & inOperand3,
                                                                                            const class GGS__5B_semanticInstructionAST_5D_ & inOperand4,
                                                                                            const class GGS_location & inOperand5,
                                                                                            const class GGS_bool & inOperand6,
                                                                                            const class GGS_bool & inOperand7,
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
  public: GGS_lstring mProperty_mFunctionName ;
  public: GGS_lstring mProperty_mResultTypeName ;
  public: GGS_lstring mProperty_mResultVariableName ;
  public: GGS__5B_semanticInstructionAST_5D_ mProperty_mFunctionInstructionList ;
  public: GGS_location mProperty_mEndOfFunctionInstructionList ;
  public: GGS_bool mProperty_mIsInternal ;
  public: GGS_bool mProperty_mIsUsefull ;


//--- Default constructor
  public: cPtr_onceFunctionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_onceFunctionDeclarationAST (const GGS_bool & in_isPredefined,
                                           const GGS_lstring & in_mFunctionName,
                                           const GGS_lstring & in_mResultTypeName,
                                           const GGS_lstring & in_mResultVariableName,
                                           const GGS__5B_semanticInstructionAST_5D_ & in_mFunctionInstructionList,
                                           const GGS_location & in_mEndOfFunctionInstructionList,
                                           const GGS_bool & in_mIsInternal,
                                           const GGS_bool & in_mIsUsefull,
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
// Phase 1: @onceFunctionDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_onceFunctionDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_onceFunctionDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_onceFunctionDeclarationAST_2E_weak (const class GGS_onceFunctionDeclarationAST & inSource) ;

  public: GGS_onceFunctionDeclarationAST_2E_weak & operator = (const class GGS_onceFunctionDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_onceFunctionDeclarationAST_2E_weak init_nil (void) {
    GGS_onceFunctionDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_onceFunctionDeclarationAST bang_onceFunctionDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_onceFunctionDeclarationAST unwrappedValue (void) const ;

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
  public: static class GGS_onceFunctionDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_onceFunctionDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST_2E_weak ;

