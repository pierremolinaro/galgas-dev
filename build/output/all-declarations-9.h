#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionInitializerForBuildingContext map
//--------------------------------------------------------------------------------------------------

#include "String-class.h"
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

/*  protected: MapRootFor_extensionInitializerForBuildingContext getOverridenMap (void) const {
    MapRootFor_extensionInitializerForBuildingContext result ;
    if (isValid ()) {
      result = mSharedRoot->mOverriddenRoot ;
    }
    return result ;
  } */

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

class GGS_extensionInitializerForBuildingContext : public MapFor_extensionInitializerForBuildingContext {
//--------------------------------- Default constructor
  public: GGS_extensionInitializerForBuildingContext (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extensionInitializerForBuildingContext (void) = default ;

//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;


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

#include "String-class.h"
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

/*  protected: MapRootFor_extensionMethodMapForType getOverridenMap (void) const {
    MapRootFor_extensionMethodMapForType result ;
    if (isValid ()) {
      result = mSharedRoot->mOverriddenRoot ;
    }
    return result ;
  } */

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

class GGS_extensionMethodMapForType : public MapFor_extensionMethodMapForType {
//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForType (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extensionMethodMapForType (void) = default ;

//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;


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

#include "String-class.h"
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

/*  protected: MapRootFor_extensionMethodMapForBuildingContext getOverridenMap (void) const {
    MapRootFor_extensionMethodMapForBuildingContext result ;
    if (isValid ()) {
      result = mSharedRoot->mOverriddenRoot ;
    }
    return result ;
  } */

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

class GGS_extensionMethodMapForBuildingContext : public MapFor_extensionMethodMapForBuildingContext {
//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForBuildingContext (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extensionMethodMapForBuildingContext (void) = default ;

//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;


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

#include "String-class.h"
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

/*  protected: MapRootFor_extensionSetterMapForType getOverridenMap (void) const {
    MapRootFor_extensionSetterMapForType result ;
    if (isValid ()) {
      result = mSharedRoot->mOverriddenRoot ;
    }
    return result ;
  } */

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

class GGS_extensionSetterMapForType : public MapFor_extensionSetterMapForType {
//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForType (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extensionSetterMapForType (void) = default ;

//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;


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

#include "String-class.h"
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

/*  protected: MapRootFor_extensionSetterMapForBuildingContext getOverridenMap (void) const {
    MapRootFor_extensionSetterMapForBuildingContext result ;
    if (isValid ()) {
      result = mSharedRoot->mOverriddenRoot ;
    }
    return result ;
  } */

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

class GGS_extensionSetterMapForBuildingContext : public MapFor_extensionSetterMapForBuildingContext {
//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForBuildingContext (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extensionSetterMapForBuildingContext (void) = default ;

//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;


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

#include "String-class.h"
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

/*  protected: MapRootFor_extensionGetterMapForType getOverridenMap (void) const {
    MapRootFor_extensionGetterMapForType result ;
    if (isValid ()) {
      result = mSharedRoot->mOverriddenRoot ;
    }
    return result ;
  } */

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

class GGS_extensionGetterMapForType : public MapFor_extensionGetterMapForType {
//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForType (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extensionGetterMapForType (void) = default ;

//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;


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

#include "String-class.h"
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

/*  protected: MapRootFor_extensionGetterMapForBuildingContext getOverridenMap (void) const {
    MapRootFor_extensionGetterMapForBuildingContext result ;
    if (isValid ()) {
      result = mSharedRoot->mOverriddenRoot ;
    }
    return result ;
  } */

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

class GGS_extensionGetterMapForBuildingContext : public MapFor_extensionGetterMapForBuildingContext {
//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForBuildingContext (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extensionGetterMapForBuildingContext (void) = default ;

//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;


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

#include "String-class.h"
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

/*  protected: MapRootFor_wrapperExtensionMap getOverridenMap (void) const {
    MapRootFor_wrapperExtensionMap result ;
    if (isValid ()) {
      result = mSharedRoot->mOverriddenRoot ;
    }
    return result ;
  } */

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

class GGS_wrapperExtensionMap : public MapFor_wrapperExtensionMap {
//--------------------------------- Default constructor
  public: GGS_wrapperExtensionMap (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_wrapperExtensionMap (void) = default ;

//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;


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

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticTypePrecedenceGraph graph
//--------------------------------------------------------------------------------------------------

class GGS_semanticTypePrecedenceGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public: GGS_semanticTypePrecedenceGraph (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticTypePrecedenceGraph init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticTypePrecedenceGraph extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticTypePrecedenceGraph class_func_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_addNode (class GGS_lstring inArgument0,
                                                class GGS_semanticDeclarationAST inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_circularities (class GGS_semanticDeclarationListAST & outArgument0,
                                                      class GGS_lstringlist & outArgument1
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GGS_semanticDeclarationListAST & outArgument0,
                                                                  class GGS_lstringlist & outArgument1,
                                                                  class GGS_semanticDeclarationListAST & outArgument2,
                                                                  class GGS_lstringlist & outArgument3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GGS_semanticDeclarationListAST & outArgument0,
                                                               class GGS_lstringlist & outArgument1
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GGS_semanticDeclarationListAST & outArgument0,
                                                             class GGS_lstringlist & outArgument1
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_topologicalSort (class GGS_semanticDeclarationListAST & outArgument0,
                                                        class GGS_lstringlist & outArgument1,
                                                        class GGS_semanticDeclarationListAST & outArgument2,
                                                        class GGS_lstringlist & outArgument3,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_accessibleNodesFrom (const class GGS_lstringlist & constinOperand0,
                                                                             const class GGS_stringset & constinOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticDeclarationListAST getter_nodeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticTypePrecedenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticTypePrecedenceGraph getter_subgraphFromNodes (const class GGS_lstringlist & constinOperand0,
                                                                                           const class GGS_stringset & constinOperand1,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addAssociatedElement (class cPtr_semanticDeclarationAST * inObject,
                                               class GGS_galgasDeclarationAST & io_ioDeclarations,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticExpressionListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_semanticExpressionListForGeneration final : public cGenericAbstractEnumerator {
  public: DownEnumerator_semanticExpressionListForGeneration (const class GGS_semanticExpressionListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_semanticExpressionForGeneration current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_semanticExpressionListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_semanticExpressionListForGeneration final : public cGenericAbstractEnumerator {
  public: UpEnumerator_semanticExpressionListForGeneration (const class GGS_semanticExpressionListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_semanticExpressionForGeneration current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_semanticExpressionListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticExpressionListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_semanticExpressionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_semanticExpressionListForGeneration (void) ;

//--------------------------------- List constructor by graph
  public: GGS_semanticExpressionListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_semanticExpressionForGeneration & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticExpressionListForGeneration init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticExpressionListForGeneration extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticExpressionListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_semanticExpressionListForGeneration class_func_listWithValue (const class GGS_semanticExpressionForGeneration & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_semanticExpressionListForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_semanticExpressionForGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_semanticExpressionListForGeneration_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_semanticExpressionListForGeneration add_operation (const GGS_semanticExpressionListForGeneration & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_semanticExpressionForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_semanticExpressionForGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_semanticExpressionForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_semanticExpressionForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_semanticExpressionForGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GGS_semanticExpressionForGeneration constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_semanticExpressionForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_semanticExpressionForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_semanticExpressionForGeneration getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticExpressionListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticExpressionListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticExpressionListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_semanticExpressionListForGeneration ;
  friend class DownEnumerator_semanticExpressionListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticExpressionListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_semanticExpressionListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;
  public: inline GGS_semanticExpressionForGeneration readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_semanticExpressionListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_semanticExpressionListForGeneration_2E_element (const GGS_semanticExpressionForGeneration & in_mExpression) ;

//--------------------------------- Copy constructor
  public: GGS_semanticExpressionListForGeneration_2E_element (const GGS_semanticExpressionListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_semanticExpressionListForGeneration_2E_element & operator = (const GGS_semanticExpressionListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticExpressionListForGeneration_2E_element init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticExpressionListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticExpressionListForGeneration_2E_element class_func_new (const class GGS_semanticExpressionForGeneration & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionListForGeneration_2E_element ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_castInExpressionForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                         const class GGS_location & inOperand1,
                                                                         const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                         const class GGS_string & inOperand3,
                                                                         const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_castInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionForGeneration ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_actualParameterForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_actualParameterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_actualParameterForGeneration (const class cPtr_actualParameterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mFormalArgumentType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actualParameterForGeneration init_21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actualParameterForGeneration extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_actualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @actualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_actualParameterForGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void actualParameterForGeneration_init_21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                      Compiler * inCompiler) ;


//--- Extension method generateActualParameter
  public: virtual void method_generateActualParameter (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_string & arg_ioImplementation,
           class GGS_stringlist & arg_ioJokerParametersToReleaseList,
           class GGS_stringlist & arg_ioOutputVariableList,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppName,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method generatePoisonedVariables
  public: virtual void method_generatePoisonedVariables (class GGS_string & arg_ioImplementation,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mFormalArgumentType ;


//--- Default constructor
  public: cPtr_actualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_actualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterForGeneration_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_outputActualParameterForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                              const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeMapEntryList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_unifiedTypeMapEntryList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_unifiedTypeMapEntryList (const class GGS_unifiedTypeMapEntryList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_unifiedTypeMapEntry current_mEntry (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_unifiedTypeMapEntryList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_unifiedTypeMapEntryList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_unifiedTypeMapEntryList (const class GGS_unifiedTypeMapEntryList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_unifiedTypeMapEntry current_mEntry (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_unifiedTypeMapEntryList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeMapEntryList list
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntryList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_unifiedTypeMapEntryList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_unifiedTypeMapEntryList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
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
  public: static class GGS_unifiedTypeMapEntryList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_unifiedTypeMapEntryList class_func_listWithValue (const class GGS_unifiedTypeMapEntry & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_unifiedTypeMapEntryList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_unifiedTypeMapEntry & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_unifiedTypeMapEntryList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_unifiedTypeMapEntryList add_operation (const GGS_unifiedTypeMapEntryList & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_unifiedTypeMapEntry constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_unifiedTypeMapEntry & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_unifiedTypeMapEntry & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_unifiedTypeMapEntry & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEntryAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_unifiedTypeMapEntry & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_unifiedTypeMapEntry & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mEntryAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntryList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntryList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntryList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_unifiedTypeMapEntryList ;
  friend class DownEnumerator_unifiedTypeMapEntryList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntryList ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_unifiedTypeMapEntryList_2E_element class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unifiedTypeMapEntryList_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntryList_2E_element ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_outputInputActualParameterForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_lstringlist & inOperand2,
                                                                                   const class GGS_unifiedTypeMapEntryList & inOperand3,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_outputInputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_inputActualParameterForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             const class GGS__32_stringlist & inOperand2,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualParameterForGeneration_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_inputJokerParameterForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GGS_string & inOperand1,
                                                                            const class GGS__32_stringlist & inOperand2,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputJokerParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerParameterForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actualParameterListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_actualParameterListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_actualParameterForGeneration mProperty_mActualParameter ;
  public: inline GGS_actualParameterForGeneration readProperty_mActualParameter (void) const {
    return mProperty_mActualParameter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_actualParameterListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMActualParameter (const GGS_actualParameterForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActualParameter = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_actualParameterListForGeneration_2E_element (const GGS_actualParameterForGeneration & in_mActualParameter) ;

//--------------------------------- Copy constructor
  public: GGS_actualParameterListForGeneration_2E_element (const GGS_actualParameterListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_actualParameterListForGeneration_2E_element & operator = (const GGS_actualParameterListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actualParameterListForGeneration_2E_element init_21_ (const class GGS_actualParameterForGeneration & inOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actualParameterListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actualParameterListForGeneration_2E_element class_func_new (const class GGS_actualParameterForGeneration & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionForGeneration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_semanticInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_semanticInstructionForGeneration_2E_weak (const class GGS_semanticInstructionForGeneration & inSource) ;

  public: GGS_semanticInstructionForGeneration_2E_weak & operator = (const class GGS_semanticInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_semanticInstructionForGeneration_2E_weak init_nil (void) {
    GGS_semanticInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_semanticInstructionForGeneration bang_semanticInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_semanticInstructionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_semanticInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticBlockInstructionForGeneration class_func_new (const class GGS_semanticInstructionListForGeneration & inOperand0,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticBlockInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @listOfSemanticInstructionListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_listOfSemanticInstructionListForGeneration final : public cGenericAbstractEnumerator {
  public: DownEnumerator_listOfSemanticInstructionListForGeneration (const class GGS_listOfSemanticInstructionListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_semanticInstructionListForGeneration current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_listOfSemanticInstructionListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_listOfSemanticInstructionListForGeneration final : public cGenericAbstractEnumerator {
  public: UpEnumerator_listOfSemanticInstructionListForGeneration (const class GGS_listOfSemanticInstructionListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_semanticInstructionListForGeneration current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_listOfSemanticInstructionListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @listOfSemanticInstructionListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_listOfSemanticInstructionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_listOfSemanticInstructionListForGeneration (void) ;

//--------------------------------- List constructor by graph
  public: GGS_listOfSemanticInstructionListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                 const class GGS_location & in_mEndOfInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_listOfSemanticInstructionListForGeneration init (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_listOfSemanticInstructionListForGeneration extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_listOfSemanticInstructionListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_listOfSemanticInstructionListForGeneration class_func_listWithValue (const class GGS_semanticInstructionListForGeneration & inOperand0,
                                                                                                const class GGS_location & inOperand1
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_listOfSemanticInstructionListForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_semanticInstructionListForGeneration & inOperand0,
                                                    const class GGS_location & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_listOfSemanticInstructionListForGeneration_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_listOfSemanticInstructionListForGeneration add_operation (const GGS_listOfSemanticInstructionListForGeneration & inOperand,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_semanticInstructionListForGeneration constinArgument0,
                                               class GGS_location constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_semanticInstructionListForGeneration constinArgument0,
                                                      class GGS_location constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_semanticInstructionListForGeneration & outArgument0,
                                                 class GGS_location & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_semanticInstructionListForGeneration & outArgument0,
                                                class GGS_location & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_semanticInstructionListForGeneration & outArgument0,
                                                      class GGS_location & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstructionListAtIndex (class GGS_location constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_semanticInstructionListForGeneration constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_semanticInstructionListForGeneration & outArgument0,
                                              class GGS_location & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_semanticInstructionListForGeneration & outArgument0,
                                             class GGS_location & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListForGeneration getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_listOfSemanticInstructionListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_listOfSemanticInstructionListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_listOfSemanticInstructionListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_listOfSemanticInstructionListForGeneration ;
  friend class DownEnumerator_listOfSemanticInstructionListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @listOfSemanticInstructionListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_listOfSemanticInstructionListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticInstructionListForGeneration mProperty_mInstructionList ;
  public: inline GGS_semanticInstructionListForGeneration readProperty_mInstructionList (void) const {
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
  public: GGS_listOfSemanticInstructionListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstructionList (const GGS_semanticInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfInstructionList (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_listOfSemanticInstructionListForGeneration_2E_element (const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                     const GGS_location & in_mEndOfInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_listOfSemanticInstructionListForGeneration_2E_element (const GGS_listOfSemanticInstructionListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_listOfSemanticInstructionListForGeneration_2E_element & operator = (const GGS_listOfSemanticInstructionListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_listOfSemanticInstructionListForGeneration_2E_element init_21__21_ (const class GGS_semanticInstructionListForGeneration & inOperand0,
                                                                                         const class GGS_location & inOperand1,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_listOfSemanticInstructionListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_listOfSemanticInstructionListForGeneration_2E_element class_func_new (const class GGS_semanticInstructionListForGeneration & inOperand0,
                                                                                                 const class GGS_location & inOperand1,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticDeclarationForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_semanticDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_semanticDeclarationForGeneration (const class cPtr_semanticDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticDeclarationForGeneration init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticDeclarationForGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @semanticDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_semanticDeclarationForGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticDeclarationForGeneration_init (Compiler * inCompiler) ;


//--- Extension getter appendPrimitiveTypeDeclaration
  public: virtual class GGS_string getter_appendPrimitiveTypeDeclaration (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter appendTypeGenericImplementation
  public: virtual class GGS_string getter_appendTypeGenericImplementation (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter getImplementationCppFileName
  public: virtual class GGS_string getter_getImplementationCppFileName (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter hasCppHeaderFile
  public: virtual class GGS_bool getter_hasCppHeaderFile (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter isPredefined
  public: virtual class GGS_bool getter_isPredefined (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method appendDeclaration2
  public: virtual void method_appendDeclaration_32_ (const class GGS_string arg_inOutputDirectory,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method appendPrimitiveTypePreDeclaration
  public: virtual void method_appendPrimitiveTypePreDeclaration (class GGS_string & arg_ioHeader,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method appendSpecificFiles
  public: virtual void method_appendSpecificFiles (const class GGS_string arg_inProductDirectory,
           class GGS_stringset & arg_ioAllProductFileSet,
           class GGS_stringlist & arg_ioObjcAppProductFileList,
           class GGS_stringlist & arg_ioSwiftAppProductFileList,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties



//--- Constructor
  public: cPtr_semanticDeclarationForGeneration (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2E_weak ;

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
// Phase 1: @semanticDeclarationListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_semanticDeclarationListForGeneration final : public cGenericAbstractEnumerator {
  public: DownEnumerator_semanticDeclarationListForGeneration (const class GGS_semanticDeclarationListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_infoMessage (LOCATION_ARGS) const ;
  public: class GGS_semanticDeclarationForGeneration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_semanticDeclarationListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_semanticDeclarationListForGeneration final : public cGenericAbstractEnumerator {
  public: UpEnumerator_semanticDeclarationListForGeneration (const class GGS_semanticDeclarationListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_infoMessage (LOCATION_ARGS) const ;
  public: class GGS_semanticDeclarationForGeneration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_semanticDeclarationListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticDeclarationListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_semanticDeclarationListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_semanticDeclarationListForGeneration (void) ;

//--------------------------------- List constructor by graph
  public: GGS_semanticDeclarationListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_infoMessage,
                                                 const class GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticDeclarationListForGeneration init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticDeclarationListForGeneration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticDeclarationListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_semanticDeclarationListForGeneration class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                          const class GGS_semanticDeclarationForGeneration & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_semanticDeclarationListForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_semanticDeclarationForGeneration & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_semanticDeclarationListForGeneration_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_semanticDeclarationListForGeneration add_operation (const GGS_semanticDeclarationListForGeneration & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_semanticDeclarationForGeneration constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_semanticDeclarationForGeneration constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_semanticDeclarationForGeneration & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_semanticDeclarationForGeneration & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_semanticDeclarationForGeneration & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setInfoMessageAtIndex (class GGS_string constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclarationAtIndex (class GGS_semanticDeclarationForGeneration constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_semanticDeclarationForGeneration & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_semanticDeclarationForGeneration & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_infoMessageAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticDeclarationForGeneration getter_mDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticDeclarationListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticDeclarationListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticDeclarationListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_semanticDeclarationListForGeneration ;
  friend class DownEnumerator_semanticDeclarationListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticDeclarationListForGeneration_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                           const class GGS_semanticDeclarationForGeneration & inOperand1,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @signatureForGrammarAnalysis list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_signatureForGrammarAnalysis final : public cGenericAbstractEnumerator {
  public: DownEnumerator_signatureForGrammarAnalysis (const class GGS_signatureForGrammarAnalysis & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_formalArgumentPassingModeAST current_mFormalArgumentPassingModeForGrammarAnalysis (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mGalgasTypeNameForGrammarAnalysis (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_signatureForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_signatureForGrammarAnalysis final : public cGenericAbstractEnumerator {
  public: UpEnumerator_signatureForGrammarAnalysis (const class GGS_signatureForGrammarAnalysis & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_formalArgumentPassingModeAST current_mFormalArgumentPassingModeForGrammarAnalysis (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mGalgasTypeNameForGrammarAnalysis (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_signatureForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @signatureForGrammarAnalysis list
//--------------------------------------------------------------------------------------------------

class GGS_signatureForGrammarAnalysis : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_signatureForGrammarAnalysis (void) ;

//--------------------------------- List constructor by graph
  public: GGS_signatureForGrammarAnalysis (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
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
  public: static class GGS_signatureForGrammarAnalysis class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_signatureForGrammarAnalysis class_func_listWithValue (const class GGS_formalArgumentPassingModeAST & inOperand0,
                                                                                 const class GGS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_signatureForGrammarAnalysis inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_formalArgumentPassingModeAST & inOperand0,
                                                    const class GGS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_signatureForGrammarAnalysis_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_signatureForGrammarAnalysis add_operation (const GGS_signatureForGrammarAnalysis & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_formalArgumentPassingModeAST constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_formalArgumentPassingModeAST constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_formalArgumentPassingModeAST & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_formalArgumentPassingModeAST & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_formalArgumentPassingModeAST & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentPassingModeForGrammarAnalysisAtIndex (class GGS_formalArgumentPassingModeAST constinArgument0,
                                                                                               class GGS_uint constinArgument1,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGalgasTypeNameForGrammarAnalysisAtIndex (class GGS_lstring constinArgument0,
                                                                                    class GGS_uint constinArgument1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_formalArgumentPassingModeAST & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_formalArgumentPassingModeAST & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_formalArgumentPassingModeAST getter_mFormalArgumentPassingModeForGrammarAnalysisAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mGalgasTypeNameForGrammarAnalysisAtIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_signatureForGrammarAnalysis getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_signatureForGrammarAnalysis getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_signatureForGrammarAnalysis getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_signatureForGrammarAnalysis ;
  friend class DownEnumerator_signatureForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_signatureForGrammarAnalysis ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_signatureForGrammarAnalysis_2E_element class_func_new (const class GGS_formalArgumentPassingModeAST & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_signatureForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonterminalSymbolLabelMapForGrammarAnalysis map
//--------------------------------------------------------------------------------------------------

#include "String-class.h"
#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_nonterminalSymbolLabelMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
//  MapFor_nonterminalSymbolLabelMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

class MapFor_nonterminalSymbolLabelMapForGrammarAnalysis : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_nonterminalSymbolLabelMapForGrammarAnalysis > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_nonterminalSymbolLabelMapForGrammarAnalysis (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_nonterminalSymbolLabelMapForGrammarAnalysis (void) ;

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

  public: MapFor_nonterminalSymbolLabelMapForGrammarAnalysis (const MapFor_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_nonterminalSymbolLabelMapForGrammarAnalysis & operator = (const MapFor_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>
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

  protected: const SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_nonterminalSymbolLabelMapForGrammarAnalysis> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_nonterminalSymbolLabelMapForGrammarAnalysis & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*  protected: MapRootFor_nonterminalSymbolLabelMapForGrammarAnalysis getOverridenMap (void) const {
    MapRootFor_nonterminalSymbolLabelMapForGrammarAnalysis result ;
    if (isValid ()) {
      result = mSharedRoot->mOverriddenRoot ;
    }
    return result ;
  } */

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_nonterminalSymbolLabelMapForGrammarAnalysis & ioResult,
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

class DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis final {
//--- Constructor
  public: DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_signatureForGrammarAnalysis current_mFormalParametersList (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis &) = delete ;
  private: DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis & operator = (const DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis final {
  public: UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_signatureForGrammarAnalysis current_mFormalParametersList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis &) = delete ;
  private: UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis & operator = (const UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_nonterminalSymbolLabelMapForGrammarAnalysis : public MapFor_nonterminalSymbolLabelMapForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_nonterminalSymbolLabelMapForGrammarAnalysis (void) = default ;

//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;


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
  public: static class GGS_nonterminalSymbolLabelMapForGrammarAnalysis class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_nonterminalSymbolLabelMapForGrammarAnalysis class_func_mapWithMapToOverride (const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand0
                                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_signatureForGrammarAnalysis constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParametersListForKey (class GGS_signatureForGrammarAnalysis constinArgument0,
                                                                       class GGS_string constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_signatureForGrammarAnalysis & outArgument1,
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

  public: VIRTUAL_IN_DEBUG class GGS_signatureForGrammarAnalysis getter_mFormalParametersListForKey (const class GGS_string & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_nonterminalSymbolLabelMapForGrammarAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis ;
  friend class DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_signatureForGrammarAnalysis & inOperand1,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalSymbolMapForGrammarAnalysis map
//--------------------------------------------------------------------------------------------------

#include "String-class.h"
#include "SharedGenericPtrWithValueSemantics.h"

class MapRootFor_nonTerminalSymbolMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
//  MapFor_nonTerminalSymbolMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

class MapFor_nonTerminalSymbolMapForGrammarAnalysis : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <MapRootFor_nonTerminalSymbolMapForGrammarAnalysis > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_nonTerminalSymbolMapForGrammarAnalysis (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ MapFor_nonTerminalSymbolMapForGrammarAnalysis (void) ;

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

  public: MapFor_nonTerminalSymbolMapForGrammarAnalysis (const MapFor_nonTerminalSymbolMapForGrammarAnalysis & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: MapFor_nonTerminalSymbolMapForGrammarAnalysis & operator = (const MapFor_nonTerminalSymbolMapForGrammarAnalysis & inSource) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertOrReplace (const class GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & inElement
                                   COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void performInsert (const class GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: SharedGenericPtrWithValueSemantics <class GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>
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

  protected: const SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element> infoForKey (const String & inKey) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 
  protected: OptionalSharedRef <class MapNodeFor_nonTerminalSymbolMapForGrammarAnalysis> nodeForKey (const String & inKey) const ;
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const ;
 
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> sortedInfoArray (void) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: GGS_lstringlist keyList (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void makeNewEmptyMapWithMapToOverride (const MapFor_nonTerminalSymbolMapForGrammarAnalysis & inOverridenMap
                                                    COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*  protected: MapRootFor_nonTerminalSymbolMapForGrammarAnalysis getOverridenMap (void) const {
    MapRootFor_nonTerminalSymbolMapForGrammarAnalysis result ;
    if (isValid ()) {
      result = mSharedRoot->mOverriddenRoot ;
    }
    return result ;
  } */

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getOverridenMap (class MapFor_nonTerminalSymbolMapForGrammarAnalysis & ioResult,
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

class DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis final {
//--- Constructor
  public: DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const class GGS_nonTerminalSymbolMapForGrammarAnalysis & inMap) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;

  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis &) = delete ;
  private: DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis & operator = (const DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis final {
  public: UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const class GGS_nonTerminalSymbolMapForGrammarAnalysis & inMap)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;


//--- Private properties
  private: TC_Array <SharedGenericPtrWithValueSemantics <GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis &) = delete ;
  private: UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis & operator = (const UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalSymbolMapForGrammarAnalysis : public MapFor_nonTerminalSymbolMapForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GGS_nonTerminalSymbolMapForGrammarAnalysis (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_nonTerminalSymbolMapForGrammarAnalysis (void) = default ;

//--------------------------------- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalSymbolMapForGrammarAnalysis init (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalSymbolMapForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonTerminalSymbolMapForGrammarAnalysis class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_nonTerminalSymbolMapForGrammarAnalysis class_func_mapWithMapToOverride (const class GGS_nonTerminalSymbolMapForGrammarAnalysis & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  class GGS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonTerminalIndexForKey (class GGS_uint constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalSymbolParametersMapForKey (class GGS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument0,
                                                                                 class GGS_string constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
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

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mNonTerminalIndexForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_nonterminalSymbolLabelMapForGrammarAnalysis getter_mNonterminalSymbolParametersMapForKey (const class GGS_string & constinOperand0,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_nonTerminalSymbolMapForGrammarAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis ;
  friend class DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                             const class GGS_uint & inOperand1,
                                                                                             const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalToAddList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_nonTerminalToAddList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_nonTerminalToAddList (const class GGS_nonTerminalToAddList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public: class GGS_uint current_mNonTerminalToAddCount (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_nonTerminalToAddList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_nonTerminalToAddList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_nonTerminalToAddList (const class GGS_nonTerminalToAddList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public: class GGS_uint current_mNonTerminalToAddCount (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_nonTerminalToAddList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalToAddList list
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalToAddList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_nonTerminalToAddList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_nonTerminalToAddList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
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
  public: static class GGS_nonTerminalToAddList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_nonTerminalToAddList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                          const class GGS_uint & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_nonTerminalToAddList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_uint & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_nonTerminalToAddList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_nonTerminalToAddList add_operation (const GGS_nonTerminalToAddList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_uint & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_uint & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_uint & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonTerminalToAddCountAtIndex (class GGS_uint constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentNameAtIndex (class GGS_string constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_uint & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_uint & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mNonTerminalToAddCountAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mSyntaxComponentNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_nonTerminalToAddList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_nonTerminalToAddList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_nonTerminalToAddList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_nonTerminalToAddList ;
  friend class DownEnumerator_nonTerminalToAddList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalToAddList ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_nonTerminalToAddList_2E_element class_func_new (const class GGS_string & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalToAddList_2E_element ;

