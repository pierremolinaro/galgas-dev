#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFunctionFormalArgumentList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalFunctionFormalArgumentList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_lexicalFunctionFormalArgumentList (const class GGS_lexicalFunctionFormalArgumentList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
  public: class GGS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalFunctionFormalArgumentList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalFunctionFormalArgumentList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_lexicalFunctionFormalArgumentList (const class GGS_lexicalFunctionFormalArgumentList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
  public: class GGS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalFunctionFormalArgumentList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFunctionFormalArgumentList list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionFormalArgumentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_lexicalFunctionFormalArgumentList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_lexicalFunctionFormalArgumentList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  public: static class GGS_lexicalFunctionFormalArgumentList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_lexicalFunctionFormalArgumentList class_func_listWithValue (const class GGS_lexicalTypeEnum & inOperand0,
                                                                                       const class GGS_string & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_lexicalFunctionFormalArgumentList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lexicalTypeEnum & inOperand0,
                                                    const class GGS_string & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_lexicalFunctionFormalArgumentList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_lexicalFunctionFormalArgumentList add_operation (const GGS_lexicalFunctionFormalArgumentList & inOperand,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lexicalTypeEnum constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lexicalTypeEnum constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lexicalTypeEnum & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lexicalTypeEnum & outArgument0,
                                                class GGS_string & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lexicalTypeEnum & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArgumentNameForCommentAtIndex (class GGS_string constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalTypeAtIndex (class GGS_lexicalTypeEnum constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lexicalTypeEnum & outArgument0,
                                              class GGS_string & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lexicalTypeEnum & outArgument0,
                                             class GGS_string & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mArgumentNameForCommentAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalTypeEnum getter_mLexicalTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalFunctionFormalArgumentList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalFunctionFormalArgumentList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalFunctionFormalArgumentList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalFunctionFormalArgumentList ;
  friend class DownEnumerator_lexicalFunctionFormalArgumentList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalFunctionFormalArgumentList_2E_element class_func_new (const class GGS_lexicalTypeEnum & inOperand0,
                                                                                        const class GGS_string & inOperand1,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFunctionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_lexicalFunctionMap ;

//--------------------------------------------------------------------------------------------------
//  MapFor_lexicalFunctionMap
//--------------------------------------------------------------------------------------------------

class MapFor_lexicalFunctionMap : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_lexicalFunctionMap > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_lexicalFunctionMap (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_lexicalFunctionMap (void) ;

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

  public: MapFor_lexicalFunctionMap (const MapFor_lexicalFunctionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_lexicalFunctionMap & operator = (const MapFor_lexicalFunctionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_lexicalFunctionMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_lexicalFunctionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_lexicalFunctionMap_2E_element>
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

  protected: const SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_lexicalFunctionMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_lexicalFunctionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_lexicalFunctionMap & ioResult,
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

class DownEnumerator_lexicalFunctionMap final {

//--- Constructor
  public: DownEnumerator_lexicalFunctionMap (const class GGS_lexicalFunctionMap & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lexicalFunctionFormalArgumentList current_mLexicalTypeList (LOCATION_ARGS) const ;

  public: class GGS_lexicalTypeEnum current_mReturnedLexicalType (LOCATION_ARGS) const ;

  public: class GGS_string current_mReplacementFunctionName (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsExtern (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_lexicalFunctionMap_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_lexicalFunctionMap (const DownEnumerator_lexicalFunctionMap &) = delete ;
  private: DownEnumerator_lexicalFunctionMap & operator = (const DownEnumerator_lexicalFunctionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalFunctionMap final {
  public: UpEnumerator_lexicalFunctionMap (const class GGS_lexicalFunctionMap & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lexicalFunctionFormalArgumentList current_mLexicalTypeList (LOCATION_ARGS) const ;
  public: class GGS_lexicalTypeEnum current_mReturnedLexicalType (LOCATION_ARGS) const ;
  public: class GGS_string current_mReplacementFunctionName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsExtern (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalFunctionMap_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_lexicalFunctionMap (const UpEnumerator_lexicalFunctionMap &) = delete ;
  private: UpEnumerator_lexicalFunctionMap & operator = (const UpEnumerator_lexicalFunctionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionMap : public AC_GALGAS_root {

//--------------------------------- Private property
  private: OptionalSharedRef <MapRootFor_lexicalFunctionMap > mSharedRoot ;

//--------------------------------- Default constructor
  public: GGS_lexicalFunctionMap (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_lexicalFunctionMap (void) ;

//--------------------------------- Handle copy
  public: GGS_lexicalFunctionMap (const GGS_lexicalFunctionMap & inSource) ;
  public: GGS_lexicalFunctionMap & operator = (const GGS_lexicalFunctionMap & inSource) ;
  
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

  // public: GGS_lexicalFunctionMap (const GGS_lexicalFunctionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_lexicalFunctionMap & operator = (const GGS_lexicalFunctionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_lexicalFunctionMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_lexicalFunctionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_lexicalFunctionMap_2E_element>
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

  protected: const SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_lexicalFunctionMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalFunctionMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const GGS_lexicalFunctionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class GGS_lexicalFunctionMap & ioResult,
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
  public: static GGS_lexicalFunctionMap init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalFunctionMap extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalFunctionMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_lexicalFunctionMap class_func_mapWithMapToOverride (const class GGS_lexicalFunctionMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_lexicalFunctionFormalArgumentList constinArgument1,
                                                  class GGS_lexicalTypeEnum constinArgument2,
                                                  class GGS_string constinArgument3,
                                                  class GGS_bool constinArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsExternForKey (class GGS_bool constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalTypeListForKey (class GGS_lexicalFunctionFormalArgumentList constinArgument0,
                                                                  class GGS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReplacementFunctionNameForKey (class GGS_string constinArgument0,
                                                                          class GGS_string constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnedLexicalTypeForKey (class GGS_lexicalTypeEnum constinArgument0,
                                                                      class GGS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_lexicalFunctionFormalArgumentList & outArgument1,
                                                  class GGS_lexicalTypeEnum & outArgument2,
                                                  class GGS_string & outArgument3,
                                                  class GGS_bool & outArgument4,
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

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsExternForKey (const class GGS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalFunctionFormalArgumentList getter_mLexicalTypeListForKey (const class GGS_string & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mReplacementFunctionNameForKey (const class GGS_string & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalTypeEnum getter_mReturnedLexicalTypeForKey (const class GGS_string & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalFunctionMap getter_overriddenMap (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_lexicalFunctionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalFunctionMap ;
  friend class DownEnumerator_lexicalFunctionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionMap ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalFunctionMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lexicalFunctionFormalArgumentList & inOperand1,
                                                                         const class GGS_lexicalTypeEnum & inOperand2,
                                                                         const class GGS_string & inOperand3,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateDelimitorList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_templateDelimitorList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_templateDelimitorList (const class GGS_templateDelimitorList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mStartString (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mEndString (LOCATION_ARGS) const ;
  public: class GGS_bool current_mPreservesStartDelimiter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateDelimitorList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_templateDelimitorList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_templateDelimitorList (const class GGS_templateDelimitorList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mStartString (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mEndString (LOCATION_ARGS) const ;
  public: class GGS_bool current_mPreservesStartDelimiter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateDelimitorList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateDelimitorList list
//--------------------------------------------------------------------------------------------------

class GGS_templateDelimitorList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_templateDelimitorList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_templateDelimitorList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mStartString,
                                                 const class GGS_lstring & in_mEndString,
                                                 const class GGS_bool & in_mPreservesStartDelimiter
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateDelimitorList init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateDelimitorList extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateDelimitorList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_templateDelimitorList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_bool & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_templateDelimitorList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_bool & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_templateDelimitorList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_templateDelimitorList add_operation (const GGS_templateDelimitorList & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_bool constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_bool constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_bool & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_bool & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_bool & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndStringAtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPreservesStartDelimiterAtIndex (class GGS_bool constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartStringAtIndex (class GGS_lstring constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_bool & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_bool & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mEndStringAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mPreservesStartDelimiterAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mStartStringAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateDelimitorList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateDelimitorList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_templateDelimitorList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_templateDelimitorList ;
  friend class DownEnumerator_templateDelimitorList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDelimitorList ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_templateDelimitorList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_bool & inOperand2,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDelimitorList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @styleMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_styleMap ;

//--------------------------------------------------------------------------------------------------
//  MapFor_styleMap
//--------------------------------------------------------------------------------------------------

class MapFor_styleMap : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_styleMap > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_styleMap (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_styleMap (void) ;

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

  public: MapFor_styleMap (const MapFor_styleMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_styleMap & operator = (const MapFor_styleMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_styleMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_styleMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_styleMap_2E_element>
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

  protected: const SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_styleMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_styleMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_styleMap & ioResult,
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

class DownEnumerator_styleMap final {

//--- Constructor
  public: DownEnumerator_styleMap (const class GGS_styleMap & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mComment (LOCATION_ARGS) const ;

  public: class GGS_uint current_mStyleIndex (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_styleMap_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_styleMap (const DownEnumerator_styleMap &) = delete ;
  private: DownEnumerator_styleMap & operator = (const DownEnumerator_styleMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_styleMap final {
  public: UpEnumerator_styleMap (const class GGS_styleMap & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mComment (LOCATION_ARGS) const ;
  public: class GGS_uint current_mStyleIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_styleMap_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_styleMap (const UpEnumerator_styleMap &) = delete ;
  private: UpEnumerator_styleMap & operator = (const UpEnumerator_styleMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_styleMap : public AC_GALGAS_root {

//--------------------------------- Private property
  private: OptionalSharedRef <MapRootFor_styleMap > mSharedRoot ;

//--------------------------------- Default constructor
  public: GGS_styleMap (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_styleMap (void) ;

//--------------------------------- Handle copy
  public: GGS_styleMap (const GGS_styleMap & inSource) ;
  public: GGS_styleMap & operator = (const GGS_styleMap & inSource) ;
  
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

  // public: GGS_styleMap (const GGS_styleMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_styleMap & operator = (const GGS_styleMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_styleMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_styleMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_styleMap_2E_element>
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

  protected: const SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_styleMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_styleMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const GGS_styleMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class GGS_styleMap & ioResult,
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
  public: static GGS_styleMap init (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_styleMap extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_styleMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_styleMap class_func_mapWithMapToOverride (const class GGS_styleMap & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring constinArgument1,
                                                  class GGS_uint constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCommentForKey (class GGS_lstring constinArgument0,
                                                          class GGS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStyleIndexForKey (class GGS_uint constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class GGS_uint & outArgument2,
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

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mCommentForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mStyleIndexForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_styleMap getter_overriddenMap (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_styleMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_styleMap ;
  friend class DownEnumerator_styleMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_styleMap ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_styleMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                               const class GGS_lstring & inOperand1,
                                                               const class GGS_uint & inOperand2,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_styleMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_styleMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalTagMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_lexicalTagMap ;

//--------------------------------------------------------------------------------------------------
//  MapFor_lexicalTagMap
//--------------------------------------------------------------------------------------------------

class MapFor_lexicalTagMap : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_lexicalTagMap > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_lexicalTagMap (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_lexicalTagMap (void) ;

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

  public: MapFor_lexicalTagMap (const MapFor_lexicalTagMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_lexicalTagMap & operator = (const MapFor_lexicalTagMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_lexicalTagMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_lexicalTagMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_lexicalTagMap_2E_element>
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

  protected: const SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_lexicalTagMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_lexicalTagMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_lexicalTagMap & ioResult,
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

class DownEnumerator_lexicalTagMap final {

//--- Constructor
  public: DownEnumerator_lexicalTagMap (const class GGS_lexicalTagMap & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_lexicalTagMap_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_lexicalTagMap (const DownEnumerator_lexicalTagMap &) = delete ;
  private: DownEnumerator_lexicalTagMap & operator = (const DownEnumerator_lexicalTagMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalTagMap final {
  public: UpEnumerator_lexicalTagMap (const class GGS_lexicalTagMap & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalTagMap_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_lexicalTagMap (const UpEnumerator_lexicalTagMap &) = delete ;
  private: UpEnumerator_lexicalTagMap & operator = (const UpEnumerator_lexicalTagMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_lexicalTagMap : public AC_GALGAS_root {

//--------------------------------- Private property
  private: OptionalSharedRef <MapRootFor_lexicalTagMap > mSharedRoot ;

//--------------------------------- Default constructor
  public: GGS_lexicalTagMap (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_lexicalTagMap (void) ;

//--------------------------------- Handle copy
  public: GGS_lexicalTagMap (const GGS_lexicalTagMap & inSource) ;
  public: GGS_lexicalTagMap & operator = (const GGS_lexicalTagMap & inSource) ;
  
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

  // public: GGS_lexicalTagMap (const GGS_lexicalTagMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_lexicalTagMap & operator = (const GGS_lexicalTagMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_lexicalTagMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_lexicalTagMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_lexicalTagMap_2E_element>
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

  protected: const SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_lexicalTagMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const GGS_lexicalTagMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class GGS_lexicalTagMap & ioResult,
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
  public: static GGS_lexicalTagMap init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalTagMap extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalTagMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_lexicalTagMap class_func_mapWithMapToOverride (const class GGS_lexicalTagMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
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

  public: VIRTUAL_IN_DEBUG class GGS_lexicalTagMap getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_lexicalTagMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalTagMap ;
  friend class DownEnumerator_lexicalTagMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagMap ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalTagMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum lexicalTypeBaseName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_lexicalTypeBaseName (const class GGS_lexicalTypeEnum & inObject,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateConditionCode (const class cPtr_lexicalExpressionAST * inObject,
                                                            const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexiqueAnalysisContext struct
//--------------------------------------------------------------------------------------------------

class GGS_lexiqueAnalysisContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mLexiqueName ;
  public: inline GGS_string readProperty_mLexiqueName (void) const {
    return mProperty_mLexiqueName ;
  }

  public: GGS_lexicalRoutineMap mProperty_mLexicalRoutineMessageMap ;
  public: inline GGS_lexicalRoutineMap readProperty_mLexicalRoutineMessageMap (void) const {
    return mProperty_mLexicalRoutineMessageMap ;
  }

  public: GGS_lexicalFunctionMap mProperty_mLexicalFunctionMap ;
  public: inline GGS_lexicalFunctionMap readProperty_mLexicalFunctionMap (void) const {
    return mProperty_mLexicalFunctionMap ;
  }

  public: GGS_lexicalMessageMap mProperty_mLexicalMessageMap ;
  public: inline GGS_lexicalMessageMap readProperty_mLexicalMessageMap (void) const {
    return mProperty_mLexicalMessageMap ;
  }

  public: GGS_terminalMap mProperty_mTerminalMap ;
  public: inline GGS_terminalMap readProperty_mTerminalMap (void) const {
    return mProperty_mTerminalMap ;
  }

  public: GGS_terminalList mProperty_mTerminalList ;
  public: inline GGS_terminalList readProperty_mTerminalList (void) const {
    return mProperty_mTerminalList ;
  }

  public: GGS_lexicalAttributeMap mProperty_mLexicalAttributeMap ;
  public: inline GGS_lexicalAttributeMap readProperty_mLexicalAttributeMap (void) const {
    return mProperty_mLexicalAttributeMap ;
  }

  public: GGS_lexicalExplicitTokenListMapMap mProperty_mLexicalTokenListMap ;
  public: inline GGS_lexicalExplicitTokenListMapMap readProperty_mLexicalTokenListMap (void) const {
    return mProperty_mLexicalTokenListMap ;
  }

  public: GGS_stringset mProperty_mUnicodeStringToGenerate ;
  public: inline GGS_stringset readProperty_mUnicodeStringToGenerate (void) const {
    return mProperty_mUnicodeStringToGenerate ;
  }

  public: GGS_templateDelimitorList mProperty_mTemplateDelimitorList ;
  public: inline GGS_templateDelimitorList readProperty_mTemplateDelimitorList (void) const {
    return mProperty_mTemplateDelimitorList ;
  }

  public: GGS_styleMap mProperty_mStyleMap ;
  public: inline GGS_styleMap readProperty_mStyleMap (void) const {
    return mProperty_mStyleMap ;
  }

  public: GGS_stringset mProperty_mUnicodeTestFunctions ;
  public: inline GGS_stringset readProperty_mUnicodeTestFunctions (void) const {
    return mProperty_mUnicodeTestFunctions ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexiqueAnalysisContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexiqueName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexiqueName = inValue ;
  }

  public: inline void setter_setMLexicalRoutineMessageMap (const GGS_lexicalRoutineMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalRoutineMessageMap = inValue ;
  }

  public: inline void setter_setMLexicalFunctionMap (const GGS_lexicalFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalFunctionMap = inValue ;
  }

  public: inline void setter_setMLexicalMessageMap (const GGS_lexicalMessageMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalMessageMap = inValue ;
  }

  public: inline void setter_setMTerminalMap (const GGS_terminalMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalMap = inValue ;
  }

  public: inline void setter_setMTerminalList (const GGS_terminalList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalList = inValue ;
  }

  public: inline void setter_setMLexicalAttributeMap (const GGS_lexicalAttributeMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalAttributeMap = inValue ;
  }

  public: inline void setter_setMLexicalTokenListMap (const GGS_lexicalExplicitTokenListMapMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalTokenListMap = inValue ;
  }

  public: inline void setter_setMUnicodeStringToGenerate (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnicodeStringToGenerate = inValue ;
  }

  public: inline void setter_setMTemplateDelimitorList (const GGS_templateDelimitorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTemplateDelimitorList = inValue ;
  }

  public: inline void setter_setMStyleMap (const GGS_styleMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStyleMap = inValue ;
  }

  public: inline void setter_setMUnicodeTestFunctions (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnicodeTestFunctions = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexiqueAnalysisContext (const GGS_string & in_mLexiqueName,
                                      const GGS_lexicalRoutineMap & in_mLexicalRoutineMessageMap,
                                      const GGS_lexicalFunctionMap & in_mLexicalFunctionMap,
                                      const GGS_lexicalMessageMap & in_mLexicalMessageMap,
                                      const GGS_terminalMap & in_mTerminalMap,
                                      const GGS_terminalList & in_mTerminalList,
                                      const GGS_lexicalAttributeMap & in_mLexicalAttributeMap,
                                      const GGS_lexicalExplicitTokenListMapMap & in_mLexicalTokenListMap,
                                      const GGS_stringset & in_mUnicodeStringToGenerate,
                                      const GGS_templateDelimitorList & in_mTemplateDelimitorList,
                                      const GGS_styleMap & in_mStyleMap,
                                      const GGS_stringset & in_mUnicodeTestFunctions) ;

//--------------------------------- Copy constructor
  public: GGS_lexiqueAnalysisContext (const GGS_lexiqueAnalysisContext & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexiqueAnalysisContext & operator = (const GGS_lexiqueAnalysisContext & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexiqueAnalysisContext init_21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                  const class GGS_lexicalRoutineMap & inOperand1,
                                                                                                  const class GGS_lexicalFunctionMap & inOperand2,
                                                                                                  const class GGS_lexicalMessageMap & inOperand3,
                                                                                                  const class GGS_terminalMap & inOperand4,
                                                                                                  const class GGS_terminalList & inOperand5,
                                                                                                  const class GGS_lexicalAttributeMap & inOperand6,
                                                                                                  const class GGS_lexicalExplicitTokenListMapMap & inOperand7,
                                                                                                  const class GGS_stringset & inOperand8,
                                                                                                  const class GGS_templateDelimitorList & inOperand9,
                                                                                                  const class GGS_styleMap & inOperand10,
                                                                                                  const class GGS_stringset & inOperand11,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexiqueAnalysisContext extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexiqueAnalysisContext class_func_new (const class GGS_string & inOperand0,
                                                                  const class GGS_lexicalRoutineMap & inOperand1,
                                                                  const class GGS_lexicalFunctionMap & inOperand2,
                                                                  const class GGS_lexicalMessageMap & inOperand3,
                                                                  const class GGS_terminalMap & inOperand4,
                                                                  const class GGS_terminalList & inOperand5,
                                                                  const class GGS_lexicalAttributeMap & inOperand6,
                                                                  const class GGS_lexicalExplicitTokenListMapMap & inOperand7,
                                                                  const class GGS_stringset & inOperand8,
                                                                  const class GGS_templateDelimitorList & inOperand9,
                                                                  const class GGS_styleMap & inOperand10,
                                                                  const class GGS_stringset & inOperand11,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueAnalysisContext ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateRoutineOrFunctionArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalSendDefaultActionAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateDefaultSendCode (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                              const class GGS_string constin_inScannerClassName,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateLexicalInstructionCode (const class cPtr_lexicalInstructionAST * inObject,
                                                                     const class GGS_string constin_inScannerClassName,
                                                                     const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_lexicalInstructionUsesLoopLocalVariable (const class cPtr_lexicalInstructionAST * inObject,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateLexicalRuleCode (const class cPtr_abstractLexicalRuleAST * inObject,
                                                              const class GGS_string constin_inScannerClassName,
                                                              const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateObjcCocoaConditionCode (const class cPtr_lexicalExpressionAST * inObject,
                                                                     const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateSwiftCocoaConditionCode (const class cPtr_lexicalExpressionAST * inObject,
                                                                      const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateObjcCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateObjcCocoaRoutineOrFunctionArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalSendDefaultActionAST generateObjcCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateObjcCocoaDefaultSendCode (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                       const class GGS_string constin_inScannerClassName,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalSendDefaultActionAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateSwiftCocoaDefaultSendCode (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                        const class GGS_string constin_inScannerClassName,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateObjcCocoaInstructionCode (const class cPtr_lexicalInstructionAST * inObject,
                                                                       const class GGS_string constin_inScannerClassName,
                                                                       const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateSwiftCocoaInstructionCode (const class cPtr_lexicalInstructionAST * inObject,
                                                                        const class GGS_string constin_inScannerClassName,
                                                                        const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST generateObjcCocoaCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateObjcCocoaCode (const class cPtr_abstractLexicalRuleAST * inObject,
                                                            const class GGS_string constin_inScannerClassName,
                                                            const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateSwiftCocoaCode (const class cPtr_abstractLexicalRuleAST * inObject,
                                                             const class GGS_string constin_inScannerClassName,
                                                             const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum cppTypeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_cppTypeName (const class GGS_lexicalTypeEnum & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum appendMethodName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_appendMethodName (const class GGS_lexicalTypeEnum & inObject,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum appendArgumentOfMethod' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_appendArgumentOfMethod (const class GGS_lexicalTypeEnum & inObject,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum initialization' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_initialization (const class GGS_lexicalTypeEnum & inObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum cocoaTypeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_cocoaTypeName (const class GGS_lexicalTypeEnum & inObject,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum swiftTypeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_swiftTypeName (const class GGS_lexicalTypeEnum & inObject,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum needsReferenceInInputOutputInCocoa' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_needsReferenceInInputOutputInCocoa (const class GGS_lexicalTypeEnum & inObject,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum cocoaInitializationCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_cocoaInitializationCode (const class GGS_lexicalTypeEnum & inObject,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum swiftInitializationCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_swiftInitializationCode (const class GGS_lexicalTypeEnum & inObject,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum cocoaResetPrefix' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_cocoaResetPrefix (const class GGS_lexicalTypeEnum & inObject,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum cocoaReset' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_cocoaReset (const class GGS_lexicalTypeEnum & inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalSendDefaultActionAST checkLexicalDefaultAction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalDefaultAction (class cPtr_lexicalSendDefaultActionAST * inObject,
                                                    class GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalExpressionAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalExpression (class cPtr_lexicalExpressionAST * inObject,
                                                 class GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalFunctionCallArgument (class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                           class GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                           const class GGS_lexicalTypeEnum constin_inLexicalRoutineFormalArgumentType,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                          class GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          const class GGS_lexicalTypeEnum constin_inLexicalRoutineFormalArgumentType,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalInstruction (class cPtr_lexicalInstructionAST * inObject,
                                                  class GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                  class GGS_lexicalTagMap & io_ioTagMap,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLexicalRuleAST checkLexicalRule'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRule (class cPtr_abstractLexicalRuleAST * inObject,
                                           class GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalStructuredSendInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalStructuredSendInstructionAST : public GGS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalStructuredSendInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalStructuredSendInstructionAST (const class cPtr_lexicalStructuredSendInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lexicalSendSearchListAST readProperty_mLexicalSendSearchList (void) const ;

  public: class GGS_lexicalSendDefaultActionAST readProperty_mLexicalSendDefaultAction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalStructuredSendInstructionAST init_21__21_ (const class GGS_lexicalSendSearchListAST & inOperand0,
                                                                       const class GGS_lexicalSendDefaultActionAST & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalStructuredSendInstructionAST extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalStructuredSendInstructionAST class_func_new (const class GGS_lexicalSendSearchListAST & inOperand0,
                                                                               const class GGS_lexicalSendDefaultActionAST & inOperand1,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalStructuredSendInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalStructuredSendInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalStructuredSendInstructionAST : public cPtr_lexicalInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalStructuredSendInstructionAST_init_21__21_ (const class GGS_lexicalSendSearchListAST & inOperand0,
                                                                 const class GGS_lexicalSendDefaultActionAST & inOperand1,
                                                                 Compiler * inCompiler) ;


//--- Extension getter generateLexicalInstructionCode
  public: virtual class GGS_string getter_generateLexicalInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateObjcCocoaInstructionCode
  public: virtual class GGS_string getter_generateObjcCocoaInstructionCode (const class GGS_string inScannerClassName,
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
  public: GGS_lexicalSendSearchListAST mProperty_mLexicalSendSearchList ;
  public: GGS_lexicalSendDefaultActionAST mProperty_mLexicalSendDefaultAction ;


//--- Default constructor
  public: cPtr_lexicalStructuredSendInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalStructuredSendInstructionAST (const GGS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
                                                    const GGS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalStructuredSendInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalStructuredSendInstructionAST_2E_weak : public GGS_lexicalInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalStructuredSendInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalStructuredSendInstructionAST_2E_weak (const class GGS_lexicalStructuredSendInstructionAST & inSource) ;

  public: GGS_lexicalStructuredSendInstructionAST_2E_weak & operator = (const class GGS_lexicalStructuredSendInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalStructuredSendInstructionAST_2E_weak init_nil (void) {
    GGS_lexicalStructuredSendInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalStructuredSendInstructionAST bang_lexicalStructuredSendInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalStructuredSendInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_lexicalStructuredSendInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalStructuredSendInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalStructuredSendInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalDropInstructionAST class_func_new (const class GGS_lstring & inOperand0,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalDropInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalDropInstructionAST ;

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

//--- Extension getter generateObjcCocoaInstructionCode
  public: virtual class GGS_string getter_generateObjcCocoaInstructionCode (const class GGS_string inScannerClassName,
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalDropInstructionAST_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalErrorInstructionAST class_func_new (const class GGS_lstring & inOperand0,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalErrorInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ;

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

//--- Extension getter generateObjcCocoaInstructionCode
  public: virtual class GGS_string getter_generateObjcCocoaInstructionCode (const class GGS_string inScannerClassName,
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalErrorInstructionAST_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalLogInstructionAST class_func_new (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalLogInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;

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

//--- Extension getter generateObjcCocoaInstructionCode
  public: virtual class GGS_string getter_generateObjcCocoaInstructionCode (const class GGS_string inScannerClassName,
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalLogInstructionAST_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalRepeatInstructionAST class_func_new (const class GGS_lexicalInstructionListAST & inOperand0,
                                                                       const class GGS_lexicalWhileBranchListAST & inOperand1,
                                                                       const class GGS_location & inOperand2,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalRepeatInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;

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

//--- Extension getter generateObjcCocoaInstructionCode
  public: virtual class GGS_string getter_generateObjcCocoaInstructionCode (const class GGS_string inScannerClassName,
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalRewindInstructionAST class_func_new (const class GGS_lstring & inOperand0,
                                                                       const class GGS_lstring & inOperand1,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalRewindInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;

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

//--- Extension getter generateObjcCocoaInstructionCode
  public: virtual class GGS_string getter_generateObjcCocoaInstructionCode (const class GGS_string inScannerClassName,
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRewindInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractLexicalRoutineActualArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractLexicalRoutineActualArgumentAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractLexicalRoutineActualArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractLexicalRoutineActualArgumentAST (const class cPtr_abstractLexicalRoutineActualArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mActualPassingModeLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractLexicalRoutineActualArgumentAST init_21_ (const class GGS_location & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractLexicalRoutineActualArgumentAST extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractLexicalRoutineActualArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractLexicalRoutineActualArgumentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractLexicalRoutineActualArgumentAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractLexicalRoutineActualArgumentAST_init_21_ (const class GGS_location & inOperand0,
                                                                 Compiler * inCompiler) ;


//--- Extension getter generateObjcCocoaRoutineArgument
  public: virtual class GGS_string getter_generateObjcCocoaRoutineArgument (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateRoutineArgument
  public: virtual class GGS_string getter_generateRoutineArgument (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateSwiftCocoaRoutineArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineArgument (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalArgumentModeAST arg_inLexicalRoutineFormalArgumentMode,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties
  public: GGS_location mProperty_mActualPassingModeLocation ;


//--- Default constructor
  public: cPtr_abstractLexicalRoutineActualArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractLexicalRoutineActualArgumentAST (const GGS_location & in_mActualPassingModeLocation,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractLexicalRoutineActualArgumentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractLexicalRoutineActualArgumentAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractLexicalRoutineActualArgumentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractLexicalRoutineActualArgumentAST_2E_weak (const class GGS_abstractLexicalRoutineActualArgumentAST & inSource) ;

  public: GGS_abstractLexicalRoutineActualArgumentAST_2E_weak & operator = (const class GGS_abstractLexicalRoutineActualArgumentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractLexicalRoutineActualArgumentAST_2E_weak init_nil (void) {
    GGS_abstractLexicalRoutineActualArgumentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractLexicalRoutineActualArgumentAST bang_abstractLexicalRoutineActualArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractLexicalRoutineActualArgumentAST unwrappedValue (void) const ;

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
  public: static GGS_abstractLexicalRoutineActualArgumentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractLexicalRoutineActualArgumentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractLexicalRoutineActualArgumentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalAttributeInputOutputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalAttributeInputOutputArgumentAST : public GGS_abstractLexicalRoutineActualArgumentAST {
//--------------------------------- Default constructor
  public: GGS_lexicalAttributeInputOutputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalAttributeInputOutputArgumentAST (const class cPtr_lexicalAttributeInputOutputArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mAttributeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalAttributeInputOutputArgumentAST init_21__21_ (const class GGS_location & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalAttributeInputOutputArgumentAST extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalAttributeInputOutputArgumentAST class_func_new (const class GGS_location & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalAttributeInputOutputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalAttributeInputOutputArgumentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalAttributeInputOutputArgumentAST : public cPtr_abstractLexicalRoutineActualArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalAttributeInputOutputArgumentAST_init_21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    Compiler * inCompiler) ;


//--- Extension getter generateObjcCocoaRoutineArgument
  public: virtual class GGS_string getter_generateObjcCocoaRoutineArgument (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateRoutineArgument
  public: virtual class GGS_string getter_generateRoutineArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaRoutineArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineArgument (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalArgumentModeAST arg_inLexicalRoutineFormalArgumentMode,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mAttributeName ;


//--- Default constructor
  public: cPtr_lexicalAttributeInputOutputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalAttributeInputOutputArgumentAST (const GGS_location & in_mActualPassingModeLocation,
                                                       const GGS_lstring & in_mAttributeName,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalAttributeInputOutputArgumentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalAttributeInputOutputArgumentAST_2E_weak : public GGS_abstractLexicalRoutineActualArgumentAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalAttributeInputOutputArgumentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalAttributeInputOutputArgumentAST_2E_weak (const class GGS_lexicalAttributeInputOutputArgumentAST & inSource) ;

  public: GGS_lexicalAttributeInputOutputArgumentAST_2E_weak & operator = (const class GGS_lexicalAttributeInputOutputArgumentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalAttributeInputOutputArgumentAST_2E_weak init_nil (void) {
    GGS_lexicalAttributeInputOutputArgumentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalAttributeInputOutputArgumentAST bang_lexicalAttributeInputOutputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalAttributeInputOutputArgumentAST unwrappedValue (void) const ;

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
  public: static GGS_lexicalAttributeInputOutputArgumentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalAttributeInputOutputArgumentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalAttributeInputOutputArgumentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFormalInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFormalInputArgumentAST : public GGS_abstractLexicalRoutineActualArgumentAST {
//--------------------------------- Default constructor
  public: GGS_lexicalFormalInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalFormalInputArgumentAST (const class cPtr_lexicalFormalInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST readProperty_mRoutineOrFunctionFormalInputArgument (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalFormalInputArgumentAST init_21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalFormalInputArgumentAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalFormalInputArgumentAST class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand1,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalFormalInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalFormalInputArgumentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalFormalInputArgumentAST : public cPtr_abstractLexicalRoutineActualArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalFormalInputArgumentAST_init_21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand1,
                                                           Compiler * inCompiler) ;


//--- Extension getter generateObjcCocoaRoutineArgument
  public: virtual class GGS_string getter_generateObjcCocoaRoutineArgument (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateRoutineArgument
  public: virtual class GGS_string getter_generateRoutineArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaRoutineArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineArgument (const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           const class GGS_lexicalArgumentModeAST arg_inLexicalRoutineFormalArgumentMode,
           const class GGS_lexicalTypeEnum arg_inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lexicalRoutineOrFunctionFormalInputArgumentAST mProperty_mRoutineOrFunctionFormalInputArgument ;


//--- Default constructor
  public: cPtr_lexicalFormalInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalFormalInputArgumentAST (const GGS_location & in_mActualPassingModeLocation,
                                              const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFormalInputArgumentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFormalInputArgumentAST_2E_weak : public GGS_abstractLexicalRoutineActualArgumentAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalFormalInputArgumentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalFormalInputArgumentAST_2E_weak (const class GGS_lexicalFormalInputArgumentAST & inSource) ;

  public: GGS_lexicalFormalInputArgumentAST_2E_weak & operator = (const class GGS_lexicalFormalInputArgumentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalFormalInputArgumentAST_2E_weak init_nil (void) {
    GGS_lexicalFormalInputArgumentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalFormalInputArgumentAST bang_lexicalFormalInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalFormalInputArgumentAST unwrappedValue (void) const ;

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
  public: static GGS_lexicalFormalInputArgumentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalFormalInputArgumentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalFormalInputArgumentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRoutineCallActualArgumentListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalRoutineCallActualArgumentListAST final : public cGenericAbstractEnumerator {
  public: DownEnumerator_lexicalRoutineCallActualArgumentListAST (const class GGS_lexicalRoutineCallActualArgumentListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_abstractLexicalRoutineActualArgumentAST current_mLexicalRoutineActualArgument (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalRoutineCallActualArgumentListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalRoutineCallActualArgumentListAST final : public cGenericAbstractEnumerator {
  public: UpEnumerator_lexicalRoutineCallActualArgumentListAST (const class GGS_lexicalRoutineCallActualArgumentListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_abstractLexicalRoutineActualArgumentAST current_mLexicalRoutineActualArgument (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalRoutineCallActualArgumentListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRoutineCallActualArgumentListAST list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineCallActualArgumentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_lexicalRoutineCallActualArgumentListAST (void) ;

//--------------------------------- List constructor by graph
  public: GGS_lexicalRoutineCallActualArgumentListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  public: static class GGS_lexicalRoutineCallActualArgumentListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_lexicalRoutineCallActualArgumentListAST class_func_listWithValue (const class GGS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_lexicalRoutineCallActualArgumentListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_lexicalRoutineCallActualArgumentListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_lexicalRoutineCallActualArgumentListAST add_operation (const GGS_lexicalRoutineCallActualArgumentListAST & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_abstractLexicalRoutineActualArgumentAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_abstractLexicalRoutineActualArgumentAST constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalRoutineActualArgumentAtIndex (class GGS_abstractLexicalRoutineActualArgumentAST constinArgument0,
                                                                                class GGS_uint constinArgument1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_abstractLexicalRoutineActualArgumentAST getter_mLexicalRoutineActualArgumentAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalRoutineCallActualArgumentListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalRoutineCallActualArgumentListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalRoutineCallActualArgumentListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalRoutineCallActualArgumentListAST ;
  friend class DownEnumerator_lexicalRoutineCallActualArgumentListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalRoutineCallActualArgumentListAST_2E_element class_func_new (const class GGS_abstractLexicalRoutineActualArgumentAST & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST_2E_element ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalRoutineCallInstructionAST class_func_new (const class GGS_lstring & inOperand0,
                                                                            const class GGS_lexicalRoutineCallActualArgumentListAST & inOperand1,
                                                                            const class GGS_lstringlist & inOperand2,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalRoutineCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST ;

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

//--- Extension getter generateObjcCocoaInstructionCode
  public: virtual class GGS_string getter_generateObjcCocoaInstructionCode (const class GGS_string inScannerClassName,
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateObjcCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateObjcCocoaRoutineArgument (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                       const class GGS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

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
//
//Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_generateRoutineArgument (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalSelectInstructionAST class_func_new (const class GGS_lexicalSelectBranchListAST & inOperand0,
                                                                       const class GGS_lexicalInstructionListAST & inOperand1,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalSelectInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;

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

//--- Extension getter generateObjcCocoaInstructionCode
  public: virtual class GGS_string getter_generateObjcCocoaInstructionCode (const class GGS_string inScannerClassName,
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSelectInstructionAST_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalSimpleSendInstructionAST class_func_new (const class GGS_lstring & inOperand0,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalSimpleSendInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ;

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

//--- Extension getter generateObjcCocoaInstructionCode
  public: virtual class GGS_string getter_generateObjcCocoaInstructionCode (const class GGS_string inScannerClassName,
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalTagInstructionAST class_func_new (const class GGS_lstring & inOperand0,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalTagInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagInstructionAST ;

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

//--- Extension getter generateObjcCocoaInstructionCode
  public: virtual class GGS_string getter_generateObjcCocoaInstructionCode (const class GGS_string inScannerClassName,
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagInstructionAST_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalWarningInstructionAST class_func_new (const class GGS_lstring & inOperand0,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalWarningInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ;

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

//--- Extension getter generateObjcCocoaInstructionCode
  public: virtual class GGS_string getter_generateObjcCocoaInstructionCode (const class GGS_string inScannerClassName,
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalWarningInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum optionDefaultValueEnumAST
//--------------------------------------------------------------------------------------------------

class GGS_optionDefaultValueEnumAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_optionDefaultValueEnumAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_noDefaultValue,
    enum_unsignedDefaultValue,
    enum_stringDefaultValue
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
  public: static GGS_optionDefaultValueEnumAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionDefaultValueEnumAST class_func_noDefaultValue (LOCATION_ARGS) ;

  public: static class GGS_optionDefaultValueEnumAST class_func_stringDefaultValue (LOCATION_ARGS) ;

  public: static class GGS_optionDefaultValueEnumAST class_func_unsignedDefaultValue (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionDefaultValueEnumAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNoDefaultValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isStringDefaultValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUnsignedDefaultValue (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionDefaultValueEnumAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @commandLineOptionListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_commandLineOptionListAST final : public cGenericAbstractEnumerator {
  public: DownEnumerator_commandLineOptionListAST (const class GGS_commandLineOptionListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mOptionTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionInternalName (LOCATION_ARGS) const ;
  public: class GGS_lchar current_mOptionInvocationLetter (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionInvocationString (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionComment (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionDefaultValue (LOCATION_ARGS) const ;
  public: class GGS_optionDefaultValueEnumAST current_mOptionDefaultValueKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_commandLineOptionListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_commandLineOptionListAST final : public cGenericAbstractEnumerator {
  public: UpEnumerator_commandLineOptionListAST (const class GGS_commandLineOptionListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mOptionTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionInternalName (LOCATION_ARGS) const ;
  public: class GGS_lchar current_mOptionInvocationLetter (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionInvocationString (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionComment (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionDefaultValue (LOCATION_ARGS) const ;
  public: class GGS_optionDefaultValueEnumAST current_mOptionDefaultValueKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_commandLineOptionListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @commandLineOptionListAST list
//--------------------------------------------------------------------------------------------------

class GGS_commandLineOptionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_commandLineOptionListAST (void) ;

//--------------------------------- List constructor by graph
  public: GGS_commandLineOptionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mOptionTypeName,
                                                 const class GGS_lstring & in_mOptionInternalName,
                                                 const class GGS_lchar & in_mOptionInvocationLetter,
                                                 const class GGS_lstring & in_mOptionInvocationString,
                                                 const class GGS_lstring & in_mOptionComment,
                                                 const class GGS_lstring & in_mOptionDefaultValue,
                                                 const class GGS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_commandLineOptionListAST init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_commandLineOptionListAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_commandLineOptionListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_commandLineOptionListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_lchar & inOperand2,
                                                                              const class GGS_lstring & inOperand3,
                                                                              const class GGS_lstring & inOperand4,
                                                                              const class GGS_lstring & inOperand5,
                                                                              const class GGS_optionDefaultValueEnumAST & inOperand6
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_commandLineOptionListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_lchar & inOperand2,
                                                    const class GGS_lstring & inOperand3,
                                                    const class GGS_lstring & inOperand4,
                                                    const class GGS_lstring & inOperand5,
                                                    const class GGS_optionDefaultValueEnumAST & inOperand6
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_commandLineOptionListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_commandLineOptionListAST add_operation (const GGS_commandLineOptionListAST & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_lchar constinArgument2,
                                               class GGS_lstring constinArgument3,
                                               class GGS_lstring constinArgument4,
                                               class GGS_lstring constinArgument5,
                                               class GGS_optionDefaultValueEnumAST constinArgument6,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_lchar constinArgument2,
                                                      class GGS_lstring constinArgument3,
                                                      class GGS_lstring constinArgument4,
                                                      class GGS_lstring constinArgument5,
                                                      class GGS_optionDefaultValueEnumAST constinArgument6,
                                                      class GGS_uint constinArgument7,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_lchar & outArgument2,
                                                 class GGS_lstring & outArgument3,
                                                 class GGS_lstring & outArgument4,
                                                 class GGS_lstring & outArgument5,
                                                 class GGS_optionDefaultValueEnumAST & outArgument6,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_lchar & outArgument2,
                                                class GGS_lstring & outArgument3,
                                                class GGS_lstring & outArgument4,
                                                class GGS_lstring & outArgument5,
                                                class GGS_optionDefaultValueEnumAST & outArgument6,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_lchar & outArgument2,
                                                      class GGS_lstring & outArgument3,
                                                      class GGS_lstring & outArgument4,
                                                      class GGS_lstring & outArgument5,
                                                      class GGS_optionDefaultValueEnumAST & outArgument6,
                                                      class GGS_uint constinArgument7,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionCommentAtIndex (class GGS_lstring constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionDefaultValueAtIndex (class GGS_lstring constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionDefaultValueKindAtIndex (class GGS_optionDefaultValueEnumAST constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionInternalNameAtIndex (class GGS_lstring constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionInvocationLetterAtIndex (class GGS_lchar constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionInvocationStringAtIndex (class GGS_lstring constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_lchar & outArgument2,
                                              class GGS_lstring & outArgument3,
                                              class GGS_lstring & outArgument4,
                                              class GGS_lstring & outArgument5,
                                              class GGS_optionDefaultValueEnumAST & outArgument6,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_lchar & outArgument2,
                                             class GGS_lstring & outArgument3,
                                             class GGS_lstring & outArgument4,
                                             class GGS_lstring & outArgument5,
                                             class GGS_optionDefaultValueEnumAST & outArgument6,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOptionCommentAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOptionDefaultValueAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_optionDefaultValueEnumAST getter_mOptionDefaultValueKindAtIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOptionInternalNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lchar getter_mOptionInvocationLetterAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOptionInvocationStringAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOptionTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_commandLineOptionListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_commandLineOptionListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_commandLineOptionListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_commandLineOptionListAST ;
  friend class DownEnumerator_commandLineOptionListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @commandLineOptionListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_commandLineOptionListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mOptionTypeName ;
  public: inline GGS_lstring readProperty_mOptionTypeName (void) const {
    return mProperty_mOptionTypeName ;
  }

  public: GGS_lstring mProperty_mOptionInternalName ;
  public: inline GGS_lstring readProperty_mOptionInternalName (void) const {
    return mProperty_mOptionInternalName ;
  }

  public: GGS_lchar mProperty_mOptionInvocationLetter ;
  public: inline GGS_lchar readProperty_mOptionInvocationLetter (void) const {
    return mProperty_mOptionInvocationLetter ;
  }

  public: GGS_lstring mProperty_mOptionInvocationString ;
  public: inline GGS_lstring readProperty_mOptionInvocationString (void) const {
    return mProperty_mOptionInvocationString ;
  }

  public: GGS_lstring mProperty_mOptionComment ;
  public: inline GGS_lstring readProperty_mOptionComment (void) const {
    return mProperty_mOptionComment ;
  }

  public: GGS_lstring mProperty_mOptionDefaultValue ;
  public: inline GGS_lstring readProperty_mOptionDefaultValue (void) const {
    return mProperty_mOptionDefaultValue ;
  }

  public: GGS_optionDefaultValueEnumAST mProperty_mOptionDefaultValueKind ;
  public: inline GGS_optionDefaultValueEnumAST readProperty_mOptionDefaultValueKind (void) const {
    return mProperty_mOptionDefaultValueKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_commandLineOptionListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionTypeName = inValue ;
  }

  public: inline void setter_setMOptionInternalName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionInternalName = inValue ;
  }

  public: inline void setter_setMOptionInvocationLetter (const GGS_lchar & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionInvocationLetter = inValue ;
  }

  public: inline void setter_setMOptionInvocationString (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionInvocationString = inValue ;
  }

  public: inline void setter_setMOptionComment (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionComment = inValue ;
  }

  public: inline void setter_setMOptionDefaultValue (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionDefaultValue = inValue ;
  }

  public: inline void setter_setMOptionDefaultValueKind (const GGS_optionDefaultValueEnumAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionDefaultValueKind = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_commandLineOptionListAST_2E_element (const GGS_lstring & in_mOptionTypeName,
                                                   const GGS_lstring & in_mOptionInternalName,
                                                   const GGS_lchar & in_mOptionInvocationLetter,
                                                   const GGS_lstring & in_mOptionInvocationString,
                                                   const GGS_lstring & in_mOptionComment,
                                                   const GGS_lstring & in_mOptionDefaultValue,
                                                   const GGS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind) ;

//--------------------------------- Copy constructor
  public: GGS_commandLineOptionListAST_2E_element (const GGS_commandLineOptionListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_commandLineOptionListAST_2E_element & operator = (const GGS_commandLineOptionListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_commandLineOptionListAST_2E_element init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_lstring & inOperand1,
                                                                                           const class GGS_lchar & inOperand2,
                                                                                           const class GGS_lstring & inOperand3,
                                                                                           const class GGS_lstring & inOperand4,
                                                                                           const class GGS_lstring & inOperand5,
                                                                                           const class GGS_optionDefaultValueEnumAST & inOperand6,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_commandLineOptionListAST_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_commandLineOptionListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               const class GGS_lchar & inOperand2,
                                                                               const class GGS_lstring & inOperand3,
                                                                               const class GGS_lstring & inOperand4,
                                                                               const class GGS_lstring & inOperand5,
                                                                               const class GGS_optionDefaultValueEnumAST & inOperand6,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionComponentDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionComponentDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_optionComponentDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_optionComponentDeclarationAST (const class cPtr_optionComponentDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mOptionComponentName (void) const ;

  public: class GGS_commandLineOptionListAST readProperty_mOptions (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionComponentDeclarationAST init_21_isPredefined_21__21_ (const class GGS_bool & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_commandLineOptionListAST & inOperand2,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionComponentDeclarationAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionComponentDeclarationAST class_func_new (const class GGS_bool & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_commandLineOptionListAST & inOperand2,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionComponentDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @optionComponentDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_optionComponentDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void optionComponentDeclarationAST_init_21_isPredefined_21__21_ (const class GGS_bool & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_commandLineOptionListAST & inOperand2,
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
  public: GGS_lstring mProperty_mOptionComponentName ;
  public: GGS_commandLineOptionListAST mProperty_mOptions ;


//--- Default constructor
  public: cPtr_optionComponentDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_optionComponentDeclarationAST (const GGS_bool & in_isPredefined,
                                              const GGS_lstring & in_mOptionComponentName,
                                              const GGS_commandLineOptionListAST & in_mOptions,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionComponentDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionComponentDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_optionComponentDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_optionComponentDeclarationAST_2E_weak (const class GGS_optionComponentDeclarationAST & inSource) ;

  public: GGS_optionComponentDeclarationAST_2E_weak & operator = (const class GGS_optionComponentDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_optionComponentDeclarationAST_2E_weak init_nil (void) {
    GGS_optionComponentDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_optionComponentDeclarationAST bang_optionComponentDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_optionComponentDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_optionComponentDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionComponentDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionComponentDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @commandLineOptionSortedList sorted list enumerator
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericSortedList.h"

//--------------------------------------------------------------------------------------------------

class DownEnumerator_commandLineOptionSortedList final {
//--- Constructor
  public: DownEnumerator_commandLineOptionSortedList (const class GGS_commandLineOptionSortedList & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }
  public: class GGS_string current_mOptionIdentifier (LOCATION_ARGS) const ;
  public: class GGS_char current_mOptionChar (LOCATION_ARGS) const ;
  public: class GGS_string current_mOptionString (LOCATION_ARGS) const ;
  public: class GGS_string current_mComment (LOCATION_ARGS) const ;
  public: class GGS_string current_mDefaultValue (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_commandLineOptionSortedList_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <GGS_commandLineOptionSortedList_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_commandLineOptionSortedList (const DownEnumerator_commandLineOptionSortedList &) = delete ;
  private: DownEnumerator_commandLineOptionSortedList & operator = (const DownEnumerator_commandLineOptionSortedList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_commandLineOptionSortedList final {
//--- Constructor
  public: UpEnumerator_commandLineOptionSortedList (const class GGS_commandLineOptionSortedList & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex < mElementArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }
  public: class GGS_string current_mOptionIdentifier (LOCATION_ARGS) const ;
  public: class GGS_char current_mOptionChar (LOCATION_ARGS) const ;
  public: class GGS_string current_mOptionString (LOCATION_ARGS) const ;
  public: class GGS_string current_mComment (LOCATION_ARGS) const ;
  public: class GGS_string current_mDefaultValue (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_commandLineOptionSortedList_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <GGS_commandLineOptionSortedList_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_commandLineOptionSortedList (const UpEnumerator_commandLineOptionSortedList &) = delete ;
  private: UpEnumerator_commandLineOptionSortedList & operator = (const UpEnumerator_commandLineOptionSortedList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @commandLineOptionSortedList sorted list
//--------------------------------------------------------------------------------------------------

class GGS_commandLineOptionSortedList final : public GGS_GenericSortedList <GGS_commandLineOptionSortedList_2E_element> {
//--- Default constructor
  public: GGS_commandLineOptionSortedList (void) ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_commandLineOptionSortedList init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_commandLineOptionSortedList extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_commandLineOptionSortedList class_func_emptySortedList (LOCATION_ARGS) ;

  public: static class GGS_commandLineOptionSortedList class_func_sortedListWithValue (const class GGS_string & inOperand0,
                                                                                       const class GGS_char & inOperand1,
                                                                                       const class GGS_string & inOperand2,
                                                                                       const class GGS_string & inOperand3,
                                                                                       const class GGS_string & inOperand4
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_commandLineOptionSortedList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_char & inOperand1,
                                                    const class GGS_string & inOperand2,
                                                    const class GGS_string & inOperand3,
                                                    const class GGS_string & inOperand4
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_commandLineOptionSortedList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_string inArgument0,
                                               class GGS_char inArgument1,
                                               class GGS_string inArgument2,
                                               class GGS_string inArgument3,
                                               class GGS_string inArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GGS_string & outArgument0,
                                                    class GGS_char & outArgument1,
                                                    class GGS_string & outArgument2,
                                                    class GGS_string & outArgument3,
                                                    class GGS_string & outArgument4,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GGS_string & outArgument0,
                                                    class GGS_char & outArgument1,
                                                    class GGS_string & outArgument2,
                                                    class GGS_string & outArgument3,
                                                    class GGS_string & outArgument4,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GGS_string & outArgument0,
                                                 class GGS_char & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_string & outArgument3,
                                                 class GGS_string & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GGS_string & outArgument0,
                                                 class GGS_char & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_string & outArgument3,
                                                 class GGS_string & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_commandLineOptionSortedList ;
  friend class DownEnumerator_commandLineOptionSortedList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionSortedList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @commandLineOptionSortedList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_commandLineOptionSortedList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mOptionIdentifier ;
  public: inline GGS_string readProperty_mOptionIdentifier (void) const {
    return mProperty_mOptionIdentifier ;
  }

  public: GGS_char mProperty_mOptionChar ;
  public: inline GGS_char readProperty_mOptionChar (void) const {
    return mProperty_mOptionChar ;
  }

  public: GGS_string mProperty_mOptionString ;
  public: inline GGS_string readProperty_mOptionString (void) const {
    return mProperty_mOptionString ;
  }

  public: GGS_string mProperty_mComment ;
  public: inline GGS_string readProperty_mComment (void) const {
    return mProperty_mComment ;
  }

  public: GGS_string mProperty_mDefaultValue ;
  public: inline GGS_string readProperty_mDefaultValue (void) const {
    return mProperty_mDefaultValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_commandLineOptionSortedList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionIdentifier (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionIdentifier = inValue ;
  }

  public: inline void setter_setMOptionChar (const GGS_char & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionChar = inValue ;
  }

  public: inline void setter_setMOptionString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionString = inValue ;
  }

  public: inline void setter_setMComment (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mComment = inValue ;
  }

  public: inline void setter_setMDefaultValue (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_commandLineOptionSortedList_2E_element (const GGS_string & in_mOptionIdentifier,
                                                      const GGS_char & in_mOptionChar,
                                                      const GGS_string & in_mOptionString,
                                                      const GGS_string & in_mComment,
                                                      const GGS_string & in_mDefaultValue) ;

//--------------------------------- Copy constructor
  public: GGS_commandLineOptionSortedList_2E_element (const GGS_commandLineOptionSortedList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_commandLineOptionSortedList_2E_element & operator = (const GGS_commandLineOptionSortedList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_commandLineOptionSortedList_2E_element init_21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                      const class GGS_char & inOperand1,
                                                                                      const class GGS_string & inOperand2,
                                                                                      const class GGS_string & inOperand3,
                                                                                      const class GGS_string & inOperand4,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_commandLineOptionSortedList_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_commandLineOptionSortedList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                  const class GGS_char & inOperand1,
                                                                                  const class GGS_string & inOperand2,
                                                                                  const class GGS_string & inOperand3,
                                                                                  const class GGS_string & inOperand4,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionSortedList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @commandLineOptionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_commandLineOptionMap ;

//--------------------------------------------------------------------------------------------------
//  MapFor_commandLineOptionMap
//--------------------------------------------------------------------------------------------------

class MapFor_commandLineOptionMap : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_commandLineOptionMap > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_commandLineOptionMap (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_commandLineOptionMap (void) ;

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

  public: MapFor_commandLineOptionMap (const MapFor_commandLineOptionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_commandLineOptionMap & operator = (const MapFor_commandLineOptionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_commandLineOptionMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_commandLineOptionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_commandLineOptionMap_2E_element>
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

  protected: const SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_commandLineOptionMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_commandLineOptionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_commandLineOptionMap & ioResult,
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

class DownEnumerator_commandLineOptionMap final {

//--- Constructor
  public: DownEnumerator_commandLineOptionMap (const class GGS_commandLineOptionMap & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_char current_mOptionChar (LOCATION_ARGS) const ;

  public: class GGS_string current_mOptionString (LOCATION_ARGS) const ;

  public: class GGS_string current_mComment (LOCATION_ARGS) const ;

  public: class GGS_string current_mDefaultValue (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_commandLineOptionMap_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_commandLineOptionMap (const DownEnumerator_commandLineOptionMap &) = delete ;
  private: DownEnumerator_commandLineOptionMap & operator = (const DownEnumerator_commandLineOptionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_commandLineOptionMap final {
  public: UpEnumerator_commandLineOptionMap (const class GGS_commandLineOptionMap & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_char current_mOptionChar (LOCATION_ARGS) const ;
  public: class GGS_string current_mOptionString (LOCATION_ARGS) const ;
  public: class GGS_string current_mComment (LOCATION_ARGS) const ;
  public: class GGS_string current_mDefaultValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_commandLineOptionMap_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_commandLineOptionMap (const UpEnumerator_commandLineOptionMap &) = delete ;
  private: UpEnumerator_commandLineOptionMap & operator = (const UpEnumerator_commandLineOptionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_commandLineOptionMap : public AC_GALGAS_root {

//--------------------------------- Private property
  private: OptionalSharedRef <MapRootFor_commandLineOptionMap > mSharedRoot ;

//--------------------------------- Default constructor
  public: GGS_commandLineOptionMap (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_commandLineOptionMap (void) ;

//--------------------------------- Handle copy
  public: GGS_commandLineOptionMap (const GGS_commandLineOptionMap & inSource) ;
  public: GGS_commandLineOptionMap & operator = (const GGS_commandLineOptionMap & inSource) ;
  
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

  // public: GGS_commandLineOptionMap (const GGS_commandLineOptionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_commandLineOptionMap & operator = (const GGS_commandLineOptionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_commandLineOptionMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_commandLineOptionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_commandLineOptionMap_2E_element>
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

  protected: const SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_commandLineOptionMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const GGS_commandLineOptionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class GGS_commandLineOptionMap & ioResult,
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
  public: static GGS_commandLineOptionMap init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_commandLineOptionMap extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_commandLineOptionMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_commandLineOptionMap class_func_mapWithMapToOverride (const class GGS_commandLineOptionMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_char constinArgument1,
                                                  class GGS_string constinArgument2,
                                                  class GGS_string constinArgument3,
                                                  class GGS_string constinArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCommentForKey (class GGS_string constinArgument0,
                                                          class GGS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDefaultValueForKey (class GGS_string constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionCharForKey (class GGS_char constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionStringForKey (class GGS_string constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_char & outArgument1,
                                                  class GGS_string & outArgument2,
                                                  class GGS_string & outArgument3,
                                                  class GGS_string & outArgument4,
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

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mCommentForKey (const class GGS_string & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mDefaultValueForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_char getter_mOptionCharForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mOptionStringForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_commandLineOptionMap getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_commandLineOptionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_commandLineOptionMap ;
  friend class DownEnumerator_commandLineOptionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @commandLineOptionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_commandLineOptionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_char mProperty_mOptionChar ;
  public: inline GGS_char readProperty_mOptionChar (void) const {
    return mProperty_mOptionChar ;
  }

  public: GGS_string mProperty_mOptionString ;
  public: inline GGS_string readProperty_mOptionString (void) const {
    return mProperty_mOptionString ;
  }

  public: GGS_string mProperty_mComment ;
  public: inline GGS_string readProperty_mComment (void) const {
    return mProperty_mComment ;
  }

  public: GGS_string mProperty_mDefaultValue ;
  public: inline GGS_string readProperty_mDefaultValue (void) const {
    return mProperty_mDefaultValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_commandLineOptionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOptionChar (const GGS_char & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionChar = inValue ;
  }

  public: inline void setter_setMOptionString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionString = inValue ;
  }

  public: inline void setter_setMComment (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mComment = inValue ;
  }

  public: inline void setter_setMDefaultValue (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_commandLineOptionMap_2E_element (const GGS_lstring & in_lkey,
                                               const GGS_char & in_mOptionChar,
                                               const GGS_string & in_mOptionString,
                                               const GGS_string & in_mComment,
                                               const GGS_string & in_mDefaultValue) ;

//--------------------------------- Copy constructor
  public: GGS_commandLineOptionMap_2E_element (const GGS_commandLineOptionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_commandLineOptionMap_2E_element & operator = (const GGS_commandLineOptionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_commandLineOptionMap_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_char & inOperand1,
                                                                               const class GGS_string & inOperand2,
                                                                               const class GGS_string & inOperand3,
                                                                               const class GGS_string & inOperand4,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_commandLineOptionMap_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_commandLineOptionMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                           const class GGS_char & inOperand1,
                                                                           const class GGS_string & inOperand2,
                                                                           const class GGS_string & inOperand3,
                                                                           const class GGS_string & inOperand4,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: commandLineOptionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_commandLineOptionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_commandLineOptionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_commandLineOptionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_commandLineOptionMap_2E_element_3F_ (const GGS_commandLineOptionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_commandLineOptionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_commandLineOptionMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_commandLineOptionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guiSimpleAttributeListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_guiSimpleAttributeListAST final : public cGenericAbstractEnumerator {
  public: DownEnumerator_guiSimpleAttributeListAST (const class GGS_guiSimpleAttributeListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mKey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_guiSimpleAttributeListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_guiSimpleAttributeListAST final : public cGenericAbstractEnumerator {
  public: UpEnumerator_guiSimpleAttributeListAST (const class GGS_guiSimpleAttributeListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mKey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_guiSimpleAttributeListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guiSimpleAttributeListAST list
//--------------------------------------------------------------------------------------------------

class GGS_guiSimpleAttributeListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_guiSimpleAttributeListAST (void) ;

//--------------------------------- List constructor by graph
  public: GGS_guiSimpleAttributeListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mKey,
                                                 const class GGS_lstring & in_mValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guiSimpleAttributeListAST init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guiSimpleAttributeListAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guiSimpleAttributeListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_guiSimpleAttributeListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                               const class GGS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_guiSimpleAttributeListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_guiSimpleAttributeListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_guiSimpleAttributeListAST add_operation (const GGS_guiSimpleAttributeListAST & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKeyAtIndex (class GGS_lstring constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueAtIndex (class GGS_lstring constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mKeyAtIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mValueAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guiSimpleAttributeListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guiSimpleAttributeListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guiSimpleAttributeListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_guiSimpleAttributeListAST ;
  friend class DownEnumerator_guiSimpleAttributeListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiSimpleAttributeListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guiSimpleAttributeListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_guiSimpleAttributeListAST_2E_element : public AC_GALGAS_root {
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
  public: GGS_guiSimpleAttributeListAST_2E_element (void) ;

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
  public: GGS_guiSimpleAttributeListAST_2E_element (const GGS_lstring & in_mKey,
                                                    const GGS_lstring & in_mValue) ;

//--------------------------------- Copy constructor
  public: GGS_guiSimpleAttributeListAST_2E_element (const GGS_guiSimpleAttributeListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guiSimpleAttributeListAST_2E_element & operator = (const GGS_guiSimpleAttributeListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guiSimpleAttributeListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guiSimpleAttributeListAST_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guiSimpleAttributeListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiSimpleAttributeListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guiCompoundAttributeListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_guiCompoundAttributeListAST final : public cGenericAbstractEnumerator {
  public: DownEnumerator_guiCompoundAttributeListAST (const class GGS_guiCompoundAttributeListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mKey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_guiCompoundAttributeListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_guiCompoundAttributeListAST final : public cGenericAbstractEnumerator {
  public: UpEnumerator_guiCompoundAttributeListAST (const class GGS_guiCompoundAttributeListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mKey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_guiCompoundAttributeListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guiCompoundAttributeListAST list
//--------------------------------------------------------------------------------------------------

class GGS_guiCompoundAttributeListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_guiCompoundAttributeListAST (void) ;

//--------------------------------- List constructor by graph
  public: GGS_guiCompoundAttributeListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mKey,
                                                 const class GGS_lstring & in_mAttributeName,
                                                 const class GGS_lstring & in_mValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guiCompoundAttributeListAST init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guiCompoundAttributeListAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guiCompoundAttributeListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_guiCompoundAttributeListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstring & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_guiCompoundAttributeListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_lstring & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_guiCompoundAttributeListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_guiCompoundAttributeListAST add_operation (const GGS_guiCompoundAttributeListAST & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_lstring constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_lstring constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_lstring & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_lstring & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_lstring & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeNameAtIndex (class GGS_lstring constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKeyAtIndex (class GGS_lstring constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueAtIndex (class GGS_lstring constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_lstring & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_lstring & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mAttributeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mKeyAtIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mValueAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guiCompoundAttributeListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guiCompoundAttributeListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guiCompoundAttributeListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_guiCompoundAttributeListAST ;
  friend class DownEnumerator_guiCompoundAttributeListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiCompoundAttributeListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guiCompoundAttributeListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_guiCompoundAttributeListAST_2E_element : public AC_GALGAS_root {
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
  public: GGS_guiCompoundAttributeListAST_2E_element (void) ;

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
  public: GGS_guiCompoundAttributeListAST_2E_element (const GGS_lstring & in_mKey,
                                                      const GGS_lstring & in_mAttributeName,
                                                      const GGS_lstring & in_mValue) ;

//--------------------------------- Copy constructor
  public: GGS_guiCompoundAttributeListAST_2E_element (const GGS_guiCompoundAttributeListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guiCompoundAttributeListAST_2E_element & operator = (const GGS_guiCompoundAttributeListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guiCompoundAttributeListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_lstring & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guiCompoundAttributeListAST_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guiCompoundAttributeListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_lstring & inOperand2,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiCompoundAttributeListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalLabelListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_terminalLabelListAST final : public cGenericAbstractEnumerator {
  public: DownEnumerator_terminalLabelListAST (const class GGS_terminalLabelListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mTerminal (LOCATION_ARGS) const ;
  public: class GGS_uint current_mDisplayFlags (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_terminalLabelListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_terminalLabelListAST final : public cGenericAbstractEnumerator {
  public: UpEnumerator_terminalLabelListAST (const class GGS_terminalLabelListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mTerminal (LOCATION_ARGS) const ;
  public: class GGS_uint current_mDisplayFlags (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_terminalLabelListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalLabelListAST list
//--------------------------------------------------------------------------------------------------

class GGS_terminalLabelListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_terminalLabelListAST (void) ;

//--------------------------------- List constructor by graph
  public: GGS_terminalLabelListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mTerminal,
                                                 const class GGS_uint & in_mDisplayFlags
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalLabelListAST init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalLabelListAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_terminalLabelListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_terminalLabelListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                          const class GGS_uint & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_terminalLabelListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_uint & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_terminalLabelListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_terminalLabelListAST add_operation (const GGS_terminalLabelListAST & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_uint & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_uint & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_uint & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDisplayFlagsAtIndex (class GGS_uint constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalAtIndex (class GGS_lstring constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_uint & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_uint & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mDisplayFlagsAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mTerminalAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_terminalLabelListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_terminalLabelListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_terminalLabelListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_terminalLabelListAST ;
  friend class DownEnumerator_terminalLabelListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalLabelListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalLabelListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_terminalLabelListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mTerminal ;
  public: inline GGS_lstring readProperty_mTerminal (void) const {
    return mProperty_mTerminal ;
  }

  public: GGS_uint mProperty_mDisplayFlags ;
  public: inline GGS_uint readProperty_mDisplayFlags (void) const {
    return mProperty_mDisplayFlags ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_terminalLabelListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTerminal (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminal = inValue ;
  }

  public: inline void setter_setMDisplayFlags (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDisplayFlags = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_terminalLabelListAST_2E_element (const GGS_lstring & in_mTerminal,
                                               const GGS_uint & in_mDisplayFlags) ;

//--------------------------------- Copy constructor
  public: GGS_terminalLabelListAST_2E_element (const GGS_terminalLabelListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_terminalLabelListAST_2E_element & operator = (const GGS_terminalLabelListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalLabelListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_uint & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalLabelListAST_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_terminalLabelListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                           const class GGS_uint & inOperand1,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalLabelListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guiLabelListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_guiLabelListAST final : public cGenericAbstractEnumerator {
  public: DownEnumerator_guiLabelListAST (const class GGS_guiLabelListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_uint current_mLeadingCharacterStrippedCount (LOCATION_ARGS) const ;
  public: class GGS_terminalLabelListAST current_mTerminalList (LOCATION_ARGS) const ;
  public: class GGS_location current_mLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_guiLabelListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_guiLabelListAST final : public cGenericAbstractEnumerator {
  public: UpEnumerator_guiLabelListAST (const class GGS_guiLabelListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_uint current_mLeadingCharacterStrippedCount (LOCATION_ARGS) const ;
  public: class GGS_terminalLabelListAST current_mTerminalList (LOCATION_ARGS) const ;
  public: class GGS_location current_mLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_guiLabelListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guiLabelListAST list
//--------------------------------------------------------------------------------------------------

class GGS_guiLabelListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_guiLabelListAST (void) ;

//--------------------------------- List constructor by graph
  public: GGS_guiLabelListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_uint & in_mLeadingCharacterStrippedCount,
                                                 const class GGS_terminalLabelListAST & in_mTerminalList,
                                                 const class GGS_location & in_mLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guiLabelListAST init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guiLabelListAST extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guiLabelListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_guiLabelListAST class_func_listWithValue (const class GGS_uint & inOperand0,
                                                                     const class GGS_terminalLabelListAST & inOperand1,
                                                                     const class GGS_location & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_guiLabelListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_uint & inOperand0,
                                                    const class GGS_terminalLabelListAST & inOperand1,
                                                    const class GGS_location & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_guiLabelListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_guiLabelListAST add_operation (const GGS_guiLabelListAST & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_uint constinArgument0,
                                               class GGS_terminalLabelListAST constinArgument1,
                                               class GGS_location constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_uint constinArgument0,
                                                      class GGS_terminalLabelListAST constinArgument1,
                                                      class GGS_location constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_uint & outArgument0,
                                                 class GGS_terminalLabelListAST & outArgument1,
                                                 class GGS_location & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_uint & outArgument0,
                                                class GGS_terminalLabelListAST & outArgument1,
                                                class GGS_location & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_uint & outArgument0,
                                                      class GGS_terminalLabelListAST & outArgument1,
                                                      class GGS_location & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLeadingCharacterStrippedCountAtIndex (class GGS_uint constinArgument0,
                                                                                 class GGS_uint constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLocationAtIndex (class GGS_location constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalListAtIndex (class GGS_terminalLabelListAST constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_uint & outArgument0,
                                              class GGS_terminalLabelListAST & outArgument1,
                                              class GGS_location & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_uint & outArgument0,
                                             class GGS_terminalLabelListAST & outArgument1,
                                             class GGS_location & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mLeadingCharacterStrippedCountAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_terminalLabelListAST getter_mTerminalListAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guiLabelListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guiLabelListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guiLabelListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_guiLabelListAST ;
  friend class DownEnumerator_guiLabelListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiLabelListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guiLabelListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_guiLabelListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_mLeadingCharacterStrippedCount ;
  public: inline GGS_uint readProperty_mLeadingCharacterStrippedCount (void) const {
    return mProperty_mLeadingCharacterStrippedCount ;
  }

  public: GGS_terminalLabelListAST mProperty_mTerminalList ;
  public: inline GGS_terminalLabelListAST readProperty_mTerminalList (void) const {
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
  public: GGS_guiLabelListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLeadingCharacterStrippedCount (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLeadingCharacterStrippedCount = inValue ;
  }

  public: inline void setter_setMTerminalList (const GGS_terminalLabelListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalList = inValue ;
  }

  public: inline void setter_setMLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guiLabelListAST_2E_element (const GGS_uint & in_mLeadingCharacterStrippedCount,
                                          const GGS_terminalLabelListAST & in_mTerminalList,
                                          const GGS_location & in_mLocation) ;

//--------------------------------- Copy constructor
  public: GGS_guiLabelListAST_2E_element (const GGS_guiLabelListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guiLabelListAST_2E_element & operator = (const GGS_guiLabelListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guiLabelListAST_2E_element init_21__21__21_ (const class GGS_uint & inOperand0,
                                                                  const class GGS_terminalLabelListAST & inOperand1,
                                                                  const class GGS_location & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guiLabelListAST_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guiLabelListAST_2E_element class_func_new (const class GGS_uint & inOperand0,
                                                                      const class GGS_terminalLabelListAST & inOperand1,
                                                                      const class GGS_location & inOperand2,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiLabelListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @withLexiqueListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_withLexiqueListAST final : public cGenericAbstractEnumerator {
  public: DownEnumerator_withLexiqueListAST (const class GGS_withLexiqueListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mLexiqueFileName (LOCATION_ARGS) const ;
  public: class GGS_guiLabelListAST current_mLabels (LOCATION_ARGS) const ;
  public: class GGS_guiSimpleAttributeListAST current_mSimpleAttributes (LOCATION_ARGS) const ;
  public: class GGS_guiCompoundAttributeListAST current_mCompoundAttributes (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_withLexiqueListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_withLexiqueListAST final : public cGenericAbstractEnumerator {
  public: UpEnumerator_withLexiqueListAST (const class GGS_withLexiqueListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mLexiqueFileName (LOCATION_ARGS) const ;
  public: class GGS_guiLabelListAST current_mLabels (LOCATION_ARGS) const ;
  public: class GGS_guiSimpleAttributeListAST current_mSimpleAttributes (LOCATION_ARGS) const ;
  public: class GGS_guiCompoundAttributeListAST current_mCompoundAttributes (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_withLexiqueListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @withLexiqueListAST list
//--------------------------------------------------------------------------------------------------

class GGS_withLexiqueListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_withLexiqueListAST (void) ;

//--------------------------------- List constructor by graph
  public: GGS_withLexiqueListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mLexiqueFileName,
                                                 const class GGS_guiLabelListAST & in_mLabels,
                                                 const class GGS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                 const class GGS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_withLexiqueListAST init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_withLexiqueListAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_withLexiqueListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_withLexiqueListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                        const class GGS_guiLabelListAST & inOperand1,
                                                                        const class GGS_guiSimpleAttributeListAST & inOperand2,
                                                                        const class GGS_guiCompoundAttributeListAST & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_withLexiqueListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_guiLabelListAST & inOperand1,
                                                    const class GGS_guiSimpleAttributeListAST & inOperand2,
                                                    const class GGS_guiCompoundAttributeListAST & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_withLexiqueListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_withLexiqueListAST add_operation (const GGS_withLexiqueListAST & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_guiLabelListAST constinArgument1,
                                               class GGS_guiSimpleAttributeListAST constinArgument2,
                                               class GGS_guiCompoundAttributeListAST constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_guiLabelListAST constinArgument1,
                                                      class GGS_guiSimpleAttributeListAST constinArgument2,
                                                      class GGS_guiCompoundAttributeListAST constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_guiLabelListAST & outArgument1,
                                                 class GGS_guiSimpleAttributeListAST & outArgument2,
                                                 class GGS_guiCompoundAttributeListAST & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_guiLabelListAST & outArgument1,
                                                class GGS_guiSimpleAttributeListAST & outArgument2,
                                                class GGS_guiCompoundAttributeListAST & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_guiLabelListAST & outArgument1,
                                                      class GGS_guiSimpleAttributeListAST & outArgument2,
                                                      class GGS_guiCompoundAttributeListAST & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCompoundAttributesAtIndex (class GGS_guiCompoundAttributeListAST constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelsAtIndex (class GGS_guiLabelListAST constinArgument0,
                                                          class GGS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexiqueFileNameAtIndex (class GGS_lstring constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSimpleAttributesAtIndex (class GGS_guiSimpleAttributeListAST constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_guiLabelListAST & outArgument1,
                                              class GGS_guiSimpleAttributeListAST & outArgument2,
                                              class GGS_guiCompoundAttributeListAST & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_guiLabelListAST & outArgument1,
                                             class GGS_guiSimpleAttributeListAST & outArgument2,
                                             class GGS_guiCompoundAttributeListAST & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_guiCompoundAttributeListAST getter_mCompoundAttributesAtIndex (const class GGS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guiLabelListAST getter_mLabelsAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mLexiqueFileNameAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guiSimpleAttributeListAST getter_mSimpleAttributesAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_withLexiqueListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_withLexiqueListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_withLexiqueListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_withLexiqueListAST ;
  friend class DownEnumerator_withLexiqueListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_withLexiqueListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @withLexiqueListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_withLexiqueListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mLexiqueFileName ;
  public: inline GGS_lstring readProperty_mLexiqueFileName (void) const {
    return mProperty_mLexiqueFileName ;
  }

  public: GGS_guiLabelListAST mProperty_mLabels ;
  public: inline GGS_guiLabelListAST readProperty_mLabels (void) const {
    return mProperty_mLabels ;
  }

  public: GGS_guiSimpleAttributeListAST mProperty_mSimpleAttributes ;
  public: inline GGS_guiSimpleAttributeListAST readProperty_mSimpleAttributes (void) const {
    return mProperty_mSimpleAttributes ;
  }

  public: GGS_guiCompoundAttributeListAST mProperty_mCompoundAttributes ;
  public: inline GGS_guiCompoundAttributeListAST readProperty_mCompoundAttributes (void) const {
    return mProperty_mCompoundAttributes ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_withLexiqueListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexiqueFileName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexiqueFileName = inValue ;
  }

  public: inline void setter_setMLabels (const GGS_guiLabelListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabels = inValue ;
  }

  public: inline void setter_setMSimpleAttributes (const GGS_guiSimpleAttributeListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSimpleAttributes = inValue ;
  }

  public: inline void setter_setMCompoundAttributes (const GGS_guiCompoundAttributeListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCompoundAttributes = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_withLexiqueListAST_2E_element (const GGS_lstring & in_mLexiqueFileName,
                                             const GGS_guiLabelListAST & in_mLabels,
                                             const GGS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                             const GGS_guiCompoundAttributeListAST & in_mCompoundAttributes) ;

//--------------------------------- Copy constructor
  public: GGS_withLexiqueListAST_2E_element (const GGS_withLexiqueListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_withLexiqueListAST_2E_element & operator = (const GGS_withLexiqueListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_withLexiqueListAST_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_guiLabelListAST & inOperand1,
                                                                         const class GGS_guiSimpleAttributeListAST & inOperand2,
                                                                         const class GGS_guiCompoundAttributeListAST & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_withLexiqueListAST_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_withLexiqueListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                         const class GGS_guiLabelListAST & inOperand1,
                                                                         const class GGS_guiSimpleAttributeListAST & inOperand2,
                                                                         const class GGS_guiCompoundAttributeListAST & inOperand3,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_withLexiqueListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guiCommandLineOptionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_guiCommandLineOptionList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_guiCommandLineOptionList (const class GGS_guiCommandLineOptionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mOptionComponent (LOCATION_ARGS) const ;
  public: class GGS_string current_mOptionIdentifier (LOCATION_ARGS) const ;
  public: class GGS_char current_mOptionChar (LOCATION_ARGS) const ;
  public: class GGS_string current_mOptionString (LOCATION_ARGS) const ;
  public: class GGS_string current_mComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_guiCommandLineOptionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_guiCommandLineOptionList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_guiCommandLineOptionList (const class GGS_guiCommandLineOptionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mOptionComponent (LOCATION_ARGS) const ;
  public: class GGS_string current_mOptionIdentifier (LOCATION_ARGS) const ;
  public: class GGS_char current_mOptionChar (LOCATION_ARGS) const ;
  public: class GGS_string current_mOptionString (LOCATION_ARGS) const ;
  public: class GGS_string current_mComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_guiCommandLineOptionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guiCommandLineOptionList list
//--------------------------------------------------------------------------------------------------

class GGS_guiCommandLineOptionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_guiCommandLineOptionList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_guiCommandLineOptionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mOptionComponent,
                                                 const class GGS_string & in_mOptionIdentifier,
                                                 const class GGS_char & in_mOptionChar,
                                                 const class GGS_string & in_mOptionString,
                                                 const class GGS_string & in_mComment
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guiCommandLineOptionList init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guiCommandLineOptionList extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guiCommandLineOptionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_guiCommandLineOptionList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                              const class GGS_string & inOperand1,
                                                                              const class GGS_char & inOperand2,
                                                                              const class GGS_string & inOperand3,
                                                                              const class GGS_string & inOperand4
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_guiCommandLineOptionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_char & inOperand2,
                                                    const class GGS_string & inOperand3,
                                                    const class GGS_string & inOperand4
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_guiCommandLineOptionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_guiCommandLineOptionList add_operation (const GGS_guiCommandLineOptionList & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_char constinArgument2,
                                               class GGS_string constinArgument3,
                                               class GGS_string constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_char constinArgument2,
                                                      class GGS_string constinArgument3,
                                                      class GGS_string constinArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_char & outArgument2,
                                                 class GGS_string & outArgument3,
                                                 class GGS_string & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_char & outArgument2,
                                                class GGS_string & outArgument3,
                                                class GGS_string & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_char & outArgument2,
                                                      class GGS_string & outArgument3,
                                                      class GGS_string & outArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCommentAtIndex (class GGS_string constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionCharAtIndex (class GGS_char constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionComponentAtIndex (class GGS_string constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionIdentifierAtIndex (class GGS_string constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionStringAtIndex (class GGS_string constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_char & outArgument2,
                                              class GGS_string & outArgument3,
                                              class GGS_string & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_char & outArgument2,
                                             class GGS_string & outArgument3,
                                             class GGS_string & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mCommentAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_char getter_mOptionCharAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mOptionComponentAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mOptionIdentifierAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mOptionStringAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guiCommandLineOptionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guiCommandLineOptionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guiCommandLineOptionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_guiCommandLineOptionList ;
  friend class DownEnumerator_guiCommandLineOptionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiCommandLineOptionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guiCommandLineOptionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_guiCommandLineOptionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mOptionComponent ;
  public: inline GGS_string readProperty_mOptionComponent (void) const {
    return mProperty_mOptionComponent ;
  }

  public: GGS_string mProperty_mOptionIdentifier ;
  public: inline GGS_string readProperty_mOptionIdentifier (void) const {
    return mProperty_mOptionIdentifier ;
  }

  public: GGS_char mProperty_mOptionChar ;
  public: inline GGS_char readProperty_mOptionChar (void) const {
    return mProperty_mOptionChar ;
  }

  public: GGS_string mProperty_mOptionString ;
  public: inline GGS_string readProperty_mOptionString (void) const {
    return mProperty_mOptionString ;
  }

  public: GGS_string mProperty_mComment ;
  public: inline GGS_string readProperty_mComment (void) const {
    return mProperty_mComment ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guiCommandLineOptionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionComponent (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionComponent = inValue ;
  }

  public: inline void setter_setMOptionIdentifier (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionIdentifier = inValue ;
  }

  public: inline void setter_setMOptionChar (const GGS_char & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionChar = inValue ;
  }

  public: inline void setter_setMOptionString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionString = inValue ;
  }

  public: inline void setter_setMComment (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mComment = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guiCommandLineOptionList_2E_element (const GGS_string & in_mOptionComponent,
                                                   const GGS_string & in_mOptionIdentifier,
                                                   const GGS_char & in_mOptionChar,
                                                   const GGS_string & in_mOptionString,
                                                   const GGS_string & in_mComment) ;

//--------------------------------- Copy constructor
  public: GGS_guiCommandLineOptionList_2E_element (const GGS_guiCommandLineOptionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guiCommandLineOptionList_2E_element & operator = (const GGS_guiCommandLineOptionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guiCommandLineOptionList_2E_element init_21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_char & inOperand2,
                                                                                   const class GGS_string & inOperand3,
                                                                                   const class GGS_string & inOperand4,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guiCommandLineOptionList_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guiCommandLineOptionList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                               const class GGS_string & inOperand1,
                                                                               const class GGS_char & inOperand2,
                                                                               const class GGS_string & inOperand3,
                                                                               const class GGS_string & inOperand4,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiCommandLineOptionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_extensionMap ;

//--------------------------------------------------------------------------------------------------
//  MapFor_extensionMap
//--------------------------------------------------------------------------------------------------

class MapFor_extensionMap : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_extensionMap > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionMap (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_extensionMap (void) ;

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

  public: MapFor_extensionMap (const MapFor_extensionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_extensionMap & operator = (const MapFor_extensionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_extensionMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_extensionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_extensionMap_2E_element>
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

  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_extensionMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_extensionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_extensionMap & ioResult,
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

class DownEnumerator_extensionMap final {

//--- Constructor
  public: DownEnumerator_extensionMap (const class GGS_extensionMap & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_string current_mLexiqueName (LOCATION_ARGS) const ;

  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_extensionMap_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_extensionMap (const DownEnumerator_extensionMap &) = delete ;
  private: DownEnumerator_extensionMap & operator = (const DownEnumerator_extensionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionMap final {
  public: UpEnumerator_extensionMap (const class GGS_extensionMap & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mLexiqueName (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extensionMap_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_extensionMap (const UpEnumerator_extensionMap &) = delete ;
  private: UpEnumerator_extensionMap & operator = (const UpEnumerator_extensionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionMap : public AC_GALGAS_root {

//--------------------------------- Private property
  private: OptionalSharedRef <MapRootFor_extensionMap > mSharedRoot ;

//--------------------------------- Default constructor
  public: GGS_extensionMap (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extensionMap (void) ;

//--------------------------------- Handle copy
  public: GGS_extensionMap (const GGS_extensionMap & inSource) ;
  public: GGS_extensionMap & operator = (const GGS_extensionMap & inSource) ;
  
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

  // public: GGS_extensionMap (const GGS_extensionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // public: GGS_extensionMap & operator = (const GGS_extensionMap & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_extensionMap_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_extensionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_extensionMap_2E_element>
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

  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_extensionMap> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_extensionMap_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const GGS_extensionMap & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class GGS_extensionMap & ioResult,
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
  public: static GGS_extensionMap init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMap extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_extensionMap class_func_mapWithMapToOverride (const class GGS_extensionMap & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  class GGS_uint constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GGS_uint constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexiqueNameForKey (class GGS_string constinArgument0,
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

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mIndexForKey (const class GGS_string & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mLexiqueNameForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extensionMap getter_overriddenMap (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_extensionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionMap ;
  friend class DownEnumerator_extensionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_string mProperty_mLexiqueName ;
  public: inline GGS_string readProperty_mLexiqueName (void) const {
    return mProperty_mLexiqueName ;
  }

  public: GGS_uint mProperty_mIndex ;
  public: inline GGS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexiqueName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexiqueName = inValue ;
  }

  public: inline void setter_setMIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionMap_2E_element (const GGS_lstring & in_lkey,
                                       const GGS_string & in_mLexiqueName,
                                       const GGS_uint & in_mIndex) ;

//--------------------------------- Copy constructor
  public: GGS_extensionMap_2E_element (const GGS_extensionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionMap_2E_element & operator = (const GGS_extensionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               const class GGS_uint & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMap_2E_element extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                   const class GGS_string & inOperand1,
                                                                   const class GGS_uint & inOperand2,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionMap_2E_element_3F_ (const GGS_extensionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_extensionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMap_2E_element_3F_ ;

