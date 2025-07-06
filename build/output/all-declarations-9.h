#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mFilewrapperPath ;
  public: inline GGS_lstring readProperty_mFilewrapperPath (void) const {
    return mProperty_mFilewrapperPath ;
  }

  public: GGS_lstringlist mProperty_mFilewrapperExtensionList ;
  public: inline GGS_lstringlist readProperty_mFilewrapperExtensionList (void) const {
    return mProperty_mFilewrapperExtensionList ;
  }

  public: GGS_wrapperFileMap mProperty_mFilewrapperFileMap ;
  public: inline GGS_wrapperFileMap readProperty_mFilewrapperFileMap (void) const {
    return mProperty_mFilewrapperFileMap ;
  }

  public: GGS_wrapperDirectoryMap mProperty_mFilewrapperDirectoryMap ;
  public: inline GGS_wrapperDirectoryMap readProperty_mFilewrapperDirectoryMap (void) const {
    return mProperty_mFilewrapperDirectoryMap ;
  }

  public: GGS_filewrapperTemplateMap mProperty_mFilewrapperTemplateMap ;
  public: inline GGS_filewrapperTemplateMap readProperty_mFilewrapperTemplateMap (void) const {
    return mProperty_mFilewrapperTemplateMap ;
  }

  public: GGS_bool mProperty_mIsInternal ;
  public: inline GGS_bool readProperty_mIsInternal (void) const {
    return mProperty_mIsInternal ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_filewrapperMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFilewrapperPath (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperPath = inValue ;
  }

  public: inline void setter_setMFilewrapperExtensionList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperExtensionList = inValue ;
  }

  public: inline void setter_setMFilewrapperFileMap (const GGS_wrapperFileMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperFileMap = inValue ;
  }

  public: inline void setter_setMFilewrapperDirectoryMap (const GGS_wrapperDirectoryMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperDirectoryMap = inValue ;
  }

  public: inline void setter_setMFilewrapperTemplateMap (const GGS_filewrapperTemplateMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplateMap = inValue ;
  }

  public: inline void setter_setMIsInternal (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsInternal = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_filewrapperMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_lstring & in_mFilewrapperPath,
                                         const GGS_lstringlist & in_mFilewrapperExtensionList,
                                         const GGS_wrapperFileMap & in_mFilewrapperFileMap,
                                         const GGS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                         const GGS_filewrapperTemplateMap & in_mFilewrapperTemplateMap,
                                         const GGS_bool & in_mIsInternal) ;

//--------------------------------- Copy constructor
  public: GGS_filewrapperMap_2E_element (const GGS_filewrapperMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_filewrapperMap_2E_element & operator = (const GGS_filewrapperMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperMap_2E_element init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstringlist & inOperand2,
                                                                                 const class GGS_wrapperFileMap & inOperand3,
                                                                                 const class GGS_wrapperDirectoryMap & inOperand4,
                                                                                 const class GGS_filewrapperTemplateMap & inOperand5,
                                                                                 const class GGS_bool & inOperand6,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperMap_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_lstringlist & inOperand2,
                                                                     const class GGS_wrapperFileMap & inOperand3,
                                                                     const class GGS_wrapperDirectoryMap & inOperand4,
                                                                     const class GGS_filewrapperTemplateMap & inOperand5,
                                                                     const class GGS_bool & inOperand6,
                                                                     class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: filewrapperMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_filewrapperMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_filewrapperMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_filewrapperMap_2E_element_3F_ (const GGS_filewrapperMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_filewrapperMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_filewrapperMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_filewrapperMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionComponentMapForSemanticAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_optionComponentMapForSemanticAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_bool mProperty_mIsPredefined ;
  public: inline GGS_bool readProperty_mIsPredefined (void) const {
    return mProperty_mIsPredefined ;
  }

  public: GGS_commandLineOptionMap mProperty_mBoolOptionMap ;
  public: inline GGS_commandLineOptionMap readProperty_mBoolOptionMap (void) const {
    return mProperty_mBoolOptionMap ;
  }

  public: GGS_commandLineOptionMap mProperty_mUIntOptionMap ;
  public: inline GGS_commandLineOptionMap readProperty_mUIntOptionMap (void) const {
    return mProperty_mUIntOptionMap ;
  }

  public: GGS_commandLineOptionMap mProperty_mStringOptionMap ;
  public: inline GGS_commandLineOptionMap readProperty_mStringOptionMap (void) const {
    return mProperty_mStringOptionMap ;
  }

  public: GGS_commandLineOptionMap mProperty_mStringListOptionMap ;
  public: inline GGS_commandLineOptionMap readProperty_mStringListOptionMap (void) const {
    return mProperty_mStringListOptionMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_optionComponentMapForSemanticAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIsPredefined (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsPredefined = inValue ;
  }

  public: inline void setter_setMBoolOptionMap (const GGS_commandLineOptionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoolOptionMap = inValue ;
  }

  public: inline void setter_setMUIntOptionMap (const GGS_commandLineOptionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUIntOptionMap = inValue ;
  }

  public: inline void setter_setMStringOptionMap (const GGS_commandLineOptionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStringOptionMap = inValue ;
  }

  public: inline void setter_setMStringListOptionMap (const GGS_commandLineOptionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStringListOptionMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_optionComponentMapForSemanticAnalysis_2E_element (const GGS_lstring & in_lkey,
                                                                const GGS_bool & in_mIsPredefined,
                                                                const GGS_commandLineOptionMap & in_mBoolOptionMap,
                                                                const GGS_commandLineOptionMap & in_mUIntOptionMap,
                                                                const GGS_commandLineOptionMap & in_mStringOptionMap,
                                                                const GGS_commandLineOptionMap & in_mStringListOptionMap) ;

//--------------------------------- Copy constructor
  public: GGS_optionComponentMapForSemanticAnalysis_2E_element (const GGS_optionComponentMapForSemanticAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_optionComponentMapForSemanticAnalysis_2E_element & operator = (const GGS_optionComponentMapForSemanticAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionComponentMapForSemanticAnalysis_2E_element init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                    const class GGS_bool & inOperand1,
                                                                                                    const class GGS_commandLineOptionMap & inOperand2,
                                                                                                    const class GGS_commandLineOptionMap & inOperand3,
                                                                                                    const class GGS_commandLineOptionMap & inOperand4,
                                                                                                    const class GGS_commandLineOptionMap & inOperand5,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionComponentMapForSemanticAnalysis_2E_element extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionComponentMapForSemanticAnalysis_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_bool & inOperand1,
                                                                                            const class GGS_commandLineOptionMap & inOperand2,
                                                                                            const class GGS_commandLineOptionMap & inOperand3,
                                                                                            const class GGS_commandLineOptionMap & inOperand4,
                                                                                            const class GGS_commandLineOptionMap & inOperand5,
                                                                                            class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: optionComponentMapForSemanticAnalysis.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_optionComponentMapForSemanticAnalysis_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ (const GGS_optionComponentMapForSemanticAnalysis_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_optionComponentMapForSemanticAnalysis_2E_element unwrappedValue (void) const {
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
  public: static GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2E_element_3F_ ;

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

  public: GGS_indexingListAST mProperty_mIndexingListAST ;
  public: inline GGS_indexingListAST readProperty_mIndexingListAST (void) const {
    return mProperty_mIndexingListAST ;
  }

  public: GGS_terminalDeclarationListAST mProperty_mTerminalListAST ;
  public: inline GGS_terminalDeclarationListAST readProperty_mTerminalListAST (void) const {
    return mProperty_mTerminalListAST ;
  }

  public: GGS_lexicalAttributeListAST mProperty_mLexicalAttributeListAST ;
  public: inline GGS_lexicalAttributeListAST readProperty_mLexicalAttributeListAST (void) const {
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

  public: inline void setter_setMIndexingListAST (const GGS_indexingListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndexingListAST = inValue ;
  }

  public: inline void setter_setMTerminalListAST (const GGS_terminalDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalListAST = inValue ;
  }

  public: inline void setter_setMLexicalAttributeListAST (const GGS_lexicalAttributeListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
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
                                                                 const GGS_indexingListAST & in_mIndexingListAST,
                                                                 const GGS_terminalDeclarationListAST & in_mTerminalListAST,
                                                                 const GGS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
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
                                                                                                             const class GGS_indexingListAST & inOperand3,
                                                                                                             const class GGS_terminalDeclarationListAST & inOperand4,
                                                                                                             const class GGS_lexicalAttributeListAST & inOperand5,
                                                                                                             const class GGS_lexicalStyleListAST & inOperand6,
                                                                                                             const class GGS_lexicalListDeclarationListAST & inOperand7,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexiqueComponentMapForSemanticAnalysis_2E_element extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexiqueComponentMapForSemanticAnalysis_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                             const class GGS_bool & inOperand1,
                                                                                             const class GGS_terminalMap & inOperand2,
                                                                                             const class GGS_indexingListAST & inOperand3,
                                                                                             const class GGS_terminalDeclarationListAST & inOperand4,
                                                                                             const class GGS_lexicalAttributeListAST & inOperand5,
                                                                                             const class GGS_lexicalStyleListAST & inOperand6,
                                                                                             const class GGS_lexicalListDeclarationListAST & inOperand7,
                                                                                             class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2E_element ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ ;

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
  public: GGS_syntaxComponentMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexiqueName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexiqueName = inValue ;
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
  public: GGS_syntaxComponentMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_lstring & in_mLexiqueName,
                                             const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                             const GGS_syntaxRuleListAST & in_mRuleList,
                                             const GGS_bool & in_mHasTranslateFeature) ;

//--------------------------------- Copy constructor
  public: GGS_syntaxComponentMap_2E_element (const GGS_syntaxComponentMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syntaxComponentMap_2E_element & operator = (const GGS_syntaxComponentMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxComponentMap_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_nonterminalDeclarationListAST & inOperand2,
                                                                             const class GGS_syntaxRuleListAST & inOperand3,
                                                                             const class GGS_bool & inOperand4,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxComponentMap_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxComponentMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_nonterminalDeclarationListAST & inOperand2,
                                                                         const class GGS_syntaxRuleListAST & inOperand3,
                                                                         const class GGS_bool & inOperand4,
                                                                         class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentMap_2E_element ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxComponentMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionInitializerMapForType map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_extensionInitializerMapForType ;

//--------------------------------------------------------------------------------------------------
//  MapFor_extensionInitializerMapForType
//--------------------------------------------------------------------------------------------------

class MapFor_extensionInitializerMapForType : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_extensionInitializerMapForType > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionInitializerMapForType (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_extensionInitializerMapForType (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionInitializerMapForType (const MapFor_extensionInitializerMapForType & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionInitializerMapForType & operator = (const MapFor_extensionInitializerMapForType & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_extensionInitializerMapForType_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_extensionInitializerMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_extensionInitializerMapForType_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_extensionInitializerMapForType> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_extensionInitializerMapForType & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_extensionInitializerMapForType & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionInitializerMapForType final {

//--- Constructor
  public: DownEnumerator_extensionInitializerMapForType (const class GGS_extensionInitializerMapForType & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_formalInputParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_extensionInitializerMapForType_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_extensionInitializerMapForType (const DownEnumerator_extensionInitializerMapForType &) = delete ;
  private: DownEnumerator_extensionInitializerMapForType & operator = (const DownEnumerator_extensionInitializerMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionInitializerMapForType final {
  public: UpEnumerator_extensionInitializerMapForType (const class GGS_extensionInitializerMapForType & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_formalInputParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extensionInitializerMapForType_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_extensionInitializerMapForType (const UpEnumerator_extensionInitializerMapForType &) = delete ;
  private: UpEnumerator_extensionInitializerMapForType & operator = (const UpEnumerator_extensionInitializerMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionInitializerMapForType : public AC_GALGAS_root {

//--------------------------------- Private property
  private: OptionalSharedRef <MapRootFor_extensionInitializerMapForType > mSharedRoot ;

//--------------------------------- Default constructor
  public: GGS_extensionInitializerMapForType (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extensionInitializerMapForType (void) ;

//--------------------------------- Handle copy
  public: GGS_extensionInitializerMapForType (const GGS_extensionInitializerMapForType & inSource) ;
  public: GGS_extensionInitializerMapForType & operator = (const GGS_extensionInitializerMapForType & inSource) ;
  
//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;




  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const override ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) override ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_extensionInitializerMapForType (const GGS_extensionInitializerMapForType & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_extensionInitializerMapForType & operator = (const GGS_extensionInitializerMapForType & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_extensionInitializerMapForType_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_extensionInitializerMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_extensionInitializerMapForType_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_extensionInitializerMapForType> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const GGS_extensionInitializerMapForType & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class GGS_extensionInitializerMapForType & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionInitializerMapForType init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionInitializerMapForType extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionInitializerMapForType class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_extensionInitializerMapForType class_func_mapWithMapToOverride (const class GGS_extensionInitializerMapForType & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_formalInputParameterListAST constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParameterListForKey (class GGS_formalInputParameterListAST constinArgument0,
                                                                      class GGS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalInputParameterListAST getter_mFormalParameterListForKey (const class GGS_string & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extensionInitializerMapForType getter_overriddenMap (Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_extensionInitializerMapForType_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionInitializerMapForType ;
  friend class DownEnumerator_extensionInitializerMapForType ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerMapForType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionInitializerMapForType_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionInitializerMapForType_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_formalInputParameterListAST mProperty_mFormalParameterList ;
  public: inline GGS_formalInputParameterListAST readProperty_mFormalParameterList (void) const {
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

  public: inline void setter_setMFormalParameterList (const GGS_formalInputParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionInitializerMapForType_2E_element (const GGS_lstring & in_lkey,
                                                         const GGS_formalInputParameterListAST & in_mFormalParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_extensionInitializerMapForType_2E_element (const GGS_extensionInitializerMapForType_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionInitializerMapForType_2E_element & operator = (const GGS_extensionInitializerMapForType_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionInitializerMapForType_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_formalInputParameterListAST & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionInitializerMapForType_2E_element extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionInitializerMapForType_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_formalInputParameterListAST & inOperand1,
                                                                                     class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerMapForType_2E_element ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionInitializerMapForType_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerMapForType_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionInitializerForBuildingContext map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_extensionInitializerForBuildingContext ;

//--------------------------------------------------------------------------------------------------
//  MapFor_extensionInitializerForBuildingContext
//--------------------------------------------------------------------------------------------------

class MapFor_extensionInitializerForBuildingContext : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_extensionInitializerForBuildingContext > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionInitializerForBuildingContext (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_extensionInitializerForBuildingContext (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionInitializerForBuildingContext (const MapFor_extensionInitializerForBuildingContext & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionInitializerForBuildingContext & operator = (const MapFor_extensionInitializerForBuildingContext & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_extensionInitializerForBuildingContext_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_extensionInitializerForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_extensionInitializerForBuildingContext_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_extensionInitializerForBuildingContext> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_extensionInitializerForBuildingContext & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_extensionInitializerForBuildingContext & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionInitializerForBuildingContext final {

//--- Constructor
  public: DownEnumerator_extensionInitializerForBuildingContext (const class GGS_extensionInitializerForBuildingContext & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_extensionInitializerMapForType current_mExtensionInitializerMapForType (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_extensionInitializerForBuildingContext_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_extensionInitializerForBuildingContext (const DownEnumerator_extensionInitializerForBuildingContext &) = delete ;
  private: DownEnumerator_extensionInitializerForBuildingContext & operator = (const DownEnumerator_extensionInitializerForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionInitializerForBuildingContext final {
  public: UpEnumerator_extensionInitializerForBuildingContext (const class GGS_extensionInitializerForBuildingContext & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_extensionInitializerMapForType current_mExtensionInitializerMapForType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extensionInitializerForBuildingContext_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_extensionInitializerForBuildingContext (const UpEnumerator_extensionInitializerForBuildingContext &) = delete ;
  private: UpEnumerator_extensionInitializerForBuildingContext & operator = (const UpEnumerator_extensionInitializerForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionInitializerForBuildingContext : public AC_GALGAS_root {

//--------------------------------- Private property
  private: OptionalSharedRef <MapRootFor_extensionInitializerForBuildingContext > mSharedRoot ;

//--------------------------------- Default constructor
  public: GGS_extensionInitializerForBuildingContext (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extensionInitializerForBuildingContext (void) ;

//--------------------------------- Handle copy
  public: GGS_extensionInitializerForBuildingContext (const GGS_extensionInitializerForBuildingContext & inSource) ;
  public: GGS_extensionInitializerForBuildingContext & operator = (const GGS_extensionInitializerForBuildingContext & inSource) ;
  
//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;




  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const override ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) override ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_extensionInitializerForBuildingContext (const GGS_extensionInitializerForBuildingContext & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_extensionInitializerForBuildingContext & operator = (const GGS_extensionInitializerForBuildingContext & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_extensionInitializerForBuildingContext_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_extensionInitializerForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_extensionInitializerForBuildingContext_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_extensionInitializerForBuildingContext> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const GGS_extensionInitializerForBuildingContext & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class GGS_extensionInitializerForBuildingContext & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionInitializerForBuildingContext init (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionInitializerForBuildingContext extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionInitializerForBuildingContext class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_extensionInitializerForBuildingContext class_func_mapWithMapToOverride (const class GGS_extensionInitializerForBuildingContext & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_extensionInitializerMapForType constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_replaceKey (class GGS_extensionInitializerForBuildingContext_2E_element constinArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExtensionInitializerMapForTypeForKey (class GGS_extensionInitializerMapForType constinArgument0,
                                                                                 class GGS_string constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_extensionInitializerMapForType & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extensionInitializerMapForType getter_mExtensionInitializerMapForTypeForKey (const class GGS_string & constinOperand0,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extensionInitializerForBuildingContext getter_overriddenMap (Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_extensionInitializerForBuildingContext_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extensionInitializerForBuildingContext_2E_element readSubscript__3F_searchKey (const class GGS_lstring & in0,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionInitializerForBuildingContext ;
  friend class DownEnumerator_extensionInitializerForBuildingContext ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionInitializerForBuildingContext_2E_element extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionInitializerForBuildingContext_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                             const class GGS_extensionInitializerMapForType & inOperand1,
                                                                                             class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext_2E_element ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionInitializerForBuildingContext_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMethodMapForType map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_extensionMethodMapForType ;

//--------------------------------------------------------------------------------------------------
//  MapFor_extensionMethodMapForType
//--------------------------------------------------------------------------------------------------

class MapFor_extensionMethodMapForType : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_extensionMethodMapForType > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionMethodMapForType (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_extensionMethodMapForType (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionMethodMapForType (const MapFor_extensionMethodMapForType & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionMethodMapForType & operator = (const MapFor_extensionMethodMapForType & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_extensionMethodMapForType_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_extensionMethodMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_extensionMethodMapForType_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_extensionMethodMapForType> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_extensionMethodMapForType & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_extensionMethodMapForType & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionMethodMapForType final {

//--- Constructor
  public: DownEnumerator_extensionMethodMapForType (const class GGS_extensionMethodMapForType & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_formalParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;

  public: class GGS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_extensionMethodMapForType_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_extensionMethodMapForType (const DownEnumerator_extensionMethodMapForType &) = delete ;
  private: DownEnumerator_extensionMethodMapForType & operator = (const DownEnumerator_extensionMethodMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionMethodMapForType final {
  public: UpEnumerator_extensionMethodMapForType (const class GGS_extensionMethodMapForType & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_formalParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;
  public: class GGS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extensionMethodMapForType_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_extensionMethodMapForType (const UpEnumerator_extensionMethodMapForType &) = delete ;
  private: UpEnumerator_extensionMethodMapForType & operator = (const UpEnumerator_extensionMethodMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForType : public AC_GALGAS_root {

//--------------------------------- Private property
  private: OptionalSharedRef <MapRootFor_extensionMethodMapForType > mSharedRoot ;

//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForType (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extensionMethodMapForType (void) ;

//--------------------------------- Handle copy
  public: GGS_extensionMethodMapForType (const GGS_extensionMethodMapForType & inSource) ;
  public: GGS_extensionMethodMapForType & operator = (const GGS_extensionMethodMapForType & inSource) ;
  
//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;




  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const override ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) override ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_extensionMethodMapForType (const GGS_extensionMethodMapForType & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_extensionMethodMapForType & operator = (const GGS_extensionMethodMapForType & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_extensionMethodMapForType_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_extensionMethodMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_extensionMethodMapForType_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_extensionMethodMapForType> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const GGS_extensionMethodMapForType & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class GGS_extensionMethodMapForType & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodMapForType init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMethodMapForType extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMethodMapForType class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_extensionMethodMapForType class_func_mapWithMapToOverride (const class GGS_extensionMethodMapForType & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_formalParameterListAST constinArgument1,
                                                  class GGS_methodQualifier constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParameterListForKey (class GGS_formalParameterListAST constinArgument0,
                                                                      class GGS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMQualifierForKey (class GGS_methodQualifier constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalParameterListAST getter_mFormalParameterListForKey (const class GGS_string & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_methodQualifier getter_mQualifierForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extensionMethodMapForType getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_extensionMethodMapForType_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionMethodMapForType ;
  friend class DownEnumerator_extensionMethodMapForType ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMethodMapForType_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForType_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_formalParameterListAST mProperty_mFormalParameterList ;
  public: inline GGS_formalParameterListAST readProperty_mFormalParameterList (void) const {
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

  public: inline void setter_setMFormalParameterList (const GGS_formalParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

  public: inline void setter_setMQualifier (const GGS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionMethodMapForType_2E_element (const GGS_lstring & in_lkey,
                                                    const GGS_formalParameterListAST & in_mFormalParameterList,
                                                    const GGS_methodQualifier & in_mQualifier) ;

//--------------------------------- Copy constructor
  public: GGS_extensionMethodMapForType_2E_element (const GGS_extensionMethodMapForType_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionMethodMapForType_2E_element & operator = (const GGS_extensionMethodMapForType_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodMapForType_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_formalParameterListAST & inOperand1,
                                                                            const class GGS_methodQualifier & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMethodMapForType_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMethodMapForType_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                const class GGS_formalParameterListAST & inOperand1,
                                                                                const class GGS_methodQualifier & inOperand2,
                                                                                class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForType_2E_element ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMethodMapForType_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForType_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMethodMapForBuildingContext map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_extensionMethodMapForBuildingContext ;

//--------------------------------------------------------------------------------------------------
//  MapFor_extensionMethodMapForBuildingContext
//--------------------------------------------------------------------------------------------------

class MapFor_extensionMethodMapForBuildingContext : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_extensionMethodMapForBuildingContext > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionMethodMapForBuildingContext (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_extensionMethodMapForBuildingContext (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionMethodMapForBuildingContext (const MapFor_extensionMethodMapForBuildingContext & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionMethodMapForBuildingContext & operator = (const MapFor_extensionMethodMapForBuildingContext & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_extensionMethodMapForBuildingContext_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_extensionMethodMapForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_extensionMethodMapForBuildingContext_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_extensionMethodMapForBuildingContext> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_extensionMethodMapForBuildingContext & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_extensionMethodMapForBuildingContext & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionMethodMapForBuildingContext final {

//--- Constructor
  public: DownEnumerator_extensionMethodMapForBuildingContext (const class GGS_extensionMethodMapForBuildingContext & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_extensionMethodMapForType current_mExtensionMethodMapForType (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_extensionMethodMapForBuildingContext_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_extensionMethodMapForBuildingContext (const DownEnumerator_extensionMethodMapForBuildingContext &) = delete ;
  private: DownEnumerator_extensionMethodMapForBuildingContext & operator = (const DownEnumerator_extensionMethodMapForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionMethodMapForBuildingContext final {
  public: UpEnumerator_extensionMethodMapForBuildingContext (const class GGS_extensionMethodMapForBuildingContext & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_extensionMethodMapForType current_mExtensionMethodMapForType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extensionMethodMapForBuildingContext_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_extensionMethodMapForBuildingContext (const UpEnumerator_extensionMethodMapForBuildingContext &) = delete ;
  private: UpEnumerator_extensionMethodMapForBuildingContext & operator = (const UpEnumerator_extensionMethodMapForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForBuildingContext : public AC_GALGAS_root {

//--------------------------------- Private property
  private: OptionalSharedRef <MapRootFor_extensionMethodMapForBuildingContext > mSharedRoot ;

//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForBuildingContext (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extensionMethodMapForBuildingContext (void) ;

//--------------------------------- Handle copy
  public: GGS_extensionMethodMapForBuildingContext (const GGS_extensionMethodMapForBuildingContext & inSource) ;
  public: GGS_extensionMethodMapForBuildingContext & operator = (const GGS_extensionMethodMapForBuildingContext & inSource) ;
  
//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;




  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const override ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) override ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_extensionMethodMapForBuildingContext (const GGS_extensionMethodMapForBuildingContext & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_extensionMethodMapForBuildingContext & operator = (const GGS_extensionMethodMapForBuildingContext & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_extensionMethodMapForBuildingContext_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_extensionMethodMapForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_extensionMethodMapForBuildingContext_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_extensionMethodMapForBuildingContext> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const GGS_extensionMethodMapForBuildingContext & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class GGS_extensionMethodMapForBuildingContext & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodMapForBuildingContext init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMethodMapForBuildingContext extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMethodMapForBuildingContext class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_extensionMethodMapForBuildingContext class_func_mapWithMapToOverride (const class GGS_extensionMethodMapForBuildingContext & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_extensionMethodMapForType constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_replaceKey (class GGS_extensionMethodMapForBuildingContext_2E_element constinArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExtensionMethodMapForTypeForKey (class GGS_extensionMethodMapForType constinArgument0,
                                                                            class GGS_string constinArgument1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_extensionMethodMapForType & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extensionMethodMapForType getter_mExtensionMethodMapForTypeForKey (const class GGS_string & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extensionMethodMapForBuildingContext getter_overriddenMap (Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_extensionMethodMapForBuildingContext_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extensionMethodMapForBuildingContext_2E_element readSubscript__3F_searchKey (const class GGS_lstring & in0,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionMethodMapForBuildingContext ;
  friend class DownEnumerator_extensionMethodMapForBuildingContext ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMethodMapForBuildingContext_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMethodMapForBuildingContext_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_extensionMethodMapForType & inOperand1,
                                                                                           class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2E_element ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMethodMapForBuildingContext_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionSetterMapForType map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_extensionSetterMapForType ;

//--------------------------------------------------------------------------------------------------
//  MapFor_extensionSetterMapForType
//--------------------------------------------------------------------------------------------------

class MapFor_extensionSetterMapForType : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_extensionSetterMapForType > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionSetterMapForType (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_extensionSetterMapForType (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionSetterMapForType (const MapFor_extensionSetterMapForType & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionSetterMapForType & operator = (const MapFor_extensionSetterMapForType & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_extensionSetterMapForType_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_extensionSetterMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_extensionSetterMapForType_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_extensionSetterMapForType> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_extensionSetterMapForType & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_extensionSetterMapForType & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionSetterMapForType final {

//--- Constructor
  public: DownEnumerator_extensionSetterMapForType (const class GGS_extensionSetterMapForType & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_formalParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_extensionSetterMapForType_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_extensionSetterMapForType (const DownEnumerator_extensionSetterMapForType &) = delete ;
  private: DownEnumerator_extensionSetterMapForType & operator = (const DownEnumerator_extensionSetterMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionSetterMapForType final {
  public: UpEnumerator_extensionSetterMapForType (const class GGS_extensionSetterMapForType & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_formalParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extensionSetterMapForType_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_extensionSetterMapForType (const UpEnumerator_extensionSetterMapForType &) = delete ;
  private: UpEnumerator_extensionSetterMapForType & operator = (const UpEnumerator_extensionSetterMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForType : public AC_GALGAS_root {

//--------------------------------- Private property
  private: OptionalSharedRef <MapRootFor_extensionSetterMapForType > mSharedRoot ;

//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForType (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extensionSetterMapForType (void) ;

//--------------------------------- Handle copy
  public: GGS_extensionSetterMapForType (const GGS_extensionSetterMapForType & inSource) ;
  public: GGS_extensionSetterMapForType & operator = (const GGS_extensionSetterMapForType & inSource) ;
  
//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;




  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const override ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) override ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_extensionSetterMapForType (const GGS_extensionSetterMapForType & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_extensionSetterMapForType & operator = (const GGS_extensionSetterMapForType & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_extensionSetterMapForType_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_extensionSetterMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_extensionSetterMapForType_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_extensionSetterMapForType> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const GGS_extensionSetterMapForType & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class GGS_extensionSetterMapForType & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterMapForType init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionSetterMapForType extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionSetterMapForType class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_extensionSetterMapForType class_func_mapWithMapToOverride (const class GGS_extensionSetterMapForType & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_formalParameterListAST constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParameterListForKey (class GGS_formalParameterListAST constinArgument0,
                                                                      class GGS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalParameterListAST getter_mFormalParameterListForKey (const class GGS_string & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extensionSetterMapForType getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_extensionSetterMapForType_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionSetterMapForType ;
  friend class DownEnumerator_extensionSetterMapForType ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionSetterMapForType_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForType_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_formalParameterListAST mProperty_mFormalParameterList ;
  public: inline GGS_formalParameterListAST readProperty_mFormalParameterList (void) const {
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

  public: inline void setter_setMFormalParameterList (const GGS_formalParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionSetterMapForType_2E_element (const GGS_lstring & in_lkey,
                                                    const GGS_formalParameterListAST & in_mFormalParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_extensionSetterMapForType_2E_element (const GGS_extensionSetterMapForType_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionSetterMapForType_2E_element & operator = (const GGS_extensionSetterMapForType_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterMapForType_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_formalParameterListAST & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionSetterMapForType_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionSetterMapForType_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                const class GGS_formalParameterListAST & inOperand1,
                                                                                class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForType_2E_element ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionSetterMapForType_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForType_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionSetterMapForBuildingContext map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_extensionSetterMapForBuildingContext ;

//--------------------------------------------------------------------------------------------------
//  MapFor_extensionSetterMapForBuildingContext
//--------------------------------------------------------------------------------------------------

class MapFor_extensionSetterMapForBuildingContext : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_extensionSetterMapForBuildingContext > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionSetterMapForBuildingContext (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_extensionSetterMapForBuildingContext (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionSetterMapForBuildingContext (const MapFor_extensionSetterMapForBuildingContext & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionSetterMapForBuildingContext & operator = (const MapFor_extensionSetterMapForBuildingContext & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_extensionSetterMapForBuildingContext_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_extensionSetterMapForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_extensionSetterMapForBuildingContext_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_extensionSetterMapForBuildingContext> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_extensionSetterMapForBuildingContext & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_extensionSetterMapForBuildingContext & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionSetterMapForBuildingContext final {

//--- Constructor
  public: DownEnumerator_extensionSetterMapForBuildingContext (const class GGS_extensionSetterMapForBuildingContext & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_extensionSetterMapForType current_mExtensionSetterMapForType (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_extensionSetterMapForBuildingContext_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_extensionSetterMapForBuildingContext (const DownEnumerator_extensionSetterMapForBuildingContext &) = delete ;
  private: DownEnumerator_extensionSetterMapForBuildingContext & operator = (const DownEnumerator_extensionSetterMapForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionSetterMapForBuildingContext final {
  public: UpEnumerator_extensionSetterMapForBuildingContext (const class GGS_extensionSetterMapForBuildingContext & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_extensionSetterMapForType current_mExtensionSetterMapForType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extensionSetterMapForBuildingContext_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_extensionSetterMapForBuildingContext (const UpEnumerator_extensionSetterMapForBuildingContext &) = delete ;
  private: UpEnumerator_extensionSetterMapForBuildingContext & operator = (const UpEnumerator_extensionSetterMapForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForBuildingContext : public AC_GALGAS_root {

//--------------------------------- Private property
  private: OptionalSharedRef <MapRootFor_extensionSetterMapForBuildingContext > mSharedRoot ;

//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForBuildingContext (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extensionSetterMapForBuildingContext (void) ;

//--------------------------------- Handle copy
  public: GGS_extensionSetterMapForBuildingContext (const GGS_extensionSetterMapForBuildingContext & inSource) ;
  public: GGS_extensionSetterMapForBuildingContext & operator = (const GGS_extensionSetterMapForBuildingContext & inSource) ;
  
//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;




  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const override ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) override ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_extensionSetterMapForBuildingContext (const GGS_extensionSetterMapForBuildingContext & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_extensionSetterMapForBuildingContext & operator = (const GGS_extensionSetterMapForBuildingContext & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_extensionSetterMapForBuildingContext_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_extensionSetterMapForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_extensionSetterMapForBuildingContext_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_extensionSetterMapForBuildingContext> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const GGS_extensionSetterMapForBuildingContext & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class GGS_extensionSetterMapForBuildingContext & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterMapForBuildingContext init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionSetterMapForBuildingContext extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionSetterMapForBuildingContext class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_extensionSetterMapForBuildingContext class_func_mapWithMapToOverride (const class GGS_extensionSetterMapForBuildingContext & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_extensionSetterMapForType constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_replaceKey (class GGS_extensionSetterMapForBuildingContext_2E_element constinArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExtensionSetterMapForTypeForKey (class GGS_extensionSetterMapForType constinArgument0,
                                                                            class GGS_string constinArgument1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_extensionSetterMapForType & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extensionSetterMapForType getter_mExtensionSetterMapForTypeForKey (const class GGS_string & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extensionSetterMapForBuildingContext getter_overriddenMap (Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_extensionSetterMapForBuildingContext_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extensionSetterMapForBuildingContext_2E_element readSubscript__3F_searchKey (const class GGS_lstring & in0,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionSetterMapForBuildingContext ;
  friend class DownEnumerator_extensionSetterMapForBuildingContext ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionSetterMapForBuildingContext_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionSetterMapForBuildingContext_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_extensionSetterMapForType & inOperand1,
                                                                                           class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2E_element ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionSetterMapForBuildingContext_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionGetterMapForType map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_extensionGetterMapForType ;

//--------------------------------------------------------------------------------------------------
//  MapFor_extensionGetterMapForType
//--------------------------------------------------------------------------------------------------

class MapFor_extensionGetterMapForType : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_extensionGetterMapForType > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionGetterMapForType (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_extensionGetterMapForType (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionGetterMapForType (const MapFor_extensionGetterMapForType & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionGetterMapForType & operator = (const MapFor_extensionGetterMapForType & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_extensionGetterMapForType_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_extensionGetterMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_extensionGetterMapForType_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_extensionGetterMapForType> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_extensionGetterMapForType & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_extensionGetterMapForType & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionGetterMapForType final {

//--- Constructor
  public: DownEnumerator_extensionGetterMapForType (const class GGS_extensionGetterMapForType & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mResultTypeName (LOCATION_ARGS) const ;

  public: class GGS_formalInputParameterListAST current_mInputFormalParameterList (LOCATION_ARGS) const ;

  public: class GGS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_extensionGetterMapForType_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_extensionGetterMapForType (const DownEnumerator_extensionGetterMapForType &) = delete ;
  private: DownEnumerator_extensionGetterMapForType & operator = (const DownEnumerator_extensionGetterMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionGetterMapForType final {
  public: UpEnumerator_extensionGetterMapForType (const class GGS_extensionGetterMapForType & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mResultTypeName (LOCATION_ARGS) const ;
  public: class GGS_formalInputParameterListAST current_mInputFormalParameterList (LOCATION_ARGS) const ;
  public: class GGS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extensionGetterMapForType_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_extensionGetterMapForType (const UpEnumerator_extensionGetterMapForType &) = delete ;
  private: UpEnumerator_extensionGetterMapForType & operator = (const UpEnumerator_extensionGetterMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForType : public AC_GALGAS_root {

//--------------------------------- Private property
  private: OptionalSharedRef <MapRootFor_extensionGetterMapForType > mSharedRoot ;

//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForType (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extensionGetterMapForType (void) ;

//--------------------------------- Handle copy
  public: GGS_extensionGetterMapForType (const GGS_extensionGetterMapForType & inSource) ;
  public: GGS_extensionGetterMapForType & operator = (const GGS_extensionGetterMapForType & inSource) ;
  
//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;




  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const override ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) override ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_extensionGetterMapForType (const GGS_extensionGetterMapForType & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_extensionGetterMapForType & operator = (const GGS_extensionGetterMapForType & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_extensionGetterMapForType_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_extensionGetterMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_extensionGetterMapForType_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_extensionGetterMapForType> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const GGS_extensionGetterMapForType & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class GGS_extensionGetterMapForType & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterMapForType init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionGetterMapForType extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionGetterMapForType class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_extensionGetterMapForType class_func_mapWithMapToOverride (const class GGS_extensionGetterMapForType & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring constinArgument1,
                                                  class GGS_formalInputParameterListAST constinArgument2,
                                                  class GGS_methodQualifier constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputFormalParameterListForKey (class GGS_formalInputParameterListAST constinArgument0,
                                                                           class GGS_string constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMQualifierForKey (class GGS_methodQualifier constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultTypeNameForKey (class GGS_lstring constinArgument0,
                                                                 class GGS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalInputParameterListAST getter_mInputFormalParameterListForKey (const class GGS_string & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_methodQualifier getter_mQualifierForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mResultTypeNameForKey (const class GGS_string & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extensionGetterMapForType getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_extensionGetterMapForType_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionGetterMapForType ;
  friend class DownEnumerator_extensionGetterMapForType ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForType ;

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

  public: GGS_formalInputParameterListAST mProperty_mInputFormalParameterList ;
  public: inline GGS_formalInputParameterListAST readProperty_mInputFormalParameterList (void) const {
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

  public: inline void setter_setMInputFormalParameterList (const GGS_formalInputParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
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
                                                    const GGS_formalInputParameterListAST & in_mInputFormalParameterList,
                                                    const GGS_methodQualifier & in_mQualifier) ;

//--------------------------------- Copy constructor
  public: GGS_extensionGetterMapForType_2E_element (const GGS_extensionGetterMapForType_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionGetterMapForType_2E_element & operator = (const GGS_extensionGetterMapForType_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterMapForType_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_formalInputParameterListAST & inOperand2,
                                                                                const class GGS_methodQualifier & inOperand3,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionGetterMapForType_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionGetterMapForType_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_formalInputParameterListAST & inOperand2,
                                                                                const class GGS_methodQualifier & inOperand3,
                                                                                class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForType_2E_element ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionGetterMapForType_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForType_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionGetterMapForBuildingContext map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_extensionGetterMapForBuildingContext ;

//--------------------------------------------------------------------------------------------------
//  MapFor_extensionGetterMapForBuildingContext
//--------------------------------------------------------------------------------------------------

class MapFor_extensionGetterMapForBuildingContext : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_extensionGetterMapForBuildingContext > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionGetterMapForBuildingContext (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_extensionGetterMapForBuildingContext (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionGetterMapForBuildingContext (const MapFor_extensionGetterMapForBuildingContext & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionGetterMapForBuildingContext & operator = (const MapFor_extensionGetterMapForBuildingContext & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_extensionGetterMapForBuildingContext_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_extensionGetterMapForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_extensionGetterMapForBuildingContext_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_extensionGetterMapForBuildingContext> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_extensionGetterMapForBuildingContext & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_extensionGetterMapForBuildingContext & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionGetterMapForBuildingContext final {

//--- Constructor
  public: DownEnumerator_extensionGetterMapForBuildingContext (const class GGS_extensionGetterMapForBuildingContext & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_extensionGetterMapForType current_mExtensionGetterMapForType (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_extensionGetterMapForBuildingContext_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_extensionGetterMapForBuildingContext (const DownEnumerator_extensionGetterMapForBuildingContext &) = delete ;
  private: DownEnumerator_extensionGetterMapForBuildingContext & operator = (const DownEnumerator_extensionGetterMapForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionGetterMapForBuildingContext final {
  public: UpEnumerator_extensionGetterMapForBuildingContext (const class GGS_extensionGetterMapForBuildingContext & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_extensionGetterMapForType current_mExtensionGetterMapForType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extensionGetterMapForBuildingContext_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_extensionGetterMapForBuildingContext (const UpEnumerator_extensionGetterMapForBuildingContext &) = delete ;
  private: UpEnumerator_extensionGetterMapForBuildingContext & operator = (const UpEnumerator_extensionGetterMapForBuildingContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForBuildingContext : public AC_GALGAS_root {

//--------------------------------- Private property
  private: OptionalSharedRef <MapRootFor_extensionGetterMapForBuildingContext > mSharedRoot ;

//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForBuildingContext (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extensionGetterMapForBuildingContext (void) ;

//--------------------------------- Handle copy
  public: GGS_extensionGetterMapForBuildingContext (const GGS_extensionGetterMapForBuildingContext & inSource) ;
  public: GGS_extensionGetterMapForBuildingContext & operator = (const GGS_extensionGetterMapForBuildingContext & inSource) ;
  
//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;




  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const override ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) override ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_extensionGetterMapForBuildingContext (const GGS_extensionGetterMapForBuildingContext & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_extensionGetterMapForBuildingContext & operator = (const GGS_extensionGetterMapForBuildingContext & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_extensionGetterMapForBuildingContext_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_extensionGetterMapForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_extensionGetterMapForBuildingContext_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_extensionGetterMapForBuildingContext> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const GGS_extensionGetterMapForBuildingContext & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class GGS_extensionGetterMapForBuildingContext & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterMapForBuildingContext init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionGetterMapForBuildingContext extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionGetterMapForBuildingContext class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_extensionGetterMapForBuildingContext class_func_mapWithMapToOverride (const class GGS_extensionGetterMapForBuildingContext & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_extensionGetterMapForType constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_replaceKey (class GGS_extensionGetterMapForBuildingContext_2E_element constinArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExtensionGetterMapForTypeForKey (class GGS_extensionGetterMapForType constinArgument0,
                                                                            class GGS_string constinArgument1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_extensionGetterMapForType & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extensionGetterMapForType getter_mExtensionGetterMapForTypeForKey (const class GGS_string & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extensionGetterMapForBuildingContext getter_overriddenMap (Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_extensionGetterMapForBuildingContext_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extensionGetterMapForBuildingContext_2E_element readSubscript__3F_searchKey (const class GGS_lstring & in0,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionGetterMapForBuildingContext ;
  friend class DownEnumerator_extensionGetterMapForBuildingContext ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionGetterMapForBuildingContext_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionGetterMapForBuildingContext_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_extensionGetterMapForType & inOperand1,
                                                                                           class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2E_element ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionGetterMapForBuildingContext_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_keyRepresentation (const class cPtr_semanticDeclarationAST * inObject,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @wrapperExtensionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_wrapperExtensionMap ;

//--------------------------------------------------------------------------------------------------
//  MapFor_wrapperExtensionMap
//--------------------------------------------------------------------------------------------------

class MapFor_wrapperExtensionMap : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_wrapperExtensionMap > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_wrapperExtensionMap (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_wrapperExtensionMap (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_wrapperExtensionMap (const MapFor_wrapperExtensionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_wrapperExtensionMap & operator = (const MapFor_wrapperExtensionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_wrapperExtensionMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_wrapperExtensionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_wrapperExtensionMap_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_wrapperExtensionMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_wrapperExtensionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_wrapperExtensionMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_wrapperExtensionMap final {

//--- Constructor
  public: DownEnumerator_wrapperExtensionMap (const class GGS_wrapperExtensionMap & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_wrapperExtensionMap_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_wrapperExtensionMap (const DownEnumerator_wrapperExtensionMap &) = delete ;
  private: DownEnumerator_wrapperExtensionMap & operator = (const DownEnumerator_wrapperExtensionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_wrapperExtensionMap final {
  public: UpEnumerator_wrapperExtensionMap (const class GGS_wrapperExtensionMap & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_wrapperExtensionMap_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_wrapperExtensionMap (const UpEnumerator_wrapperExtensionMap &) = delete ;
  private: UpEnumerator_wrapperExtensionMap & operator = (const UpEnumerator_wrapperExtensionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_wrapperExtensionMap : public AC_GALGAS_root {

//--------------------------------- Private property
  private: OptionalSharedRef <MapRootFor_wrapperExtensionMap > mSharedRoot ;

//--------------------------------- Default constructor
  public: GGS_wrapperExtensionMap (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_wrapperExtensionMap (void) ;

//--------------------------------- Handle copy
  public: GGS_wrapperExtensionMap (const GGS_wrapperExtensionMap & inSource) ;
  public: GGS_wrapperExtensionMap & operator = (const GGS_wrapperExtensionMap & inSource) ;
  
//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;




  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool isValid (void) const override ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void) override ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insulate (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_wrapperExtensionMap (const GGS_wrapperExtensionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_wrapperExtensionMap & operator = (const GGS_wrapperExtensionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_wrapperExtensionMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_wrapperExtensionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_wrapperExtensionMap_2E_element>
  removeAndReturnRemovedInfo (const String & inKey
                              COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   contains
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool contains (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   containsAtLevel
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: bool containsAtLevel (const String & inKey, const uint32_t inLevel) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   infoForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: const SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_wrapperExtensionMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const GGS_wrapperExtensionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class GGS_wrapperExtensionMap & ioResult,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: uint32_t levels (void) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_stringset getter_keySet (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_wrapperExtensionMap init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_wrapperExtensionMap extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_wrapperExtensionMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_wrapperExtensionMap class_func_mapWithMapToOverride (const class GGS_wrapperExtensionMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_wrapperExtensionMap getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_wrapperExtensionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_wrapperExtensionMap ;
  friend class DownEnumerator_wrapperExtensionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperExtensionMap ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_wrapperExtensionMap_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_wrapperExtensionMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                          class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperExtensionMap_2E_element ;

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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_wrapperExtensionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperExtensionMap_2E_element_3F_ ;

