#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxRuleLabelAST struct
//--------------------------------------------------------------------------------------------------

class GGS_syntaxRuleLabelAST final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mLabelName ;
  public: inline GGS_lstring readProperty_mLabelName (void) const {
    return mProperty_mLabelName ;
  }

  public: GGS__5B_formalParameterAST_5D_ mProperty_mFormalArguments ;
  public: inline GGS__5B_formalParameterAST_5D_ readProperty_mFormalArguments (void) const {
    return mProperty_mFormalArguments ;
  }

  public: GGS_location mProperty_mEndOfArgumentLocation ;
  public: inline GGS_location readProperty_mEndOfArgumentLocation (void) const {
    return mProperty_mEndOfArgumentLocation ;
  }

  public: GGS__5B_syntaxInstructionAST_5D_ mProperty_mSyntaxInstructionList ;
  public: inline GGS__5B_syntaxInstructionAST_5D_ readProperty_mSyntaxInstructionList (void) const {
    return mProperty_mSyntaxInstructionList ;
  }

  public: GGS_location mProperty_mEndOfInstructionList ;
  public: inline GGS_location readProperty_mEndOfInstructionList (void) const {
    return mProperty_mEndOfInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxRuleLabelAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLabelName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelName = inValue ;
  }

  public: inline void setter_setMFormalArguments (const GGS__5B_formalParameterAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArguments = inValue ;
  }

  public: inline void setter_setMEndOfArgumentLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfArgumentLocation = inValue ;
  }

  public: inline void setter_setMSyntaxInstructionList (const GGS__5B_syntaxInstructionAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfInstructionList (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxRuleLabelAST (const GGS_lstring & in_mLabelName,
                                  const GGS__5B_formalParameterAST_5D_ & in_mFormalArguments,
                                  const GGS_location & in_mEndOfArgumentLocation,
                                  const GGS__5B_syntaxInstructionAST_5D_ & in_mSyntaxInstructionList,
                                  const GGS_location & in_mEndOfInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_syntaxRuleLabelAST (const GGS_syntaxRuleLabelAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syntaxRuleLabelAST & operator = (const GGS_syntaxRuleLabelAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxRuleLabelAST init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS__5B_formalParameterAST_5D_ & inOperand1,
                                                                  const class GGS_location & inOperand2,
                                                                  const class GGS__5B_syntaxInstructionAST_5D_ & inOperand3,
                                                                  const class GGS_location & inOperand4,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxRuleLabelAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgas_33_SyntaxComponentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_SyntaxComponentAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_galgas_33_SyntaxComponentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_galgas_33_SyntaxComponentAST (const class cPtr_galgas_33_SyntaxComponentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mSyntaxComponentName (void) const ;

  public: class GGS_lstring readProperty_mLexiqueName (void) const ;

  public: class GGS__5B_nonterminalDeclarationAST_5D_ readProperty_mNonterminalDeclarationList (void) const ;

  public: class GGS__5B_syntaxRuleAST_5D_ readProperty_mRuleList (void) const ;

  public: class GGS_bool readProperty_mHasTranslateFeature (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgas_33_SyntaxComponentAST init_21_isPredefined_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            const class GGS_lstring & inOperand2,
                                                                                            const class GGS__5B_nonterminalDeclarationAST_5D_ & inOperand3,
                                                                                            const class GGS__5B_syntaxRuleAST_5D_ & inOperand4,
                                                                                            const class GGS_bool & inOperand5,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_galgas_33_SyntaxComponentAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @galgas3SyntaxComponentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_galgas_33_SyntaxComponentAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void galgas_33_SyntaxComponentAST_init_21_isPredefined_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                      const class GGS_lstring & inOperand1,
                                                                                      const class GGS_lstring & inOperand2,
                                                                                      const class GGS__5B_nonterminalDeclarationAST_5D_ & inOperand3,
                                                                                      const class GGS__5B_syntaxRuleAST_5D_ & inOperand4,
                                                                                      const class GGS_bool & inOperand5,
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
  public: GGS_lstring mProperty_mSyntaxComponentName ;
  public: GGS_lstring mProperty_mLexiqueName ;
  public: GGS__5B_nonterminalDeclarationAST_5D_ mProperty_mNonterminalDeclarationList ;
  public: GGS__5B_syntaxRuleAST_5D_ mProperty_mRuleList ;
  public: GGS_bool mProperty_mHasTranslateFeature ;


//--- Default constructor
  public: cPtr_galgas_33_SyntaxComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_galgas_33_SyntaxComponentAST (const GGS_bool & in_isPredefined,
                                             const GGS_lstring & in_mSyntaxComponentName,
                                             const GGS_lstring & in_mLexiqueName,
                                             const GGS__5B_nonterminalDeclarationAST_5D_ & in_mNonterminalDeclarationList,
                                             const GGS__5B_syntaxRuleAST_5D_ & in_mRuleList,
                                             const GGS_bool & in_mHasTranslateFeature,
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
// Phase 1: @nonterminalSymbolLabelMapForGrammarAnalysis map
//--------------------------------------------------------------------------------------------------

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis final {

  public: DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inMap) ;

  public: ~ DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_signatureElementForGrammarAnalysis_5D_ current_mFormalParametersList (LOCATION_ARGS) const ;

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
  public: class GGS__5B_signatureElementForGrammarAnalysis_5D_ current_mFormalParametersList (LOCATION_ARGS) const ;
  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis &) = delete ;
  private: UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis & operator = (const UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_nonterminalSymbolLabelMapForGrammarAnalysis final : public AC_GALGAS_root {

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
//--------------------------------- GALGAS class functions
  public: static class GGS_nonterminalSymbolLabelMapForGrammarAnalysis class_func_mapWithMapToOverride (const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand0
                                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_signatureElementForGrammarAnalysis_5D_ constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalParametersListForKey (class GGS__5B_signatureElementForGrammarAnalysis_5D_ constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_signatureElementForGrammarAnalysis_5D_ & outArgument1,
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

  public: class GGS__5B_signatureElementForGrammarAnalysis_5D_ getter_mFormalParametersListForKey (const class GGS_string & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis ;
  friend class DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalSymbolMapForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_u_33__32_ mProperty_mNonTerminalIndex ;
  public: inline GGS_u_33__32_ readProperty_mNonTerminalIndex (void) const {
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

  public: inline void setter_setMNonTerminalIndex (const GGS_u_33__32_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalIndex = inValue ;
  }

  public: inline void setter_setMNonterminalSymbolParametersMap (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalSymbolParametersMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element (const GGS_lstring & in_lkey,
                                                                 const GGS_u_33__32_ & in_mNonTerminalIndex,
                                                                 const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap) ;

//--------------------------------- Copy constructor
  public: GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element (const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & operator = (const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                         const class GGS_u_33__32_ & inOperand1,
                                                                                         const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//§Filewrapper§ 'grammarGenerationTemplate'
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const DirectoryWrapper gWrapperDirectory_0_grammarGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
// Phase 1: filewrapper @grammarGenerationTemplate
//--------------------------------------------------------------------------------------------------

class GGS_grammarGenerationTemplate final {

//-- Start of package generic part

//--------------------------------- GALGAS class getters
  public: static class GGS_filewrapper class_func_contents (LOCATION_ARGS) ;

  public: static class GGS_string class_func_grammarImplementation (const class GGS_string & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    const class GGS_stringset & inOperand2,
                                                                    const class GGS__5B_templateReplacementAST_5D_ & inOperand3,
                                                                    const class GGS_string & inOperand4,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_grammarZone_33_HeaderGalgas_33_ (const class GGS_string & inOperand0,
                                                                              const class GGS_nonTerminalSymbolMapForGrammarAnalysis & inOperand1,
                                                                              const class GGS__5B_nonTerminalToAdd_5D_ & inOperand2,
                                                                              const class GGS_string & inOperand3,
                                                                              const class GGS_bool & inOperand4,
                                                                              const class GGS_string & inOperand5,
                                                                              const class GGS__5B_lstring_5D_ & inOperand6,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Class Methods

} ;

//--------------------------------------------------------------------------------------------------
//
//Function 'gSyntaxDirectedTranslationResultVarName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_gSyntaxDirectedTranslationResultVarName (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalExpressionAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateSwiftCocoaConditionCode (const class cPtr_lexicalExpressionAST * inObject,
                                                                      const class GGS_lexiqueAnalysisContext constin__5F_inLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalRoutineOrFunctionFormalInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalSendDefaultActionAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateSwiftCocoaDefaultSendCode (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                        const class GGS_string constin_inScannerClassName,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//LEXIQUE galgasScanner_34_
//
//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$!=$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___21__3D_ ;

//--- Unicode string for '$!==$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___21__3D__3D_ ;

//--- Unicode string for '$!?$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___21__3F_ ;

//--- Unicode string for '$!^$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___21__5E_ ;

//--- Unicode string for '$%$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___25_ ;

//--- Unicode string for '$&$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26_ ;

//--- Unicode string for '$&&$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__26_ ;

//--- Unicode string for '$&*$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2A_ ;

//--- Unicode string for '$&+$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2B_ ;

//--- Unicode string for '$&-$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2D_ ;

//--- Unicode string for '$&/$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2F_ ;

//--- Unicode string for '$&=$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__3D_ ;

//--- Unicode string for '$($'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___28_ ;

//--- Unicode string for '$)$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___29_ ;

//--- Unicode string for '$*$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2A_ ;

//--- Unicode string for '$*=$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2A__3D_ ;

//--- Unicode string for '$+$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2B_ ;

//--- Unicode string for '$++=$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2B__2B__3D_ ;

//--- Unicode string for '$+=$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2B__3D_ ;

//--- Unicode string for '$,$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2C_ ;

//--- Unicode string for '$-$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2D_ ;

//--- Unicode string for '$-=$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2D__3D_ ;

//--- Unicode string for '$->$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2D__3E_ ;

//--- Unicode string for '$.$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2E_ ;

//--- Unicode string for '$...$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2E__2E__2E_ ;

//--- Unicode string for '$..<$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2E__2E__3C_ ;

//--- Unicode string for '$/$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2F_ ;

//--- Unicode string for '$//$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2F__2F_ ;

//--- Unicode string for '$/=$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2F__3D_ ;

//--- Unicode string for '$0x$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___30_x ;

//--- Unicode string for '$:$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3A_ ;

//--- Unicode string for '$:>$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3A__3E_ ;

//--- Unicode string for '$;$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3B_ ;

//--- Unicode string for '$=$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3D_ ;

//--- Unicode string for '$==$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3D__3D_ ;

//--- Unicode string for '$===$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3D__3D__3D_ ;

//--- Unicode string for '$>$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3E_ ;

//--- Unicode string for '$>=$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3E__3D_ ;

//--- Unicode string for '$>>$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3E__3E_ ;

//--- Unicode string for '$?!$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3F__21_ ;

//--- Unicode string for '$?^$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3F__5E_ ;

//--- Unicode string for '$@($'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___40__28_ ;

//--- Unicode string for '$[$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5B_ ;

//--- Unicode string for '$\\$$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5C__24_ ;

//--- Unicode string for '$\\\\$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5C__5C_ ;

//--- Unicode string for '$]$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5D_ ;

//--- Unicode string for '$^$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5E_ ;

//--- Unicode string for '$^=$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5E__3D_ ;

//--- Unicode string for '$abstract$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__abstract ;

//--- Unicode string for '$after$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__after ;

//--- Unicode string for '$as$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__as ;

//--- Unicode string for '$before$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__before ;

//--- Unicode string for '$between$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__between ;

//--- Unicode string for '$binaryFileExtension$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__binaryFileExtension ;

//--- Unicode string for '$block$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__block ;

//--- Unicode string for '$case$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__case ;

//--- Unicode string for '$class$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__class ;

//--- Unicode string for '$clonable$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__clonable ;

//--- Unicode string for '$comparable$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__comparable ;

//--- Unicode string for '$default$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__default ;

//--- Unicode string for '$do$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__do ;

//--- Unicode string for '$drop$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__drop ;

//--- Unicode string for '$else$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__else ;

//--- Unicode string for '$elsif$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__elsif ;

//--- Unicode string for '$end$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__end ;

//--- Unicode string for '$enum$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__enum ;

//--- Unicode string for '$equatable$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__equatable ;

//--- Unicode string for '$error$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__error ;

//--- Unicode string for '$errorMessage$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__errorMessage ;

//--- Unicode string for '$extension$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__extension ;

//--- Unicode string for '$extern$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__extern ;

//--- Unicode string for '$false$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__false ;

//--- Unicode string for '$fileprivate$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__fileprivate ;

//--- Unicode string for '$filewrapper$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__filewrapper ;

//--- Unicode string for '$final$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__final ;

//--- Unicode string for '$fixit$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__fixit ;

//--- Unicode string for '$for$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__for ;

//--- Unicode string for '$from$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__from ;

//--- Unicode string for '$func$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__func ;

//--- Unicode string for '$generatedInSeparateFile$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__generatedInSeparateFile ;

//--- Unicode string for '$grammar$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__grammar ;

//--- Unicode string for '$graph$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__graph ;

//--- Unicode string for '$guard$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__guard ;

//--- Unicode string for '$gui$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__gui ;

//--- Unicode string for '$if$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__if ;

//--- Unicode string for '$in$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__in ;

//--- Unicode string for '$indexing$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__indexing ;

//--- Unicode string for '$init$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__init ;

//--- Unicode string for '$initArgLabel$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__initArgLabel ;

//--- Unicode string for '$insertAfter$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__insertAfter ;

//--- Unicode string for '$insertBefore$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__insertBefore ;

//--- Unicode string for '$insertOrReplaceSetter$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__insertOrReplaceSetter ;

//--- Unicode string for '$insertSetter$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__insertSetter ;

//--- Unicode string for '$is$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__is ;

//--- Unicode string for '$label$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__label ;

//--- Unicode string for '$let$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__let ;

//--- Unicode string for '$lexique$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__lexique ;

//--- Unicode string for '$list$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__list ;

//--- Unicode string for '$loop$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__loop ;

//--- Unicode string for '$map$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__map ;

//--- Unicode string for '$mutating$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__mutating ;

//--- Unicode string for '$nil$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__nil ;

//--- Unicode string for '$nonAtomicSelection$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__nonAtomicSelection ;

//--- Unicode string for '$not$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__not ;

//--- Unicode string for '$on$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__on ;

//--- Unicode string for '$optionset$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__optionset ;

//--- Unicode string for '$or$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__or ;

//--- Unicode string for '$override$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__override ;

//--- Unicode string for '$package$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__package ;

//--- Unicode string for '$preserved$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__preserved ;

//--- Unicode string for '$private$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__private ;

//--- Unicode string for '$proc$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__proc ;

//--- Unicode string for '$project$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__project ;

//--- Unicode string for '$protected$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__protected ;

//--- Unicode string for '$public$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__public ;

//--- Unicode string for '$remove$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__remove ;

//--- Unicode string for '$removeSetter$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__removeSetter ;

//--- Unicode string for '$repeat$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__repeat ;

//--- Unicode string for '$replaceBy$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__replaceBy ;

//--- Unicode string for '$replaceSetter$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__replaceSetter ;

//--- Unicode string for '$rewind$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__rewind ;

//--- Unicode string for '$rule$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__rule ;

//--- Unicode string for '$searchMethod$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__searchMethod ;

//--- Unicode string for '$searchString$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__searchString ;

//--- Unicode string for '$searchSubscript$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__searchSubscript ;

//--- Unicode string for '$select$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__select ;

//--- Unicode string for '$self$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__self ;

//--- Unicode string for '$send$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__send ;

//--- Unicode string for '$sortedarray$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__sortedarray ;

//--- Unicode string for '$spoil$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__spoil ;

//--- Unicode string for '$struct$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__struct ;

//--- Unicode string for '$style$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__style ;

//--- Unicode string for '$super$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__super ;

//--- Unicode string for '$switch$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__switch ;

//--- Unicode string for '$syntax$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__syntax ;

//--- Unicode string for '$tag$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__tag ;

//--- Unicode string for '$template$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__template ;

//--- Unicode string for '$templateEndMark$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__templateEndMark ;

//--- Unicode string for '$templateReplacement$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__templateReplacement ;

//--- Unicode string for '$textFileExtension$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__textFileExtension ;

//--- Unicode string for '$then$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__then ;

//--- Unicode string for '$translatable$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__translatable ;

//--- Unicode string for '$true$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__true ;

//--- Unicode string for '$unused$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__unused ;

//--- Unicode string for '$usefull$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__usefull ;

//--- Unicode string for '$var$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__var ;

//--- Unicode string for '$warning$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__warning ;

//--- Unicode string for '$while$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__while ;

//--- Unicode string for '$with$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__with ;

//--- Unicode string for '${$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7B_ ;

//--- Unicode string for '$|$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7C_ ;

//--- Unicode string for '$|=$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7C__3D_ ;

//--- Unicode string for '$||$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7C__7C_ ;

//--- Unicode string for '$}$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7D_ ;

//--- Unicode string for '$~$'
extern const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7E_ ;

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    R O U T I N E S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    F U N C T I O N S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S
//--------------------------------------------------------------------------------------------------

class cTokenFor_galgasScanner_34_ : public cToken {
  public: BigSigned mLexicalAttribute_bigintValue ;
  public: utf32 mLexicalAttribute_charValue ;
  public: double mLexicalAttribute_floatValue ;
  public: String mLexicalAttribute_tokenString ;
  public: uint32_t mLexicalAttribute_uint_33__32_value ;

  public: cTokenFor_galgasScanner_34_ (void) ;
} ;

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class Lexique_galgasScanner_34_ : public Lexique {

//--- Constructors
  public: Lexique_galgasScanner_34_ (Compiler * inCallerCompiler,
                                     const String & inSourceFileName,
                                     const std::initializer_list <utf32> & inOpenTemplateDelimiter,
                                     const std::initializer_list <utf32> & inCloseTemplateDelimiter,
                                     const TemplateDelimiter inTemplateReplacementArray [],
                                     const int32_t inTemplateReplacementArrayCount
                                     COMMA_LOCATION_ARGS) ;

  public: Lexique_galgasScanner_34_ (Compiler * inCallerCompiler,
                                     const String & inSourceString,
                                     const String & inStringForError,
                                     const std::initializer_list <utf32> & inOpenTemplateDelimiter,
                                     const std::initializer_list <utf32> & inCloseTemplateDelimiter,
                                     const TemplateDelimiter inTemplateReplacementArray [],
                                     const int32_t inTemplateReplacementArrayCount
                                     COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GGS__5B_string_5D_ symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static proc
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_galgasScanner_34_ (void) { }
  #endif


//--- Terminal symbols enumeration
  public: const static int32_t kToken_ = 0 ;
  public: static const int32_t kToken_identifier = 1 ;
  public: static const int32_t kToken_double_2E_xxx = 2 ;
  public: static const int32_t kToken_literalInt = 3 ;
  public: static const int32_t kToken__27_char_27_ = 4 ;
  public: static const int32_t kToken__24_terminal_24_ = 5 ;
  public: static const int32_t kToken_comment = 6 ;
  public: static const int32_t kToken_commentMark = 7 ;
  public: static const int32_t kToken__40_type = 8 ;
  public: static const int32_t kToken__3F_selector_3A_ = 9 ;
  public: static const int32_t kToken__3F_ = 10 ;
  public: static const int32_t kToken__3F__21_selector_3A_ = 11 ;
  public: static const int32_t kToken__3F__21_ = 12 ;
  public: static const int32_t kToken__21_selector_3A_ = 13 ;
  public: static const int32_t kToken__21_ = 14 ;
  public: static const int32_t kToken__21__3F_selector_3A_ = 15 ;
  public: static const int32_t kToken__21__3F_ = 16 ;
  public: static const int32_t kToken__3C_ = 17 ;
  public: static const int32_t kToken__3C__3D_ = 18 ;
  public: static const int32_t kToken__3C__3C_ = 19 ;
  public: static const int32_t kToken__3C_non_5F_terminal_3E_ = 20 ;
  public: static const int32_t kToken__22_string_22_ = 21 ;
  public: static const int32_t kToken_abstract = 22 ;
  public: static const int32_t kToken_after = 23 ;
  public: static const int32_t kToken_as = 24 ;
  public: static const int32_t kToken_before = 25 ;
  public: static const int32_t kToken_between = 26 ;
  public: static const int32_t kToken_block = 27 ;
  public: static const int32_t kToken_optionset = 28 ;
  public: static const int32_t kToken_case = 29 ;
  public: static const int32_t kToken_class = 30 ;
  public: static const int32_t kToken_default = 31 ;
  public: static const int32_t kToken_do = 32 ;
  public: static const int32_t kToken_drop = 33 ;
  public: static const int32_t kToken_else = 34 ;
  public: static const int32_t kToken_elsif = 35 ;
  public: static const int32_t kToken_end = 36 ;
  public: static const int32_t kToken_enum = 37 ;
  public: static const int32_t kToken_error = 38 ;
  public: static const int32_t kToken_extension = 39 ;
  public: static const int32_t kToken_extern = 40 ;
  public: static const int32_t kToken_false = 41 ;
  public: static const int32_t kToken_fileprivate = 42 ;
  public: static const int32_t kToken_filewrapper = 43 ;
  public: static const int32_t kToken_final = 44 ;
  public: static const int32_t kToken_for = 45 ;
  public: static const int32_t kToken_fixit = 46 ;
  public: static const int32_t kToken_func = 47 ;
  public: static const int32_t kToken_grammar = 48 ;
  public: static const int32_t kToken_graph = 49 ;
  public: static const int32_t kToken_guard = 50 ;
  public: static const int32_t kToken_gui = 51 ;
  public: static const int32_t kToken_if = 52 ;
  public: static const int32_t kToken_in = 53 ;
  public: static const int32_t kToken_indexing = 54 ;
  public: static const int32_t kToken_init = 55 ;
  public: static const int32_t kToken_is = 56 ;
  public: static const int32_t kToken_label = 57 ;
  public: static const int32_t kToken_let = 58 ;
  public: static const int32_t kToken_lexique = 59 ;
  public: static const int32_t kToken_list = 60 ;
  public: static const int32_t kToken_loop = 61 ;
  public: static const int32_t kToken_map = 62 ;
  public: static const int32_t kToken_mutating = 63 ;
  public: static const int32_t kToken_nil = 64 ;
  public: static const int32_t kToken_not = 65 ;
  public: static const int32_t kToken_on = 66 ;
  public: static const int32_t kToken_or = 67 ;
  public: static const int32_t kToken_override = 68 ;
  public: static const int32_t kToken_package = 69 ;
  public: static const int32_t kToken_public = 70 ;
  public: static const int32_t kToken_protected = 71 ;
  public: static const int32_t kToken_private = 72 ;
  public: static const int32_t kToken_proc = 73 ;
  public: static const int32_t kToken_project = 74 ;
  public: static const int32_t kToken_repeat = 75 ;
  public: static const int32_t kToken_rewind = 76 ;
  public: static const int32_t kToken_rule = 77 ;
  public: static const int32_t kToken_select = 78 ;
  public: static const int32_t kToken_self = 79 ;
  public: static const int32_t kToken_send = 80 ;
  public: static const int32_t kToken_sortedarray = 81 ;
  public: static const int32_t kToken_spoil = 82 ;
  public: static const int32_t kToken_super = 83 ;
  public: static const int32_t kToken_struct = 84 ;
  public: static const int32_t kToken_style = 85 ;
  public: static const int32_t kToken_switch = 86 ;
  public: static const int32_t kToken_syntax = 87 ;
  public: static const int32_t kToken_tag = 88 ;
  public: static const int32_t kToken_template = 89 ;
  public: static const int32_t kToken_then = 90 ;
  public: static const int32_t kToken_true = 91 ;
  public: static const int32_t kToken_var = 92 ;
  public: static const int32_t kToken_warning = 93 ;
  public: static const int32_t kToken_while = 94 ;
  public: static const int32_t kToken_with = 95 ;
  public: static const int32_t kToken__23_binaryFileExtension = 96 ;
  public: static const int32_t kToken__23_clonable = 97 ;
  public: static const int32_t kToken__23_comparable = 98 ;
  public: static const int32_t kToken__23_equatable = 99 ;
  public: static const int32_t kToken__23_errorMessage = 100 ;
  public: static const int32_t kToken__23_from = 101 ;
  public: static const int32_t kToken__23_generatedInSeparateFile = 102 ;
  public: static const int32_t kToken__23_initArgLabel = 103 ;
  public: static const int32_t kToken__23_insertAfter = 104 ;
  public: static const int32_t kToken__23_insertBefore = 105 ;
  public: static const int32_t kToken__23_insertOrReplaceSetter = 106 ;
  public: static const int32_t kToken__23_insertSetter = 107 ;
  public: static const int32_t kToken__23_nonAtomicSelection = 108 ;
  public: static const int32_t kToken__23_preserved = 109 ;
  public: static const int32_t kToken__23_replaceBy = 110 ;
  public: static const int32_t kToken__23_remove = 111 ;
  public: static const int32_t kToken__23_removeSetter = 112 ;
  public: static const int32_t kToken__23_replaceSetter = 113 ;
  public: static const int32_t kToken__23_searchMethod = 114 ;
  public: static const int32_t kToken__23_searchSubscript = 115 ;
  public: static const int32_t kToken__23_searchString = 116 ;
  public: static const int32_t kToken__23_template = 117 ;
  public: static const int32_t kToken__23_templateEndMark = 118 ;
  public: static const int32_t kToken__23_templateReplacement = 119 ;
  public: static const int32_t kToken__23_textFileExtension = 120 ;
  public: static const int32_t kToken__23_translatable = 121 ;
  public: static const int32_t kToken__23_unused = 122 ;
  public: static const int32_t kToken__23_usefull = 123 ;
  public: static const int32_t kToken__2A_ = 124 ;
  public: static const int32_t kToken__2C_ = 125 ;
  public: static const int32_t kToken__2B_ = 126 ;
  public: static const int32_t kToken__26__2B_ = 127 ;
  public: static const int32_t kToken__26__2D_ = 128 ;
  public: static const int32_t kToken__26__2A_ = 129 ;
  public: static const int32_t kToken__26__2F_ = 130 ;
  public: static const int32_t kToken__3E_ = 131 ;
  public: static const int32_t kToken__3B_ = 132 ;
  public: static const int32_t kToken__3A_ = 133 ;
  public: static const int32_t kToken__3A__3E_ = 134 ;
  public: static const int32_t kToken__2D_ = 135 ;
  public: static const int32_t kToken__28_ = 136 ;
  public: static const int32_t kToken__29_ = 137 ;
  public: static const int32_t kToken__2D__3E_ = 138 ;
  public: static const int32_t kToken__3D__3D_ = 139 ;
  public: static const int32_t kToken__3D_ = 140 ;
  public: static const int32_t kToken__26__26_ = 141 ;
  public: static const int32_t kToken__25_ = 142 ;
  public: static const int32_t kToken__5B_ = 143 ;
  public: static const int32_t kToken__5D_ = 144 ;
  public: static const int32_t kToken__2B__2B__3D_ = 145 ;
  public: static const int32_t kToken__2E_ = 146 ;
  public: static const int32_t kToken__40__28_ = 147 ;
  public: static const int32_t kToken__2E__2E__2E_ = 148 ;
  public: static const int32_t kToken__2E__2E__3C_ = 149 ;
  public: static const int32_t kToken__2B__3D_ = 150 ;
  public: static const int32_t kToken__2D__3D_ = 151 ;
  public: static const int32_t kToken__2A__3D_ = 152 ;
  public: static const int32_t kToken__2F__3D_ = 153 ;
  public: static const int32_t kToken__26__3D_ = 154 ;
  public: static const int32_t kToken__7C__3D_ = 155 ;
  public: static const int32_t kToken__5E__3D_ = 156 ;
  public: static const int32_t kToken__2F_ = 157 ;
  public: static const int32_t kToken__21__3D_ = 158 ;
  public: static const int32_t kToken__3E__3D_ = 159 ;
  public: static const int32_t kToken__26_ = 160 ;
  public: static const int32_t kToken__7B_ = 161 ;
  public: static const int32_t kToken__7D_ = 162 ;
  public: static const int32_t kToken__7C__7C_ = 163 ;
  public: static const int32_t kToken__7C_ = 164 ;
  public: static const int32_t kToken__5E_ = 165 ;
  public: static const int32_t kToken__3E__3E_ = 166 ;
  public: static const int32_t kToken__7E_ = 167 ;
  public: static const int32_t kToken__3D__3D__3D_ = 168 ;
  public: static const int32_t kToken__21__3D__3D_ = 169 ;
  public: static const int32_t kToken__3F__5E_ = 170 ;
  public: static const int32_t kToken__21__5E_ = 171 ;

//--- Key words table 'galgasKeyWordList'
  public: static int32_t search_into_galgasKeyWordList (const String & inSearchedString) ;

//--- Key words table 'attributeKeyWordList'
  public: static int32_t search_into_attributeKeyWordList (const String & inSearchedString) ;

//--- Key words table 'galgasDelimitorsList'
  public: static int32_t search_into_galgasDelimitorsList (const String & inSearchedString) ;


//--- Assign from attribute
  public: GGS_lbigint synthetizedAttribute_bigintValue (void) const ;
  public: GGS_lchar synthetizedAttribute_charValue (void) const ;
  public: GGS_lf_36__34_ synthetizedAttribute_floatValue (void) const ;
  public: GGS_lstring synthetizedAttribute_tokenString (void) const ;
  public: GGS_lu_33__32_ synthetizedAttribute_uint_33__32_value (void) const ;


//--- Attribute access
  public: BigSigned attributeValue_bigintValue (void) const ;
  public: utf32 attributeValue_charValue (void) const ;
  public: double attributeValue_floatValue (void) const ;
  public: String attributeValue_tokenString (void) const ;
  public: uint32_t attributeValue_uint_33__32_value (void) const ;


//--- indexing keys
public: static const uint32_t kIndexing_classDefinition = 0 ;
public: static const uint32_t kIndexing_enumDefinition = 1 ;
public: static const uint32_t kIndexing_structDefinition = 2 ;
public: static const uint32_t kIndexing_mapDefinition = 3 ;
public: static const uint32_t kIndexing_dictionaryDefinition = 4 ;
public: static const uint32_t kIndexing_externTypeDefinition = 5 ;
public: static const uint32_t kIndexing_filewrapperDefinition = 6 ;
public: static const uint32_t kIndexing_filewrapperReference = 7 ;
public: static const uint32_t kIndexing_graphDefinition = 8 ;
public: static const uint32_t kIndexing_classReferencedAsSuperClass = 9 ;
public: static const uint32_t kIndexing_typeReferenceInConstructor = 10 ;
public: static const uint32_t kIndexing_typeReferenceInTypeMethod = 11 ;
public: static const uint32_t kIndexing_routineDefinition = 12 ;
public: static const uint32_t kIndexing_routineCall = 13 ;
public: static const uint32_t kIndexing_functionDefinition = 14 ;
public: static const uint32_t kIndexing_functionCall = 15 ;
public: static const uint32_t kIndexing_terminalDeclaration = 16 ;
public: static const uint32_t kIndexing_terminalReference = 17 ;
public: static const uint32_t kIndexing_ruleDefinition = 18 ;
public: static const uint32_t kIndexing_ruleReference = 19 ;
public: static const uint32_t kIndexing_abstractExtensionSetterDefinition = 20 ;
public: static const uint32_t kIndexing_typeReferenceAbstractExtensionSetter = 21 ;
public: static const uint32_t kIndexing_overrideabstractExtensionSetterDefinition = 22 ;
public: static const uint32_t kIndexing_extensionSetterDefinition = 23 ;
public: static const uint32_t kIndexing_typeReferenceExtensionSetter = 24 ;
public: static const uint32_t kIndexing_overrideExtensionSetterDefinition = 25 ;
public: static const uint32_t kIndexing_typeReferenceOverrideExtensionSetterDefinition = 26 ;
public: static const uint32_t kIndexing_typeReferenceOverrideAbstractExtensionSetter = 27 ;
public: static const uint32_t kIndexing_abstractExtensionMethodDefinition = 28 ;
public: static const uint32_t kIndexing_typeReferenceAbstractExtensionMethod = 29 ;
public: static const uint32_t kIndexing_overrideAbstractExtensionMethodDefinition = 30 ;
public: static const uint32_t kIndexing_extensionMethodDefinition = 31 ;
public: static const uint32_t kIndexing_typeReferenceExtensionMethod = 32 ;
public: static const uint32_t kIndexing_overrideExtensionMethodDefinition = 33 ;
public: static const uint32_t kIndexing_typeReferenceOverrideExtensionMethodDefinition = 34 ;
public: static const uint32_t kIndexing_typeReferenceOverrideAbstractExtensionMethod = 35 ;
public: static const uint32_t kIndexing_abstractExtensionGetterDefinition = 36 ;
public: static const uint32_t kIndexing_typeReferenceAbstractExtensionGetter = 37 ;
public: static const uint32_t kIndexing_overrideAbstractExtensionGetterDefinition = 38 ;
public: static const uint32_t kIndexing_typeReferenceOverrideAbstractExtensionGetter = 39 ;
public: static const uint32_t kIndexing_extensionGetterDefinition = 40 ;
public: static const uint32_t kIndexing_typeReferenceExtensionGetter = 41 ;
public: static const uint32_t kIndexing_overrideExtensionGetterDefinition = 42 ;
public: static const uint32_t kIndexing_typeReferenceOverrideExtensionGetter = 43 ;
public: static const uint32_t kIndexing_optionComponentDefinition = 44 ;
public: static const uint32_t kIndexing_optionComponentReference = 45 ;
public: static const uint32_t kIndexing_grammarComponentDefinition = 46 ;
public: static const uint32_t kIndexing_grammarComponentReference = 47 ;
public: static const uint32_t kIndexing_indexingNameDefinition = 48 ;
public: static const uint32_t kIndexing_indexingNameReference = 49 ;

//--- Parse lexical token
  protected: void internalParseLexicalToken (cTokenFor_galgasScanner_34_ & token) ;
  protected: virtual bool parseLexicalToken (void) override ;

//--- Get terminal message
  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int32_t terminalVocabularyCount (void) const override { return 171 ; }

//--- Get Token String
  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_galgasScanner_34_ & ioToken) ;

//--- Style index
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateExpressionAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateExpressionAST : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateExpressionAST_init (Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
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
// Phase 1: @templateInstructionForeachForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionForeachForGeneration : public GGS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_templateInstructionForeachForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionForeachForGeneration (const class cPtr_templateInstructionForeachForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsAscending (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

  public: class GGS_string readProperty_mEnumeratorCppName (void) const ;

  public: class GGS__5B_templateInstructionForGeneration_5D_ readProperty_mBeforeInstructionList (void) const ;

  public: class GGS__5B_templateInstructionForGeneration_5D_ readProperty_mDoInstructionList (void) const ;

  public: class GGS_string readProperty_mIndexCppName (void) const ;

  public: class GGS__5B_templateInstructionForGeneration_5D_ readProperty_mBetweenInstructionList (void) const ;

  public: class GGS__5B_templateInstructionForGeneration_5D_ readProperty_mAfterInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionForeachForGeneration init_21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                   const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                                   const class GGS_string & inOperand2,
                                                                                                   const class GGS__5B_templateInstructionForGeneration_5D_ & inOperand3,
                                                                                                   const class GGS__5B_templateInstructionForGeneration_5D_ & inOperand4,
                                                                                                   const class GGS_string & inOperand5,
                                                                                                   const class GGS__5B_templateInstructionForGeneration_5D_ & inOperand6,
                                                                                                   const class GGS__5B_templateInstructionForGeneration_5D_ & inOperand7,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionForeachForGeneration & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionForeachForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionForeachForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionForeachForGeneration_init_21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                             const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                             const class GGS_string & inOperand2,
                                                                                             const class GGS__5B_templateInstructionForGeneration_5D_ & inOperand3,
                                                                                             const class GGS__5B_templateInstructionForGeneration_5D_ & inOperand4,
                                                                                             const class GGS_string & inOperand5,
                                                                                             const class GGS__5B_templateInstructionForGeneration_5D_ & inOperand6,
                                                                                             const class GGS__5B_templateInstructionForGeneration_5D_ & inOperand7,
                                                                                             Compiler * inCompiler) ;


//--- Extension proc templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg__ioTemporaryVariableIndex,
           class GGS_stringset & arg__ioUnusedVariableCppNameSet,
           class GGS_bool & arg__ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIsAscending ;
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GGS_string mProperty_mEnumeratorCppName ;
  public: GGS__5B_templateInstructionForGeneration_5D_ mProperty_mBeforeInstructionList ;
  public: GGS__5B_templateInstructionForGeneration_5D_ mProperty_mDoInstructionList ;
  public: GGS_string mProperty_mIndexCppName ;
  public: GGS__5B_templateInstructionForGeneration_5D_ mProperty_mBetweenInstructionList ;
  public: GGS__5B_templateInstructionForGeneration_5D_ mProperty_mAfterInstructionList ;


//--- Default constructor
  public: cPtr_templateInstructionForeachForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionForeachForGeneration (const GGS_bool & in_mIsAscending,
                                                        const GGS_semanticExpressionForGeneration & in_mExpression,
                                                        const GGS_string & in_mEnumeratorCppName,
                                                        const GGS__5B_templateInstructionForGeneration_5D_ & in_mBeforeInstructionList,
                                                        const GGS__5B_templateInstructionForGeneration_5D_ & in_mDoInstructionList,
                                                        const GGS_string & in_mIndexCppName,
                                                        const GGS__5B_templateInstructionForGeneration_5D_ & in_mBetweenInstructionList,
                                                        const GGS__5B_templateInstructionForGeneration_5D_ & in_mAfterInstructionList,
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
// Phase 1: [templateExpressionElementAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_templateExpressionElementAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_templateExpressionElementAST_5D_ (const class GGS__5B_templateExpressionElementAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_templateExpressionElementAST_5D_ (const DownEnumerator__5B_templateExpressionElementAST_5D_ &) = delete ;
  private: DownEnumerator__5B_templateExpressionElementAST_5D_ & operator = (const DownEnumerator__5B_templateExpressionElementAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateExpressionElementAST current (LOCATION_ARGS) const ;
  public: class GGS_templateExpressionElementAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_templateExpressionElementAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_templateExpressionElementAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_templateExpressionElementAST_5D_ (const class GGS__5B_templateExpressionElementAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_templateExpressionElementAST_5D_ (const UpEnumerator__5B_templateExpressionElementAST_5D_ &) = delete ;
  private: UpEnumerator__5B_templateExpressionElementAST_5D_ & operator = (const UpEnumerator__5B_templateExpressionElementAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateExpressionElementAST current (LOCATION_ARGS) const ;
  public: class GGS_templateExpressionElementAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_templateExpressionElementAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_templateExpressionElementAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_templateExpressionElementAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_templateExpressionElementAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_templateExpressionElementAST_5D_ (const GGS__5B_templateExpressionElementAST_5D_ & inSource) ;
  public: GGS__5B_templateExpressionElementAST_5D_ & operator = (const GGS__5B_templateExpressionElementAST_5D_ & inSource) ;

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
  public: static GGS__5B_templateExpressionElementAST_5D_ init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_templateExpressionElementAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_templateExpressionElementAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_templateExpressionElementAST_5D_ add_operation (const GGS__5B_templateExpressionElementAST_5D_ & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_templateExpressionElementAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_templateExpressionElementAST constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_templateExpressionElementAST & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_templateExpressionElementAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_templateExpressionElementAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_templateExpressionElementAST getter_first (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateExpressionElementAST getter_last (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateExpressionElementAST_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateExpressionElementAST_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                                         const class GGS_u_33__32_ & constinOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_templateExpressionElementAST readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_templateExpressionElementAST inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_templateExpressionElementAST_5D_ ;
  friend class DownEnumerator__5B_templateExpressionElementAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_templateExpressionElementAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateExpressionElementAST struct
//--------------------------------------------------------------------------------------------------

class GGS_templateExpressionElementAST final : public AC_GALGAS_root {
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
  public: GGS_templateExpressionElementAST (void) ;

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
  public: GGS_templateExpressionElementAST (const GGS_lstring & in_mActualSelector,
                                            const GGS_templateExpressionAST & in_mExpression,
                                            const GGS_location & in_mEndOfExpressionLocation) ;

//--------------------------------- Copy constructor
  public: GGS_templateExpressionElementAST (const GGS_templateExpressionElementAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateExpressionElementAST & operator = (const GGS_templateExpressionElementAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateExpressionElementAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_templateExpressionAST & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateExpressionElementAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [templateInstructionIfBranchAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_templateInstructionIfBranchAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_templateInstructionIfBranchAST_5D_ (const class GGS__5B_templateInstructionIfBranchAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_templateInstructionIfBranchAST_5D_ (const DownEnumerator__5B_templateInstructionIfBranchAST_5D_ &) = delete ;
  private: DownEnumerator__5B_templateInstructionIfBranchAST_5D_ & operator = (const DownEnumerator__5B_templateInstructionIfBranchAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateInstructionIfBranchAST current (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionIfBranchAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_templateInstructionIfBranchAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_templateInstructionIfBranchAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_templateInstructionIfBranchAST_5D_ (const class GGS__5B_templateInstructionIfBranchAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_templateInstructionIfBranchAST_5D_ (const UpEnumerator__5B_templateInstructionIfBranchAST_5D_ &) = delete ;
  private: UpEnumerator__5B_templateInstructionIfBranchAST_5D_ & operator = (const UpEnumerator__5B_templateInstructionIfBranchAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateInstructionIfBranchAST current (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionIfBranchAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_templateInstructionIfBranchAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_templateInstructionIfBranchAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_templateInstructionIfBranchAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_templateInstructionIfBranchAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_templateInstructionIfBranchAST_5D_ (const GGS__5B_templateInstructionIfBranchAST_5D_ & inSource) ;
  public: GGS__5B_templateInstructionIfBranchAST_5D_ & operator = (const GGS__5B_templateInstructionIfBranchAST_5D_ & inSource) ;

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
  public: static GGS__5B_templateInstructionIfBranchAST_5D_ init (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_templateInstructionIfBranchAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_templateInstructionIfBranchAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_templateInstructionIfBranchAST_5D_ add_operation (const GGS__5B_templateInstructionIfBranchAST_5D_ & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_templateInstructionIfBranchAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_templateInstructionIfBranchAST constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_templateInstructionIfBranchAST & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_templateInstructionIfBranchAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_templateInstructionIfBranchAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_templateInstructionIfBranchAST getter_first (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionIfBranchAST getter_last (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateInstructionIfBranchAST_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateInstructionIfBranchAST_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                                           const class GGS_u_33__32_ & constinOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_templateInstructionIfBranchAST readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_templateInstructionIfBranchAST inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_templateInstructionIfBranchAST_5D_ ;
  friend class DownEnumerator__5B_templateInstructionIfBranchAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_templateInstructionIfBranchAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionIfBranchAST struct
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionIfBranchAST final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_templateExpressionAST mProperty_mExpression ;
  public: inline GGS_templateExpressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GGS__5B_templateInstructionAST_5F_EX_5D_ mProperty_mInstructionList ;
  public: inline GGS__5B_templateInstructionAST_5F_EX_5D_ readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateInstructionIfBranchAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GGS_templateExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS__5B_templateInstructionAST_5F_EX_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateInstructionIfBranchAST (const GGS_templateExpressionAST & in_mExpression,
                                              const GGS__5B_templateInstructionAST_5F_EX_5D_ & in_mInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_templateInstructionIfBranchAST (const GGS_templateInstructionIfBranchAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateInstructionIfBranchAST & operator = (const GGS_templateInstructionIfBranchAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionIfBranchAST init_21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                  const class GGS__5B_templateInstructionAST_5F_EX_5D_ & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionStringForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionStringForGeneration : public GGS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_templateInstructionStringForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionStringForGeneration (const class cPtr_templateInstructionStringForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mTemplateString (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionStringForGeneration init_21_ (const class GGS_string & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionStringForGeneration & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionStringForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionStringForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionStringForGeneration_init_21_ (const class GGS_string & inOperand0,
                                                                Compiler * inCompiler) ;


//--- Extension proc templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg__ioTemporaryVariableIndex,
           class GGS_stringset & arg__ioUnusedVariableCppNameSet,
           class GGS_bool & arg__ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mTemplateString ;


//--- Default constructor
  public: cPtr_templateInstructionStringForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionStringForGeneration (const GGS_string & in_mTemplateString,
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
// Phase 1: @templateBlockInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateBlockInstructionForGeneration : public GGS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_templateBlockInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateBlockInstructionForGeneration (const class cPtr_templateBlockInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

  public: class GGS_location readProperty_mLocation (void) const ;

  public: class GGS__5B_templateInstructionForGeneration_5D_ readProperty_mBlockInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateBlockInstructionForGeneration init_21__21__21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                             const class GGS_location & inOperand1,
                                                                             const class GGS__5B_templateInstructionForGeneration_5D_ & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateBlockInstructionForGeneration & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateBlockInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_templateBlockInstructionForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateBlockInstructionForGeneration_init_21__21__21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                       const class GGS_location & inOperand1,
                                                                       const class GGS__5B_templateInstructionForGeneration_5D_ & inOperand2,
                                                                       Compiler * inCompiler) ;


//--- Extension proc templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg__ioTemporaryVariableIndex,
           class GGS_stringset & arg__ioUnusedVariableCppNameSet,
           class GGS_bool & arg__ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GGS_location mProperty_mLocation ;
  public: GGS__5B_templateInstructionForGeneration_5D_ mProperty_mBlockInstructionList ;


//--- Default constructor
  public: cPtr_templateBlockInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateBlockInstructionForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                      const GGS_location & in_mLocation,
                                                      const GGS__5B_templateInstructionForGeneration_5D_ & in_mBlockInstructionList,
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
// Phase 1: @templateInstructionGetColumnLocationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionGetColumnLocationForGeneration : public GGS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_templateInstructionGetColumnLocationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionGetColumnLocationForGeneration (const class cPtr_templateInstructionGetColumnLocationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionGetColumnLocationForGeneration init (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionGetColumnLocationForGeneration & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionGetColumnLocationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionGetColumnLocationForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionGetColumnLocationForGeneration_init (Compiler * inCompiler) ;


//--- Extension proc templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg__ioTemporaryVariableIndex,
           class GGS_stringset & arg__ioUnusedVariableCppNameSet,
           class GGS_bool & arg__ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_templateInstructionGetColumnLocationForGeneration (Compiler * inCompiler
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
// Phase 1: @templateInstructionGotoColumnLocationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionGotoColumnLocationForGeneration : public GGS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_templateInstructionGotoColumnLocationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionGotoColumnLocationForGeneration (const class cPtr_templateInstructionGotoColumnLocationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionGotoColumnLocationForGeneration init (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionGotoColumnLocationForGeneration & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionGotoColumnLocationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionGotoColumnLocationForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionGotoColumnLocationForGeneration_init (Compiler * inCompiler) ;


//--- Extension proc templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg__ioTemporaryVariableIndex,
           class GGS_stringset & arg__ioUnusedVariableCppNameSet,
           class GGS_bool & arg__ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_templateInstructionGotoColumnLocationForGeneration (Compiler * inCompiler
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
// Phase 1: @templateInstructionIfBranchForGeneration struct
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionIfBranchForGeneration final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;
  public: inline GGS_semanticExpressionForGeneration readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GGS__5B_templateInstructionForGeneration_5D_ mProperty_mInstructionList ;
  public: inline GGS__5B_templateInstructionForGeneration_5D_ readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateInstructionIfBranchForGeneration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS__5B_templateInstructionForGeneration_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateInstructionIfBranchForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                        const GGS__5B_templateInstructionForGeneration_5D_ & in_mInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_templateInstructionIfBranchForGeneration (const GGS_templateInstructionIfBranchForGeneration & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateInstructionIfBranchForGeneration & operator = (const GGS_templateInstructionIfBranchForGeneration & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionIfBranchForGeneration init_21__21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                            const class GGS__5B_templateInstructionForGeneration_5D_ & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [templateInstructionIfBranchForGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ (const class GGS__5B_templateInstructionIfBranchForGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ (const DownEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ & operator = (const DownEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateInstructionIfBranchForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionIfBranchForGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_templateInstructionIfBranchForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ (const class GGS__5B_templateInstructionIfBranchForGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ (const UpEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ & operator = (const UpEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateInstructionIfBranchForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionIfBranchForGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_templateInstructionIfBranchForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_templateInstructionIfBranchForGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_templateInstructionIfBranchForGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_templateInstructionIfBranchForGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_templateInstructionIfBranchForGeneration_5D_ (const GGS__5B_templateInstructionIfBranchForGeneration_5D_ & inSource) ;
  public: GGS__5B_templateInstructionIfBranchForGeneration_5D_ & operator = (const GGS__5B_templateInstructionIfBranchForGeneration_5D_ & inSource) ;

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
  public: static GGS__5B_templateInstructionIfBranchForGeneration_5D_ init (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_templateInstructionIfBranchForGeneration_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_templateInstructionIfBranchForGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_templateInstructionIfBranchForGeneration_5D_ add_operation (const GGS__5B_templateInstructionIfBranchForGeneration_5D_ & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_templateInstructionIfBranchForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_templateInstructionIfBranchForGeneration constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_templateInstructionIfBranchForGeneration & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_templateInstructionIfBranchForGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_templateInstructionIfBranchForGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_templateInstructionIfBranchForGeneration getter_first (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionIfBranchForGeneration getter_last (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateInstructionIfBranchForGeneration_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateInstructionIfBranchForGeneration_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                                                     const class GGS_u_33__32_ & constinOperand1,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_templateInstructionIfBranchForGeneration readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_templateInstructionIfBranchForGeneration inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ ;
  friend class DownEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_templateInstructionIfBranchForGeneration_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionIfForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionIfForGeneration : public GGS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_templateInstructionIfForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionIfForGeneration (const class cPtr_templateInstructionIfForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS__5B_templateInstructionIfBranchForGeneration_5D_ readProperty_mTemplateInstructionIfBranchList (void) const ;

  public: class GGS__5B_templateInstructionForGeneration_5D_ readProperty_mElseInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionIfForGeneration init_21__21_ (const class GGS__5B_templateInstructionIfBranchForGeneration_5D_ & inOperand0,
                                                                      const class GGS__5B_templateInstructionForGeneration_5D_ & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionIfForGeneration & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionIfForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionIfForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionIfForGeneration_init_21__21_ (const class GGS__5B_templateInstructionIfBranchForGeneration_5D_ & inOperand0,
                                                                const class GGS__5B_templateInstructionForGeneration_5D_ & inOperand1,
                                                                Compiler * inCompiler) ;


//--- Extension proc templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg__ioTemporaryVariableIndex,
           class GGS_stringset & arg__ioUnusedVariableCppNameSet,
           class GGS_bool & arg__ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS__5B_templateInstructionIfBranchForGeneration_5D_ mProperty_mTemplateInstructionIfBranchList ;
  public: GGS__5B_templateInstructionForGeneration_5D_ mProperty_mElseInstructionList ;


//--- Default constructor
  public: cPtr_templateInstructionIfForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionIfForGeneration (const GGS__5B_templateInstructionIfBranchForGeneration_5D_ & in_mTemplateInstructionIfBranchList,
                                                   const GGS__5B_templateInstructionForGeneration_5D_ & in_mElseInstructionList,
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
// Phase 1: @templateVariableMap map
//--------------------------------------------------------------------------------------------------

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

class GGS_templateVariableMap final : public AC_GALGAS_root {

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

  public: class GGS_string getter_mCppNameForKey (const class GGS_string & constinOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry getter_mTypeForKey (const class GGS_string & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateVariableMap getter_overriddenMap (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_templateVariableMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


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

class GGS_templateVariableMap_2E_element final : public AC_GALGAS_root {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateVariableMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateGetterCallInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateGetterCallInExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateGetterCallInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateGetterCallInExpressionAST (const class cPtr_templateGetterCallInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_templateExpressionAST readProperty_mReceiverExpression (void) const ;

  public: class GGS_lstring readProperty_mGetterName (void) const ;

  public: class GGS__5B_templateExpressionElementAST_5D_ readProperty_mExpressionList (void) const ;

  public: class GGS_location readProperty_mExpressionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateGetterCallInExpressionAST init_21__21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS__5B_templateExpressionElementAST_5D_ & inOperand2,
                                                                             const class GGS_location & inOperand3,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateGetterCallInExpressionAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateGetterCallInExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateGetterCallInExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateGetterCallInExpressionAST_init_21__21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                       const class GGS_lstring & inOperand1,
                                                                       const class GGS__5B_templateExpressionElementAST_5D_ & inOperand2,
                                                                       const class GGS_location & inOperand3,
                                                                       Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_templateExpressionAST mProperty_mReceiverExpression ;
  public: GGS_lstring mProperty_mGetterName ;
  public: GGS__5B_templateExpressionElementAST_5D_ mProperty_mExpressionList ;
  public: GGS_location mProperty_mExpressionLocation ;


//--- Default constructor
  public: cPtr_templateGetterCallInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateGetterCallInExpressionAST (const GGS_templateExpressionAST & in_mReceiverExpression,
                                                  const GGS_lstring & in_mGetterName,
                                                  const GGS__5B_templateExpressionElementAST_5D_ & in_mExpressionList,
                                                  const GGS_location & in_mExpressionLocation,
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
//LEXIQUE galgasTemplateScanner
//
//--------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S
//--------------------------------------------------------------------------------------------------

typedef cTokenFor_galgasScanner_34_ cTokenFor_galgasTemplateScanner ;

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class Lexique_galgasTemplateScanner : public Lexique_galgasScanner_34_ {

//--- Scanner mode for template scanner
  private: int32_t mMatchedTemplateDelimiterIndex ;

//--- Constructors
  public: Lexique_galgasTemplateScanner (Compiler * inCallerCompiler,
                                         const String & inSourceFileName,
                                         const std::initializer_list <utf32> & inOpenTemplateDelimiter,
                                         const std::initializer_list <utf32> & inCloseTemplateDelimiter,
                                         const TemplateDelimiter inTemplateReplacementArray [],
                                         const int32_t inTemplateReplacementArrayCount
                                         COMMA_LOCATION_ARGS) ;

  public: Lexique_galgasTemplateScanner (Compiler * inCallerCompiler,
                                         const String & inSourceString,
                                         const String & inStringForError,
                                         const std::initializer_list <utf32> & inOpenTemplateDelimiter,
                                         const std::initializer_list <utf32> & inCloseTemplateDelimiter,
                                         const TemplateDelimiter inTemplateReplacementArray [],
                                         const int32_t inTemplateReplacementArrayCount
                                         COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GGS__5B_string_5D_ symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static proc
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_galgasTemplateScanner (void) { }
  #endif

//--- Parse lexical token
  protected: virtual bool parseLexicalToken (void) override ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionSwitchBranchAST struct
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionSwitchBranchAST final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_lstring_5D_ mProperty_constantList ;
  public: inline GGS__5B_lstring_5D_ readProperty_constantList (void) const {
    return mProperty_constantList ;
  }

  public: GGS__5B_switchExtractedValuesAST_5D_ mProperty_associatedValuesExtraction ;
  public: inline GGS__5B_switchExtractedValuesAST_5D_ readProperty_associatedValuesExtraction (void) const {
    return mProperty_associatedValuesExtraction ;
  }

  public: GGS__5B_templateInstructionAST_5F_EX_5D_ mProperty_instructionList ;
  public: inline GGS__5B_templateInstructionAST_5F_EX_5D_ readProperty_instructionList (void) const {
    return mProperty_instructionList ;
  }

  public: GGS_location mProperty_endOfBranch ;
  public: inline GGS_location readProperty_endOfBranch (void) const {
    return mProperty_endOfBranch ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateInstructionSwitchBranchAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setConstantList (const GGS__5B_lstring_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_constantList = inValue ;
  }

  public: inline void setter_setAssociatedValuesExtraction (const GGS__5B_switchExtractedValuesAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_associatedValuesExtraction = inValue ;
  }

  public: inline void setter_setInstructionList (const GGS__5B_templateInstructionAST_5F_EX_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_instructionList = inValue ;
  }

  public: inline void setter_setEndOfBranch (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfBranch = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateInstructionSwitchBranchAST (const GGS__5B_lstring_5D_ & in_constantList,
                                                  const GGS__5B_switchExtractedValuesAST_5D_ & in_associatedValuesExtraction,
                                                  const GGS__5B_templateInstructionAST_5F_EX_5D_ & in_instructionList,
                                                  const GGS_location & in_endOfBranch) ;

//--------------------------------- Copy constructor
  public: GGS_templateInstructionSwitchBranchAST (const GGS_templateInstructionSwitchBranchAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateInstructionSwitchBranchAST & operator = (const GGS_templateInstructionSwitchBranchAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionSwitchBranchAST init_21__21__21__21_ (const class GGS__5B_lstring_5D_ & inOperand0,
                                                                              const class GGS__5B_switchExtractedValuesAST_5D_ & inOperand1,
                                                                              const class GGS__5B_templateInstructionAST_5F_EX_5D_ & inOperand2,
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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [templateInstructionSwitchBranchAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_templateInstructionSwitchBranchAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_templateInstructionSwitchBranchAST_5D_ (const class GGS__5B_templateInstructionSwitchBranchAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_templateInstructionSwitchBranchAST_5D_ (const DownEnumerator__5B_templateInstructionSwitchBranchAST_5D_ &) = delete ;
  private: DownEnumerator__5B_templateInstructionSwitchBranchAST_5D_ & operator = (const DownEnumerator__5B_templateInstructionSwitchBranchAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateInstructionSwitchBranchAST current (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionSwitchBranchAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_templateInstructionSwitchBranchAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_templateInstructionSwitchBranchAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_templateInstructionSwitchBranchAST_5D_ (const class GGS__5B_templateInstructionSwitchBranchAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_templateInstructionSwitchBranchAST_5D_ (const UpEnumerator__5B_templateInstructionSwitchBranchAST_5D_ &) = delete ;
  private: UpEnumerator__5B_templateInstructionSwitchBranchAST_5D_ & operator = (const UpEnumerator__5B_templateInstructionSwitchBranchAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateInstructionSwitchBranchAST current (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionSwitchBranchAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_templateInstructionSwitchBranchAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_templateInstructionSwitchBranchAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_templateInstructionSwitchBranchAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_templateInstructionSwitchBranchAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_templateInstructionSwitchBranchAST_5D_ (const GGS__5B_templateInstructionSwitchBranchAST_5D_ & inSource) ;
  public: GGS__5B_templateInstructionSwitchBranchAST_5D_ & operator = (const GGS__5B_templateInstructionSwitchBranchAST_5D_ & inSource) ;

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
  public: static GGS__5B_templateInstructionSwitchBranchAST_5D_ init (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_templateInstructionSwitchBranchAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_templateInstructionSwitchBranchAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_templateInstructionSwitchBranchAST_5D_ add_operation (const GGS__5B_templateInstructionSwitchBranchAST_5D_ & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_templateInstructionSwitchBranchAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_templateInstructionSwitchBranchAST constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_templateInstructionSwitchBranchAST & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_templateInstructionSwitchBranchAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_templateInstructionSwitchBranchAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_templateInstructionSwitchBranchAST getter_first (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionSwitchBranchAST getter_last (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateInstructionSwitchBranchAST_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateInstructionSwitchBranchAST_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                                               const class GGS_u_33__32_ & constinOperand1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_templateInstructionSwitchBranchAST readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_templateInstructionSwitchBranchAST inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_templateInstructionSwitchBranchAST_5D_ ;
  friend class DownEnumerator__5B_templateInstructionSwitchBranchAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_templateInstructionSwitchBranchAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionSwitchAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionSwitchAST : public GGS_templateInstructionAST_5F_EX {
//--------------------------------- Default constructor
  public: GGS_templateInstructionSwitchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionSwitchAST (const class cPtr_templateInstructionSwitchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_templateExpressionAST readProperty_mSwitchExpression (void) const ;

  public: class GGS_location readProperty_switchExpressionEndLocation (void) const ;

  public: class GGS__5B_templateInstructionSwitchBranchAST_5D_ readProperty_templateInstructionSwitchBranchList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionSwitchAST init_21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                    const class GGS_location & inOperand1,
                                                                    const class GGS__5B_templateInstructionSwitchBranchAST_5D_ & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionSwitchAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionSwitchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionSwitchAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionSwitchAST : public cPtr_templateInstructionAST_5F_EX {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionSwitchAST_init_21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                              const class GGS_location & inOperand1,
                                                              const class GGS__5B_templateInstructionSwitchBranchAST_5D_ & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension proc templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS__5B_templateInstructionForGeneration_5D_ & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_templateExpressionAST mProperty_mSwitchExpression ;
  public: GGS_location mProperty_switchExpressionEndLocation ;
  public: GGS__5B_templateInstructionSwitchBranchAST_5D_ mProperty_templateInstructionSwitchBranchList ;


//--- Default constructor
  public: cPtr_templateInstructionSwitchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionSwitchAST (const GGS_templateExpressionAST & in_mSwitchExpression,
                                             const GGS_location & in_switchExpressionEndLocation,
                                             const GGS__5B_templateInstructionSwitchBranchAST_5D_ & in_templateInstructionSwitchBranchList,
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
// Phase 1: [templateInstructionSwitchBranchForGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_templateInstructionSwitchBranchForGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_templateInstructionSwitchBranchForGeneration_5D_ (const class GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_templateInstructionSwitchBranchForGeneration_5D_ (const DownEnumerator__5B_templateInstructionSwitchBranchForGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_templateInstructionSwitchBranchForGeneration_5D_ & operator = (const DownEnumerator__5B_templateInstructionSwitchBranchForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateInstructionSwitchBranchForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionSwitchBranchForGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_templateInstructionSwitchBranchForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_templateInstructionSwitchBranchForGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_templateInstructionSwitchBranchForGeneration_5D_ (const class GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_templateInstructionSwitchBranchForGeneration_5D_ (const UpEnumerator__5B_templateInstructionSwitchBranchForGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_templateInstructionSwitchBranchForGeneration_5D_ & operator = (const UpEnumerator__5B_templateInstructionSwitchBranchForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateInstructionSwitchBranchForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionSwitchBranchForGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_templateInstructionSwitchBranchForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_templateInstructionSwitchBranchForGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ (const GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ & inSource) ;
  public: GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ & operator = (const GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ & inSource) ;

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
  public: static GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ init (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_templateInstructionSwitchBranchForGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ add_operation (const GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_templateInstructionSwitchBranchForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_templateInstructionSwitchBranchForGeneration constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_templateInstructionSwitchBranchForGeneration & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_templateInstructionSwitchBranchForGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_templateInstructionSwitchBranchForGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_templateInstructionSwitchBranchForGeneration getter_first (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionSwitchBranchForGeneration getter_last (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                                                         const class GGS_u_33__32_ & constinOperand1,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_templateInstructionSwitchBranchForGeneration readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_templateInstructionSwitchBranchForGeneration inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_templateInstructionSwitchBranchForGeneration_5D_ ;
  friend class DownEnumerator__5B_templateInstructionSwitchBranchForGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_templateInstructionSwitchBranchForGeneration_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionSwitchBranchForGeneration struct
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionSwitchBranchForGeneration final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_lstring_5D_ mProperty_mConstantList ;
  public: inline GGS__5B_lstring_5D_ readProperty_mConstantList (void) const {
    return mProperty_mConstantList ;
  }

  public: GGS__5B_extractedAssociatedValueForGeneration_5D_ mProperty_mExtractedAssociatedValuesForGeneration ;
  public: inline GGS__5B_extractedAssociatedValueForGeneration_5D_ readProperty_mExtractedAssociatedValuesForGeneration (void) const {
    return mProperty_mExtractedAssociatedValuesForGeneration ;
  }

  public: GGS_u_33__32_ mProperty_mEndOfBranchLocationIndex ;
  public: inline GGS_u_33__32_ readProperty_mEndOfBranchLocationIndex (void) const {
    return mProperty_mEndOfBranchLocationIndex ;
  }

  public: GGS__5B_templateInstructionForGeneration_5D_ mProperty_mInstructionList ;
  public: inline GGS__5B_templateInstructionForGeneration_5D_ readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateInstructionSwitchBranchForGeneration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMConstantList (const GGS__5B_lstring_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantList = inValue ;
  }

  public: inline void setter_setMExtractedAssociatedValuesForGeneration (const GGS__5B_extractedAssociatedValueForGeneration_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtractedAssociatedValuesForGeneration = inValue ;
  }

  public: inline void setter_setMEndOfBranchLocationIndex (const GGS_u_33__32_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfBranchLocationIndex = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS__5B_templateInstructionForGeneration_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateInstructionSwitchBranchForGeneration (const GGS__5B_lstring_5D_ & in_mConstantList,
                                                            const GGS__5B_extractedAssociatedValueForGeneration_5D_ & in_mExtractedAssociatedValuesForGeneration,
                                                            const GGS_u_33__32_ & in_mEndOfBranchLocationIndex,
                                                            const GGS__5B_templateInstructionForGeneration_5D_ & in_mInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_templateInstructionSwitchBranchForGeneration (const GGS_templateInstructionSwitchBranchForGeneration & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateInstructionSwitchBranchForGeneration & operator = (const GGS_templateInstructionSwitchBranchForGeneration & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionSwitchBranchForGeneration init_21__21__21__21_ (const class GGS__5B_lstring_5D_ & inOperand0,
                                                                                        const class GGS__5B_extractedAssociatedValueForGeneration_5D_ & inOperand1,
                                                                                        const class GGS_u_33__32_ & inOperand2,
                                                                                        const class GGS__5B_templateInstructionForGeneration_5D_ & inOperand3,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionSwitchForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionSwitchForGeneration : public GGS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_templateInstructionSwitchForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionSwitchForGeneration (const class cPtr_templateInstructionSwitchForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_enumType (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_switchExpression (void) const ;

  public: class GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ readProperty_templateInstructionSwitchBranchList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionSwitchForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                              const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                              const class GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionSwitchForGeneration & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionSwitchForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionSwitchForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionSwitchForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                        const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                        const class GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ & inOperand2,
                                                                        Compiler * inCompiler) ;


//--- Extension proc templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg__ioTemporaryVariableIndex,
           class GGS_stringset & arg__ioUnusedVariableCppNameSet,
           class GGS_bool & arg__ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_enumType ;
  public: GGS_semanticExpressionForGeneration mProperty_switchExpression ;
  public: GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ mProperty_templateInstructionSwitchBranchList ;


//--- Default constructor
  public: cPtr_templateInstructionSwitchForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionSwitchForGeneration (const GGS_unifiedTypeMapEntry & in_enumType,
                                                       const GGS_semanticExpressionForGeneration & in_switchExpression,
                                                       const GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ & in_templateInstructionSwitchBranchList,
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
// Phase 1: @templateSendInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateSendInstructionAST : public GGS_templateAbstractInstructionAST {
//--------------------------------- Default constructor
  public: GGS_templateSendInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateSendInstructionAST (const class cPtr_templateSendInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateSendInstructionAST init_21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                              const class GGS_location & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateSendInstructionAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateSendInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateSendInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateSendInstructionAST : public cPtr_templateAbstractInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateSendInstructionAST_init_21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                        const class GGS_location & inOperand1,
                                                        Compiler * inCompiler) ;


//--- Extension proc templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS__5B_templateInstructionForGeneration_5D_ & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mExpression ;
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_templateSendInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateSendInstructionAST (const GGS_semanticExpressionAST & in_mExpression,
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
// Phase 1: @templateInstructionExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionExpressionForGeneration : public GGS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_templateInstructionExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionExpressionForGeneration (const class cPtr_templateInstructionExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionExpressionForGeneration init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionExpressionForGeneration & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionExpressionForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionExpressionForGeneration_init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                    Compiler * inCompiler) ;


//--- Extension proc templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_u_33__32_ & arg__ioTemporaryVariableIndex,
           class GGS_stringset & arg__ioUnusedVariableCppNameSet,
           class GGS_bool & arg__ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;


//--- Default constructor
  public: cPtr_templateInstructionExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionExpressionForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression,
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
//Abstract extension proc '@templateAbstractInstructionAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_templateInstructionAnalysis (class cPtr_templateAbstractInstructionAST * inObject,
                                                      const class GGS_lstring constin_inUsefulnessCallerEntityName,
                                                      class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                      const class GGS_analysisContext constin_inAnalysisContext,
                                                      class GGS_unifiedTypeMap & io_ioTypeMap,
                                                      class GGS_localVarManager & io_ioVariableMap,
                                                      class GGS__5B_templateInstructionForGeneration_5D_ & io_ioInstructionList,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@templateInstructionAST_EX templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_templateInstructionAnalysis (class cPtr_templateInstructionAST_5F_EX * inObject,
                                                      const class GGS_lstring constin_inUsefulnessCallerEntityName,
                                                      class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                      const class GGS_templateAnalysisContext constin_inAnalysisContext,
                                                      class GGS_unifiedTypeMap & io_ioTypeMap,
                                                      class GGS__5B_templateInstructionForGeneration_5D_ & io_ioInstructionList,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateAnalysisContext struct
//--------------------------------------------------------------------------------------------------

class GGS_templateAnalysisContext final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticContext mProperty_mSemanticContext ;
  public: inline GGS_semanticContext readProperty_mSemanticContext (void) const {
    return mProperty_mSemanticContext ;
  }

  public: GGS_predefinedTypes mProperty_mPredefinedTypes ;
  public: inline GGS_predefinedTypes readProperty_mPredefinedTypes (void) const {
    return mProperty_mPredefinedTypes ;
  }

  public: GGS_templateVariableMap mProperty_mTemplateVariableMap ;
  public: inline GGS_templateVariableMap readProperty_mTemplateVariableMap (void) const {
    return mProperty_mTemplateVariableMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateAnalysisContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSemanticContext (const GGS_semanticContext & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSemanticContext = inValue ;
  }

  public: inline void setter_setMPredefinedTypes (const GGS_predefinedTypes & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPredefinedTypes = inValue ;
  }

  public: inline void setter_setMTemplateVariableMap (const GGS_templateVariableMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTemplateVariableMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateAnalysisContext (const GGS_semanticContext & in_mSemanticContext,
                                       const GGS_predefinedTypes & in_mPredefinedTypes,
                                       const GGS_templateVariableMap & in_mTemplateVariableMap) ;

//--------------------------------- Copy constructor
  public: GGS_templateAnalysisContext (const GGS_templateAnalysisContext & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateAnalysisContext & operator = (const GGS_templateAnalysisContext & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateAnalysisContext init_21__21__21_ (const class GGS_semanticContext & inOperand0,
                                                               const class GGS_predefinedTypes & inOperand1,
                                                               const class GGS_templateVariableMap & inOperand2,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateAnalysisContext ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@templateExpressionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_templateExpressionAnalysis (class cPtr_templateExpressionAST * inObject,
                                                     const class GGS_lstring constin_inUsefulnessCallerEntityName,
                                                     class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const class GGS_templateAnalysisContext constin_inAnalysisContext,
                                                     class GGS_unifiedTypeMap & io_ioTypeMap,
                                                     class GGS_semanticExpressionForGeneration & out_outExpression,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

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

  public: class GGS__5B_templateExpressionElementAST_5D_ readProperty_mExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateClassFunctionAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                const class GGS__5B_templateExpressionElementAST_5D_ & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateClassFunctionAST & inOperand) const ;

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
                                                          const class GGS__5B_templateExpressionElementAST_5D_ & inOperand2,
                                                          Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mClassFunctionName ;
  public: GGS__5B_templateExpressionElementAST_5D_ mProperty_mExpressionList ;


//--- Default constructor
  public: cPtr_templateClassFunctionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateClassFunctionAST (const GGS_lstring & in_mTypeName,
                                         const GGS_lstring & in_mClassFunctionName,
                                         const GGS__5B_templateExpressionElementAST_5D_ & in_mExpressionList,
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

  public: class GGS__5B_templateExpressionElementAST_5D_ readProperty_mOutExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateFileWrapperTemplateCallAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS__5B_templateExpressionElementAST_5D_ & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateFileWrapperTemplateCallAST & inOperand) const ;

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
                                                                    const class GGS__5B_templateExpressionElementAST_5D_ & inOperand2,
                                                                    Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mFileWrapperName ;
  public: GGS_lstring mProperty_mTemplateName ;
  public: GGS__5B_templateExpressionElementAST_5D_ mProperty_mOutExpressionList ;


//--- Default constructor
  public: cPtr_templateFileWrapperTemplateCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateFileWrapperTemplateCallAST (const GGS_lstring & in_mFileWrapperName,
                                                   const GGS_lstring & in_mTemplateName,
                                                   const GGS__5B_templateExpressionElementAST_5D_ & in_mOutExpressionList,
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

  public: class GGS__5B_templateExpressionElementAST_5D_ readProperty_mOutExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateExtensionTemplateCallAST init_21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS__5B_templateExpressionElementAST_5D_ & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateExtensionTemplateCallAST & inOperand) const ;

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
                                                                  const class GGS__5B_templateExpressionElementAST_5D_ & inOperand2,
                                                                  Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_templateExpressionAST mProperty_mExpressionValue ;
  public: GGS_lstring mProperty_mTemplateName ;
  public: GGS__5B_templateExpressionElementAST_5D_ mProperty_mOutExpressionList ;


//--- Default constructor
  public: cPtr_templateExtensionTemplateCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateExtensionTemplateCallAST (const GGS_templateExpressionAST & in_mExpressionValue,
                                                 const GGS_lstring & in_mTemplateName,
                                                 const GGS__5B_templateExpressionElementAST_5D_ & in_mOutExpressionList,
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateAndOperationAST & inOperand) const ;

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


//--- Extension proc templateExpressionAnalysis
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateOrOperationAST & inOperand) const ;

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


//--- Extension proc templateExpressionAnalysis
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateXorOperationAST & inOperand) const ;

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


//--- Extension proc templateExpressionAnalysis
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateTrueBoolAST & inOperand) const ;

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


//--- Extension proc templateExpressionAnalysis
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateFalseBoolAST & inOperand) const ;

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


//--- Extension proc templateExpressionAnalysis
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateLiteralStringExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralStringExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateLiteralStringExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLiteralStringExpressionAST (const class cPtr_templateLiteralStringExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS__5B_string_5D_ readProperty_mLiteralStringList (void) const ;

  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLiteralStringExpressionAST init_21__21_ (const class GGS__5B_string_5D_ & inOperand0,
                                                                      const class GGS_location & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralStringExpressionAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateLiteralStringExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateLiteralStringExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateLiteralStringExpressionAST_init_21__21_ (const class GGS__5B_string_5D_ & inOperand0,
                                                                const class GGS_location & inOperand1,
                                                                Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS__5B_string_5D_ mProperty_mLiteralStringList ;
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_templateLiteralStringExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLiteralStringExpressionAST (const GGS__5B_string_5D_ & in_mLiteralStringList,
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralUIntExpressionAST & inOperand) const ;

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


//--- Extension proc templateExpressionAnalysis
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateLiteralCharExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralCharExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateLiteralCharExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLiteralCharExpressionAST (const class cPtr_templateLiteralCharExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lchar readProperty_mLiteralChar (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLiteralCharExpressionAST init_21_ (const class GGS_lchar & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralCharExpressionAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateLiteralCharExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateLiteralCharExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateLiteralCharExpressionAST_init_21_ (const class GGS_lchar & inOperand0,
                                                          Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lchar mProperty_mLiteralChar ;


//--- Default constructor
  public: cPtr_templateLiteralCharExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLiteralCharExpressionAST (const GGS_lchar & in_mLiteralChar,
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
// Phase 1: @templateLiteralDoubleExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralDoubleExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateLiteralDoubleExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLiteralDoubleExpressionAST (const class cPtr_templateLiteralDoubleExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lf_36__34_ readProperty_mLiteralDouble (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLiteralDoubleExpressionAST init_21_ (const class GGS_lf_36__34_ & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralDoubleExpressionAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateLiteralDoubleExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateLiteralDoubleExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateLiteralDoubleExpressionAST_init_21_ (const class GGS_lf_36__34_ & inOperand0,
                                                            Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lf_36__34_ mProperty_mLiteralDouble ;


//--- Default constructor
  public: cPtr_templateLiteralDoubleExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLiteralDoubleExpressionAST (const GGS_lf_36__34_ & in_mLiteralDouble,
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
// Phase 1: @structFieldAccessTemplateExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_structFieldAccessTemplateExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_structFieldAccessTemplateExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_structFieldAccessTemplateExpressionAST (const class cPtr_structFieldAccessTemplateExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mExpression (void) const ;

  public: class GGS_lstring readProperty_mStructFieldName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_structFieldAccessTemplateExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                              const class GGS_templateExpressionAST & inOperand1,
                                                                              const class GGS_lstring & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structFieldAccessTemplateExpressionAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @structFieldAccessTemplateExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_structFieldAccessTemplateExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void structFieldAccessTemplateExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                        const class GGS_templateExpressionAST & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mExpression ;
  public: GGS_lstring mProperty_mStructFieldName ;


//--- Default constructor
  public: cPtr_structFieldAccessTemplateExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_structFieldAccessTemplateExpressionAST (const GGS_location & in_mOperatorLocation,
                                                       const GGS_templateExpressionAST & in_mExpression,
                                                       const GGS_lstring & in_mStructFieldName,
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
// Phase 1: @templateNotOperatorAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateNotOperatorAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateNotOperatorAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateNotOperatorAST (const class cPtr_templateNotOperatorAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateNotOperatorAST init_21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_templateExpressionAST & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateNotOperatorAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateNotOperatorAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateNotOperatorAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateNotOperatorAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateNotOperatorAST_init_21__21_ (const class GGS_location & inOperand0,
                                                    const class GGS_templateExpressionAST & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_templateNotOperatorAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateNotOperatorAST (const GGS_location & in_mOperatorLocation,
                                       const GGS_templateExpressionAST & in_mExpression,
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
// Phase 1: @templateLogicalNegateAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLogicalNegateAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateLogicalNegateAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLogicalNegateAST (const class cPtr_templateLogicalNegateAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLogicalNegateAST init_21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_templateExpressionAST & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLogicalNegateAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLogicalNegateAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateLogicalNegateAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateLogicalNegateAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateLogicalNegateAST_init_21__21_ (const class GGS_location & inOperand0,
                                                      const class GGS_templateExpressionAST & inOperand1,
                                                      Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_templateLogicalNegateAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLogicalNegateAST (const GGS_location & in_mOperatorLocation,
                                         const GGS_templateExpressionAST & in_mExpression,
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
// Phase 1: @templateTestDynamicClassAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateTestDynamicClassAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateTestDynamicClassAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateTestDynamicClassAST (const class cPtr_templateTestDynamicClassAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_templateExpressionAST readProperty_mReceiverExpression (void) const ;

  public: class GGS_location readProperty_mEndOfReceiverExpression (void) const ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateTestDynamicClassAST init_21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   const class GGS_lstring & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateTestDynamicClassAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateTestDynamicClassAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateTestDynamicClassAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateTestDynamicClassAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateTestDynamicClassAST_init_21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                             const class GGS_location & inOperand1,
                                                             const class GGS_lstring & inOperand2,
                                                             Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_templateExpressionAST mProperty_mReceiverExpression ;
  public: GGS_location mProperty_mEndOfReceiverExpression ;
  public: GGS_lstring mProperty_mTypeName ;


//--- Default constructor
  public: cPtr_templateTestDynamicClassAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateTestDynamicClassAST (const GGS_templateExpressionAST & in_mReceiverExpression,
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
// Phase 1: @templateFunctionCallAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateFunctionCallAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateFunctionCallAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateFunctionCallAST (const class cPtr_templateFunctionCallAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFunctionName (void) const ;

  public: class GGS__5B_templateExpressionElementAST_5D_ readProperty_mExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateFunctionCallAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                           const class GGS__5B_templateExpressionElementAST_5D_ & inOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateFunctionCallAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateFunctionCallAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateFunctionCallAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateFunctionCallAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateFunctionCallAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                     const class GGS__5B_templateExpressionElementAST_5D_ & inOperand1,
                                                     Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mFunctionName ;
  public: GGS__5B_templateExpressionElementAST_5D_ mProperty_mExpressionList ;


//--- Default constructor
  public: cPtr_templateFunctionCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateFunctionCallAST (const GGS_lstring & in_mFunctionName,
                                        const GGS__5B_templateExpressionElementAST_5D_ & in_mExpressionList,
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
// Phase 1: @templateVarInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateVarInExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateVarInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateVarInExpressionAST (const class cPtr_templateVarInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mVarName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateVarInExpressionAST init_21_ (const class GGS_lstring & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateVarInExpressionAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateVarInExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateVarInExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateVarInExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateVarInExpressionAST_init_21_ (const class GGS_lstring & inOperand0,
                                                    Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mVarName ;


//--- Default constructor
  public: cPtr_templateVarInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateVarInExpressionAST (const GGS_lstring & in_mVarName,
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
// Phase 1: @templateAddOperationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateAddOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateAddOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateAddOperationAST (const class cPtr_templateAddOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateAddOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_templateExpressionAST & inOperand1,
                                                               const class GGS_templateExpressionAST & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateAddOperationAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateAddOperationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateAddOperationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateAddOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateAddOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                         const class GGS_templateExpressionAST & inOperand1,
                                                         const class GGS_templateExpressionAST & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
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
  public: cPtr_templateAddOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateAddOperationAST (const GGS_location & in_mOperatorLocation,
                                        const GGS_templateExpressionAST & in_mLeftExpression,
                                        const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateSubOperationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateSubOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateSubOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateSubOperationAST (const class cPtr_templateSubOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateSubOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_templateExpressionAST & inOperand1,
                                                               const class GGS_templateExpressionAST & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateSubOperationAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateSubOperationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateSubOperationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateSubOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateSubOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                         const class GGS_templateExpressionAST & inOperand1,
                                                         const class GGS_templateExpressionAST & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
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
  public: cPtr_templateSubOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateSubOperationAST (const GGS_location & in_mOperatorLocation,
                                        const GGS_templateExpressionAST & in_mLeftExpression,
                                        const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateMultiplyOperationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateMultiplyOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateMultiplyOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateMultiplyOperationAST (const class cPtr_templateMultiplyOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateMultiplyOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_templateExpressionAST & inOperand1,
                                                                    const class GGS_templateExpressionAST & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateMultiplyOperationAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateMultiplyOperationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateMultiplyOperationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateMultiplyOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateMultiplyOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_templateExpressionAST & inOperand1,
                                                              const class GGS_templateExpressionAST & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
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
  public: cPtr_templateMultiplyOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateMultiplyOperationAST (const GGS_location & in_mOperatorLocation,
                                             const GGS_templateExpressionAST & in_mLeftExpression,
                                             const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateDivideOperationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateDivideOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateDivideOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateDivideOperationAST (const class cPtr_templateDivideOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateDivideOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_templateExpressionAST & inOperand1,
                                                                  const class GGS_templateExpressionAST & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateDivideOperationAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateDivideOperationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateDivideOperationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateDivideOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateDivideOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_templateExpressionAST & inOperand1,
                                                            const class GGS_templateExpressionAST & inOperand2,
                                                            Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
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
  public: cPtr_templateDivideOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateDivideOperationAST (const GGS_location & in_mOperatorLocation,
                                           const GGS_templateExpressionAST & in_mLeftExpression,
                                           const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateModuloOperationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateModuloOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateModuloOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateModuloOperationAST (const class cPtr_templateModuloOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateModuloOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_templateExpressionAST & inOperand1,
                                                                  const class GGS_templateExpressionAST & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateModuloOperationAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateModuloOperationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateModuloOperationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateModuloOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateModuloOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_templateExpressionAST & inOperand1,
                                                            const class GGS_templateExpressionAST & inOperand2,
                                                            Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
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
  public: cPtr_templateModuloOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateModuloOperationAST (const GGS_location & in_mOperatorLocation,
                                           const GGS_templateExpressionAST & in_mLeftExpression,
                                           const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateUnaryMinusOperationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateUnaryMinusOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateUnaryMinusOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateUnaryMinusOperationAST (const class cPtr_templateUnaryMinusOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateUnaryMinusOperationAST init_21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_templateExpressionAST & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateUnaryMinusOperationAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateUnaryMinusOperationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateUnaryMinusOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateUnaryMinusOperationAST_init_21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_templateExpressionAST & inOperand1,
                                                            Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_templateUnaryMinusOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateUnaryMinusOperationAST (const GGS_location & in_mOperatorLocation,
                                               const GGS_templateExpressionAST & in_mExpression,
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
// Phase 1: @templateEqualTestAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateEqualTestAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateEqualTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateEqualTestAST (const class cPtr_templateEqualTestAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateEqualTestAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_templateExpressionAST & inOperand1,
                                                            const class GGS_templateExpressionAST & inOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateEqualTestAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateEqualTestAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateEqualTestAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateEqualTestAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateEqualTestAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                      const class GGS_templateExpressionAST & inOperand1,
                                                      const class GGS_templateExpressionAST & inOperand2,
                                                      Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
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
  public: cPtr_templateEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateEqualTestAST (const GGS_location & in_mOperatorLocation,
                                     const GGS_templateExpressionAST & in_mLeftExpression,
                                     const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateNonEqualTestAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateNonEqualTestAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateNonEqualTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateNonEqualTestAST (const class cPtr_templateNonEqualTestAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateNonEqualTestAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_templateExpressionAST & inOperand1,
                                                               const class GGS_templateExpressionAST & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateNonEqualTestAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateNonEqualTestAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateNonEqualTestAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateNonEqualTestAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateNonEqualTestAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                         const class GGS_templateExpressionAST & inOperand1,
                                                         const class GGS_templateExpressionAST & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
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
  public: cPtr_templateNonEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateNonEqualTestAST (const GGS_location & in_mOperatorLocation,
                                        const GGS_templateExpressionAST & in_mLeftExpression,
                                        const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateStrictInfTestAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateStrictInfTestAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateStrictInfTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateStrictInfTestAST (const class cPtr_templateStrictInfTestAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateStrictInfTestAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_templateExpressionAST & inOperand1,
                                                                const class GGS_templateExpressionAST & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateStrictInfTestAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateStrictInfTestAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateStrictInfTestAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateStrictInfTestAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateStrictInfTestAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_templateExpressionAST & inOperand1,
                                                          const class GGS_templateExpressionAST & inOperand2,
                                                          Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
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
  public: cPtr_templateStrictInfTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateStrictInfTestAST (const GGS_location & in_mOperatorLocation,
                                         const GGS_templateExpressionAST & in_mLeftExpression,
                                         const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateInfOrEqualTestAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInfOrEqualTestAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateInfOrEqualTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInfOrEqualTestAST (const class cPtr_templateInfOrEqualTestAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInfOrEqualTestAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_templateExpressionAST & inOperand1,
                                                                 const class GGS_templateExpressionAST & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInfOrEqualTestAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInfOrEqualTestAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInfOrEqualTestAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInfOrEqualTestAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInfOrEqualTestAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_templateExpressionAST & inOperand1,
                                                           const class GGS_templateExpressionAST & inOperand2,
                                                           Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
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
  public: cPtr_templateInfOrEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInfOrEqualTestAST (const GGS_location & in_mOperatorLocation,
                                          const GGS_templateExpressionAST & in_mLeftExpression,
                                          const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateStrictSupTestAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateStrictSupTestAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateStrictSupTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateStrictSupTestAST (const class cPtr_templateStrictSupTestAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateStrictSupTestAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_templateExpressionAST & inOperand1,
                                                                const class GGS_templateExpressionAST & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateStrictSupTestAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateStrictSupTestAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateStrictSupTestAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateStrictSupTestAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateStrictSupTestAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_templateExpressionAST & inOperand1,
                                                          const class GGS_templateExpressionAST & inOperand2,
                                                          Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
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
  public: cPtr_templateStrictSupTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateStrictSupTestAST (const GGS_location & in_mOperatorLocation,
                                         const GGS_templateExpressionAST & in_mLeftExpression,
                                         const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateSupOrEqualTestAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateSupOrEqualTestAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateSupOrEqualTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateSupOrEqualTestAST (const class cPtr_templateSupOrEqualTestAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateSupOrEqualTestAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_templateExpressionAST & inOperand1,
                                                                 const class GGS_templateExpressionAST & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateSupOrEqualTestAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateSupOrEqualTestAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateSupOrEqualTestAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateSupOrEqualTestAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateSupOrEqualTestAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_templateExpressionAST & inOperand1,
                                                           const class GGS_templateExpressionAST & inOperand2,
                                                           Compiler * inCompiler) ;


//--- Extension proc templateExpressionAnalysis
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
  public: cPtr_templateSupOrEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateSupOrEqualTestAST (const GGS_location & in_mOperatorLocation,
                                          const GGS_templateExpressionAST & in_mLeftExpression,
                                          const GGS_templateExpressionAST & in_mRightExpression,
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

