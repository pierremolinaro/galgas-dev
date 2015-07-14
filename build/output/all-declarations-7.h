#ifndef all_2D_declarations_2D__37__ENTITIES_DEFINED
#define all_2D_declarations_2D__37__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-6.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @genericCategoryMethodListMap list map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_genericCategoryMethodListMap : public AC_GALGAS_listmap {
//--------------------------------- Default constructor
  public : GALGAS_genericCategoryMethodListMap (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_genericCategoryMethodListMap extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_genericCategoryMethodListMap constructor_emptyMap (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_listForKey (const class GALGAS_string & constinOperand0
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_genericCategoryMethodListMap ;
 
} ; // End of GALGAS_genericCategoryMethodListMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_genericCategoryMethodListMap : public cGenericAbstractEnumerator {
  public : cEnumerator_genericCategoryMethodListMap (const GALGAS_genericCategoryMethodListMap & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_key (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_genericCategoryMethodListMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericCategoryMethodListMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @genericCategoryMethodListMap_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_genericCategoryMethodListMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_key ;
  public : GALGAS_lstringlist mAttribute_mList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_genericCategoryMethodListMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_genericCategoryMethodListMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_genericCategoryMethodListMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_genericCategoryMethodListMap_2D_element (const GALGAS_string & in_key,
                                                           const GALGAS_lstringlist & in_mList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_genericCategoryMethodListMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_genericCategoryMethodListMap_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                  const class GALGAS_lstringlist & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_genericCategoryMethodListMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_key (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_genericCategoryMethodListMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericCategoryMethodListMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @descendantClassListMap list map                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_descendantClassListMap : public AC_GALGAS_listmap {
//--------------------------------- Default constructor
  public : GALGAS_descendantClassListMap (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_descendantClassListMap extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_descendantClassListMap constructor_emptyMap (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxyList reader_listForKey (const class GALGAS_string & constinOperand0
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_descendantClassListMap ;
 
} ; // End of GALGAS_descendantClassListMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_descendantClassListMap : public cGenericAbstractEnumerator {
  public : cEnumerator_descendantClassListMap (const GALGAS_descendantClassListMap & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_key (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMapProxyList current_mList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_descendantClassListMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_descendantClassListMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @descendantClassListMap_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_descendantClassListMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_key ;
  public : GALGAS_unifiedTypeMapProxyList mAttribute_mList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_descendantClassListMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_descendantClassListMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_descendantClassListMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_descendantClassListMap_2D_element (const GALGAS_string & in_key,
                                                     const GALGAS_unifiedTypeMapProxyList & in_mList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_descendantClassListMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_descendantClassListMap_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_unifiedTypeMapProxyList & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_descendantClassListMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_key (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxyList reader_mList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_descendantClassListMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_descendantClassListMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @categoryMethodMapForGlobalCheckings map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_categoryMethodMapForGlobalCheckings ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_categoryMethodMapForGlobalCheckings : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_categoryMethodMapForGlobalCheckings (void) ;

//--------------------------------- Handle copy
  public : GALGAS_categoryMethodMapForGlobalCheckings (const GALGAS_categoryMethodMapForGlobalCheckings & inSource) ;
  public : GALGAS_categoryMethodMapForGlobalCheckings & operator = (const GALGAS_categoryMethodMapForGlobalCheckings & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_categoryMethodMapForGlobalCheckings extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_categoryMethodMapForGlobalCheckings constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_categoryMethodMapForGlobalCheckings constructor_mapWithMapToOverride (const class GALGAS_categoryMethodMapForGlobalCheckings & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_categoryMethodMapForGlobalCheckings reader_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_categoryMethodMapForGlobalCheckings * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_categoryMethodMapForGlobalCheckings ;
 
} ; // End of GALGAS_categoryMethodMapForGlobalCheckings class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_categoryMethodMapForGlobalCheckings : public cGenericAbstractEnumerator {
  public : cEnumerator_categoryMethodMapForGlobalCheckings (const GALGAS_categoryMethodMapForGlobalCheckings & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_categoryMethodMapForGlobalCheckings_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_categoryMethodMapForGlobalCheckings ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@categoryMethodMapForGlobalCheckings' map                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_categoryMethodMapForGlobalCheckings : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_categoryMethodMapForGlobalCheckings (const GALGAS_lstring & inKey
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @categoryMethodMapForGlobalCheckings_2D_element struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_categoryMethodMapForGlobalCheckings_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_categoryMethodMapForGlobalCheckings_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_categoryMethodMapForGlobalCheckings_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_categoryMethodMapForGlobalCheckings_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_categoryMethodMapForGlobalCheckings_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_categoryMethodMapForGlobalCheckings_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_categoryMethodMapForGlobalCheckings_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_categoryMethodMapForGlobalCheckings_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_categoryMethodMapForGlobalCheckings_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_categoryMethodMapForGlobalCheckings_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @categoryModifierMapForGlobalCheckings map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_categoryModifierMapForGlobalCheckings ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_categoryModifierMapForGlobalCheckings : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_categoryModifierMapForGlobalCheckings (void) ;

//--------------------------------- Handle copy
  public : GALGAS_categoryModifierMapForGlobalCheckings (const GALGAS_categoryModifierMapForGlobalCheckings & inSource) ;
  public : GALGAS_categoryModifierMapForGlobalCheckings & operator = (const GALGAS_categoryModifierMapForGlobalCheckings & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_categoryModifierMapForGlobalCheckings extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_categoryModifierMapForGlobalCheckings constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_categoryModifierMapForGlobalCheckings constructor_mapWithMapToOverride (const class GALGAS_categoryModifierMapForGlobalCheckings & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_categoryModifierMapForGlobalCheckings reader_overriddenMap (C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_categoryModifierMapForGlobalCheckings * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                   const GALGAS_string & inKey
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_categoryModifierMapForGlobalCheckings ;
 
} ; // End of GALGAS_categoryModifierMapForGlobalCheckings class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_categoryModifierMapForGlobalCheckings : public cGenericAbstractEnumerator {
  public : cEnumerator_categoryModifierMapForGlobalCheckings (const GALGAS_categoryModifierMapForGlobalCheckings & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_categoryModifierMapForGlobalCheckings_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_categoryModifierMapForGlobalCheckings ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@categoryModifierMapForGlobalCheckings' map                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_categoryModifierMapForGlobalCheckings : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_categoryModifierMapForGlobalCheckings (const GALGAS_lstring & inKey
                                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @categoryModifierMapForGlobalCheckings_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_categoryModifierMapForGlobalCheckings_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_categoryModifierMapForGlobalCheckings_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_categoryModifierMapForGlobalCheckings_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_categoryModifierMapForGlobalCheckings_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_categoryModifierMapForGlobalCheckings_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_categoryModifierMapForGlobalCheckings_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_categoryModifierMapForGlobalCheckings_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_categoryModifierMapForGlobalCheckings_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_categoryModifierMapForGlobalCheckings_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_categoryModifierMapForGlobalCheckings_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @categoryReaderMapForGlobalCheckings map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_categoryReaderMapForGlobalCheckings ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_categoryReaderMapForGlobalCheckings : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_categoryReaderMapForGlobalCheckings (void) ;

//--------------------------------- Handle copy
  public : GALGAS_categoryReaderMapForGlobalCheckings (const GALGAS_categoryReaderMapForGlobalCheckings & inSource) ;
  public : GALGAS_categoryReaderMapForGlobalCheckings & operator = (const GALGAS_categoryReaderMapForGlobalCheckings & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_categoryReaderMapForGlobalCheckings extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_categoryReaderMapForGlobalCheckings constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_categoryReaderMapForGlobalCheckings constructor_mapWithMapToOverride (const class GALGAS_categoryReaderMapForGlobalCheckings & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_categoryReaderMapForGlobalCheckings reader_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_categoryReaderMapForGlobalCheckings * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_categoryReaderMapForGlobalCheckings ;
 
} ; // End of GALGAS_categoryReaderMapForGlobalCheckings class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_categoryReaderMapForGlobalCheckings : public cGenericAbstractEnumerator {
  public : cEnumerator_categoryReaderMapForGlobalCheckings (const GALGAS_categoryReaderMapForGlobalCheckings & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_categoryReaderMapForGlobalCheckings_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_categoryReaderMapForGlobalCheckings ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@categoryReaderMapForGlobalCheckings' map                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_categoryReaderMapForGlobalCheckings : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_categoryReaderMapForGlobalCheckings (const GALGAS_lstring & inKey
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @categoryReaderMapForGlobalCheckings_2D_element struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_categoryReaderMapForGlobalCheckings_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_categoryReaderMapForGlobalCheckings_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_categoryReaderMapForGlobalCheckings_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_categoryReaderMapForGlobalCheckings_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_categoryReaderMapForGlobalCheckings_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_categoryReaderMapForGlobalCheckings_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_categoryReaderMapForGlobalCheckings_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_categoryReaderMapForGlobalCheckings_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_categoryReaderMapForGlobalCheckings_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_categoryReaderMapForGlobalCheckings_2D_element ;


#ifndef galgas_33_Scanner_CLASS_DEFINED
#define galgas_33_Scanner_CLASS_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/C_Lexique.h"
#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    E X T E R N    R O U T I N E S                                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    E X T E R N    F U N C T I O N S                                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       T O K E N    C L A S S                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cTokenFor_galgas_33_Scanner : public cToken {
  public : utf32 mLexicalAttribute_charValue ;
  public : double mLexicalAttribute_floatValue ;
  public : C_String mLexicalAttribute_identifierString ;
  public : int32_t mLexicalAttribute_sint_33__32_value ;
  public : int64_t mLexicalAttribute_sint_36__34_value ;
  public : C_String mLexicalAttribute_tokenString ;
  public : uint32_t mLexicalAttribute_uint_33__32_value ;
  public : uint64_t mLexicalAttribute_uint_36__34_value ;

  public : cTokenFor_galgas_33_Scanner (void) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     S C A N N E R    C L A S S                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class C_Lexique_galgas_33_Scanner : public C_Lexique {
//--- Constructors
  public : C_Lexique_galgas_33_Scanner (C_Compiler * inCallerCompiler,
                       const C_String & inDependencyFileExtension,
                       const C_String & inDependencyFilePath,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public : C_Lexique_galgas_33_Scanner (C_Compiler * inCallerCompiler,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public : static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~ C_Lexique_galgas_33_Scanner (void) {}
  #endif



//--- Terminal symbols enumeration
  public : enum {kToken_,
   kToken_identifier,
   kToken_literal_5F_double,
   kToken_unsigned_5F_literal_5F_integer,
   kToken_signed_5F_literal_5F_integer,
   kToken_unsigned_5F_literal_5F_integer_36__34_,
   kToken_signed_5F_literal_5F_integer_36__34_,
   kToken__2E_,
   kToken__2E__2E__2E_,
   kToken__2E__2E__3C_,
   kToken_type_5F_name,
   kToken_attribute,
   kToken_literal_5F_char,
   kToken_terminal,
   kToken__3F_,
   kToken__3F__21_,
   kToken__21_,
   kToken__21__3F_,
   kToken__3C_,
   kToken__3C__3D_,
   kToken__3C__3C_,
   kToken_non_5F_terminal_5F_symbol,
   kToken_literal_5F_string,
   kToken_comment,
   kToken_commentMark,
   kToken_abstract,
   kToken_after,
   kToken_array,
   kToken_as,
   kToken_before,
   kToken_between,
   kToken_block,
   kToken_cast,
   kToken_case,
   kToken_class,
   kToken_constructor,
   kToken_default,
   kToken_do,
   kToken_drop,
   kToken_else,
   kToken_elsif,
   kToken_end,
   kToken_enum,
   kToken_error,
   kToken_extension,
   kToken_extern,
   kToken_false,
   kToken_filewrapper,
   kToken_for,
   kToken_func,
   kToken_getter,
   kToken_grammar,
   kToken_graph,
   kToken_gui,
   kToken_if,
   kToken_in,
   kToken_indexing,
   kToken_insert,
   kToken_is,
   kToken_label,
   kToken_let,
   kToken_lexique,
   kToken_list,
   kToken_listmap,
   kToken_local,
   kToken_log,
   kToken_loop,
   kToken_map,
   kToken_match,
   kToken_message,
   kToken_method,
   kToken_mod,
   kToken_not,
   kToken_on,
   kToken_operator,
   kToken_option,
   kToken_or,
   kToken_override,
   kToken_parse,
   kToken_private,
   kToken_proc,
   kToken_project,
   kToken_remove,
   kToken_replace,
   kToken_repeat,
   kToken_rewind,
   kToken_rule,
   kToken_search,
   kToken_select,
   kToken_self,
   kToken_send,
   kToken_setter,
   kToken_sortedlist,
   kToken_state,
   kToken_struct,
   kToken_style,
   kToken_switch,
   kToken_syntax,
   kToken_tag,
   kToken_template,
   kToken_then,
   kToken_true,
   kToken_sharedmap,
   kToken_unused,
   kToken_var,
   kToken_warning,
   kToken_while,
   kToken_with,
   kToken__2A_,
   kToken__2C_,
   kToken__2B_,
   kToken__26__2B_,
   kToken__26__2D_,
   kToken__26__2A_,
   kToken__26__2F_,
   kToken__3E_,
   kToken__3B_,
   kToken__3A_,
   kToken__3A__3E_,
   kToken__2D_,
   kToken__28_,
   kToken__29_,
   kToken__2D__3E_,
   kToken__3D__3D_,
   kToken__3D_,
   kToken__26__26_,
   kToken__5B_,
   kToken__5D_,
   kToken__2B__3D_,
   kToken__7C_,
   kToken__2F_,
   kToken__21__3D_,
   kToken__3E__3D_,
   kToken__26_,
   kToken__7B_,
   kToken__7D_,
   kToken__60_,
   kToken__7C__7C_,
   kToken__5E_,
   kToken__3E__3E_,
   kToken__7E_,
   kToken__2D__2D_,
   kToken__2B__2B_,
   kToken__26__2D__2D_,
   kToken__26__2B__2B_} ;

//--- Key words table 'galgasKeyWordList'
  public : static int16_t search_into_galgasKeyWordList (const C_String & inSearchedString) ;

//--- Key words table 'galgasDelimitorsList'
  public : static int16_t search_into_galgasDelimitorsList (const C_String & inSearchedString) ;
  

//--- Assign from attribute
  public : GALGAS_lchar synthetizedAttribute_charValue (void) const ;
  public : GALGAS_ldouble synthetizedAttribute_floatValue (void) const ;
  public : GALGAS_lstring synthetizedAttribute_identifierString (void) const ;
  public : GALGAS_lsint synthetizedAttribute_sint_33__32_value (void) const ;
  public : GALGAS_lsint_36__34_ synthetizedAttribute_sint_36__34_value (void) const ;
  public : GALGAS_lstring synthetizedAttribute_tokenString (void) const ;
  public : GALGAS_luint synthetizedAttribute_uint_33__32_value (void) const ;
  public : GALGAS_luint_36__34_ synthetizedAttribute_uint_36__34_value (void) const ;


//--- Attribute access
  public : utf32 attributeValue_charValue (void) const ;
  public : double attributeValue_floatValue (void) const ;
  public : C_String attributeValue_identifierString (void) const ;
  public : int32_t attributeValue_sint_33__32_value (void) const ;
  public : int64_t attributeValue_sint_36__34_value (void) const ;
  public : C_String attributeValue_tokenString (void) const ;
  public : uint32_t attributeValue_uint_33__32_value (void) const ;
  public : uint64_t attributeValue_uint_36__34_value (void) const ;


//--- Indexing keys
  public : enum {
    kIndexing_classDefinition,
    kIndexing_enumDefinition,
    kIndexing_structDefinition,
    kIndexing_listDefinition,
    kIndexing_sortedListDefinition,
    kIndexing_listmapDefinition,
    kIndexing_mapDefinition,
    kIndexing_externTypeDefinition,
    kIndexing_uniquemapDefinition,
    kIndexing_mapProxyDefinition,
    kIndexing_arrayTypeDefinition,
    kIndexing_arrayElementTypeReference,
    kIndexing_filewrapperDefinition,
    kIndexing_filewrapperReference,
    kIndexing_graphDefinition,
    kIndexing_classReferencedAsSuperClass,
    kIndexing_typeReferenceInConstructor,
    kIndexing_typeReferenceInTypeMethod,
    kIndexing_routineDefinition,
    kIndexing_routineCall,
    kIndexing_functionDefinition,
    kIndexing_functionCall,
    kIndexing_terminalDeclaration,
    kIndexing_terminalReference,
    kIndexing_ruleDefinition,
    kIndexing_ruleReference,
    kIndexing_abstractCategoryModifierDefinition,
    kIndexing_typeReferenceAbstractCategoryModifier,
    kIndexing_overrideAbstractCategoryModifierDefinition,
    kIndexing_categoryModifierDefinition,
    kIndexing_typeReferenceCategoryModifier,
    kIndexing_overrideCategoryModifierDefinition,
    kIndexing_typeReferenceOverrideCategoryModifierDefinition,
    kIndexing_typeReferenceOverrideAbstractCategoryModifier,
    kIndexing_abstractCategoryMethodDefinition,
    kIndexing_typeReferenceAbstractCategoryMethod,
    kIndexing_overrideAbstractCategoryMethodDefinition,
    kIndexing_categoryMethodDefinition,
    kIndexing_typeReferenceCategoryMethod,
    kIndexing_overrideCategoryMethodDefinition,
    kIndexing_typeReferenceOverrideCategoryMethodDefinition,
    kIndexing_typeReferenceOverrideAbstractCategoryMethod,
    kIndexing_abstractCategoryReaderDefinition,
    kIndexing_overrideAbstractCategoryReaderDefinition,
    kIndexing_categoryReaderDefinition,
    kIndexing_overrideCategoryReaderDefinition,
    kIndexing_optionComponentDefinition,
    kIndexing_optionComponentReference,
    kIndexing_grammarComponentDefinition,
    kIndexing_grammarComponentReference,
    kIndexing_indexingNameDefinition,
    kIndexing_indexingNameReference
  } ;

//--- Indexing directory
  protected : virtual C_String indexingDirectory (void) const ;

//--- Parse lexical token
  protected : virtual bool parseLexicalToken (void) ;

//--- Get terminal message
  protected : virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const ;

//--- Get terminal count
  public : virtual int16_t terminalVocabularyCount (void) const { return 144 ; }

//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;

//--- Enter Token
  protected : void enterToken (const cTokenFor_galgas_33_Scanner & inToken) ;

//--- Style name for Latex
  protected : virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;
  protected : virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#endif
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Parser class 'galgas3ProjectSyntax' declaration                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_galgas_33_ProjectSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_galgas_33_ProjectSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_project_5F_component_5F_start_5F_symbol_ (class GALGAS_galgas_33_ProjectComponentAST & outArgument0,
                                                                        class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_project_5F_component_5F_start_5F_symbol_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i0_ (GALGAS_galgas_33_ProjectComponentAST & outArgument0,
                                                                                             C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_galgas_33_ProjectSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ProjectSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @galgas3QualifiedFeatureList list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_QualifiedFeatureList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_galgas_33_QualifiedFeatureList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_galgas_33_QualifiedFeatureList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFeatureName,
                                                  const class GALGAS_lstring & in_mFeatureValue
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_QualifiedFeatureList extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_galgas_33_QualifiedFeatureList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_galgas_33_QualifiedFeatureList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_galgas_33_QualifiedFeatureList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_galgas_33_QualifiedFeatureList operator_concat (const GALGAS_galgas_33_QualifiedFeatureList & inOperand
                                                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_galgas_33_QualifiedFeatureList add_operation (const GALGAS_galgas_33_QualifiedFeatureList & inOperand,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFeatureNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFeatureValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_QualifiedFeatureList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_QualifiedFeatureList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_galgas_33_QualifiedFeatureList ;
 
} ; // End of GALGAS_galgas_33_QualifiedFeatureList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_galgas_33_QualifiedFeatureList : public cGenericAbstractEnumerator {
  public : cEnumerator_galgas_33_QualifiedFeatureList (const GALGAS_galgas_33_QualifiedFeatureList & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mFeatureName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFeatureValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_galgas_33_QualifiedFeatureList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @galgas_33_ProjectComponentAST struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_ProjectComponentAST : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstringlist mAttribute_mProjectSourceList ;
  public : GALGAS_luint mAttribute_mMajorVersion ;
  public : GALGAS_luint mAttribute_mMinorVersion ;
  public : GALGAS_luint mAttribute_mRevisionVersion ;
  public : GALGAS_lstringlist mAttribute_mGenerationFeatureList ;
  public : GALGAS_galgas_33_QualifiedFeatureList mAttribute_mQualifiedFeatureList ;
  public : GALGAS_lstring mAttribute_mTargetName ;
  public : GALGAS_location mAttribute_mEndOfSourceFile ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_galgas_33_ProjectComponentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_galgas_33_ProjectComponentAST (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_galgas_33_ProjectComponentAST (void) ;

//--------------------------------- Native constructor
  public : GALGAS_galgas_33_ProjectComponentAST (const GALGAS_lstringlist & in_mProjectSourceList,
                                                 const GALGAS_luint & in_mMajorVersion,
                                                 const GALGAS_luint & in_mMinorVersion,
                                                 const GALGAS_luint & in_mRevisionVersion,
                                                 const GALGAS_lstringlist & in_mGenerationFeatureList,
                                                 const GALGAS_galgas_33_QualifiedFeatureList & in_mQualifiedFeatureList,
                                                 const GALGAS_lstring & in_mTargetName,
                                                 const GALGAS_location & in_mEndOfSourceFile) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_ProjectComponentAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_galgas_33_ProjectComponentAST constructor_new (const class GALGAS_lstringlist & inOperand0,
                                                                        const class GALGAS_luint & inOperand1,
                                                                        const class GALGAS_luint & inOperand2,
                                                                        const class GALGAS_luint & inOperand3,
                                                                        const class GALGAS_lstringlist & inOperand4,
                                                                        const class GALGAS_galgas_33_QualifiedFeatureList & inOperand5,
                                                                        const class GALGAS_lstring & inOperand6,
                                                                        const class GALGAS_location & inOperand7
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_galgas_33_ProjectComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfSourceFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mGenerationFeatureList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mMajorVersion (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mMinorVersion (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mProjectSourceList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_QualifiedFeatureList reader_mQualifiedFeatureList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mRevisionVersion (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_ProjectComponentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_ProjectComponentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @galgas_33_QualifiedFeatureList_2D_element struct                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_QualifiedFeatureList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mFeatureName ;
  public : GALGAS_lstring mAttribute_mFeatureValue ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_galgas_33_QualifiedFeatureList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_galgas_33_QualifiedFeatureList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_galgas_33_QualifiedFeatureList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_galgas_33_QualifiedFeatureList_2D_element (const GALGAS_lstring & in_mFeatureName,
                                                             const GALGAS_lstring & in_mFeatureValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_QualifiedFeatureList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_galgas_33_QualifiedFeatureList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_galgas_33_QualifiedFeatureList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFeatureName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFeatureValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_QualifiedFeatureList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Parser class 'galgas3ExpressionSyntax' declaration                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_galgas_33_ExpressionSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_galgas_33_ExpressionSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_casted_5F_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_casted_5F_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_casted_5F_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_collection_5F_value_5F_element_ (class GALGAS_abstractCollectionValueElement & outArgument0,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_collection_5F_value_5F_element_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_collection_5F_value_5F_element_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_factor_ (class GALGAS_semanticExpressionAST & outArgument0,
                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_factor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_factor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_optional_5F_type_ (class GALGAS_lstring & outArgument0,
                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_optional_5F_type_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_optional_5F_type_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_output_5F_expression_5F_list_ (class GALGAS_actualOutputExpressionList & outArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_output_5F_expression_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_output_5F_expression_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_primary_ (class GALGAS_semanticExpressionAST & outArgument0,
                                        class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_primary_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_primary_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_primary_5F_entre_5F_crochets_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_primary_5F_entre_5F_crochets_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_primary_5F_entre_5F_crochets_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_factor_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                   class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_factor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_factor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_term_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_term_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_term_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_term_ (class GALGAS_semanticExpressionAST & outArgument0,
                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_term_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_term_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i0_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_expression_i1_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_expression_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_expression_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_casted_5F_expression_i2_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                             C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_casted_5F_expression_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_casted_5F_expression_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_relation_5F_term_i3_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_relation_5F_term_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_relation_5F_term_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_relation_5F_factor_i4_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_relation_5F_factor_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_relation_5F_factor_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_simple_5F_expression_i5_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                             C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_simple_5F_expression_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_simple_5F_expression_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_term_i6_ (GALGAS_semanticExpressionAST & outArgument0,
                                                             C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_term_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_term_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i7_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i8_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i9_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i10_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i11_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_factor_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i12_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i13_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i14_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i15_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i16_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i17_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i18_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i19_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i20_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i21_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i22_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i23_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i24_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i25_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i26_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i27_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i28_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i28_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i28_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i29_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i29_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_5F_entre_5F_crochets_i29_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_optional_5F_type_i30_ (GALGAS_lstring & outArgument0,
                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_optional_5F_type_i30_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_optional_5F_type_i30_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_optional_5F_type_i31_ (GALGAS_lstring & outArgument0,
                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_optional_5F_type_i31_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_optional_5F_type_i31_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i32_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i32_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i32_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i33_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i33_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i33_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i34_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i34_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i34_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i35_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i35_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i35_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i36_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i36_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i36_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i37_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i37_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i37_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i38_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i38_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ExpressionSyntax_primary_i38_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_galgas_33_ExpressionSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ExpressionSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Parser class 'galgas3ParameterArgumentSyntax' declaration                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_galgas_33_ParameterArgumentSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_galgas_33_ParameterArgumentSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_actual_5F_parameter_5F_list_ (class GALGAS_actualParameterListAST & outArgument0,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GALGAS_formalParameterListAST & outArgument0,
                                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_ (GALGAS_actualParameterListAST & outArgument0,
                                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_ (GALGAS_formalInputParameterListAST & outArgument0,
                                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ParameterArgumentSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Parser class 'galgas3InstructionsSyntax' declaration                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_galgas_33_InstructionsSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_galgas_33_InstructionsSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_actual_5F_input_5F_parameter_ (class GALGAS_lstring & outArgument0,
                                                             class GALGAS_abstractInputParameter & outArgument1,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_input_5F_parameter_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_input_5F_parameter_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_input_5F_parameter_5F_list_ (class GALGAS_actualInputParameterListAST & outArgument0,
                                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_ (class GALGAS_actualParameterListAST & outArgument0,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_cast_5F_else_5F_or_5F_default_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_cast_5F_else_5F_or_5F_default_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_cast_5F_else_5F_or_5F_default_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_cast_5F_instruction_5F_branch_ (class GALGAS_castInstructionBranchListAST & ioArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_cast_5F_instruction_5F_branch_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_cast_5F_instruction_5F_branch_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_with_5F_private_ (const class GALGAS_bool constinArgument0,
                                                               class GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_with_5F_private_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_with_5F_private_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_for_5F_instruction_5F_element_ (class GALGAS_foreachInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_for_5F_instruction_5F_element_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_for_5F_instruction_5F_element_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_if_5F_branch_ (class GALGAS_semanticInstructionAST & outArgument0,
                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_if_5F_branch_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_if_5F_branch_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_match_5F_entry_ (class GALGAS_matchEntryListAST & ioArgument0,
                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_match_5F_entry_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_match_5F_entry_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_match_5F_instruction_5F_branch_ (class GALGAS_matchInstructionBranchListAST & ioArgument0,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_match_5F_instruction_5F_branch_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_match_5F_instruction_5F_branch_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_ (class GALGAS_actualOutputExpressionList & outArgument0,
                                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                        class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_i1_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_i2_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_ (const GALGAS_bool constinArgument0,
                                                                                         GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_ (const GALGAS_bool constinArgument0,
                                                                                         GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_i5_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_declaration_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i8_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i11_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i12_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i15_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i16_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i17_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i18_ (GALGAS_foreachInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i19_ (GALGAS_foreachInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_ (GALGAS_foreachInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i24_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_if_5F_branch_i25_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_if_5F_branch_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_if_5F_branch_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i27_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i28_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i28_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i28_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i31_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i31_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i31_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i34_ (GALGAS_castInstructionBranchListAST & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i34_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i34_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i35_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i35_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i35_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i36_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i36_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i36_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i37_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i37_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i37_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i38_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i38_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i38_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i40_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i40_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i40_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i41_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i41_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i41_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i46_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i46_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i46_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_i49_ (GALGAS_lstring & outArgument0,
                                                                                        GALGAS_abstractInputParameter & outArgument1,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_i49_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_i49_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i50_ (GALGAS_actualInputParameterListAST & outArgument0,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i50_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i50_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_match_5F_entry_i52_ (GALGAS_matchEntryListAST & ioArgument0,
                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_match_5F_entry_i52_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_match_5F_entry_i52_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_match_5F_entry_i53_ (GALGAS_matchEntryListAST & ioArgument0,
                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_match_5F_entry_i53_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_match_5F_entry_i53_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i54_ (GALGAS_matchInstructionBranchListAST & ioArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i54_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i54_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_galgas_33_InstructionsSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_17 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_18 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_19 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_20 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_21 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_22 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_23 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_24 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_25 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_26 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_27 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_28 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_29 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_30 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_31 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_32 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_33 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_34 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_35 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_36 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_37 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_38 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_39 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_40 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_41 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_42 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_43 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_44 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_45 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_46 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_47 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_48 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_49 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_50 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_51 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_52 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_53 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_54 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_55 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_56 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_57 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_58 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_59 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_60 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_61 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_62 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_63 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_64 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_65 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_66 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_InstructionsSyntax_67 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @galgas_33_DeclarationAST struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_DeclarationAST : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_semanticDeclarationListAST mAttribute_mDeclarationList ;
  public : GALGAS_galgas_33_SyntaxComponentListAST mAttribute_mSyntaxComponentList ;
  public : GALGAS_syntaxExtensions mAttribute_mSyntaxExtensions ;
  public : GALGAS_galgas_33_GUIComponentListAST mAttribute_mGUIComponentList ;
  public : GALGAS_prologueEpilogueList mAttribute_mPrologueDeclarationList ;
  public : GALGAS_programRuleList mAttribute_mSourceRuleList ;
  public : GALGAS_prologueEpilogueList mAttribute_mEpilogueDeclarationList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_galgas_33_DeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_galgas_33_DeclarationAST (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_galgas_33_DeclarationAST (void) ;

//--------------------------------- Native constructor
  public : GALGAS_galgas_33_DeclarationAST (const GALGAS_semanticDeclarationListAST & in_mDeclarationList,
                                            const GALGAS_galgas_33_SyntaxComponentListAST & in_mSyntaxComponentList,
                                            const GALGAS_syntaxExtensions & in_mSyntaxExtensions,
                                            const GALGAS_galgas_33_GUIComponentListAST & in_mGUIComponentList,
                                            const GALGAS_prologueEpilogueList & in_mPrologueDeclarationList,
                                            const GALGAS_programRuleList & in_mSourceRuleList,
                                            const GALGAS_prologueEpilogueList & in_mEpilogueDeclarationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_DeclarationAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_galgas_33_DeclarationAST constructor_new (const class GALGAS_semanticDeclarationListAST & inOperand0,
                                                                   const class GALGAS_galgas_33_SyntaxComponentListAST & inOperand1,
                                                                   const class GALGAS_syntaxExtensions & inOperand2,
                                                                   const class GALGAS_galgas_33_GUIComponentListAST & inOperand3,
                                                                   const class GALGAS_prologueEpilogueList & inOperand4,
                                                                   const class GALGAS_programRuleList & inOperand5,
                                                                   const class GALGAS_prologueEpilogueList & inOperand6
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_galgas_33_DeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationListAST reader_mDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_prologueEpilogueList reader_mEpilogueDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_GUIComponentListAST reader_mGUIComponentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_prologueEpilogueList reader_mPrologueDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_programRuleList reader_mSourceRuleList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxComponentListAST reader_mSyntaxComponentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxExtensions reader_mSyntaxExtensions (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_DeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_DeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Parser class 'galgas3DeclarationsSyntax' declaration                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_galgas_33_DeclarationsSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_galgas_33_DeclarationsSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_attribute_5F_declaration_ (class GALGAS_propertyInCollectionListAST & ioArgument0,
                                                         class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_attribute_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_attribute_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_with_5F_private_ (const class GALGAS_bool constinArgument0,
                                                               class GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_with_5F_private_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_with_5F_private_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_insert_5F_method_5F_declaration_ (class GALGAS_insertMethodListAST & ioArgument0,
                                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_insert_5F_method_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_insert_5F_method_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_sortedlist_5F_sort_5F_descriptor_ (class GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_attribute_5F_declaration_i1_ (GALGAS_propertyInCollectionListAST & ioArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_attribute_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_attribute_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i2_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i3_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_insert_5F_method_5F_declaration_i4_ (GALGAS_insertMethodListAST & ioArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_insert_5F_method_5F_declaration_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_insert_5F_method_5F_declaration_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i5_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i6_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i7_ (GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i8_ (const GALGAS_bool constinArgument0,
                                                                                         GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i9_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i10_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i11_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i12_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i13_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i14_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i15_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i16_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i17_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i18_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i19_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i20_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i21_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i22_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i23_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i24_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i25_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i26_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i27_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_DeclarationsSyntax_declaration_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_17 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_18 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_19 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_20 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_21 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_22 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_23 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_24 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_25 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_26 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_27 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_28 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_29 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_30 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_31 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_32 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_33 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_34 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_35 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_36 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_37 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_38 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_39 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_40 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_41 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_DeclarationsSyntax_42 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Parser class 'galgas3LexiqueComponentSyntax' declaration                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_galgas_33_LexiqueComponentSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_galgas_33_LexiqueComponentSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_function_5F_declaration_ (class GALGAS_externFunctionListAST & ioArgument0,
                                                                  class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_function_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_function_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_routine_5F_declaration_ (class GALGAS_externRoutineListAST & ioArgument0,
                                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_routine_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_routine_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_function_5F_call_5F_or_5F_attribute_ (const class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument1,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_function_5F_call_5F_or_5F_attribute_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_function_5F_call_5F_or_5F_attribute_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_attribute_5F_declaration_ (class GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_attribute_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_attribute_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_explicit_5F_rule_ (class GALGAS_lexicalRuleListAST & ioArgument0,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_explicit_5F_rule_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_explicit_5F_rule_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_expression_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                                      class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_factor_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                                  class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_factor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_factor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_implicit_5F_rule_ (class GALGAS_lexicalRuleListAST & ioArgument0,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_implicit_5F_rule_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_implicit_5F_rule_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_instruction_ (class GALGAS_lexicalInstructionListAST & ioArgument0,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_list_5F_declaration_ (class GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_list_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_list_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_list_5F_entry_ (class GALGAS_lexicalListEntryListAST & ioArgument0,
                                                         class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_list_5F_entry_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_list_5F_entry_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_message_5F_declaration_ (class GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                  class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_message_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_message_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_output_5F_effective_5F_argument_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_send_5F_instruction_ (class GALGAS_lexicalInstructionAST & outArgument0,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_send_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_send_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_term_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_term_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_term_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_repeat_5F_while_5F_branch_ (class GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_repeat_5F_while_5F_branch_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_repeat_5F_while_5F_branch_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_style_5F_declaration_ (class GALGAS_lexicalStyleListAST & ioArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_style_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_style_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_delimitor_ (class GALGAS_metamodelTemplateDelimitorListAST & ioArgument0,
                                                      class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_delimitor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_delimitor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_replacement_ (class GALGAS_templateReplacementListAST & ioArgument0,
                                                        class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_replacement_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_replacement_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_terminal_5F_declaration_ (class GALGAS_terminalDeclarationListAST & ioArgument0,
                                                        class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_terminal_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_terminal_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_galgas_33_LexiqueComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i1_ (GALGAS_metamodelTemplateDelimitorListAST & ioArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i2_ (GALGAS_templateReplacementListAST & ioArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i3_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i4_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i5_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i7_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                                                             C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                                                             C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i9_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i10_ (GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i11_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i13_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_function_5F_call_5F_or_5F_attribute_i17_ (const GALGAS_lstring constinArgument0,
                                                                                                   GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument1,
                                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_function_5F_call_5F_or_5F_attribute_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_function_5F_call_5F_or_5F_attribute_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_function_5F_call_5F_or_5F_attribute_i18_ (const GALGAS_lstring constinArgument0,
                                                                                                   GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument1,
                                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_function_5F_call_5F_or_5F_attribute_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_function_5F_call_5F_or_5F_attribute_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i24_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i25_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i26_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i30_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i30_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i30_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i31_ (GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i31_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i31_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i32_ (GALGAS_lexicalListEntryListAST & ioArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i32_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i32_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i33_ (GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i33_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i33_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i34_ (GALGAS_terminalDeclarationListAST & ioArgument0,
                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i34_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i34_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i35_ (GALGAS_lexicalStyleListAST & ioArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i35_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i35_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i36_ (GALGAS_externRoutineListAST & ioArgument0,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i36_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i36_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i37_ (GALGAS_externFunctionListAST & ioArgument0,
                                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i37_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i37_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_17 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_18 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_19 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_20 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_21 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_22 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_23 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_24 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_25 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_26 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_27 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_28 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_29 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_30 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_31 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_32 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_33 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_LexiqueComponentSyntax_34 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @lexiqueComponentAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexiqueComponentAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_lexiqueComponentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexiqueComponentAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexiqueComponentAST * ptr (void) const { return (const cPtr_lexiqueComponentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexiqueComponentAST (const cPtr_lexiqueComponentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexiqueComponentAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexiqueComponentAST constructor_new (const class GALGAS_bool & inOperand0,
                                                              const class GALGAS_lstring & inOperand1,
                                                              const class GALGAS_bool & inOperand2,
                                                              const class GALGAS_metamodelTemplateDelimitorListAST & inOperand3,
                                                              const class GALGAS_templateReplacementListAST & inOperand4,
                                                              const class GALGAS_lexicalAttributeListAST & inOperand5,
                                                              const class GALGAS_lexicalStyleListAST & inOperand6,
                                                              const class GALGAS_terminalDeclarationListAST & inOperand7,
                                                              const class GALGAS_lexicalMessageDeclarationListAST & inOperand8,
                                                              const class GALGAS_lexicalListDeclarationListAST & inOperand9,
                                                              const class GALGAS_lexicalRuleListAST & inOperand10,
                                                              const class GALGAS_externRoutineListAST & inOperand11,
                                                              const class GALGAS_externFunctionListAST & inOperand12,
                                                              const class GALGAS_indexingListAST & inOperand13,
                                                              const class GALGAS_lstring & inOperand14
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexiqueComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_externFunctionListAST reader_mExternFunctionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externRoutineListAST reader_mExternRoutineList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mIndexingDirectory (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_indexingListAST reader_mIndexingListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsTemplate (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeListAST reader_mLexicalAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalListDeclarationListAST reader_mLexicalListDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageDeclarationListAST reader_mLexicalMessageDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRuleListAST reader_mLexicalRuleList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalStyleListAST reader_mLexicalStyleList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLexiqueComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_metamodelTemplateDelimitorListAST reader_mTemplateDelimitorList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateReplacementListAST reader_mTemplateReplacementList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalDeclarationListAST reader_mTerminalDeclarationList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueComponentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @lexiqueComponentAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexiqueComponentAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLexiqueComponentName ;
  public : GALGAS_bool mAttribute_mIsTemplate ;
  public : GALGAS_metamodelTemplateDelimitorListAST mAttribute_mTemplateDelimitorList ;
  public : GALGAS_templateReplacementListAST mAttribute_mTemplateReplacementList ;
  public : GALGAS_lexicalAttributeListAST mAttribute_mLexicalAttributeList ;
  public : GALGAS_lexicalStyleListAST mAttribute_mLexicalStyleList ;
  public : GALGAS_terminalDeclarationListAST mAttribute_mTerminalDeclarationList ;
  public : GALGAS_lexicalMessageDeclarationListAST mAttribute_mLexicalMessageDeclarationList ;
  public : GALGAS_lexicalListDeclarationListAST mAttribute_mLexicalListDeclarationList ;
  public : GALGAS_lexicalRuleListAST mAttribute_mLexicalRuleList ;
  public : GALGAS_externRoutineListAST mAttribute_mExternRoutineList ;
  public : GALGAS_externFunctionListAST mAttribute_mExternFunctionList ;
  public : GALGAS_indexingListAST mAttribute_mIndexingListAST ;
  public : GALGAS_lstring mAttribute_mIndexingDirectory ;

//--- Constructor
  public : cPtr_lexiqueComponentAST (const GALGAS_bool & in_mIsPredefined,
                                     const GALGAS_lstring & in_mLexiqueComponentName,
                                     const GALGAS_bool & in_mIsTemplate,
                                     const GALGAS_metamodelTemplateDelimitorListAST & in_mTemplateDelimitorList,
                                     const GALGAS_templateReplacementListAST & in_mTemplateReplacementList,
                                     const GALGAS_lexicalAttributeListAST & in_mLexicalAttributeList,
                                     const GALGAS_lexicalStyleListAST & in_mLexicalStyleList,
                                     const GALGAS_terminalDeclarationListAST & in_mTerminalDeclarationList,
                                     const GALGAS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationList,
                                     const GALGAS_lexicalListDeclarationListAST & in_mLexicalListDeclarationList,
                                     const GALGAS_lexicalRuleListAST & in_mLexicalRuleList,
                                     const GALGAS_externRoutineListAST & in_mExternRoutineList,
                                     const GALGAS_externFunctionListAST & in_mExternFunctionList,
                                     const GALGAS_indexingListAST & in_mIndexingListAST,
                                     const GALGAS_lstring & in_mIndexingDirectory
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLexiqueComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsTemplate (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_metamodelTemplateDelimitorListAST reader_mTemplateDelimitorList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateReplacementListAST reader_mTemplateReplacementList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalAttributeListAST reader_mLexicalAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalStyleListAST reader_mLexicalStyleList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_terminalDeclarationListAST reader_mTerminalDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalMessageDeclarationListAST reader_mLexicalMessageDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalListDeclarationListAST reader_mLexicalListDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalRuleListAST reader_mLexicalRuleList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_externRoutineListAST reader_mExternRoutineList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_externFunctionListAST reader_mExternFunctionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_indexingListAST reader_mIndexingListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mIndexingDirectory (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

#endif
