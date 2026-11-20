#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

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
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

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
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

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
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_galgas_33_SyntaxExtensionAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_galgas_33_SyntaxExtensionAST_5D_ (const GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inSource) ;
  public: GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & operator = (const GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inSource) ;

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
  public: static GGS__5B_galgas_33_SyntaxExtensionAST_5D_ init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_galgas_33_SyntaxExtensionAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
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

  public: void setter_set (class GGS_galgas_33_SyntaxExtensionAST constinArgument0,
                           class GGS_uint constinArgument1,
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


//--------------------------------- Read subcripts
  public: class GGS_galgas_33_SyntaxExtensionAST readSubcript__3F_ (const class GGS_uint & in0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ ;
  friend class DownEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_galgas_33_SyntaxExtensionAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [galgas3SyntaxExtensionAST]? optional
//--------------------------------------------------------------------------------------------------

class GGS__5B_galgas_33_SyntaxExtensionAST_5D__3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS__5B_galgas_33_SyntaxExtensionAST_5D_ mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS__5B_galgas_33_SyntaxExtensionAST_5D__3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS__5B_galgas_33_SyntaxExtensionAST_5D__3F_ (const GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS__5B_galgas_33_SyntaxExtensionAST_5D__3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS__5B_galgas_33_SyntaxExtensionAST_5D_ unwrappedValue (void) const {
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_galgas_33_SyntaxExtensionAST_5D__3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @_5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ dictionary
//--------------------------------------------------------------------------------------------------

class Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ final {
  public : GGS_string mProperty_key ;
  public : GGS__5B_galgas_33_SyntaxExtensionAST_5D_ mProperty_value ;

  public: Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ (void) :
  mProperty_key (),
  mProperty_value () {
  }

  public: Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ (const GGS_string & inKey,
                                                                       const GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inValue) :
  mProperty_key (inKey),
  mProperty_value (inValue) {
  }

  public: Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ (const Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ & inSource) :
  mProperty_key (inSource.mProperty_key),
  mProperty_value (inSource.mProperty_value) {
  }

  public: Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ & operator = (const Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ & inSource) {
    mProperty_key = inSource.mProperty_key ;
    mProperty_value = inSource.mProperty_value ;
    return *this ;
  }

} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ final {
  public: DownEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ (const class GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ & inOperand) ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_string current_key (UNUSED_LOCATION_ARGS) const ;

  public: class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ current_value (UNUSED_LOCATION_ARGS) const ;


//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_>> mArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ (const DownEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ &) = delete ;
  private: DownEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ & operator = (const DownEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ final {
  public: UpEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ (const class GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ & inOperand)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: class GGS_string current_key (UNUSED_LOCATION_ARGS) const ;
  public: class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ current_value (UNUSED_LOCATION_ARGS) const ;
//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_>> mArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ (const UpEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ &) = delete ;
  private: UpEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ & operator = (const UpEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ final : public GenericDictionary <GGS_string, Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_> {

//--------------------------------- Virtual destructor
  public: virtual ~ GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ (void) = default ;

//--------------------------------- Build
  protected: static GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ buildEmptyDictionary (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ init (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: void setter_remove (class GGS_string constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_search (class GGS_string constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS__5B_galgas_33_SyntaxExtensionAST_5D__3F_ readSubcript__3F_ (const class GGS_string & in0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ readSubcript__3F__3F_default (const class GGS_string & in0,
                                                                                       const class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & in1,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ readSubcript__3F_unwrap (const class GGS_string & in0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubcript__3F_ (const class GGS_string in0,
                                   const class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ inValue,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void writeSubcript__3F_unique (const class GGS_string in0,
                                         const class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ inValue,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ ;
  friend class DownEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxExtensions struct
//--------------------------------------------------------------------------------------------------

class GGS_syntaxExtensions final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ mProperty_dictionary ;
  public: inline GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ readProperty_dictionary (void) const {
    return mProperty_dictionary ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxExtensions (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDictionary (const GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_dictionary = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxExtensions (const GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ & in_dictionary) ;

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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxExtensions ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgasDeclarationAST struct
//--------------------------------------------------------------------------------------------------

class GGS_galgasDeclarationAST final : public AC_GALGAS_root {
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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgasDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//   enum overrideKind
//--------------------------------------------------------------------------------------------------

class GGS_overrideKind final : public AC_GALGAS_root {
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
  public: void getAssociatedValuesFor_selectOverrideFirstBranch (class GGS_currentVarManager & out_savedManager) const ;
  public: void getAssociatedValuesFor_selectOverrideNextBranches (class GGS_currentVarManager & out_savedManager,
                                                                  class GGS_currentVarManager & out_referenceManager) const ;

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


//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @overrideKind_2E_selectOverrideFirstBranch struct
//--------------------------------------------------------------------------------------------------

class GGS_overrideKind_2E_selectOverrideFirstBranch final : public AC_GALGAS_root {
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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @overrideKind_2E_selectOverrideNextBranches struct
//--------------------------------------------------------------------------------------------------

class GGS_overrideKind_2E_selectOverrideNextBranches final : public AC_GALGAS_root {
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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: optionset @localVariableAttributes
//--------------------------------------------------------------------------------------------------

class GGS_localVariableAttributes final : public AC_GALGAS_root {
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

//--------------------------------- &= operator
  public: void andAssignOperation (const GGS_localVariableAttributes inOperand,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- |= operator
  public: void orAssignOperation (const GGS_localVariableAttributes inOperand,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- ^= operator
  public: void xorAssignOperation (const GGS_localVariableAttributes inOperand,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- -= operator
  public: void minusAssignOperation (const GGS_localVariableAttributes inOperand,
                                     Compiler * inCompiler
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
  public: GGS_localVariableAttributes subtract_operation (const GGS_localVariableAttributes & inOperand,
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


//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableAttributes ;

//--------------------------------------------------------------------------------------------------
//   enum localVarValuation
//--------------------------------------------------------------------------------------------------

class GGS_localVarValuation final : public AC_GALGAS_root {
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
  public: void getAssociatedValuesFor_declared (class GGS_bool & out_usedInSubscope) const ;

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


//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarValuation ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVarValuation_2E_declared struct
//--------------------------------------------------------------------------------------------------

class GGS_localVarValuation_2E_declared final : public AC_GALGAS_root {
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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarValuation_2E_declared_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @scopeLocalVarMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_scopeLocalVarMap_2E_element final : public AC_GALGAS_root {
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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeLocalVarMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@[scopeLocalVarMap] neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (class GGS__5B_scopeLocalVarMap_5D_ & ioObject,
                                    const class GGS_lstring constin_inVarName,
                                    const class GGS_uint constin_inIndex,
                                    class GGS_unifiedTypeMapEntry & out_outType,
                                    class GGS_string & out_outCppName,
                                    class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@[scopeLocalVarMap] writeAccessInSubMap'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_writeAccessInSubMap (class GGS__5B_scopeLocalVarMap_5D_ & ioObject,
                                          const class GGS_lstring constin_inVarName,
                                          const class GGS_uint constin_inIndex,
                                          class GGS_unifiedTypeMapEntry & out_outType,
                                          class GGS_string & out_outCppName,
                                          class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                          Compiler * inCompiler
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
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@[scopeLocalVarMap] readAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readAccess (class GGS__5B_scopeLocalVarMap_5D_ & ioObject,
                                 const class GGS_lstring constin_inVarName,
                                 const class GGS_uint constin_inIndex,
                                 class GGS_unifiedTypeMapEntry & out_outType,
                                 class GGS_string & out_outCppName,
                                 class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarValuation readTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readTransition (class GGS_localVarValuation & ioObject,
                                     const class GGS_lstring constin_inVarName,
                                     const class GGS_localVariableAttributes constin_inAttributes,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@[scopeLocalVarMap] readWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readWriteAccess (class GGS__5B_scopeLocalVarMap_5D_ & ioObject,
                                      const class GGS_lstring constin_inVarName,
                                      const class GGS_uint constin_inIndex,
                                      class GGS_unifiedTypeMapEntry & out_outType,
                                      class GGS_string & out_outCppName,
                                      class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                      Compiler * inCompiler
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
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarValuation checkFinalState'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkFinalState (const class GGS_localVarValuation inObject,
                                      const class GGS_lstring constin_inVarName,
                                      const class GGS_localVariableAttributes constin_inAttributes,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@scopeLocalVarMap checkFinalStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkFinalStates (const class GGS_scopeLocalVarMap inObject,
                                       const class GGS_location constin__5F_inErrorLocation,
                                       Compiler * inCompiler
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
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@scopeLocalVarMap combineMapWith'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_combineMapWith (class GGS_scopeLocalVarMap & ioObject,
                                     const class GGS_scopeLocalVarMap constin_inOtherMap,
                                     class GGS_string & io_ioErrorMessage,
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
//
//Extension mutating proc '@unifiedTypeMap makeEntryFromString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntryFromString (class GGS_unifiedTypeMap & ioObject,
                                          const class GGS_string constin_inKey,
                                          class GGS_unifiedTypeMapEntry & out_outEntry,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMap typeMapEntryOrNullForLKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry extensionGetter_typeMapEntryOrNullForLKey (const class GGS_unifiedTypeMap & inObject,
                                                                         const class GGS_lstring & constinArgument0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@unifiedTypeMap insertType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertType (class GGS_unifiedTypeMap & ioObject,
                                 const class GGS_lstring constin_inTypeName,
                                 const class GGS_unifiedTypeDefinition constin_inTypeDefinition,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMap typeDefinition' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeDefinition extensionGetter_typeDefinition (const class GGS_unifiedTypeMap & inObject,
                                                                const class GGS_lstring & constinArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeDefinition_2E_solved struct
//--------------------------------------------------------------------------------------------------

class GGS_typeDefinition_2E_solved final : public AC_GALGAS_root {
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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMapEntry typeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_typeName (const class GGS_unifiedTypeMapEntry & inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMapEntry baseType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry extensionGetter_baseType (const class GGS_unifiedTypeMapEntry & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@unifiedTypeMapEntry addHeaderFileName1'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName_31_ (const class GGS_unifiedTypeMapEntry inObject,
                                            class GGS_stringset & io_ioInclusions,
                                            Compiler * inCompiler
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
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

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
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

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
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_acceptableParameter_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_acceptableParameter_5D_ (const GGS__5B_acceptableParameter_5D_ & inSource) ;
  public: GGS__5B_acceptableParameter_5D_ & operator = (const GGS__5B_acceptableParameter_5D_ & inSource) ;

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
  public: static GGS__5B_acceptableParameter_5D_ init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_acceptableParameter_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
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

  public: void setter_set (class GGS_acceptableParameter constinArgument0,
                           class GGS_uint constinArgument1,
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


//--------------------------------- Read subcripts
  public: class GGS_acceptableParameter readSubcript__3F_ (const class GGS_uint & in0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


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

class GGS_acceptableParameter final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_formalParameterSignatureElement_5D_ mProperty_mRoutineSignature ;
  public: inline GGS__5B_formalParameterSignatureElement_5D_ readProperty_mRoutineSignature (void) const {
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
  public: inline void setter_setMRoutineSignature (const GGS__5B_formalParameterSignatureElement_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineSignature = inValue ;
  }

  public: inline void setter_setMIsFilePrivate (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsFilePrivate = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_acceptableParameter (const GGS__5B_formalParameterSignatureElement_5D_ & in_mRoutineSignature,
                                   const GGS_bool & in_mIsFilePrivate) ;

//--------------------------------- Copy constructor
  public: GGS_acceptableParameter (const GGS_acceptableParameter & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_acceptableParameter & operator = (const GGS_acceptableParameter & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_acceptableParameter init_21__21_ (const class GGS__5B_formalParameterSignatureElement_5D_ & inOperand0,
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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

  public: class GGS__5B_formalParameterSignatureElement_5D_ current_mRoutineSignature (LOCATION_ARGS) const ;

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
  public: class GGS__5B_formalParameterSignatureElement_5D_ current_mRoutineSignature (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsFilePrivate (LOCATION_ARGS) const ;
  public: class GGS_routineArgumentMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_routineArgumentMap (const UpEnumerator_routineArgumentMap &) = delete ;
  private: UpEnumerator_routineArgumentMap & operator = (const UpEnumerator_routineArgumentMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_routineArgumentMap final : public AC_GALGAS_root {

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
                                 class GGS__5B_formalParameterSignatureElement_5D_ constinArgument1,
                                 class GGS_bool constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsFilePrivateForKey (class GGS_bool constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMRoutineSignatureForKey (class GGS__5B_formalParameterSignatureElement_5D_ constinArgument0,
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

  public: class GGS_bool getter_mIsFilePrivateForKey (const class GGS_string & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterSignatureElement_5D_ getter_mRoutineSignatureForKey (const class GGS_string & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_routineArgumentMap getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_routineArgumentMap_2E_element_3F_ readSubcript__3F_ (const class GGS_string & in0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


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

class GGS_internalRoutineMap_2E_element final : public AC_GALGAS_root {
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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_internalRoutineMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineArgumentMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_routineArgumentMap_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS__5B_formalParameterSignatureElement_5D_ mProperty_mRoutineSignature ;
  public: inline GGS__5B_formalParameterSignatureElement_5D_ readProperty_mRoutineSignature (void) const {
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

  public: inline void setter_setMRoutineSignature (const GGS__5B_formalParameterSignatureElement_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineSignature = inValue ;
  }

  public: inline void setter_setMIsFilePrivate (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsFilePrivate = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineArgumentMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS__5B_formalParameterSignatureElement_5D_ & in_mRoutineSignature,
                                             const GGS_bool & in_mIsFilePrivate) ;

//--------------------------------- Copy constructor
  public: GGS_routineArgumentMap_2E_element (const GGS_routineArgumentMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineArgumentMap_2E_element & operator = (const GGS_routineArgumentMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineArgumentMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS__5B_formalParameterSignatureElement_5D_ & inOperand1,
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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineArgumentMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgas_33_SyntaxExtensionAST struct
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_SyntaxExtensionAST final : public AC_GALGAS_root {
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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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
                                                                           Compiler * inCompiler
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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@formalArgumentPassingModeAST formalArgumentMessage' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_formalArgumentMessage (const class GGS_formalArgumentPassingModeAST & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@[formalParameterAST] keyRepresentation' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_keyRepresentation (const class GGS__5B_formalParameterAST_5D_ & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@[formalInputParameterAST] initializerSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_initializerSignature (const class GGS__5B_formalInputParameterAST_5D_ & inObject,
                                                       Compiler * inCompiler
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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@syntaxInstructionAST analyzeSyntaxInstruction'
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
                                                   class GGS__5B_semanticInstructionForGeneration_5D_ & io_ioInstructionListForGeneration,
                                                   class GGS_localVarManager & io_ioVariableMap,
                                                   class GGS_uint & io_ioSelectMethodCount,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@syntaxInstructionAST transformInstructionForGrammarAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_transformInstructionForGrammarAnalysis (class cPtr_syntaxInstructionAST * inObject,
                                                                 class GGS_terminalSymbolsMapForGrammarAnalysis & io_ioActuallyUsedTerminalSymbolMap,
                                                                 const class GGS_nonTerminalSymbolMapForGrammarAnalysis constin_inNonTerminalSymbolMap,
                                                                 class GGS_uint & io_ioAddedNonTerminalIndex,
                                                                 class GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & io_ioSyntaxInstructionList,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalSymbolsMapForGrammarAnalysis map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_terminalSymbolsMapForGrammarAnalysis final {

  public: DownEnumerator_terminalSymbolsMapForGrammarAnalysis (const class GGS_terminalSymbolsMapForGrammarAnalysis & inMap) ;

  public: ~ DownEnumerator_terminalSymbolsMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mTerminalIndex (LOCATION_ARGS) const ;

  public: class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_terminalSymbolsMapForGrammarAnalysis (const DownEnumerator_terminalSymbolsMapForGrammarAnalysis &) = delete ;
  private: DownEnumerator_terminalSymbolsMapForGrammarAnalysis & operator = (const DownEnumerator_terminalSymbolsMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_terminalSymbolsMapForGrammarAnalysis final {
  public: UpEnumerator_terminalSymbolsMapForGrammarAnalysis (const class GGS_terminalSymbolsMapForGrammarAnalysis & inMap)  ;

  public: ~ UpEnumerator_terminalSymbolsMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mTerminalIndex (LOCATION_ARGS) const ;
  public: class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_terminalSymbolsMapForGrammarAnalysis (const UpEnumerator_terminalSymbolsMapForGrammarAnalysis &) = delete ;
  private: UpEnumerator_terminalSymbolsMapForGrammarAnalysis & operator = (const UpEnumerator_terminalSymbolsMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_terminalSymbolsMapForGrammarAnalysis final : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_terminalSymbolsMapForGrammarAnalysis (void) ;

//--- Handle copy
  public: GGS_terminalSymbolsMapForGrammarAnalysis (const GGS_terminalSymbolsMapForGrammarAnalysis & inSource) ;
  public: GGS_terminalSymbolsMapForGrammarAnalysis & operator = (const GGS_terminalSymbolsMapForGrammarAnalysis & inSource) ;

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
  protected: void performInsert (const class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalSymbolsMapForGrammarAnalysis init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_terminalSymbolsMapForGrammarAnalysis class_func_mapWithMapToOverride (const class GGS_terminalSymbolsMapForGrammarAnalysis & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMTerminalIndexForKey (class GGS_uint constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
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

  public: class GGS_uint getter_mTerminalIndexForKey (const class GGS_string & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_terminalSymbolsMapForGrammarAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ readSubcript__3F_ (const class GGS_string & in0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_terminalSymbolsMapForGrammarAnalysis ;
  friend class DownEnumerator_terminalSymbolsMapForGrammarAnalysis ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ;

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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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
  public: class GGS__5B_semanticInstructionAST_5D_ readProperty_mFunctionInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfFunctionInstructionList (void) const ;

  public: class GGS_bool readProperty_mIsInternal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionDeclarationAST init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                         const class GGS_lstring & inOperand1,
                                                                                                         const class GGS__5B_formalInputParameterAST_5D_ & inOperand2,
                                                                                                         const class GGS_lstring & inOperand3,
                                                                                                         const class GGS_bool & inOperand4,
                                                                                                         const class GGS__5B_semanticInstructionAST_5D_ & inOperand5,
                                                                                                         const class GGS_location & inOperand6,
                                                                                                         const class GGS_bool & inOperand7,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionDeclarationAST & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @functionDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_functionDeclarationAST : public cPtr_externFunctionDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void functionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                   const class GGS_lstring & inOperand1,
                                                                                                   const class GGS__5B_formalInputParameterAST_5D_ & inOperand2,
                                                                                                   const class GGS_lstring & inOperand3,
                                                                                                   const class GGS_bool & inOperand4,
                                                                                                   const class GGS__5B_semanticInstructionAST_5D_ & inOperand5,
                                                                                                   const class GGS_location & inOperand6,
                                                                                                   const class GGS_bool & inOperand7,
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

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionDeclarationAST_2E_weak ;

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

  public: class GGS__5B_lstring_5D_ readProperty_mFilewrapperTextFileExtensionList (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mFilewrapperBinaryFileExtensionList (void) const ;

  public: class GGS__5B_filewrapperTemplateAST_5D_ readProperty_mFilewrapperTemplateList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperDeclarationAST init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                 const class GGS_bool & inOperand1,
                                                                                                 const class GGS_string & inOperand2,
                                                                                                 const class GGS_lstring & inOperand3,
                                                                                                 const class GGS_lstring & inOperand4,
                                                                                                 const class GGS__5B_lstring_5D_ & inOperand5,
                                                                                                 const class GGS__5B_lstring_5D_ & inOperand6,
                                                                                                 const class GGS__5B_filewrapperTemplateAST_5D_ & inOperand7,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperDeclarationAST & inOperand) const ;

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
                                                                                           const class GGS__5B_lstring_5D_ & inOperand5,
                                                                                           const class GGS__5B_lstring_5D_ & inOperand6,
                                                                                           const class GGS__5B_filewrapperTemplateAST_5D_ & inOperand7,
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
  public: GGS__5B_lstring_5D_ mProperty_mFilewrapperTextFileExtensionList ;
  public: GGS__5B_lstring_5D_ mProperty_mFilewrapperBinaryFileExtensionList ;
  public: GGS__5B_filewrapperTemplateAST_5D_ mProperty_mFilewrapperTemplateList ;


//--- Default constructor
  public: cPtr_filewrapperDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperDeclarationAST (const GGS_bool & in_isPredefined,
                                          const GGS_bool & in_mIsInternal,
                                          const GGS_string & in_mSourceFileAbsolutePath,
                                          const GGS_lstring & in_mFilewrapperName,
                                          const GGS_lstring & in_mFilewrapperPath,
                                          const GGS__5B_lstring_5D_ & in_mFilewrapperTextFileExtensionList,
                                          const GGS__5B_lstring_5D_ & in_mFilewrapperBinaryFileExtensionList,
                                          const GGS__5B_filewrapperTemplateAST_5D_ & in_mFilewrapperTemplateList,
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
//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperDeclarationAST_2E_weak & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST_2E_weak ;

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
//--------------------------------- GALGAS class functions
  public: static class GGS_galgas_33_SyntaxComponentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_galgas_33_SyntaxComponentAST_2E_weak & inOperand) const ;

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

  public: class GGS__5B_lstring_5D_ readProperty_mSyntaxComponents (void) const ;

  public: class GGS_lstring readProperty_mStartSymbolName (void) const ;

  public: class GGS__5B_nonTerminalLabelAST_5D_ readProperty_mStartSymbolLabelList (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mUnusedNonterminalList (void) const ;

  public: class GGS_bool readProperty_mHasTranslateFeature (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgas_33_GrammarComponentAST init_21_isPredefined_21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                         const class GGS_lbool & inOperand1,
                                                                                                         const class GGS_lstring & inOperand2,
                                                                                                         const class GGS_lstring & inOperand3,
                                                                                                         const class GGS__5B_lstring_5D_ & inOperand4,
                                                                                                         const class GGS_lstring & inOperand5,
                                                                                                         const class GGS__5B_nonTerminalLabelAST_5D_ & inOperand6,
                                                                                                         const class GGS__5B_lstring_5D_ & inOperand7,
                                                                                                         const class GGS_bool & inOperand8,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_galgas_33_GrammarComponentAST & inOperand) const ;

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
                                                                                                   const class GGS__5B_lstring_5D_ & inOperand4,
                                                                                                   const class GGS_lstring & inOperand5,
                                                                                                   const class GGS__5B_nonTerminalLabelAST_5D_ & inOperand6,
                                                                                                   const class GGS__5B_lstring_5D_ & inOperand7,
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
  public: GGS__5B_lstring_5D_ mProperty_mSyntaxComponents ;
  public: GGS_lstring mProperty_mStartSymbolName ;
  public: GGS__5B_nonTerminalLabelAST_5D_ mProperty_mStartSymbolLabelList ;
  public: GGS__5B_lstring_5D_ mProperty_mUnusedNonterminalList ;
  public: GGS_bool mProperty_mHasTranslateFeature ;


//--- Default constructor
  public: cPtr_galgas_33_GrammarComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_galgas_33_GrammarComponentAST (const GGS_bool & in_isPredefined,
                                              const GGS_lbool & in_mHasIndexing,
                                              const GGS_lstring & in_mGrammarComponentName,
                                              const GGS_lstring & in_mGrammarClass,
                                              const GGS__5B_lstring_5D_ & in_mSyntaxComponents,
                                              const GGS_lstring & in_mStartSymbolName,
                                              const GGS__5B_nonTerminalLabelAST_5D_ & in_mStartSymbolLabelList,
                                              const GGS__5B_lstring_5D_ & in_mUnusedNonterminalList,
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
//--------------------------------- GALGAS class functions
  public: static class GGS_galgas_33_GrammarComponentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_galgas_33_GrammarComponentAST_2E_weak & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST_2E_weak ;

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
//Abstract extension func '@lexicalInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateSwiftCocoaInstructionCode (const class cPtr_lexicalInstructionAST * inObject,
                                                                        const class GGS_string constin_inScannerClassName,
                                                                        const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@abstractLexicalRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateSwiftCocoaCode (const class cPtr_abstractLexicalRuleAST * inObject,
                                                             const class GGS_string constin_inScannerClassName,
                                                             const class GGS_lexiqueAnalysisContext constin__5F_inLexiqueAnalysisContext,
                                                             Compiler * inCompiler
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
  public: static const int32_t kToken_option = 67 ;
  public: static const int32_t kToken_or = 68 ;
  public: static const int32_t kToken_override = 69 ;
  public: static const int32_t kToken_package = 70 ;
  public: static const int32_t kToken_public = 71 ;
  public: static const int32_t kToken_protected = 72 ;
  public: static const int32_t kToken_private = 73 ;
  public: static const int32_t kToken_proc = 74 ;
  public: static const int32_t kToken_project = 75 ;
  public: static const int32_t kToken_repeat = 76 ;
  public: static const int32_t kToken_rewind = 77 ;
  public: static const int32_t kToken_rule = 78 ;
  public: static const int32_t kToken_select = 79 ;
  public: static const int32_t kToken_self = 80 ;
  public: static const int32_t kToken_send = 81 ;
  public: static const int32_t kToken_sortedarray = 82 ;
  public: static const int32_t kToken_spoil = 83 ;
  public: static const int32_t kToken_super = 84 ;
  public: static const int32_t kToken_struct = 85 ;
  public: static const int32_t kToken_style = 86 ;
  public: static const int32_t kToken_switch = 87 ;
  public: static const int32_t kToken_syntax = 88 ;
  public: static const int32_t kToken_tag = 89 ;
  public: static const int32_t kToken_template = 90 ;
  public: static const int32_t kToken_then = 91 ;
  public: static const int32_t kToken_true = 92 ;
  public: static const int32_t kToken_var = 93 ;
  public: static const int32_t kToken_warning = 94 ;
  public: static const int32_t kToken_while = 95 ;
  public: static const int32_t kToken_with = 96 ;
  public: static const int32_t kToken__23_applicationBundleBase = 97 ;
  public: static const int32_t kToken__23_clonable = 98 ;
  public: static const int32_t kToken__23_comparable = 99 ;
  public: static const int32_t kToken__23_equatable = 100 ;
  public: static const int32_t kToken__23_errorMessage = 101 ;
  public: static const int32_t kToken__23_from = 102 ;
  public: static const int32_t kToken__23_generatedInSeparateFile = 103 ;
  public: static const int32_t kToken__23_initArgLabel = 104 ;
  public: static const int32_t kToken__23_insertAfter = 105 ;
  public: static const int32_t kToken__23_insertBefore = 106 ;
  public: static const int32_t kToken__23_insertOrReplaceSetter = 107 ;
  public: static const int32_t kToken__23_insertSetter = 108 ;
  public: static const int32_t kToken__23_nonAtomicSelection = 109 ;
  public: static const int32_t kToken__23_preserved = 110 ;
  public: static const int32_t kToken__23_quietOutputByDefault = 111 ;
  public: static const int32_t kToken__23_replaceBy = 112 ;
  public: static const int32_t kToken__23_remove = 113 ;
  public: static const int32_t kToken__23_removeSetter = 114 ;
  public: static const int32_t kToken__23_replaceSetter = 115 ;
  public: static const int32_t kToken__23_searchMethod = 116 ;
  public: static const int32_t kToken__23_searchSubscript = 117 ;
  public: static const int32_t kToken__23_searchString = 118 ;
  public: static const int32_t kToken__23_templateEndMark = 119 ;
  public: static const int32_t kToken__23_templateReplacement = 120 ;
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
// Phase 1: [templateInstructionForGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_templateInstructionForGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_templateInstructionForGeneration_5D_ (const class GGS__5B_templateInstructionForGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_templateInstructionForGeneration_5D_ (const DownEnumerator__5B_templateInstructionForGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_templateInstructionForGeneration_5D_ & operator = (const DownEnumerator__5B_templateInstructionForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateInstructionForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionForGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_templateInstructionForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_templateInstructionForGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_templateInstructionForGeneration_5D_ (const class GGS__5B_templateInstructionForGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_templateInstructionForGeneration_5D_ (const UpEnumerator__5B_templateInstructionForGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_templateInstructionForGeneration_5D_ & operator = (const UpEnumerator__5B_templateInstructionForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateInstructionForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionForGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_templateInstructionForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_templateInstructionForGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_templateInstructionForGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_templateInstructionForGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_templateInstructionForGeneration_5D_ (const GGS__5B_templateInstructionForGeneration_5D_ & inSource) ;
  public: GGS__5B_templateInstructionForGeneration_5D_ & operator = (const GGS__5B_templateInstructionForGeneration_5D_ & inSource) ;

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
  public: static GGS__5B_templateInstructionForGeneration_5D_ init (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_templateInstructionForGeneration_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_templateInstructionForGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_templateInstructionForGeneration_5D_ add_operation (const GGS__5B_templateInstructionForGeneration_5D_ & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_templateInstructionForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_templateInstructionForGeneration constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_templateInstructionForGeneration & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_templateInstructionForGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_templateInstructionForGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_templateInstructionForGeneration constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_templateInstructionForGeneration getter_first (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionForGeneration getter_last (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateInstructionForGeneration_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateInstructionForGeneration_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                             const class GGS_uint & constinOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_templateInstructionForGeneration readSubcript__3F_ (const class GGS_uint & in0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_templateInstructionForGeneration_5D_ ;
  friend class DownEnumerator__5B_templateInstructionForGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_templateInstructionForGeneration_5D_ ;

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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionForGeneration & inOperand) const ;

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
// Phase 1: [templateInstructionAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_templateInstructionAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_templateInstructionAST_5D_ (const class GGS__5B_templateInstructionAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_templateInstructionAST_5D_ (const DownEnumerator__5B_templateInstructionAST_5D_ &) = delete ;
  private: DownEnumerator__5B_templateInstructionAST_5D_ & operator = (const DownEnumerator__5B_templateInstructionAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateInstructionAST current (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_templateInstructionAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_templateInstructionAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_templateInstructionAST_5D_ (const class GGS__5B_templateInstructionAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_templateInstructionAST_5D_ (const UpEnumerator__5B_templateInstructionAST_5D_ &) = delete ;
  private: UpEnumerator__5B_templateInstructionAST_5D_ & operator = (const UpEnumerator__5B_templateInstructionAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateInstructionAST current (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_templateInstructionAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_templateInstructionAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_templateInstructionAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_templateInstructionAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_templateInstructionAST_5D_ (const GGS__5B_templateInstructionAST_5D_ & inSource) ;
  public: GGS__5B_templateInstructionAST_5D_ & operator = (const GGS__5B_templateInstructionAST_5D_ & inSource) ;

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
  public: static GGS__5B_templateInstructionAST_5D_ init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_templateInstructionAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_templateInstructionAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_templateInstructionAST_5D_ add_operation (const GGS__5B_templateInstructionAST_5D_ & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_templateInstructionAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_templateInstructionAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_templateInstructionAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_templateInstructionAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_templateInstructionAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_templateInstructionAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_templateInstructionAST getter_first (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionAST getter_last (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateInstructionAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateInstructionAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                   const class GGS_uint & constinOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_templateInstructionAST readSubcript__3F_ (const class GGS_uint & in0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_templateInstructionAST_5D_ ;
  friend class DownEnumerator__5B_templateInstructionAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_templateInstructionAST_5D_ ;

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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionAST & inOperand) const ;

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
           class GGS__5B_templateInstructionForGeneration_5D_ & arg_ioInstructionList,
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
//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionAST_2E_weak & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionAST_2E_weak ;

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
           class GGS_uint & arg__ioTemporaryVariableIndex,
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
//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionForGeneration_2E_weak & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak ;

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
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_templateExpressionElementAST & outArgument0,
                              class GGS_uint constinArgument1,
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

  public: void setter_set (class GGS_templateExpressionElementAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_templateExpressionElementAST getter_first (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateExpressionElementAST getter_last (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateExpressionElementAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateExpressionElementAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                         const class GGS_uint & constinOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_templateExpressionElementAST readSubcript__3F_ (const class GGS_uint & in0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


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
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_templateInstructionIfBranchAST & outArgument0,
                              class GGS_uint constinArgument1,
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

  public: void setter_set (class GGS_templateInstructionIfBranchAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_templateInstructionIfBranchAST getter_first (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionIfBranchAST getter_last (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateInstructionIfBranchAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateInstructionIfBranchAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                           const class GGS_uint & constinOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_templateInstructionIfBranchAST readSubcript__3F_ (const class GGS_uint & in0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


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

  public: GGS__5B_templateInstructionAST_5D_ mProperty_mInstructionList ;
  public: inline GGS__5B_templateInstructionAST_5D_ readProperty_mInstructionList (void) const {
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

  public: inline void setter_setMInstructionList (const GGS__5B_templateInstructionAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateInstructionIfBranchAST (const GGS_templateExpressionAST & in_mExpression,
                                              const GGS__5B_templateInstructionAST_5D_ & in_mInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_templateInstructionIfBranchAST (const GGS_templateInstructionIfBranchAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateInstructionIfBranchAST & operator = (const GGS_templateInstructionIfBranchAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionIfBranchAST init_21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                  const class GGS__5B_templateInstructionAST_5D_ & inOperand1,
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
//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionStringForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionStringForGeneration_2E_weak & inOperand) const ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration_2E_weak ;

