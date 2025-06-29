#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @descendantClassListMap struct
//--------------------------------------------------------------------------------------------------

class GGS_descendantClassListMap : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_descendantClassListMapDictionary mProperty_dictionary ;
  public: inline GGS_descendantClassListMapDictionary readProperty_dictionary (void) const {
    return mProperty_dictionary ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_descendantClassListMap (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDictionary (const GGS_descendantClassListMapDictionary & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_dictionary = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_descendantClassListMap (const GGS_descendantClassListMapDictionary & in_dictionary) ;

//--------------------------------- Copy constructor
  public: GGS_descendantClassListMap (const GGS_descendantClassListMap & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_descendantClassListMap & operator = (const GGS_descendantClassListMap & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_descendantClassListMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_descendantClassListMap extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_descendantClassListMap class_func_new (Compiler * inCompiler
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_descendantClassListMap ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@descendantClassListMap listForKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntryList extensionGetter_listForKey (const class GGS_descendantClassListMap & inObject,
                                                              const class GGS_string & constinArgument0,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMethodMapForGlobalCheckings map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionMethodMapForGlobalCheckings final : public cGenericAbstractEnumerator {
  public: DownEnumerator_extensionMethodMapForGlobalCheckings (const class GGS_extensionMethodMapForGlobalCheckings & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extensionMethodMapForGlobalCheckings_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionMethodMapForGlobalCheckings final : public cGenericAbstractEnumerator {
  public: UpEnumerator_extensionMethodMapForGlobalCheckings (const class GGS_extensionMethodMapForGlobalCheckings & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extensionMethodMapForGlobalCheckings_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMethodMapForGlobalCheckings map
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionMethodMapForGlobalCheckings ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForGlobalCheckings : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForGlobalCheckings (void) ;

//--------------------------------- Handle copy
  public: GGS_extensionMethodMapForGlobalCheckings (const GGS_extensionMethodMapForGlobalCheckings & inSource) ;
  public: GGS_extensionMethodMapForGlobalCheckings & operator = (const GGS_extensionMethodMapForGlobalCheckings & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodMapForGlobalCheckings init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMethodMapForGlobalCheckings extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMethodMapForGlobalCheckings class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_extensionMethodMapForGlobalCheckings class_func_mapWithMapToOverride (const class GGS_extensionMethodMapForGlobalCheckings & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_extensionMethodMapForGlobalCheckings getter_overriddenMap (Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionMethodMapForGlobalCheckings * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                 const GGS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_extensionMethodMapForGlobalCheckings ;
  friend class DownEnumerator_extensionMethodMapForGlobalCheckings ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@extensionMethodMapForGlobalCheckings' map
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionMethodMapForGlobalCheckings : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_extensionMethodMapForGlobalCheckings (const GGS_extensionMethodMapForGlobalCheckings_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_extensionMethodMapForGlobalCheckings (const GGS_lstring & inKey
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMethodMapForGlobalCheckings_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForGlobalCheckings_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForGlobalCheckings_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionMethodMapForGlobalCheckings_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_extensionMethodMapForGlobalCheckings_2E_element (const GGS_extensionMethodMapForGlobalCheckings_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionMethodMapForGlobalCheckings_2E_element & operator = (const GGS_extensionMethodMapForGlobalCheckings_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodMapForGlobalCheckings_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMethodMapForGlobalCheckings_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMethodMapForGlobalCheckings_2E_element class_func_new (const class GGS_lstring & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionMethodMapForGlobalCheckings.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionMethodMapForGlobalCheckings_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ (const GGS_extensionMethodMapForGlobalCheckings_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionMethodMapForGlobalCheckings_2E_element unwrappedValue (void) const {
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
  public: static GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionSetterMapForGlobalCheckings map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionSetterMapForGlobalCheckings final : public cGenericAbstractEnumerator {
  public: DownEnumerator_extensionSetterMapForGlobalCheckings (const class GGS_extensionSetterMapForGlobalCheckings & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extensionSetterMapForGlobalCheckings_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionSetterMapForGlobalCheckings final : public cGenericAbstractEnumerator {
  public: UpEnumerator_extensionSetterMapForGlobalCheckings (const class GGS_extensionSetterMapForGlobalCheckings & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extensionSetterMapForGlobalCheckings_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionSetterMapForGlobalCheckings map
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionSetterMapForGlobalCheckings ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForGlobalCheckings : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForGlobalCheckings (void) ;

//--------------------------------- Handle copy
  public: GGS_extensionSetterMapForGlobalCheckings (const GGS_extensionSetterMapForGlobalCheckings & inSource) ;
  public: GGS_extensionSetterMapForGlobalCheckings & operator = (const GGS_extensionSetterMapForGlobalCheckings & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterMapForGlobalCheckings init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionSetterMapForGlobalCheckings extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionSetterMapForGlobalCheckings class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_extensionSetterMapForGlobalCheckings class_func_mapWithMapToOverride (const class GGS_extensionSetterMapForGlobalCheckings & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_extensionSetterMapForGlobalCheckings getter_overriddenMap (Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionSetterMapForGlobalCheckings * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                 const GGS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_extensionSetterMapForGlobalCheckings ;
  friend class DownEnumerator_extensionSetterMapForGlobalCheckings ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@extensionSetterMapForGlobalCheckings' map
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionSetterMapForGlobalCheckings : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_extensionSetterMapForGlobalCheckings (const GGS_extensionSetterMapForGlobalCheckings_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_extensionSetterMapForGlobalCheckings (const GGS_lstring & inKey
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionSetterMapForGlobalCheckings_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForGlobalCheckings_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForGlobalCheckings_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionSetterMapForGlobalCheckings_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_extensionSetterMapForGlobalCheckings_2E_element (const GGS_extensionSetterMapForGlobalCheckings_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionSetterMapForGlobalCheckings_2E_element & operator = (const GGS_extensionSetterMapForGlobalCheckings_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterMapForGlobalCheckings_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionSetterMapForGlobalCheckings_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionSetterMapForGlobalCheckings_2E_element class_func_new (const class GGS_lstring & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionSetterMapForGlobalCheckings.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionSetterMapForGlobalCheckings_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ (const GGS_extensionSetterMapForGlobalCheckings_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionSetterMapForGlobalCheckings_2E_element unwrappedValue (void) const {
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
  public: static GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionGetterMapForGlobalCheckings map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionGetterMapForGlobalCheckings final : public cGenericAbstractEnumerator {
  public: DownEnumerator_extensionGetterMapForGlobalCheckings (const class GGS_extensionGetterMapForGlobalCheckings & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extensionGetterMapForGlobalCheckings_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionGetterMapForGlobalCheckings final : public cGenericAbstractEnumerator {
  public: UpEnumerator_extensionGetterMapForGlobalCheckings (const class GGS_extensionGetterMapForGlobalCheckings & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extensionGetterMapForGlobalCheckings_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionGetterMapForGlobalCheckings map
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionGetterMapForGlobalCheckings ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForGlobalCheckings : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForGlobalCheckings (void) ;

//--------------------------------- Handle copy
  public: GGS_extensionGetterMapForGlobalCheckings (const GGS_extensionGetterMapForGlobalCheckings & inSource) ;
  public: GGS_extensionGetterMapForGlobalCheckings & operator = (const GGS_extensionGetterMapForGlobalCheckings & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterMapForGlobalCheckings init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionGetterMapForGlobalCheckings extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionGetterMapForGlobalCheckings class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_extensionGetterMapForGlobalCheckings class_func_mapWithMapToOverride (const class GGS_extensionGetterMapForGlobalCheckings & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_extensionGetterMapForGlobalCheckings getter_overriddenMap (Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionGetterMapForGlobalCheckings * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                 const GGS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_extensionGetterMapForGlobalCheckings ;
  friend class DownEnumerator_extensionGetterMapForGlobalCheckings ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@extensionGetterMapForGlobalCheckings' map
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionGetterMapForGlobalCheckings : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_extensionGetterMapForGlobalCheckings (const GGS_extensionGetterMapForGlobalCheckings_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_extensionGetterMapForGlobalCheckings (const GGS_lstring & inKey
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionGetterMapForGlobalCheckings_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForGlobalCheckings_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForGlobalCheckings_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionGetterMapForGlobalCheckings_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_extensionGetterMapForGlobalCheckings_2E_element (const GGS_extensionGetterMapForGlobalCheckings_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionGetterMapForGlobalCheckings_2E_element & operator = (const GGS_extensionGetterMapForGlobalCheckings_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterMapForGlobalCheckings_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionGetterMapForGlobalCheckings_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionGetterMapForGlobalCheckings_2E_element class_func_new (const class GGS_lstring & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionGetterMapForGlobalCheckings.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionGetterMapForGlobalCheckings_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ (const GGS_extensionGetterMapForGlobalCheckings_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionGetterMapForGlobalCheckings_2E_element unwrappedValue (void) const {
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
  public: static GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgas_33_QualifiedFeatureList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_galgas_33_QualifiedFeatureList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_galgas_33_QualifiedFeatureList (const class GGS_galgas_33_QualifiedFeatureList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mFeatureName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFeatureValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_galgas_33_QualifiedFeatureList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_galgas_33_QualifiedFeatureList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_galgas_33_QualifiedFeatureList (const class GGS_galgas_33_QualifiedFeatureList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mFeatureName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFeatureValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_galgas_33_QualifiedFeatureList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgas3QualifiedFeatureList list
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_QualifiedFeatureList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_galgas_33_QualifiedFeatureList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_galgas_33_QualifiedFeatureList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mFeatureName,
                                                 const class GGS_lstring & in_mFeatureValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgas_33_QualifiedFeatureList init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgas_33_QualifiedFeatureList extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_galgas_33_QualifiedFeatureList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_galgas_33_QualifiedFeatureList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_galgas_33_QualifiedFeatureList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_galgas_33_QualifiedFeatureList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_galgas_33_QualifiedFeatureList add_operation (const GGS_galgas_33_QualifiedFeatureList & inOperand,
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

  public: VIRTUAL_IN_DEBUG void setter_setMFeatureNameAtIndex (class GGS_lstring constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFeatureValueAtIndex (class GGS_lstring constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFeatureNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFeatureValueAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_galgas_33_QualifiedFeatureList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_galgas_33_QualifiedFeatureList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_galgas_33_QualifiedFeatureList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_galgas_33_QualifiedFeatureList ;
  friend class DownEnumerator_galgas_33_QualifiedFeatureList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgas_33_QualifiedFeatureList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_QualifiedFeatureList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFeatureName ;
  public: inline GGS_lstring readProperty_mFeatureName (void) const {
    return mProperty_mFeatureName ;
  }

  public: GGS_lstring mProperty_mFeatureValue ;
  public: inline GGS_lstring readProperty_mFeatureValue (void) const {
    return mProperty_mFeatureValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_galgas_33_QualifiedFeatureList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFeatureName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFeatureName = inValue ;
  }

  public: inline void setter_setMFeatureValue (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFeatureValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_galgas_33_QualifiedFeatureList_2E_element (const GGS_lstring & in_mFeatureName,
                                                         const GGS_lstring & in_mFeatureValue) ;

//--------------------------------- Copy constructor
  public: GGS_galgas_33_QualifiedFeatureList_2E_element (const GGS_galgas_33_QualifiedFeatureList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_galgas_33_QualifiedFeatureList_2E_element & operator = (const GGS_galgas_33_QualifiedFeatureList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgas_33_QualifiedFeatureList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgas_33_QualifiedFeatureList_2E_element extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_galgas_33_QualifiedFeatureList_2E_element class_func_new (const class GGS_lstring & inOperand0,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ProjectSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_ProjectSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ProjectSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_folderDirectory_ (const class GGS_string constinArgument0,
                                               class GGS_lstringlist & ioArgument1,
                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_folderDirectory_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_folderDirectory_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_project_5F_component_5F_start_5F_symbol_ (class GGS_galgas_33_ProjectComponentAST & outArgument0,
                                                                       class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_project_5F_component_5F_start_5F_symbol_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_project_5F_header_ (class GGS_lbigint & outArgument0,
                                                 class GGS_lbigint & outArgument1,
                                                 class GGS_lbigint & outArgument2,
                                                 class GGS_lstring & outArgument3,
                                                 class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_project_5F_header_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_project_5F_header_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ProjectSyntax_project_5F_header_i0_ (GGS_lbigint & outArgument0,
                                                                      GGS_lbigint & outArgument1,
                                                                      GGS_lbigint & outArgument2,
                                                                      GGS_lstring & outArgument3,
                                                                      Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_header_i0_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_header_i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_ (GGS_galgas_33_ProjectComponentAST & outArgument0,
                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_folderDirectory_i2_ (const GGS_string constinArgument0,
                                                                    GGS_lstringlist & ioArgument1,
                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_folderDirectory_i2_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_folderDirectory_i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ProjectSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ProjectSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgas_33_ProjectComponentAST struct
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_ProjectComponentAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstringlist mProperty_mProjectSourceList ;
  public: inline GGS_lstringlist readProperty_mProjectSourceList (void) const {
    return mProperty_mProjectSourceList ;
  }

  public: GGS_lbigint mProperty_mMajorVersion ;
  public: inline GGS_lbigint readProperty_mMajorVersion (void) const {
    return mProperty_mMajorVersion ;
  }

  public: GGS_lbigint mProperty_mMinorVersion ;
  public: inline GGS_lbigint readProperty_mMinorVersion (void) const {
    return mProperty_mMinorVersion ;
  }

  public: GGS_lbigint mProperty_mRevisionVersion ;
  public: inline GGS_lbigint readProperty_mRevisionVersion (void) const {
    return mProperty_mRevisionVersion ;
  }

  public: GGS_lstringlist mProperty_mGenerationFeatureList ;
  public: inline GGS_lstringlist readProperty_mGenerationFeatureList (void) const {
    return mProperty_mGenerationFeatureList ;
  }

  public: GGS_galgas_33_QualifiedFeatureList mProperty_mQualifiedFeatureList ;
  public: inline GGS_galgas_33_QualifiedFeatureList readProperty_mQualifiedFeatureList (void) const {
    return mProperty_mQualifiedFeatureList ;
  }

  public: GGS_lstring mProperty_mTargetName ;
  public: inline GGS_lstring readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GGS_location mProperty_mEndOfSourceFile ;
  public: inline GGS_location readProperty_mEndOfSourceFile (void) const {
    return mProperty_mEndOfSourceFile ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_galgas_33_ProjectComponentAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProjectSourceList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectSourceList = inValue ;
  }

  public: inline void setter_setMMajorVersion (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMajorVersion = inValue ;
  }

  public: inline void setter_setMMinorVersion (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMinorVersion = inValue ;
  }

  public: inline void setter_setMRevisionVersion (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRevisionVersion = inValue ;
  }

  public: inline void setter_setMGenerationFeatureList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerationFeatureList = inValue ;
  }

  public: inline void setter_setMQualifiedFeatureList (const GGS_galgas_33_QualifiedFeatureList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifiedFeatureList = inValue ;
  }

  public: inline void setter_setMTargetName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMEndOfSourceFile (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfSourceFile = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_galgas_33_ProjectComponentAST (const GGS_lstringlist & in_mProjectSourceList,
                                             const GGS_lbigint & in_mMajorVersion,
                                             const GGS_lbigint & in_mMinorVersion,
                                             const GGS_lbigint & in_mRevisionVersion,
                                             const GGS_lstringlist & in_mGenerationFeatureList,
                                             const GGS_galgas_33_QualifiedFeatureList & in_mQualifiedFeatureList,
                                             const GGS_lstring & in_mTargetName,
                                             const GGS_location & in_mEndOfSourceFile) ;

//--------------------------------- Copy constructor
  public: GGS_galgas_33_ProjectComponentAST (const GGS_galgas_33_ProjectComponentAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_galgas_33_ProjectComponentAST & operator = (const GGS_galgas_33_ProjectComponentAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgas_33_ProjectComponentAST init_21__21__21__21__21__21__21__21_ (const class GGS_lstringlist & inOperand0,
                                                                                         const class GGS_lbigint & inOperand1,
                                                                                         const class GGS_lbigint & inOperand2,
                                                                                         const class GGS_lbigint & inOperand3,
                                                                                         const class GGS_lstringlist & inOperand4,
                                                                                         const class GGS_galgas_33_QualifiedFeatureList & inOperand5,
                                                                                         const class GGS_lstring & inOperand6,
                                                                                         const class GGS_location & inOperand7,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgas_33_ProjectComponentAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_galgas_33_ProjectComponentAST class_func_new (const class GGS_lstringlist & inOperand0,
                                                                         const class GGS_lbigint & inOperand1,
                                                                         const class GGS_lbigint & inOperand2,
                                                                         const class GGS_lbigint & inOperand3,
                                                                         const class GGS_lstringlist & inOperand4,
                                                                         const class GGS_galgas_33_QualifiedFeatureList & inOperand5,
                                                                         const class GGS_lstring & inOperand6,
                                                                         const class GGS_location & inOperand7,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_ProjectComponentAST ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControlAST checkCompatibilityWithLet'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkCompatibilityWithLet (const class GGS_AccessControlAST inObject,
                                                const class GGS_location constin_inLocation,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@AccessControlAST accessControl' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl extensionGetter_accessControl (const class GGS_AccessControlAST & inObject,
                                                       const class GGS_unifiedTypeMapEntry & constinArgument0,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControl checkSetAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSetAccess (const class GGS_AccessControl inObject,
                                     const class GGS_selfAvailability constin_inOptionalCurrentType,
                                     const class GGS_location constin_inErrorLocation,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControl checkGetAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkGetAccess (const class GGS_AccessControl inObject,
                                     const class GGS_selfAvailability constin_inOptionalCurrentType,
                                     const class GGS_location constin_inErrorLocation,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ExpressionSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_ExpressionSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ExpressionSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_expression_5F_and_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                            class GGS_semanticExpressionAST & outArgument1,
                                                            class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                     class GGS_semanticExpressionAST & outArgument1,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                           class GGS_semanticExpressionAST & outArgument1,
                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                 class GGS_semanticExpressionAST & outArgument1,
                                                 class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_5F_ggs_33__ (class GGS_lstring & outArgument0,
                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                       class GGS_actualOutputArgumentList & outArgument1,
                                                                       class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                           class GGS_actualOutputArgumentList & outArgument1,
                                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                  class GGS_semanticExpressionAST & outArgument1,
                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_semanticExpressionAST & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS_semanticExpressionAST & outArgument1,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_term_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                               class GGS_semanticExpressionAST & outArgument1,
                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_term_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_term_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                       GGS_semanticExpressionAST & outArgument1,
                                                                                       Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    GGS_semanticExpressionAST & outArgument1,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                             GGS_semanticExpressionAST & outArgument1,
                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i3_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                     GGS_semanticExpressionAST & outArgument1,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i6_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i6_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i10_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i10_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_optional_5F_type_5F_ggs_33__i11_ (GGS_lstring & outArgument0,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_optional_5F_type_5F_ggs_33__i11_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_optional_5F_type_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i12_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i12_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i13_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i13_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i13_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i14_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i14_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i14_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i15_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i15_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i21_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i21_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i24_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i24_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i24_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i25_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i25_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i25_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i26_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i26_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i26_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i27_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i27_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i27_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i28_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i28_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i28_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i29_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i29_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i29_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i30_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                        GGS_semanticExpressionAST & outArgument1,
                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i30_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i30_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i32_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    GGS_semanticExpressionAST & outArgument1,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i32_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i32_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i33_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                GGS_actualOutputArgumentList & outArgument1,
                                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i33_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i33_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__34__i34_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                    GGS_actualOutputArgumentList & outArgument1,
                                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__34__i34_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__34__i34_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i35_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i35_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i35_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i36_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i36_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i36_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i37_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i37_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i37_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i38_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i38_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i38_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ExpressionSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_14 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_15 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_16 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_17 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_18 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_19 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_20 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_21 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_22 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_23 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_24 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_25 (Lexique_galgasScanner_33_ *) = 0 ;


} ;


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_checkEntityUsefulness ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_displayUnicodeLexicalTestFunctions ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitClassGraph ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorEllipsisInEnumeratedObject ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOnGetterCallWithNoArgument ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStyleLocalVarDeclaration ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStylePropertyDeclaration ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorUsingNewInsteadOfInit ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateManyFiles ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateOneHeader ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_check_5F_big_5F_int ;

extern BoolCommandLineOption gOption_galgas_5F_cli_5F_options_warningNotGalgas_34_Feature ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

extern StringCommandLineOption gOption_galgas_5F_cli_5F_options_create_5F_project ;

extern StringCommandLineOption gOption_galgas_5F_cli_5F_options_extractLIBPMOption ;

extern StringCommandLineOption gOption_galgas_5F_cli_5F_options_cppCompile ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ParameterArgumentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_ParameterArgumentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ParameterArgumentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                      class GGS_actualParameterListAST & outArgument1,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                     class GGS_semanticExpressionAST & outArgument1,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                               class GGS_formalInputParameterListAST & outArgument1,
                                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                   class GGS_formalInputParameterListAST & outArgument1,
                                                                                   class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_formalParameterListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_poisoned_5F_var_5F_list_5F_ggs_33__ (class GGS_lstringlist & outArgument0,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_poisoned_5F_var_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__34__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                         GGS_formalParameterListAST & outArgument1,
                                                                                                         Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__34__i0_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__34__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_actualParameterListAST & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                              GGS_formalInputParameterListAST & outArgument1,
                                                                                                              Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                                  GGS_formalInputParameterListAST & outArgument1,
                                                                                                                  Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__i3_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_ (GGS_lstringlist & outArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i5_ (GGS_lstringlist & outArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_14 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_15 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_16 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_17 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_18 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_19 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_20 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_21 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_22 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_23 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_24 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_25 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_26 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_27 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_28 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_29 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_30 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_31 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_32 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_33 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_34 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_35 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_36 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_37 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3InstructionsSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_InstructionsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_InstructionsSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                               class GGS_actualInputParameterListAST & outArgument1,
                                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                      class GGS_actualParameterListAST & outArgument1,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_semanticInstructionListAST & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_castInstructionBranchListAST & ioArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_comma_5F_separated_5F_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                           class GGS_CommaSeparatedExpressionList & outArgument1,
                                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_comma_5F_separated_5F_expression_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_comma_5F_separated_5F_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                     class GGS_semanticExpressionAST & outArgument1,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                           class GGS_semanticExpressionAST & outArgument1,
                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_forInstructionEnumeratedObjectElementListAST & ioArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                               class GGS_formalInputParameterListAST & outArgument1,
                                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                   class GGS_formalInputParameterListAST & outArgument1,
                                                                                   class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_formalParameterListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_function_5F_declaration_5F_ggs_33__ (const class GGS_bool constinArgument0,
                                                                  const class GGS_bool constinArgument1,
                                                                  const class GGS_bool constinArgument2,
                                                                  const class GGS_lstring constinArgument3,
                                                                  class GGS_galgasDeclarationAST & ioArgument4,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_function_5F_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_function_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                              const class GGS_location constinArgument1,
                                                              const class GGS_actualParameterListAST constinArgument2,
                                                              const class GGS_lstring constinArgument3,
                                                              const class GGS_lstring constinArgument4,
                                                              class GGS_semanticInstructionAST & outArgument5,
                                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          const class GGS_location constinArgument1,
                                                                          const class GGS_lstring constinArgument2,
                                                                          const class GGS_lstring constinArgument3,
                                                                          class GGS_semanticInstructionAST & outArgument4,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                         class GGS_semanticInstructionAST & outArgument1,
                                                         class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_ (class GGS_galgasDeclarationAST & ioArgument0,
                                              class GGS_fixitListAST & outArgument1,
                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                       class GGS_actualOutputArgumentList & outArgument1,
                                                                                       class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                       class GGS_actualOutputArgumentList & outArgument1,
                                                                       class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                           class GGS_actualOutputArgumentList & outArgument1,
                                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                          const class GGS_bool constinArgument1,
                                                                                          class GGS_semanticInstructionAST & outArgument2,
                                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                  class GGS_semanticInstructionAST & outArgument1,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                     const class GGS_bool constinArgument1,
                                                                     class GGS_semanticInstructionAST & outArgument2,
                                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_semanticInstructionListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_ (class GGS_galgasDeclarationAST & ioArgument0,
                                              class GGS__5B_lstring_5D_ & outArgument1,
                                              class GGS_switchExtractedValuesListAST & outArgument2,
                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                           class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                           const class GGS_location constinArgument1,
                                                           const class GGS_semanticExpressionAST constinArgument2,
                                                           const class GGS_location constinArgument3,
                                                           const class GGS_lstring constinArgument4,
                                                           class GGS_semanticInstructionAST & outArgument5,
                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                    GGS_semanticInstructionListAST & outArgument1,
                                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i2_ (const GGS_bool constinArgument0,
                                                                                            const GGS_bool constinArgument1,
                                                                                            const GGS_bool constinArgument2,
                                                                                            const GGS_lstring constinArgument3,
                                                                                            GGS_galgasDeclarationAST & ioArgument4,
                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i3_ (const GGS_bool constinArgument0,
                                                                                            const GGS_bool constinArgument1,
                                                                                            const GGS_bool constinArgument2,
                                                                                            const GGS_lstring constinArgument3,
                                                                                            GGS_galgasDeclarationAST & ioArgument4,
                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i3_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                         GGS_actualInputParameterListAST & outArgument1,
                                                                                                         Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i7_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i8_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i9_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i10_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i10_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i11_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i11_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i12_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i12_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i13_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_castInstructionBranchListAST & ioArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i13_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i13_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i14_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_semanticInstructionListAST & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i14_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i14_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i16_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i16_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i17_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i17_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i17_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i18_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                                     const GGS_bool constinArgument1,
                                                                                                                     GGS_semanticInstructionAST & outArgument2,
                                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i18_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i18_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i19_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                                  GGS_actualOutputArgumentList & outArgument1,
                                                                                                                  Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i19_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i19_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i21_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         GGS_fixitListAST & outArgument1,
                                                                         Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i21_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i21_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i22_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i22_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i23_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_forInstructionEnumeratedObjectElementListAST & ioArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i23_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i23_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i24_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_forInstructionEnumeratedObjectElementListAST & ioArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i24_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i24_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i26_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i26_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i26_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i27_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i27_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i27_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i28_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i28_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i28_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i29_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i29_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i29_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i30_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                         const GGS_location constinArgument1,
                                                                                         const GGS_actualParameterListAST constinArgument2,
                                                                                         const GGS_lstring constinArgument3,
                                                                                         const GGS_lstring constinArgument4,
                                                                                         GGS_semanticInstructionAST & outArgument5,
                                                                                         Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i30_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i30_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i31_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                         const GGS_location constinArgument1,
                                                                                         const GGS_actualParameterListAST constinArgument2,
                                                                                         const GGS_lstring constinArgument3,
                                                                                         const GGS_lstring constinArgument4,
                                                                                         GGS_semanticInstructionAST & outArgument5,
                                                                                         Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i31_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i31_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i32_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i32_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i32_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i33_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     const GGS_location constinArgument1,
                                                                                                     const GGS_lstring constinArgument2,
                                                                                                     const GGS_lstring constinArgument3,
                                                                                                     GGS_semanticInstructionAST & outArgument4,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i33_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i33_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i34_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     const GGS_location constinArgument1,
                                                                                                     const GGS_lstring constinArgument2,
                                                                                                     const GGS_lstring constinArgument3,
                                                                                                     GGS_semanticInstructionAST & outArgument4,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i34_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i34_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i35_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i35_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i35_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i37_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                const GGS_bool constinArgument1,
                                                                                                GGS_semanticInstructionAST & outArgument2,
                                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i37_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i37_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_comma_5F_separated_5F_expression_5F_ggs_33__i39_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                      GGS_CommaSeparatedExpressionList & outArgument1,
                                                                                                      Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_comma_5F_separated_5F_expression_5F_ggs_33__i39_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_comma_5F_separated_5F_expression_5F_ggs_33__i39_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i40_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    GGS_semanticInstructionAST & outArgument1,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i40_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i40_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i41_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i41_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i41_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i55_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i55_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i55_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i56_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i56_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i56_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i57_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i57_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i57_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i58_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i58_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i58_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i59_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i59_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i59_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i60_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i60_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i60_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i61_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         GGS__5B_lstring_5D_ & outArgument1,
                                                                         GGS_switchExtractedValuesListAST & outArgument2,
                                                                         Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i61_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i61_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i62_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i62_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i62_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i63_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i63_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i63_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i64_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i64_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i64_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i65_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i65_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i65_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i66_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i66_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i66_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i67_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i67_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i67_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i68_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i68_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i68_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i69_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                      const GGS_location constinArgument1,
                                                                                      const GGS_semanticExpressionAST constinArgument2,
                                                                                      const GGS_location constinArgument3,
                                                                                      const GGS_lstring constinArgument4,
                                                                                      GGS_semanticInstructionAST & outArgument5,
                                                                                      Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i69_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i69_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i70_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                      const GGS_location constinArgument1,
                                                                                      const GGS_semanticExpressionAST constinArgument2,
                                                                                      const GGS_location constinArgument3,
                                                                                      const GGS_lstring constinArgument4,
                                                                                      GGS_semanticInstructionAST & outArgument5,
                                                                                      Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i70_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i70_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_InstructionsSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_14 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_15 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_16 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_17 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_18 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_19 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_20 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_21 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_22 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_23 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_24 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_25 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_26 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_27 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_28 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_29 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_30 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_31 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_32 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_33 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_34 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_35 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_36 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_37 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_38 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_39 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_40 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_41 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_42 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_43 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_44 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_45 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_46 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_47 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_48 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_49 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_50 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_51 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_52 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_53 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_54 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_55 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_56 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_57 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_58 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_59 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_60 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_61 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_62 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_63 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_64 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_65 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_66 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_67 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_68 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_69 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_70 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_71 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_72 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_73 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_74 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_75 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_76 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_77 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_78 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_79 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_80 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_81 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_82 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_83 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_84 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_85 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3DeclarationsSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_DeclarationsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_DeclarationsSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_acces_5F_control_ (class GGS_AccessControlAST & outArgument0,
                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_acces_5F_control_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_acces_5F_control_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                     class GGS_semanticExpressionAST & outArgument1,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                    class GGS_externTypeConstructorList & ioArgument1,
                                                                    class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_ (class GGS_string & outArgument0,
                                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_ (class GGS_string & outArgument0,
                                                                   class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS_externTypeGetterList & ioArgument1,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS_externTypeMethodList & ioArgument1,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS_externTypeSetterList & ioArgument1,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_ (class GGS_lstringlist & outArgument0,
                                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                        class GGS_filewrapperTemplateListAST & outArgument1,
                                                        class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_ (class GGS_lstringlist & outArgument0,
                                                            class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                               class GGS_formalInputParameterListAST & outArgument1,
                                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                   class GGS_formalInputParameterListAST & outArgument1,
                                                                                   class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_formalParameterListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_ (class GGS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_ (class GGS_insertMethodListAST & ioArgument0,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_5F_ggs_33__ (const class GGS_lstring constinArgument0,
                                                                class GGS_galgasDeclarationAST & ioArgument1,
                                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                  class GGS_propertyInCollectionListAST & ioArgument1,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_ (class GGS_mapRemoveMethodListAST & ioArgument0,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_ (class GGS_mapSearchMethodListAST & ioArgument0,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_semanticInstructionListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_ (class GGS_sortedListSortDescriptorListAST & ioArgument0,
                                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__parse (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_ (GGS_lstringlist & outArgument0,
                                                                                      Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_ (GGS_lstringlist & outArgument0,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_filewrapperTemplateListAST & outArgument1,
                                                                                  Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                            GGS_propertyInCollectionListAST & ioArgument1,
                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i6_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i6_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                            GGS_propertyInCollectionListAST & ioArgument1,
                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i7_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                            GGS_propertyInCollectionListAST & ioArgument1,
                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i8_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                       GGS_lstring & outArgument1,
                                                                                       Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i9_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i10_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i10_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i11_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i11_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i12_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i12_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i13_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i13_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i13_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i14_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i14_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i14_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i15_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i15_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i16_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i16_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i17_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i17_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i17_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i18_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i18_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i19_ (GGS_string & outArgument0,
                                                                                              Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i19_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i19_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i20_ (GGS_string & outArgument0,
                                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i20_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i20_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i21_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                               GGS_externTypeConstructorList & ioArgument1,
                                                                                               Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i21_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i22_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_externTypeGetterList & ioArgument1,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i22_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i23_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_externTypeSetterList & ioArgument1,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i23_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i23_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i24_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_externTypeMethodList & ioArgument1,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i24_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i24_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i25_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i25_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i25_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i26_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i26_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i26_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i28_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i28_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i28_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i29_ (GGS_mapSearchMethodListAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i29_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i29_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i30_ (GGS_mapRemoveMethodListAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i30_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i30_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i31_ (GGS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i31_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i31_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i32_ (GGS_insertMethodListAST & ioArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i32_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i32_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i33_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i33_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i33_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i34_ (GGS_sortedListSortDescriptorListAST & ioArgument0,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i34_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i34_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i36_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i36_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i36_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i37_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i37_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i37_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i38_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i38_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i38_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i39_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i39_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i39_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i40_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i40_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i40_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i41_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i41_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i41_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i42_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i42_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i42_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i43_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i43_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i43_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i44_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i44_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i44_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i45_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i45_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i45_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i46_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i46_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i46_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i47_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i47_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i47_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i48_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i48_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i48_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i49_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i49_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i49_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i50_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i50_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i50_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i51_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i51_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i51_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i52_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i52_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i52_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i54_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i54_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i54_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i56_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i56_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i56_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i57_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i57_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i57_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i58_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i58_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i58_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i59_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i59_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i59_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i60_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i60_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i60_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i61_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i61_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i61_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i62_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i62_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i62_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_acces_5F_control_i63_ (GGS_AccessControlAST & outArgument0,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_acces_5F_control_i63_parse (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_acces_5F_control_i63_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_14 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_15 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_16 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_17 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_18 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_19 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_20 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_21 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_22 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_23 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_24 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_25 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_26 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_27 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_28 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_29 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_30 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_31 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_32 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_33 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_34 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_35 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_36 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_37 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_38 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_39 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_40 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_41 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_42 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_43 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_44 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_45 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_46 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_47 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_48 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_49 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_50 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_51 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_52 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_53 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_54 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_55 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_56 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_57 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_58 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_59 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_60 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_61 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_62 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_63 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_64 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_65 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_66 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_67 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_68 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_69 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_70 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_71 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_72 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_73 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_74 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_75 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_76 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_77 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_78 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_79 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_80 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_81 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_82 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_83 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_84 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeArrayTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeArrayTypeLName (const class GGS_lstring & constinArgument0,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeEmbeddedTypeLName (const class GGS_lstring & constinArgument0,
                                                  const class GGS_lstring & constinArgument1,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeWeakTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeWeakTypeLName (const class GGS_lstring & constinArgument0,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@galgasDeclarationAST getOptionalTypeName'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getOptionalTypeName (class GGS_galgasDeclarationAST & ioObject,
                                          class GGS_lstring & out_outOptionalTypeName,
                                          const class GGS_lstring constin_inTypeName,
                                          const class GGS_bool constin_inPredefined,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

