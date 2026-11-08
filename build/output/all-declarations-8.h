#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_filewrapperDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_filewrapperDeclarationAST (const class cPtr_filewrapperDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsInternal (void) const ;

  public: class GGS_string readProperty_mSourceFileAbsolutePath (void) const ;

  public: class GGS_lstring readProperty_mFilewrapperName (void) const ;

  public: class GGS_lstring readProperty_mFilewrapperPath (void) const ;

  public: class GGS_lstringlist readProperty_mFilewrapperTextFileExtensionList (void) const ;

  public: class GGS_lstringlist readProperty_mFilewrapperBinaryFileExtensionList (void) const ;

  public: class GGS_filewrapperTemplateListAST readProperty_mFilewrapperTemplateList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperDeclarationAST init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                 const class GGS_bool & inOperand1,
                                                                                                 const class GGS_string & inOperand2,
                                                                                                 const class GGS_lstring & inOperand3,
                                                                                                 const class GGS_lstring & inOperand4,
                                                                                                 const class GGS_lstringlist & inOperand5,
                                                                                                 const class GGS_lstringlist & inOperand6,
                                                                                                 const class GGS_filewrapperTemplateListAST & inOperand7,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperDeclarationAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @filewrapperDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                           const class GGS_bool & inOperand1,
                                                                                           const class GGS_string & inOperand2,
                                                                                           const class GGS_lstring & inOperand3,
                                                                                           const class GGS_lstring & inOperand4,
                                                                                           const class GGS_lstringlist & inOperand5,
                                                                                           const class GGS_lstringlist & inOperand6,
                                                                                           const class GGS_filewrapperTemplateListAST & inOperand7,
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
  public: GGS_bool mProperty_mIsInternal ;
  public: GGS_string mProperty_mSourceFileAbsolutePath ;
  public: GGS_lstring mProperty_mFilewrapperName ;
  public: GGS_lstring mProperty_mFilewrapperPath ;
  public: GGS_lstringlist mProperty_mFilewrapperTextFileExtensionList ;
  public: GGS_lstringlist mProperty_mFilewrapperBinaryFileExtensionList ;
  public: GGS_filewrapperTemplateListAST mProperty_mFilewrapperTemplateList ;


//--- Default constructor
  public: cPtr_filewrapperDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperDeclarationAST (const GGS_bool & in_isPredefined,
                                          const GGS_bool & in_mIsInternal,
                                          const GGS_string & in_mSourceFileAbsolutePath,
                                          const GGS_lstring & in_mFilewrapperName,
                                          const GGS_lstring & in_mFilewrapperPath,
                                          const GGS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                          const GGS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                          const GGS_filewrapperTemplateListAST & in_mFilewrapperTemplateList,
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
// Phase 1: @filewrapperDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_filewrapperDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_filewrapperDeclarationAST_2E_weak (const class GGS_filewrapperDeclarationAST & inSource) ;

  public: GGS_filewrapperDeclarationAST_2E_weak & operator = (const class GGS_filewrapperDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_filewrapperDeclarationAST_2E_weak init_nil (void) {
    GGS_filewrapperDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_filewrapperDeclarationAST bang_filewrapperDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_filewrapperDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_filewrapperDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalLabelListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalLabelListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mLabelName ;
  public: inline GGS_lstring readProperty_mLabelName (void) const {
    return mProperty_mLabelName ;
  }

  public: GGS_formalParameterListAST mProperty_mFormalArgumentList ;
  public: inline GGS_formalParameterListAST readProperty_mFormalArgumentList (void) const {
    return mProperty_mFormalArgumentList ;
  }

  public: GGS_location mProperty_mEndOfArgumentLocation ;
  public: inline GGS_location readProperty_mEndOfArgumentLocation (void) const {
    return mProperty_mEndOfArgumentLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_nonTerminalLabelListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLabelName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelName = inValue ;
  }

  public: inline void setter_setMFormalArgumentList (const GGS_formalParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentList = inValue ;
  }

  public: inline void setter_setMEndOfArgumentLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfArgumentLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_nonTerminalLabelListAST_2E_element (const GGS_lstring & in_mLabelName,
                                                  const GGS_formalParameterListAST & in_mFormalArgumentList,
                                                  const GGS_location & in_mEndOfArgumentLocation) ;

//--------------------------------- Copy constructor
  public: GGS_nonTerminalLabelListAST_2E_element (const GGS_nonTerminalLabelListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_nonTerminalLabelListAST_2E_element & operator = (const GGS_nonTerminalLabelListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalLabelListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_formalParameterListAST & inOperand1,
                                                                          const class GGS_location & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalLabelListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalLabelListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxRuleLabelListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_syntaxRuleLabelListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mLabelName ;
  public: inline GGS_lstring readProperty_mLabelName (void) const {
    return mProperty_mLabelName ;
  }

  public: GGS_formalParameterListAST mProperty_mFormalArguments ;
  public: inline GGS_formalParameterListAST readProperty_mFormalArguments (void) const {
    return mProperty_mFormalArguments ;
  }

  public: GGS_location mProperty_mEndOfArgumentLocation ;
  public: inline GGS_location readProperty_mEndOfArgumentLocation (void) const {
    return mProperty_mEndOfArgumentLocation ;
  }

  public: GGS_syntaxInstructionList mProperty_mSyntaxInstructionList ;
  public: inline GGS_syntaxInstructionList readProperty_mSyntaxInstructionList (void) const {
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
  public: GGS_syntaxRuleLabelListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLabelName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelName = inValue ;
  }

  public: inline void setter_setMFormalArguments (const GGS_formalParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArguments = inValue ;
  }

  public: inline void setter_setMEndOfArgumentLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfArgumentLocation = inValue ;
  }

  public: inline void setter_setMSyntaxInstructionList (const GGS_syntaxInstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfInstructionList (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxRuleLabelListAST_2E_element (const GGS_lstring & in_mLabelName,
                                                 const GGS_formalParameterListAST & in_mFormalArguments,
                                                 const GGS_location & in_mEndOfArgumentLocation,
                                                 const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                 const GGS_location & in_mEndOfInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_syntaxRuleLabelListAST_2E_element (const GGS_syntaxRuleLabelListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syntaxRuleLabelListAST_2E_element & operator = (const GGS_syntaxRuleLabelListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxRuleLabelListAST_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_formalParameterListAST & inOperand1,
                                                                                 const class GGS_location & inOperand2,
                                                                                 const class GGS_syntaxInstructionList & inOperand3,
                                                                                 const class GGS_location & inOperand4,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxRuleLabelListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxRuleLabelListAST_2E_element ;

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

  public: class GGS_nonterminalDeclarationListAST readProperty_mNonterminalDeclarationList (void) const ;

  public: class GGS_syntaxRuleListAST readProperty_mRuleList (void) const ;

  public: class GGS_bool readProperty_mHasTranslateFeature (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgas_33_SyntaxComponentAST init_21_isPredefined_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            const class GGS_lstring & inOperand2,
                                                                                            const class GGS_nonterminalDeclarationListAST & inOperand3,
                                                                                            const class GGS_syntaxRuleListAST & inOperand4,
                                                                                            const class GGS_bool & inOperand5,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgas_33_SyntaxComponentAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_galgas_33_SyntaxComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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
                                                                                      const class GGS_nonterminalDeclarationListAST & inOperand3,
                                                                                      const class GGS_syntaxRuleListAST & inOperand4,
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
  public: GGS_nonterminalDeclarationListAST mProperty_mNonterminalDeclarationList ;
  public: GGS_syntaxRuleListAST mProperty_mRuleList ;
  public: GGS_bool mProperty_mHasTranslateFeature ;


//--- Default constructor
  public: cPtr_galgas_33_SyntaxComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_galgas_33_SyntaxComponentAST (const GGS_bool & in_isPredefined,
                                             const GGS_lstring & in_mSyntaxComponentName,
                                             const GGS_lstring & in_mLexiqueName,
                                             const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                             const GGS_syntaxRuleListAST & in_mRuleList,
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
// Phase 1: @galgas_33_SyntaxComponentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_SyntaxComponentAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_galgas_33_SyntaxComponentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_galgas_33_SyntaxComponentAST_2E_weak (const class GGS_galgas_33_SyntaxComponentAST & inSource) ;

  public: GGS_galgas_33_SyntaxComponentAST_2E_weak & operator = (const class GGS_galgas_33_SyntaxComponentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_galgas_33_SyntaxComponentAST_2E_weak init_nil (void) {
    GGS_galgas_33_SyntaxComponentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_galgas_33_SyntaxComponentAST bang_galgas_33_SyntaxComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_galgas_33_SyntaxComponentAST unwrappedValue (void) const ;

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
  public: static GGS_galgas_33_SyntaxComponentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_galgas_33_SyntaxComponentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_galgas_33_SyntaxComponentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgas_33_GrammarComponentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_GrammarComponentAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_galgas_33_GrammarComponentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_galgas_33_GrammarComponentAST (const class cPtr_galgas_33_GrammarComponentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lbool readProperty_mHasIndexing (void) const ;

  public: class GGS_lstring readProperty_mGrammarComponentName (void) const ;

  public: class GGS_lstring readProperty_mGrammarClass (void) const ;

  public: class GGS_lstringlist readProperty_mSyntaxComponents (void) const ;

  public: class GGS_lstring readProperty_mStartSymbolName (void) const ;

  public: class GGS_nonTerminalLabelListAST readProperty_mStartSymbolLabelList (void) const ;

  public: class GGS_lstringlist readProperty_mUnusedNonterminalList (void) const ;

  public: class GGS_bool readProperty_mHasTranslateFeature (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgas_33_GrammarComponentAST init_21_isPredefined_21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                         const class GGS_lbool & inOperand1,
                                                                                                         const class GGS_lstring & inOperand2,
                                                                                                         const class GGS_lstring & inOperand3,
                                                                                                         const class GGS_lstringlist & inOperand4,
                                                                                                         const class GGS_lstring & inOperand5,
                                                                                                         const class GGS_nonTerminalLabelListAST & inOperand6,
                                                                                                         const class GGS_lstringlist & inOperand7,
                                                                                                         const class GGS_bool & inOperand8,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgas_33_GrammarComponentAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_galgas_33_GrammarComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @galgas3GrammarComponentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_galgas_33_GrammarComponentAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void galgas_33_GrammarComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                   const class GGS_lbool & inOperand1,
                                                                                                   const class GGS_lstring & inOperand2,
                                                                                                   const class GGS_lstring & inOperand3,
                                                                                                   const class GGS_lstringlist & inOperand4,
                                                                                                   const class GGS_lstring & inOperand5,
                                                                                                   const class GGS_nonTerminalLabelListAST & inOperand6,
                                                                                                   const class GGS_lstringlist & inOperand7,
                                                                                                   const class GGS_bool & inOperand8,
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
  public: GGS_lbool mProperty_mHasIndexing ;
  public: GGS_lstring mProperty_mGrammarComponentName ;
  public: GGS_lstring mProperty_mGrammarClass ;
  public: GGS_lstringlist mProperty_mSyntaxComponents ;
  public: GGS_lstring mProperty_mStartSymbolName ;
  public: GGS_nonTerminalLabelListAST mProperty_mStartSymbolLabelList ;
  public: GGS_lstringlist mProperty_mUnusedNonterminalList ;
  public: GGS_bool mProperty_mHasTranslateFeature ;


//--- Default constructor
  public: cPtr_galgas_33_GrammarComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_galgas_33_GrammarComponentAST (const GGS_bool & in_isPredefined,
                                              const GGS_lbool & in_mHasIndexing,
                                              const GGS_lstring & in_mGrammarComponentName,
                                              const GGS_lstring & in_mGrammarClass,
                                              const GGS_lstringlist & in_mSyntaxComponents,
                                              const GGS_lstring & in_mStartSymbolName,
                                              const GGS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                              const GGS_lstringlist & in_mUnusedNonterminalList,
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
// Phase 1: @galgas_33_GrammarComponentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_GrammarComponentAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_galgas_33_GrammarComponentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_galgas_33_GrammarComponentAST_2E_weak (const class GGS_galgas_33_GrammarComponentAST & inSource) ;

  public: GGS_galgas_33_GrammarComponentAST_2E_weak & operator = (const class GGS_galgas_33_GrammarComponentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_galgas_33_GrammarComponentAST_2E_weak init_nil (void) {
    GGS_galgas_33_GrammarComponentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_galgas_33_GrammarComponentAST bang_galgas_33_GrammarComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_galgas_33_GrammarComponentAST unwrappedValue (void) const ;

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
  public: static GGS_galgas_33_GrammarComponentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_galgas_33_GrammarComponentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_galgas_33_GrammarComponentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgas_33_SyntaxComponentListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_SyntaxComponentListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSyntaxComponentName ;
  public: inline GGS_lstring readProperty_mSyntaxComponentName (void) const {
    return mProperty_mSyntaxComponentName ;
  }

  public: GGS_lstring mProperty_mImportedLexiqueFilePath ;
  public: inline GGS_lstring readProperty_mImportedLexiqueFilePath (void) const {
    return mProperty_mImportedLexiqueFilePath ;
  }

  public: GGS_nonterminalDeclarationListAST mProperty_mNonterminalDeclarationList ;
  public: inline GGS_nonterminalDeclarationListAST readProperty_mNonterminalDeclarationList (void) const {
    return mProperty_mNonterminalDeclarationList ;
  }

  public: GGS_syntaxRuleListAST mProperty_mRuleList ;
  public: inline GGS_syntaxRuleListAST readProperty_mRuleList (void) const {
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
  public: GGS_galgas_33_SyntaxComponentListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxComponentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

  public: inline void setter_setMImportedLexiqueFilePath (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImportedLexiqueFilePath = inValue ;
  }

  public: inline void setter_setMNonterminalDeclarationList (const GGS_nonterminalDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalDeclarationList = inValue ;
  }

  public: inline void setter_setMRuleList (const GGS_syntaxRuleListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRuleList = inValue ;
  }

  public: inline void setter_setMHasTranslateFeature (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasTranslateFeature = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_galgas_33_SyntaxComponentListAST_2E_element (const GGS_lstring & in_mSyntaxComponentName,
                                                           const GGS_lstring & in_mImportedLexiqueFilePath,
                                                           const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                           const GGS_syntaxRuleListAST & in_mRuleList,
                                                           const GGS_bool & in_mHasTranslateFeature) ;

//--------------------------------- Copy constructor
  public: GGS_galgas_33_SyntaxComponentListAST_2E_element (const GGS_galgas_33_SyntaxComponentListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_galgas_33_SyntaxComponentListAST_2E_element & operator = (const GGS_galgas_33_SyntaxComponentListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgas_33_SyntaxComponentListAST_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_lstring & inOperand1,
                                                                                           const class GGS_nonterminalDeclarationListAST & inOperand2,
                                                                                           const class GGS_syntaxRuleListAST & inOperand3,
                                                                                           const class GGS_bool & inOperand4,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgas_33_SyntaxComponentListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prologueEpilogueList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_prologueEpilogueList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
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
  public: GGS_prologueEpilogueList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstructionList (const GGS__5B_semanticInstructionAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfInstructionList (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_prologueEpilogueList_2E_element (const GGS__5B_semanticInstructionAST_5D_ & in_mInstructionList,
                                               const GGS_location & in_mEndOfInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_prologueEpilogueList_2E_element (const GGS_prologueEpilogueList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_prologueEpilogueList_2E_element & operator = (const GGS_prologueEpilogueList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_prologueEpilogueList_2E_element init_21__21_ (const class GGS__5B_semanticInstructionAST_5D_ & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prologueEpilogueList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prologueEpilogueList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @programRuleList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_programRuleList_2E_element : public AC_GALGAS_root {
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
  public: GGS_programRuleList_2E_element (void) ;

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
  public: GGS_programRuleList_2E_element (const GGS_lstring & in_mSourceFileExtension,
                                          const GGS_lstring & in_mSourceFileHelp,
                                          const GGS_lstring & in_mSourceFileVariableName,
                                          const GGS_bool & in_mSourceFileVariableNameIsUnused,
                                          const GGS_lstring & in_mReferenceGrammar,
                                          const GGS__5B_semanticInstructionAST_5D_ & in_mInstructionList,
                                          const GGS_location & in_mEndOfInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_programRuleList_2E_element (const GGS_programRuleList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_programRuleList_2E_element & operator = (const GGS_programRuleList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_programRuleList_2E_element init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_lstring & inOperand2,
                                                                                  const class GGS_bool & inOperand3,
                                                                                  const class GGS_lstring & inOperand4,
                                                                                  const class GGS__5B_semanticInstructionAST_5D_ & inOperand5,
                                                                                  const class GGS_location & inOperand6,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_programRuleList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programRuleList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalExpressionAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateSwiftCocoaConditionCode (const class cPtr_lexicalExpressionAST * inObject,
                                                                      const class GGS_lexiqueAnalysisContext constin__5F_inLexiqueAnalysisContext,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalRoutineOrFunctionFormalInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalSendDefaultActionAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateSwiftCocoaDefaultSendCode (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                        const class GGS_string constin_inScannerClassName,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateSwiftCocoaInstructionCode (const class cPtr_lexicalInstructionAST * inObject,
                                                                        const class GGS_string constin_inScannerClassName,
                                                                        const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@abstractLexicalRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateSwiftCocoaCode (const class cPtr_abstractLexicalRuleAST * inObject,
                                                             const class GGS_string constin_inScannerClassName,
                                                             const class GGS_lexiqueAnalysisContext constin__5F_inLexiqueAnalysisContext,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//LEXIQUE galgasScanner_34_
//
//--------------------------------------------------------------------------------------------------

#include "Lexique.h"

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
                       const String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: Lexique_galgasScanner_34_ (Compiler * inCallerCompiler,
                       const String & inSourceString,
                       const String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GGS_stringlist symbols (LOCATION_ARGS) ;

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
  public: static const int32_t kToken_boolset = 28 ;
  public: static const int32_t kToken_case = 29 ;
  public: static const int32_t kToken_class = 30 ;
  public: static const int32_t kToken_default = 31 ;
  public: static const int32_t kToken_dict = 32 ;
  public: static const int32_t kToken_do = 33 ;
  public: static const int32_t kToken_drop = 34 ;
  public: static const int32_t kToken_else = 35 ;
  public: static const int32_t kToken_elsif = 36 ;
  public: static const int32_t kToken_end = 37 ;
  public: static const int32_t kToken_enum = 38 ;
  public: static const int32_t kToken_error = 39 ;
  public: static const int32_t kToken_extension = 40 ;
  public: static const int32_t kToken_extern = 41 ;
  public: static const int32_t kToken_false = 42 ;
  public: static const int32_t kToken_fileprivate = 43 ;
  public: static const int32_t kToken_filewrapper = 44 ;
  public: static const int32_t kToken_final = 45 ;
  public: static const int32_t kToken_for = 46 ;
  public: static const int32_t kToken_fixit = 47 ;
  public: static const int32_t kToken_func = 48 ;
  public: static const int32_t kToken_grammar = 49 ;
  public: static const int32_t kToken_graph = 50 ;
  public: static const int32_t kToken_guard = 51 ;
  public: static const int32_t kToken_gui = 52 ;
  public: static const int32_t kToken_if = 53 ;
  public: static const int32_t kToken_in = 54 ;
  public: static const int32_t kToken_indexing = 55 ;
  public: static const int32_t kToken_init = 56 ;
  public: static const int32_t kToken_is = 57 ;
  public: static const int32_t kToken_json = 58 ;
  public: static const int32_t kToken_label = 59 ;
  public: static const int32_t kToken_let = 60 ;
  public: static const int32_t kToken_lexique = 61 ;
  public: static const int32_t kToken_list = 62 ;
  public: static const int32_t kToken_log = 63 ;
  public: static const int32_t kToken_loop = 64 ;
  public: static const int32_t kToken_map = 65 ;
  public: static const int32_t kToken_mod = 66 ;
  public: static const int32_t kToken_mutating = 67 ;
  public: static const int32_t kToken_nil = 68 ;
  public: static const int32_t kToken_not = 69 ;
  public: static const int32_t kToken_on = 70 ;
  public: static const int32_t kToken_operator = 71 ;
  public: static const int32_t kToken_option = 72 ;
  public: static const int32_t kToken_or = 73 ;
  public: static const int32_t kToken_override = 74 ;
  public: static const int32_t kToken_package = 75 ;
  public: static const int32_t kToken_parse = 76 ;
  public: static const int32_t kToken_public = 77 ;
  public: static const int32_t kToken_protected = 78 ;
  public: static const int32_t kToken_private = 79 ;
  public: static const int32_t kToken_proc = 80 ;
  public: static const int32_t kToken_project = 81 ;
  public: static const int32_t kToken_repeat = 82 ;
  public: static const int32_t kToken_rewind = 83 ;
  public: static const int32_t kToken_rule = 84 ;
  public: static const int32_t kToken_select = 85 ;
  public: static const int32_t kToken_self = 86 ;
  public: static const int32_t kToken_send = 87 ;
  public: static const int32_t kToken_sortedlist = 88 ;
  public: static const int32_t kToken_spoil = 89 ;
  public: static const int32_t kToken_super = 90 ;
  public: static const int32_t kToken_struct = 91 ;
  public: static const int32_t kToken_style = 92 ;
  public: static const int32_t kToken_switch = 93 ;
  public: static const int32_t kToken_syntax = 94 ;
  public: static const int32_t kToken_tag = 95 ;
  public: static const int32_t kToken_template = 96 ;
  public: static const int32_t kToken_then = 97 ;
  public: static const int32_t kToken_true = 98 ;
  public: static const int32_t kToken_typealias = 99 ;
  public: static const int32_t kToken_var = 100 ;
  public: static const int32_t kToken_warning = 101 ;
  public: static const int32_t kToken_weak = 102 ;
  public: static const int32_t kToken_while = 103 ;
  public: static const int32_t kToken_with = 104 ;
  public: static const int32_t kToken__23_applicationBundleBase = 105 ;
  public: static const int32_t kToken__23_clonable = 106 ;
  public: static const int32_t kToken__23_codeblocks_2D_linux_33__32_ = 107 ;
  public: static const int32_t kToken__23_codeblocks_2D_linux_36__34_ = 108 ;
  public: static const int32_t kToken__23_codeblocks_2D_windows = 109 ;
  public: static const int32_t kToken__23_comparable = 110 ;
  public: static const int32_t kToken__23_equatable = 111 ;
  public: static const int32_t kToken__23_errorMessage = 112 ;
  public: static const int32_t kToken__23_from = 113 ;
  public: static const int32_t kToken__23_generatedInSeparateFile = 114 ;
  public: static const int32_t kToken__23_initArgLabel = 115 ;
  public: static const int32_t kToken__23_insertAfter = 116 ;
  public: static const int32_t kToken__23_insertBefore = 117 ;
  public: static const int32_t kToken__23_insertOrReplaceSetter = 118 ;
  public: static const int32_t kToken__23_insertSetter = 119 ;
  public: static const int32_t kToken__23_libpmAtPath = 120 ;
  public: static const int32_t kToken__23_macCodeSign = 121 ;
  public: static const int32_t kToken__23_makefile_2D_macosx = 122 ;
  public: static const int32_t kToken__23_makefile_2D_unix = 123 ;
  public: static const int32_t kToken__23_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx = 124 ;
  public: static const int32_t kToken__23_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx = 125 ;
  public: static const int32_t kToken__23_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx = 126 ;
  public: static const int32_t kToken__23_makefile_2D_win_33__32__2D_on_2D_macosx = 127 ;
  public: static const int32_t kToken__23_MacSwiftApp = 128 ;
  public: static const int32_t kToken__23_nonAtomicSelection = 129 ;
  public: static const int32_t kToken__23_once = 130 ;
  public: static const int32_t kToken__23_preserved = 131 ;
  public: static const int32_t kToken__23_quietOutputByDefault = 132 ;
  public: static const int32_t kToken__23_replaceBy = 133 ;
  public: static const int32_t kToken__23_remove = 134 ;
  public: static const int32_t kToken__23_removeSetter = 135 ;
  public: static const int32_t kToken__23_replaceSetter = 136 ;
  public: static const int32_t kToken__23_searchMethod = 137 ;
  public: static const int32_t kToken__23_searchSubscript = 138 ;
  public: static const int32_t kToken__23_searchString = 139 ;
  public: static const int32_t kToken__23_templateEndMark = 140 ;
  public: static const int32_t kToken__23_templateReplacement = 141 ;
  public: static const int32_t kToken__23_translate = 142 ;
  public: static const int32_t kToken__23_unused = 143 ;
  public: static const int32_t kToken__23_usefull = 144 ;
  public: static const int32_t kToken__2A_ = 145 ;
  public: static const int32_t kToken__2C_ = 146 ;
  public: static const int32_t kToken__2B_ = 147 ;
  public: static const int32_t kToken__26__2B_ = 148 ;
  public: static const int32_t kToken__26__2D_ = 149 ;
  public: static const int32_t kToken__26__2A_ = 150 ;
  public: static const int32_t kToken__26__2F_ = 151 ;
  public: static const int32_t kToken__3E_ = 152 ;
  public: static const int32_t kToken__3B_ = 153 ;
  public: static const int32_t kToken__3A_ = 154 ;
  public: static const int32_t kToken__3A__3E_ = 155 ;
  public: static const int32_t kToken__2D_ = 156 ;
  public: static const int32_t kToken__28_ = 157 ;
  public: static const int32_t kToken__29_ = 158 ;
  public: static const int32_t kToken__2D__3E_ = 159 ;
  public: static const int32_t kToken__3D__3D_ = 160 ;
  public: static const int32_t kToken__3D_ = 161 ;
  public: static const int32_t kToken__26__26_ = 162 ;
  public: static const int32_t kToken__5B_ = 163 ;
  public: static const int32_t kToken__5D_ = 164 ;
  public: static const int32_t kToken__2B__2B__3D_ = 165 ;
  public: static const int32_t kToken__2E_ = 166 ;
  public: static const int32_t kToken__40__28_ = 167 ;
  public: static const int32_t kToken__2E__2E__2E_ = 168 ;
  public: static const int32_t kToken__2E__2E__3C_ = 169 ;
  public: static const int32_t kToken__2B__3D_ = 170 ;
  public: static const int32_t kToken__2D__3D_ = 171 ;
  public: static const int32_t kToken__2A__3D_ = 172 ;
  public: static const int32_t kToken__2F__3D_ = 173 ;
  public: static const int32_t kToken__26__3D_ = 174 ;
  public: static const int32_t kToken__7C__3D_ = 175 ;
  public: static const int32_t kToken__5E__3D_ = 176 ;
  public: static const int32_t kToken__2F_ = 177 ;
  public: static const int32_t kToken__21__3D_ = 178 ;
  public: static const int32_t kToken__3E__3D_ = 179 ;
  public: static const int32_t kToken__26_ = 180 ;
  public: static const int32_t kToken__7B_ = 181 ;
  public: static const int32_t kToken__7D_ = 182 ;
  public: static const int32_t kToken__60_ = 183 ;
  public: static const int32_t kToken__7C__7C_ = 184 ;
  public: static const int32_t kToken__7C_ = 185 ;
  public: static const int32_t kToken__5E_ = 186 ;
  public: static const int32_t kToken__3E__3E_ = 187 ;
  public: static const int32_t kToken__7E_ = 188 ;
  public: static const int32_t kToken__3D__3D__3D_ = 189 ;
  public: static const int32_t kToken__21__3D__3D_ = 190 ;
  public: static const int32_t kToken__3F__5E_ = 191 ;
  public: static const int32_t kToken__21__5E_ = 192 ;

//--- Key words table 'galgasKeyWordList'
  public: static int32_t search_into_galgasKeyWordList (const String & inSearchedString) ;

//--- Key words table 'attributeKeyWordList'
  public: static int32_t search_into_attributeKeyWordList (const String & inSearchedString) ;

//--- Key words table 'galgasDelimitorsList'
  public: static int32_t search_into_galgasDelimitorsList (const String & inSearchedString) ;


//--- Assign from attribute
  public: GGS_lbigint synthetizedAttribute_bigintValue (void) const ;
  public: GGS_lchar synthetizedAttribute_charValue (void) const ;
  public: GGS_ldouble synthetizedAttribute_floatValue (void) const ;
  public: GGS_lstring synthetizedAttribute_tokenString (void) const ;
  public: GGS_luint synthetizedAttribute_uint_33__32_value (void) const ;


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
public: static const uint32_t kIndexing_listDefinition = 3 ;
public: static const uint32_t kIndexing_sortedListDefinition = 4 ;
public: static const uint32_t kIndexing_mapDefinition = 5 ;
public: static const uint32_t kIndexing_dictionaryDefinition = 6 ;
public: static const uint32_t kIndexing_externTypeDefinition = 7 ;
public: static const uint32_t kIndexing_filewrapperDefinition = 8 ;
public: static const uint32_t kIndexing_filewrapperReference = 9 ;
public: static const uint32_t kIndexing_graphDefinition = 10 ;
public: static const uint32_t kIndexing_classReferencedAsSuperClass = 11 ;
public: static const uint32_t kIndexing_typeReferenceInConstructor = 12 ;
public: static const uint32_t kIndexing_typeReferenceInTypeMethod = 13 ;
public: static const uint32_t kIndexing_routineDefinition = 14 ;
public: static const uint32_t kIndexing_routineCall = 15 ;
public: static const uint32_t kIndexing_functionDefinition = 16 ;
public: static const uint32_t kIndexing_functionCall = 17 ;
public: static const uint32_t kIndexing_terminalDeclaration = 18 ;
public: static const uint32_t kIndexing_terminalReference = 19 ;
public: static const uint32_t kIndexing_ruleDefinition = 20 ;
public: static const uint32_t kIndexing_ruleReference = 21 ;
public: static const uint32_t kIndexing_abstractExtensionSetterDefinition = 22 ;
public: static const uint32_t kIndexing_typeReferenceAbstractExtensionSetter = 23 ;
public: static const uint32_t kIndexing_overrideabstractExtensionSetterDefinition = 24 ;
public: static const uint32_t kIndexing_extensionSetterDefinition = 25 ;
public: static const uint32_t kIndexing_typeReferenceExtensionSetter = 26 ;
public: static const uint32_t kIndexing_overrideExtensionSetterDefinition = 27 ;
public: static const uint32_t kIndexing_typeReferenceOverrideExtensionSetterDefinition = 28 ;
public: static const uint32_t kIndexing_typeReferenceOverrideAbstractExtensionSetter = 29 ;
public: static const uint32_t kIndexing_abstractExtensionMethodDefinition = 30 ;
public: static const uint32_t kIndexing_typeReferenceAbstractExtensionMethod = 31 ;
public: static const uint32_t kIndexing_overrideAbstractExtensionMethodDefinition = 32 ;
public: static const uint32_t kIndexing_extensionMethodDefinition = 33 ;
public: static const uint32_t kIndexing_typeReferenceExtensionMethod = 34 ;
public: static const uint32_t kIndexing_overrideExtensionMethodDefinition = 35 ;
public: static const uint32_t kIndexing_typeReferenceOverrideExtensionMethodDefinition = 36 ;
public: static const uint32_t kIndexing_typeReferenceOverrideAbstractExtensionMethod = 37 ;
public: static const uint32_t kIndexing_abstractExtensionGetterDefinition = 38 ;
public: static const uint32_t kIndexing_typeReferenceAbstractExtensionGetter = 39 ;
public: static const uint32_t kIndexing_overrideAbstractExtensionGetterDefinition = 40 ;
public: static const uint32_t kIndexing_typeReferenceOverrideAbstractExtensionGetter = 41 ;
public: static const uint32_t kIndexing_extensionGetterDefinition = 42 ;
public: static const uint32_t kIndexing_typeReferenceExtensionGetter = 43 ;
public: static const uint32_t kIndexing_overrideExtensionGetterDefinition = 44 ;
public: static const uint32_t kIndexing_typeReferenceOverrideExtensionGetter = 45 ;
public: static const uint32_t kIndexing_optionComponentDefinition = 46 ;
public: static const uint32_t kIndexing_optionComponentReference = 47 ;
public: static const uint32_t kIndexing_grammarComponentDefinition = 48 ;
public: static const uint32_t kIndexing_grammarComponentReference = 49 ;
public: static const uint32_t kIndexing_indexingNameDefinition = 50 ;
public: static const uint32_t kIndexing_indexingNameReference = 51 ;

//--- Parse lexical token
  protected: void internalParseLexicalToken (cTokenFor_galgasScanner_34_ & token) ;
  protected: virtual bool parseLexicalToken (void) override ;

//--- Get terminal message
  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int32_t terminalVocabularyCount (void) const override { return 192 ; }

//--- Get Token String
  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_galgasScanner_34_ & ioToken) ;

//--- Style name for Latex
  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

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

class cPtr_templateInstructionForGeneration : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionForGeneration_init (Compiler * inCompiler) ;


//--- Extension proc templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg__ioTemporaryVariableIndex,
           class GGS_stringset & arg__ioUnusedVariableCppNameSet,
           class GGS_bool & arg__ioUseColumnMarker,
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

class cPtr_templateInstructionAST : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionAST_init (Compiler * inCompiler) ;


//--- Extension proc templateInstructionAnalysis
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
  public: GGS_templateInstructionListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionListAST_2E_element ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: GGS_templateInstructionListForGeneration (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionListForGeneration_2E_element ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionStringForGeneration extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionStringForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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
           class GGS_uint & arg__ioTemporaryVariableIndex,
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
// Phase 1: @templateInstructionStringForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionStringForGeneration_2E_weak : public GGS_templateInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionStringForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionStringForGeneration_2E_weak (const class GGS_templateInstructionStringForGeneration & inSource) ;

  public: GGS_templateInstructionStringForGeneration_2E_weak & operator = (const class GGS_templateInstructionStringForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionStringForGeneration_2E_weak init_nil (void) {
    GGS_templateInstructionStringForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionStringForGeneration bang_templateInstructionStringForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInstructionStringForGeneration unwrappedValue (void) const ;

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
  public: static GGS_templateInstructionStringForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionStringForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionStringForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration_2E_weak ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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
           class GGS_uint & arg__ioTemporaryVariableIndex,
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
// Phase 1: @templateInstructionExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionExpressionForGeneration_2E_weak : public GGS_templateInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionExpressionForGeneration_2E_weak (const class GGS_templateInstructionExpressionForGeneration & inSource) ;

  public: GGS_templateInstructionExpressionForGeneration_2E_weak & operator = (const class GGS_templateInstructionExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionExpressionForGeneration_2E_weak init_nil (void) {
    GGS_templateInstructionExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionExpressionForGeneration bang_templateInstructionExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInstructionExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_templateInstructionExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration_2E_weak ;

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

  public: class GGS_templateInstructionListForGeneration readProperty_mBlockInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateBlockInstructionForGeneration init_21__21__21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                             const class GGS_location & inOperand1,
                                                                             const class GGS_templateInstructionListForGeneration & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateBlockInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateBlockInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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
                                                                       const class GGS_templateInstructionListForGeneration & inOperand2,
                                                                       Compiler * inCompiler) ;


//--- Extension proc templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg__ioTemporaryVariableIndex,
           class GGS_stringset & arg__ioUnusedVariableCppNameSet,
           class GGS_bool & arg__ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GGS_location mProperty_mLocation ;
  public: GGS_templateInstructionListForGeneration mProperty_mBlockInstructionList ;


//--- Default constructor
  public: cPtr_templateBlockInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateBlockInstructionForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                      const GGS_location & in_mLocation,
                                                      const GGS_templateInstructionListForGeneration & in_mBlockInstructionList,
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
// Phase 1: @templateBlockInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateBlockInstructionForGeneration_2E_weak : public GGS_templateInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateBlockInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateBlockInstructionForGeneration_2E_weak (const class GGS_templateBlockInstructionForGeneration & inSource) ;

  public: GGS_templateBlockInstructionForGeneration_2E_weak & operator = (const class GGS_templateBlockInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateBlockInstructionForGeneration_2E_weak init_nil (void) {
    GGS_templateBlockInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateBlockInstructionForGeneration bang_templateBlockInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateBlockInstructionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_templateBlockInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateBlockInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateBlockInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration_2E_weak ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionGetColumnLocationForGeneration extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionGetColumnLocationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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
           class GGS_uint & arg__ioTemporaryVariableIndex,
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
// Phase 1: @templateInstructionGetColumnLocationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionGetColumnLocationForGeneration_2E_weak : public GGS_templateInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionGetColumnLocationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionGetColumnLocationForGeneration_2E_weak (const class GGS_templateInstructionGetColumnLocationForGeneration & inSource) ;

  public: GGS_templateInstructionGetColumnLocationForGeneration_2E_weak & operator = (const class GGS_templateInstructionGetColumnLocationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionGetColumnLocationForGeneration_2E_weak init_nil (void) {
    GGS_templateInstructionGetColumnLocationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionGetColumnLocationForGeneration bang_templateInstructionGetColumnLocationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInstructionGetColumnLocationForGeneration unwrappedValue (void) const ;

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
  public: static GGS_templateInstructionGetColumnLocationForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionGetColumnLocationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionGetColumnLocationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration_2E_weak ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionGotoColumnLocationForGeneration extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionGotoColumnLocationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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
           class GGS_uint & arg__ioTemporaryVariableIndex,
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
// Phase 1: @templateInstructionGotoColumnLocationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak : public GGS_templateInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak (const class GGS_templateInstructionGotoColumnLocationForGeneration & inSource) ;

  public: GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak & operator = (const class GGS_templateInstructionGotoColumnLocationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak init_nil (void) {
    GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionGotoColumnLocationForGeneration bang_templateInstructionGotoColumnLocationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInstructionGotoColumnLocationForGeneration unwrappedValue (void) const ;

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
  public: static GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionIfBranchListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_templateInstructionIfBranchListForGeneration final {
  public: DownEnumerator_templateInstructionIfBranchListForGeneration (const class GGS_templateInstructionIfBranchListForGeneration & inList) ;

  public: ~ DownEnumerator_templateInstructionIfBranchListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticExpressionForGeneration current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionListForGeneration current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateInstructionIfBranchListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_templateInstructionIfBranchListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_templateInstructionIfBranchListForGeneration (const DownEnumerator_templateInstructionIfBranchListForGeneration &) = delete ;
  private: DownEnumerator_templateInstructionIfBranchListForGeneration & operator = (const DownEnumerator_templateInstructionIfBranchListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_templateInstructionIfBranchListForGeneration final {
  public: UpEnumerator_templateInstructionIfBranchListForGeneration (const class GGS_templateInstructionIfBranchListForGeneration & inList)  ;

  public: ~ UpEnumerator_templateInstructionIfBranchListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticExpressionForGeneration current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionListForGeneration current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateInstructionIfBranchListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_templateInstructionIfBranchListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_templateInstructionIfBranchListForGeneration (const UpEnumerator_templateInstructionIfBranchListForGeneration &) = delete ;
  private: UpEnumerator_templateInstructionIfBranchListForGeneration & operator = (const UpEnumerator_templateInstructionIfBranchListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @templateInstructionIfBranchListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionIfBranchListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_templateInstructionIfBranchListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_templateInstructionIfBranchListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_templateInstructionIfBranchListForGeneration (void) = default ;

//--- Copy
  public: GGS_templateInstructionIfBranchListForGeneration (const GGS_templateInstructionIfBranchListForGeneration &) = default ;
  public: GGS_templateInstructionIfBranchListForGeneration & operator = (const GGS_templateInstructionIfBranchListForGeneration &) = default ;

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
  public : inline GenericArray <GGS_templateInstructionIfBranchListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_templateInstructionIfBranchListForGeneration subList (const int32_t inStart,
                                                                     const int32_t inLength,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_templateInstructionIfBranchListForGeneration (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_semanticExpressionForGeneration & in_mExpression,
                                                 const class GGS_templateInstructionListForGeneration & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionIfBranchListForGeneration init (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionIfBranchListForGeneration extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionIfBranchListForGeneration class_func_listWithValue (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                                                  const class GGS_templateInstructionListForGeneration & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_templateInstructionIfBranchListForGeneration inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_semanticExpressionForGeneration & inOperand0,
                                   const class GGS_templateInstructionListForGeneration & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_templateInstructionIfBranchListForGeneration_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_templateInstructionIfBranchListForGeneration add_operation (const GGS_templateInstructionIfBranchListForGeneration & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_semanticExpressionForGeneration constinArgument0,
                              class GGS_templateInstructionListForGeneration constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_semanticExpressionForGeneration constinArgument0,
                                     class GGS_templateInstructionListForGeneration constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_semanticExpressionForGeneration & outArgument0,
                                class GGS_templateInstructionListForGeneration & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_semanticExpressionForGeneration & outArgument0,
                               class GGS_templateInstructionListForGeneration & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_semanticExpressionForGeneration & outArgument0,
                                     class GGS_templateInstructionListForGeneration & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMExpressionAtIndex (class GGS_semanticExpressionForGeneration constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionListAtIndex (class GGS_templateInstructionListForGeneration constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_semanticExpressionForGeneration & outArgument0,
                             class GGS_templateInstructionListForGeneration & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_semanticExpressionForGeneration & outArgument0,
                            class GGS_templateInstructionListForGeneration & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_semanticExpressionForGeneration getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionListForGeneration getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_templateInstructionIfBranchListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionIfBranchListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionIfBranchListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_templateInstructionIfBranchListForGeneration ;
  friend class DownEnumerator_templateInstructionIfBranchListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionIfBranchListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionIfBranchListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;
  public: inline GGS_semanticExpressionForGeneration readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GGS_templateInstructionListForGeneration mProperty_mInstructionList ;
  public: inline GGS_templateInstructionListForGeneration readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateInstructionIfBranchListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_templateInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateInstructionIfBranchListForGeneration_2E_element (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                       const GGS_templateInstructionListForGeneration & in_mInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_templateInstructionIfBranchListForGeneration_2E_element (const GGS_templateInstructionIfBranchListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateInstructionIfBranchListForGeneration_2E_element & operator = (const GGS_templateInstructionIfBranchListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionIfBranchListForGeneration_2E_element init_21__21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                                           const class GGS_templateInstructionListForGeneration & inOperand1,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionIfBranchListForGeneration_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionIfForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionIfForGeneration : public GGS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_templateInstructionIfForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionIfForGeneration (const class cPtr_templateInstructionIfForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_templateInstructionIfBranchListForGeneration readProperty_mTemplateInstructionIfBranchList (void) const ;

  public: class GGS_templateInstructionListForGeneration readProperty_mElseInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionIfForGeneration init_21__21_ (const class GGS_templateInstructionIfBranchListForGeneration & inOperand0,
                                                                      const class GGS_templateInstructionListForGeneration & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionIfForGeneration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionIfForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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
  public: void templateInstructionIfForGeneration_init_21__21_ (const class GGS_templateInstructionIfBranchListForGeneration & inOperand0,
                                                                const class GGS_templateInstructionListForGeneration & inOperand1,
                                                                Compiler * inCompiler) ;


//--- Extension proc templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg__ioTemporaryVariableIndex,
           class GGS_stringset & arg__ioUnusedVariableCppNameSet,
           class GGS_bool & arg__ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_templateInstructionIfBranchListForGeneration mProperty_mTemplateInstructionIfBranchList ;
  public: GGS_templateInstructionListForGeneration mProperty_mElseInstructionList ;


//--- Default constructor
  public: cPtr_templateInstructionIfForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionIfForGeneration (const GGS_templateInstructionIfBranchListForGeneration & in_mTemplateInstructionIfBranchList,
                                                   const GGS_templateInstructionListForGeneration & in_mElseInstructionList,
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
// Phase 1: @templateInstructionIfForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionIfForGeneration_2E_weak : public GGS_templateInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionIfForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionIfForGeneration_2E_weak (const class GGS_templateInstructionIfForGeneration & inSource) ;

  public: GGS_templateInstructionIfForGeneration_2E_weak & operator = (const class GGS_templateInstructionIfForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionIfForGeneration_2E_weak init_nil (void) {
    GGS_templateInstructionIfForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionIfForGeneration bang_templateInstructionIfForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInstructionIfForGeneration unwrappedValue (void) const ;

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
  public: static GGS_templateInstructionIfForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionIfForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionIfForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfForGeneration_2E_weak ;

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
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

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
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateAnalysisContext struct
//--------------------------------------------------------------------------------------------------

class GGS_templateAnalysisContext : public AC_GALGAS_root {
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateAnalysisContext extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateAnalysisContext ;

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
  public: GGS_templateExpressionListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

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

//--------------------------------- Default constructor
  public: GGS__5B_unifiedTypeMapEntry_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_unifiedTypeMapEntry_5D_ (const GGS__5B_unifiedTypeMapEntry_5D_ & inSource) ;
  public: GGS__5B_unifiedTypeMapEntry_5D_ & operator = (const GGS__5B_unifiedTypeMapEntry_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

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

  public: void setter_removeAll (Compiler * inCompiler
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
//--------------------------------- Friend
  friend class UpEnumerator__5B_unifiedTypeMapEntry_5D_ ;
  friend class DownEnumerator__5B_unifiedTypeMapEntry_5D_ ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_unifiedTypeMapEntry_5D_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@templateInstructionAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_templateInstructionAnalysis (class cPtr_templateInstructionAST * inObject,
                                                      const class GGS_lstring constin_inUsefulnessCallerEntityName,
                                                      class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                      const class GGS_templateAnalysisContext constin_inAnalysisContext,
                                                      class GGS_unifiedTypeMap & io_ioTypeMap,
                                                      class GGS_templateInstructionListForGeneration & io_ioInstructionList,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionSwitchBranchListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_templateInstructionSwitchBranchListAST final {
  public: DownEnumerator_templateInstructionSwitchBranchListAST (const class GGS_templateInstructionSwitchBranchListAST & inList) ;

  public: ~ DownEnumerator_templateInstructionSwitchBranchListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS__5B_lstring_5D_ current_constantList (LOCATION_ARGS) const ;
  public: class GGS__5B_switchExtractedValuesAST_5D_ current_associatedValuesExtraction (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionListAST current_instructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_endOfBranch (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateInstructionSwitchBranchListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_templateInstructionSwitchBranchListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_templateInstructionSwitchBranchListAST (const DownEnumerator_templateInstructionSwitchBranchListAST &) = delete ;
  private: DownEnumerator_templateInstructionSwitchBranchListAST & operator = (const DownEnumerator_templateInstructionSwitchBranchListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_templateInstructionSwitchBranchListAST final {
  public: UpEnumerator_templateInstructionSwitchBranchListAST (const class GGS_templateInstructionSwitchBranchListAST & inList)  ;

  public: ~ UpEnumerator_templateInstructionSwitchBranchListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS__5B_lstring_5D_ current_constantList (LOCATION_ARGS) const ;
  public: class GGS__5B_switchExtractedValuesAST_5D_ current_associatedValuesExtraction (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionListAST current_instructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_endOfBranch (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateInstructionSwitchBranchListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_templateInstructionSwitchBranchListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_templateInstructionSwitchBranchListAST (const UpEnumerator_templateInstructionSwitchBranchListAST &) = delete ;
  private: UpEnumerator_templateInstructionSwitchBranchListAST & operator = (const UpEnumerator_templateInstructionSwitchBranchListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @templateInstructionSwitchBranchListAST list
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionSwitchBranchListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_templateInstructionSwitchBranchListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_templateInstructionSwitchBranchListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_templateInstructionSwitchBranchListAST (void) = default ;

//--- Copy
  public: GGS_templateInstructionSwitchBranchListAST (const GGS_templateInstructionSwitchBranchListAST &) = default ;
  public: GGS_templateInstructionSwitchBranchListAST & operator = (const GGS_templateInstructionSwitchBranchListAST &) = default ;

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
  public : inline GenericArray <GGS_templateInstructionSwitchBranchListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_templateInstructionSwitchBranchListAST subList (const int32_t inStart,
                                                               const int32_t inLength,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_templateInstructionSwitchBranchListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS__5B_lstring_5D_ & in_constantList,
                                                 const class GGS__5B_switchExtractedValuesAST_5D_ & in_associatedValuesExtraction,
                                                 const class GGS_templateInstructionListAST & in_instructionList,
                                                 const class GGS_location & in_endOfBranch
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionSwitchBranchListAST init (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionSwitchBranchListAST extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionSwitchBranchListAST class_func_listWithValue (const class GGS__5B_lstring_5D_ & inOperand0,
                                                                                            const class GGS__5B_switchExtractedValuesAST_5D_ & inOperand1,
                                                                                            const class GGS_templateInstructionListAST & inOperand2,
                                                                                            const class GGS_location & inOperand3
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_templateInstructionSwitchBranchListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS__5B_lstring_5D_ & inOperand0,
                                   const class GGS__5B_switchExtractedValuesAST_5D_ & inOperand1,
                                   const class GGS_templateInstructionListAST & inOperand2,
                                   const class GGS_location & inOperand3
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_templateInstructionSwitchBranchListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_templateInstructionSwitchBranchListAST add_operation (const GGS_templateInstructionSwitchBranchListAST & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS__5B_lstring_5D_ constinArgument0,
                              class GGS__5B_switchExtractedValuesAST_5D_ constinArgument1,
                              class GGS_templateInstructionListAST constinArgument2,
                              class GGS_location constinArgument3,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS__5B_lstring_5D_ constinArgument0,
                                     class GGS__5B_switchExtractedValuesAST_5D_ constinArgument1,
                                     class GGS_templateInstructionListAST constinArgument2,
                                     class GGS_location constinArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS__5B_lstring_5D_ & outArgument0,
                                class GGS__5B_switchExtractedValuesAST_5D_ & outArgument1,
                                class GGS_templateInstructionListAST & outArgument2,
                                class GGS_location & outArgument3,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS__5B_lstring_5D_ & outArgument0,
                               class GGS__5B_switchExtractedValuesAST_5D_ & outArgument1,
                               class GGS_templateInstructionListAST & outArgument2,
                               class GGS_location & outArgument3,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS__5B_lstring_5D_ & outArgument0,
                                     class GGS__5B_switchExtractedValuesAST_5D_ & outArgument1,
                                     class GGS_templateInstructionListAST & outArgument2,
                                     class GGS_location & outArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setAssociatedValuesExtractionAtIndex (class GGS__5B_switchExtractedValuesAST_5D_ constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setConstantListAtIndex (class GGS__5B_lstring_5D_ constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setEndOfBranchAtIndex (class GGS_location constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setInstructionListAtIndex (class GGS_templateInstructionListAST constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS__5B_lstring_5D_ & outArgument0,
                             class GGS__5B_switchExtractedValuesAST_5D_ & outArgument1,
                             class GGS_templateInstructionListAST & outArgument2,
                             class GGS_location & outArgument3,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS__5B_lstring_5D_ & outArgument0,
                            class GGS__5B_switchExtractedValuesAST_5D_ & outArgument1,
                            class GGS_templateInstructionListAST & outArgument2,
                            class GGS_location & outArgument3,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS__5B_switchExtractedValuesAST_5D_ getter_associatedValuesExtractionAtIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_constantListAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_location getter_endOfBranchAtIndex (const class GGS_uint & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionListAST getter_instructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_templateInstructionSwitchBranchListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionSwitchBranchListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionSwitchBranchListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_templateInstructionSwitchBranchListAST ;
  friend class DownEnumerator_templateInstructionSwitchBranchListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionSwitchBranchListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionSwitchBranchListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_lstring_5D_ mProperty_constantList ;
  public: inline GGS__5B_lstring_5D_ readProperty_constantList (void) const {
    return mProperty_constantList ;
  }

  public: GGS__5B_switchExtractedValuesAST_5D_ mProperty_associatedValuesExtraction ;
  public: inline GGS__5B_switchExtractedValuesAST_5D_ readProperty_associatedValuesExtraction (void) const {
    return mProperty_associatedValuesExtraction ;
  }

  public: GGS_templateInstructionListAST mProperty_instructionList ;
  public: inline GGS_templateInstructionListAST readProperty_instructionList (void) const {
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
  public: GGS_templateInstructionSwitchBranchListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setConstantList (const GGS__5B_lstring_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_constantList = inValue ;
  }

  public: inline void setter_setAssociatedValuesExtraction (const GGS__5B_switchExtractedValuesAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_associatedValuesExtraction = inValue ;
  }

  public: inline void setter_setInstructionList (const GGS_templateInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_instructionList = inValue ;
  }

  public: inline void setter_setEndOfBranch (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfBranch = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateInstructionSwitchBranchListAST_2E_element (const GGS__5B_lstring_5D_ & in_constantList,
                                                                 const GGS__5B_switchExtractedValuesAST_5D_ & in_associatedValuesExtraction,
                                                                 const GGS_templateInstructionListAST & in_instructionList,
                                                                 const GGS_location & in_endOfBranch) ;

//--------------------------------- Copy constructor
  public: GGS_templateInstructionSwitchBranchListAST_2E_element (const GGS_templateInstructionSwitchBranchListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateInstructionSwitchBranchListAST_2E_element & operator = (const GGS_templateInstructionSwitchBranchListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionSwitchBranchListAST_2E_element init_21__21__21__21_ (const class GGS__5B_lstring_5D_ & inOperand0,
                                                                                             const class GGS__5B_switchExtractedValuesAST_5D_ & inOperand1,
                                                                                             const class GGS_templateInstructionListAST & inOperand2,
                                                                                             const class GGS_location & inOperand3,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionSwitchBranchListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionSwitchAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionSwitchAST : public GGS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GGS_templateInstructionSwitchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionSwitchAST (const class cPtr_templateInstructionSwitchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_templateExpressionAST readProperty_mSwitchExpression (void) const ;

  public: class GGS_location readProperty_switchExpressionEndLocation (void) const ;

  public: class GGS_templateInstructionSwitchBranchListAST readProperty_templateInstructionSwitchBranchList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionSwitchAST init_21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                    const class GGS_location & inOperand1,
                                                                    const class GGS_templateInstructionSwitchBranchListAST & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionSwitchAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionSwitchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionSwitchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionSwitchAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionSwitchAST : public cPtr_templateInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionSwitchAST_init_21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                              const class GGS_location & inOperand1,
                                                              const class GGS_templateInstructionSwitchBranchListAST & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension proc templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_templateExpressionAST mProperty_mSwitchExpression ;
  public: GGS_location mProperty_switchExpressionEndLocation ;
  public: GGS_templateInstructionSwitchBranchListAST mProperty_templateInstructionSwitchBranchList ;


//--- Default constructor
  public: cPtr_templateInstructionSwitchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionSwitchAST (const GGS_templateExpressionAST & in_mSwitchExpression,
                                             const GGS_location & in_switchExpressionEndLocation,
                                             const GGS_templateInstructionSwitchBranchListAST & in_templateInstructionSwitchBranchList,
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
// Phase 1: @templateInstructionSwitchAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionSwitchAST_2E_weak : public GGS_templateInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionSwitchAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionSwitchAST_2E_weak (const class GGS_templateInstructionSwitchAST & inSource) ;

  public: GGS_templateInstructionSwitchAST_2E_weak & operator = (const class GGS_templateInstructionSwitchAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionSwitchAST_2E_weak init_nil (void) {
    GGS_templateInstructionSwitchAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionSwitchAST bang_templateInstructionSwitchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInstructionSwitchAST unwrappedValue (void) const ;

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
  public: static GGS_templateInstructionSwitchAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionSwitchAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionSwitchAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionSwitchAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionSwitchBranchListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_templateInstructionSwitchBranchListForGeneration final {
  public: DownEnumerator_templateInstructionSwitchBranchListForGeneration (const class GGS_templateInstructionSwitchBranchListForGeneration & inList) ;

  public: ~ DownEnumerator_templateInstructionSwitchBranchListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS__5B_lstring_5D_ current_mConstantList (LOCATION_ARGS) const ;
  public: class GGS__5B_extractedAssociatedValueForGeneration_5D_ current_mExtractedAssociatedValuesForGeneration (LOCATION_ARGS) const ;
  public: class GGS_uint current_mEndOfBranchLocationIndex (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionListForGeneration current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateInstructionSwitchBranchListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_templateInstructionSwitchBranchListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_templateInstructionSwitchBranchListForGeneration (const DownEnumerator_templateInstructionSwitchBranchListForGeneration &) = delete ;
  private: DownEnumerator_templateInstructionSwitchBranchListForGeneration & operator = (const DownEnumerator_templateInstructionSwitchBranchListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_templateInstructionSwitchBranchListForGeneration final {
  public: UpEnumerator_templateInstructionSwitchBranchListForGeneration (const class GGS_templateInstructionSwitchBranchListForGeneration & inList)  ;

  public: ~ UpEnumerator_templateInstructionSwitchBranchListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS__5B_lstring_5D_ current_mConstantList (LOCATION_ARGS) const ;
  public: class GGS__5B_extractedAssociatedValueForGeneration_5D_ current_mExtractedAssociatedValuesForGeneration (LOCATION_ARGS) const ;
  public: class GGS_uint current_mEndOfBranchLocationIndex (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionListForGeneration current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateInstructionSwitchBranchListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_templateInstructionSwitchBranchListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_templateInstructionSwitchBranchListForGeneration (const UpEnumerator_templateInstructionSwitchBranchListForGeneration &) = delete ;
  private: UpEnumerator_templateInstructionSwitchBranchListForGeneration & operator = (const UpEnumerator_templateInstructionSwitchBranchListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @templateInstructionSwitchBranchListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionSwitchBranchListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_templateInstructionSwitchBranchListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_templateInstructionSwitchBranchListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_templateInstructionSwitchBranchListForGeneration (void) = default ;

//--- Copy
  public: GGS_templateInstructionSwitchBranchListForGeneration (const GGS_templateInstructionSwitchBranchListForGeneration &) = default ;
  public: GGS_templateInstructionSwitchBranchListForGeneration & operator = (const GGS_templateInstructionSwitchBranchListForGeneration &) = default ;

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
  public : inline GenericArray <GGS_templateInstructionSwitchBranchListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_templateInstructionSwitchBranchListForGeneration subList (const int32_t inStart,
                                                                         const int32_t inLength,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_templateInstructionSwitchBranchListForGeneration (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS__5B_lstring_5D_ & in_mConstantList,
                                                 const class GGS__5B_extractedAssociatedValueForGeneration_5D_ & in_mExtractedAssociatedValuesForGeneration,
                                                 const class GGS_uint & in_mEndOfBranchLocationIndex,
                                                 const class GGS_templateInstructionListForGeneration & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionSwitchBranchListForGeneration init (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionSwitchBranchListForGeneration extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionSwitchBranchListForGeneration class_func_listWithValue (const class GGS__5B_lstring_5D_ & inOperand0,
                                                                                                      const class GGS__5B_extractedAssociatedValueForGeneration_5D_ & inOperand1,
                                                                                                      const class GGS_uint & inOperand2,
                                                                                                      const class GGS_templateInstructionListForGeneration & inOperand3
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_templateInstructionSwitchBranchListForGeneration inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS__5B_lstring_5D_ & inOperand0,
                                   const class GGS__5B_extractedAssociatedValueForGeneration_5D_ & inOperand1,
                                   const class GGS_uint & inOperand2,
                                   const class GGS_templateInstructionListForGeneration & inOperand3
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_templateInstructionSwitchBranchListForGeneration_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_templateInstructionSwitchBranchListForGeneration add_operation (const GGS_templateInstructionSwitchBranchListForGeneration & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS__5B_lstring_5D_ constinArgument0,
                              class GGS__5B_extractedAssociatedValueForGeneration_5D_ constinArgument1,
                              class GGS_uint constinArgument2,
                              class GGS_templateInstructionListForGeneration constinArgument3,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS__5B_lstring_5D_ constinArgument0,
                                     class GGS__5B_extractedAssociatedValueForGeneration_5D_ constinArgument1,
                                     class GGS_uint constinArgument2,
                                     class GGS_templateInstructionListForGeneration constinArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS__5B_lstring_5D_ & outArgument0,
                                class GGS__5B_extractedAssociatedValueForGeneration_5D_ & outArgument1,
                                class GGS_uint & outArgument2,
                                class GGS_templateInstructionListForGeneration & outArgument3,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS__5B_lstring_5D_ & outArgument0,
                               class GGS__5B_extractedAssociatedValueForGeneration_5D_ & outArgument1,
                               class GGS_uint & outArgument2,
                               class GGS_templateInstructionListForGeneration & outArgument3,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS__5B_lstring_5D_ & outArgument0,
                                     class GGS__5B_extractedAssociatedValueForGeneration_5D_ & outArgument1,
                                     class GGS_uint & outArgument2,
                                     class GGS_templateInstructionListForGeneration & outArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMConstantListAtIndex (class GGS__5B_lstring_5D_ constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfBranchLocationIndexAtIndex (class GGS_uint constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMExtractedAssociatedValuesForGenerationAtIndex (class GGS__5B_extractedAssociatedValueForGeneration_5D_ constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionListAtIndex (class GGS_templateInstructionListForGeneration constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS__5B_lstring_5D_ & outArgument0,
                             class GGS__5B_extractedAssociatedValueForGeneration_5D_ & outArgument1,
                             class GGS_uint & outArgument2,
                             class GGS_templateInstructionListForGeneration & outArgument3,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS__5B_lstring_5D_ & outArgument0,
                            class GGS__5B_extractedAssociatedValueForGeneration_5D_ & outArgument1,
                            class GGS_uint & outArgument2,
                            class GGS_templateInstructionListForGeneration & outArgument3,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_mConstantListAtIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mEndOfBranchLocationIndexAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_extractedAssociatedValueForGeneration_5D_ getter_mExtractedAssociatedValuesForGenerationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionListForGeneration getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_templateInstructionSwitchBranchListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionSwitchBranchListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionSwitchBranchListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_templateInstructionSwitchBranchListForGeneration ;
  friend class DownEnumerator_templateInstructionSwitchBranchListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionSwitchBranchListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionSwitchBranchListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_lstring_5D_ mProperty_mConstantList ;
  public: inline GGS__5B_lstring_5D_ readProperty_mConstantList (void) const {
    return mProperty_mConstantList ;
  }

  public: GGS__5B_extractedAssociatedValueForGeneration_5D_ mProperty_mExtractedAssociatedValuesForGeneration ;
  public: inline GGS__5B_extractedAssociatedValueForGeneration_5D_ readProperty_mExtractedAssociatedValuesForGeneration (void) const {
    return mProperty_mExtractedAssociatedValuesForGeneration ;
  }

  public: GGS_uint mProperty_mEndOfBranchLocationIndex ;
  public: inline GGS_uint readProperty_mEndOfBranchLocationIndex (void) const {
    return mProperty_mEndOfBranchLocationIndex ;
  }

  public: GGS_templateInstructionListForGeneration mProperty_mInstructionList ;
  public: inline GGS_templateInstructionListForGeneration readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateInstructionSwitchBranchListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMConstantList (const GGS__5B_lstring_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantList = inValue ;
  }

  public: inline void setter_setMExtractedAssociatedValuesForGeneration (const GGS__5B_extractedAssociatedValueForGeneration_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtractedAssociatedValuesForGeneration = inValue ;
  }

  public: inline void setter_setMEndOfBranchLocationIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfBranchLocationIndex = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_templateInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateInstructionSwitchBranchListForGeneration_2E_element (const GGS__5B_lstring_5D_ & in_mConstantList,
                                                                           const GGS__5B_extractedAssociatedValueForGeneration_5D_ & in_mExtractedAssociatedValuesForGeneration,
                                                                           const GGS_uint & in_mEndOfBranchLocationIndex,
                                                                           const GGS_templateInstructionListForGeneration & in_mInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_templateInstructionSwitchBranchListForGeneration_2E_element (const GGS_templateInstructionSwitchBranchListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateInstructionSwitchBranchListForGeneration_2E_element & operator = (const GGS_templateInstructionSwitchBranchListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionSwitchBranchListForGeneration_2E_element init_21__21__21__21_ (const class GGS__5B_lstring_5D_ & inOperand0,
                                                                                                       const class GGS__5B_extractedAssociatedValueForGeneration_5D_ & inOperand1,
                                                                                                       const class GGS_uint & inOperand2,
                                                                                                       const class GGS_templateInstructionListForGeneration & inOperand3,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionSwitchBranchListForGeneration_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration_2E_element ;

