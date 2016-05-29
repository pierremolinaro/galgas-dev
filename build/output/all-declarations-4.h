#ifndef all_2D_declarations_2D__34__ENTITIES_DEFINED
#define all_2D_declarations_2D__34__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @wrapperDirectoryMap map                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_wrapperDirectoryMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_wrapperDirectoryMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_wrapperDirectoryMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_wrapperDirectoryMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_wrapperDirectoryMap (const GALGAS_wrapperDirectoryMap & inSource) ;
  public : GALGAS_wrapperDirectoryMap & operator = (const GALGAS_wrapperDirectoryMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_wrapperDirectoryMap extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_wrapperDirectoryMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_wrapperDirectoryMap constructor_mapWithMapToOverride (const class GALGAS_wrapperDirectoryMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_wrapperFileMap & inOperand1,
                                                      const class GALGAS_wrapperDirectoryMap & inOperand2,
                                                      const class GALGAS_uint & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_wrapperFileMap constinArgument1,
                                                   class GALGAS_wrapperDirectoryMap constinArgument2,
                                                   class GALGAS_uint constinArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDirectoryMapForKey (class GALGAS_wrapperDirectoryMap constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRegularFileMapForKey (class GALGAS_wrapperFileMap constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMWrapperDirectoryIndexForKey (class GALGAS_uint constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_wrapperFileMap & outArgument1,
                                                   class GALGAS_wrapperDirectoryMap & outArgument2,
                                                   class GALGAS_uint & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap getter_mDirectoryMapForKey (const class GALGAS_string & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap getter_mRegularFileMapForKey (const class GALGAS_string & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mWrapperDirectoryIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_wrapperDirectoryMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_wrapperDirectoryMap ;
 
} ; // End of GALGAS_wrapperDirectoryMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_wrapperDirectoryMap : public cGenericAbstractEnumerator {
  public : cEnumerator_wrapperDirectoryMap (const GALGAS_wrapperDirectoryMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_wrapperFileMap current_mRegularFileMap (LOCATION_ARGS) const ;
  public : class GALGAS_wrapperDirectoryMap current_mDirectoryMap (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mWrapperDirectoryIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_wrapperDirectoryMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@wrapperDirectoryMap' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_wrapperDirectoryMap : public cMapElement {
//--- Map attributes
  public : GALGAS_wrapperFileMap mAttribute_mRegularFileMap ;
  public : GALGAS_wrapperDirectoryMap mAttribute_mDirectoryMap ;
  public : GALGAS_uint mAttribute_mWrapperDirectoryIndex ;

//--- Constructor
  public : cMapElement_wrapperDirectoryMap (const GALGAS_lstring & inKey,
                                            const GALGAS_wrapperFileMap & in_mRegularFileMap,
                                            const GALGAS_wrapperDirectoryMap & in_mDirectoryMap,
                                            const GALGAS_uint & in_mWrapperDirectoryIndex
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
//                                       @wrapperDirectoryMap_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_wrapperDirectoryMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_wrapperFileMap mAttribute_mRegularFileMap ;
  public : GALGAS_wrapperDirectoryMap mAttribute_mDirectoryMap ;
  public : GALGAS_uint mAttribute_mWrapperDirectoryIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_wrapperDirectoryMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_wrapperDirectoryMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_wrapperDirectoryMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_wrapperDirectoryMap_2D_element (const GALGAS_lstring & in_lkey,
                                                  const GALGAS_wrapperFileMap & in_mRegularFileMap,
                                                  const GALGAS_wrapperDirectoryMap & in_mDirectoryMap,
                                                  const GALGAS_uint & in_mWrapperDirectoryIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_wrapperDirectoryMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_wrapperDirectoryMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_wrapperFileMap & inOperand1,
                                                                         const class GALGAS_wrapperDirectoryMap & inOperand2,
                                                                         const class GALGAS_uint & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_wrapperDirectoryMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap getter_mDirectoryMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap getter_mRegularFileMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mWrapperDirectoryIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_wrapperDirectoryMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @filewrapperTemplateMap map                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_filewrapperTemplateMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_filewrapperTemplateMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperTemplateMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_filewrapperTemplateMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_filewrapperTemplateMap (const GALGAS_filewrapperTemplateMap & inSource) ;
  public : GALGAS_filewrapperTemplateMap & operator = (const GALGAS_filewrapperTemplateMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperTemplateMap extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_filewrapperTemplateMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_filewrapperTemplateMap constructor_mapWithMapToOverride (const class GALGAS_filewrapperTemplateMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_functionSignature & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_functionSignature constinArgument1,
                                                   class GALGAS_lstring constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplatePathForKey (class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTemplateSignatureForKey (class GALGAS_functionSignature constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_functionSignature & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperTemplatePathForKey (const class GALGAS_string & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_mTemplateSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_filewrapperTemplateMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                    const GALGAS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_filewrapperTemplateMap ;
 
} ; // End of GALGAS_filewrapperTemplateMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_filewrapperTemplateMap : public cGenericAbstractEnumerator {
  public : cEnumerator_filewrapperTemplateMap (const GALGAS_filewrapperTemplateMap & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_functionSignature current_mTemplateSignature (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFilewrapperTemplatePath (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_filewrapperTemplateMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@filewrapperTemplateMap' map                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_filewrapperTemplateMap : public cMapElement {
//--- Map attributes
  public : GALGAS_functionSignature mAttribute_mTemplateSignature ;
  public : GALGAS_lstring mAttribute_mFilewrapperTemplatePath ;

//--- Constructor
  public : cMapElement_filewrapperTemplateMap (const GALGAS_lstring & inKey,
                                               const GALGAS_functionSignature & in_mTemplateSignature,
                                               const GALGAS_lstring & in_mFilewrapperTemplatePath
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
//                                      @filewrapperTemplateMap_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperTemplateMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_functionSignature mAttribute_mTemplateSignature ;
  public : GALGAS_lstring mAttribute_mFilewrapperTemplatePath ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperTemplateMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_filewrapperTemplateMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_filewrapperTemplateMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_filewrapperTemplateMap_2D_element (const GALGAS_lstring & in_lkey,
                                                     const GALGAS_functionSignature & in_mTemplateSignature,
                                                     const GALGAS_lstring & in_mFilewrapperTemplatePath) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperTemplateMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_filewrapperTemplateMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_functionSignature & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperTemplateMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperTemplatePath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_mTemplateSignature (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperTemplateMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @filewrapperMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_filewrapperMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_filewrapperMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_filewrapperMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_filewrapperMap (const GALGAS_filewrapperMap & inSource) ;
  public : GALGAS_filewrapperMap & operator = (const GALGAS_filewrapperMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_filewrapperMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_filewrapperMap constructor_mapWithMapToOverride (const class GALGAS_filewrapperMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstringlist & inOperand2,
                                                      const class GALGAS_wrapperFileMap & inOperand3,
                                                      const class GALGAS_wrapperDirectoryMap & inOperand4,
                                                      const class GALGAS_filewrapperTemplateMap & inOperand5,
                                                      const class GALGAS_bool & inOperand6,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring constinArgument1,
                                                   class GALGAS_lstringlist constinArgument2,
                                                   class GALGAS_wrapperFileMap constinArgument3,
                                                   class GALGAS_wrapperDirectoryMap constinArgument4,
                                                   class GALGAS_filewrapperTemplateMap constinArgument5,
                                                   class GALGAS_bool constinArgument6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFilewrapperDirectoryMapForKey (class GALGAS_wrapperDirectoryMap constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFilewrapperExtensionListForKey (class GALGAS_lstringlist constinArgument0,
                                                                            class GALGAS_string constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFilewrapperFileMapForKey (class GALGAS_wrapperFileMap constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFilewrapperPathForKey (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplateMapForKey (class GALGAS_filewrapperTemplateMap constinArgument0,
                                                                          class GALGAS_string constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsInternalForKey (class GALGAS_bool constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_lstringlist & outArgument2,
                                                   class GALGAS_wrapperFileMap & outArgument3,
                                                   class GALGAS_wrapperDirectoryMap & outArgument4,
                                                   class GALGAS_filewrapperTemplateMap & outArgument5,
                                                   class GALGAS_bool & outArgument6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap getter_mFilewrapperDirectoryMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFilewrapperExtensionListForKey (const class GALGAS_string & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap getter_mFilewrapperFileMapForKey (const class GALGAS_string & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperPathForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateMap getter_mFilewrapperTemplateMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInternalForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperMap getter_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_filewrapperMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_filewrapperMap ;
 
} ; // End of GALGAS_filewrapperMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_filewrapperMap : public cGenericAbstractEnumerator {
  public : cEnumerator_filewrapperMap (const GALGAS_filewrapperMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFilewrapperPath (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mFilewrapperExtensionList (LOCATION_ARGS) const ;
  public : class GALGAS_wrapperFileMap current_mFilewrapperFileMap (LOCATION_ARGS) const ;
  public : class GALGAS_wrapperDirectoryMap current_mFilewrapperDirectoryMap (LOCATION_ARGS) const ;
  public : class GALGAS_filewrapperTemplateMap current_mFilewrapperTemplateMap (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsInternal (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_filewrapperMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@filewrapperMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_filewrapperMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mAttribute_mFilewrapperPath ;
  public : GALGAS_lstringlist mAttribute_mFilewrapperExtensionList ;
  public : GALGAS_wrapperFileMap mAttribute_mFilewrapperFileMap ;
  public : GALGAS_wrapperDirectoryMap mAttribute_mFilewrapperDirectoryMap ;
  public : GALGAS_filewrapperTemplateMap mAttribute_mFilewrapperTemplateMap ;
  public : GALGAS_bool mAttribute_mIsInternal ;

//--- Constructor
  public : cMapElement_filewrapperMap (const GALGAS_lstring & inKey,
                                       const GALGAS_lstring & in_mFilewrapperPath,
                                       const GALGAS_lstringlist & in_mFilewrapperExtensionList,
                                       const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                       const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                       const GALGAS_filewrapperTemplateMap & in_mFilewrapperTemplateMap,
                                       const GALGAS_bool & in_mIsInternal
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
//                                          @filewrapperMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lstring mAttribute_mFilewrapperPath ;
  public : GALGAS_lstringlist mAttribute_mFilewrapperExtensionList ;
  public : GALGAS_wrapperFileMap mAttribute_mFilewrapperFileMap ;
  public : GALGAS_wrapperDirectoryMap mAttribute_mFilewrapperDirectoryMap ;
  public : GALGAS_filewrapperTemplateMap mAttribute_mFilewrapperTemplateMap ;
  public : GALGAS_bool mAttribute_mIsInternal ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_filewrapperMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_filewrapperMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_filewrapperMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_lstring & in_mFilewrapperPath,
                                             const GALGAS_lstringlist & in_mFilewrapperExtensionList,
                                             const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                             const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                             const GALGAS_filewrapperTemplateMap & in_mFilewrapperTemplateMap,
                                             const GALGAS_bool & in_mIsInternal) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_filewrapperMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_lstringlist & inOperand2,
                                                                    const class GALGAS_wrapperFileMap & inOperand3,
                                                                    const class GALGAS_wrapperDirectoryMap & inOperand4,
                                                                    const class GALGAS_filewrapperTemplateMap & inOperand5,
                                                                    const class GALGAS_bool & inOperand6
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap getter_mFilewrapperDirectoryMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFilewrapperExtensionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap getter_mFilewrapperFileMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperPath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateMap getter_mFilewrapperTemplateMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInternal (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @optionComponentMapForSemanticAnalysis map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_optionComponentMapForSemanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_optionComponentMapForSemanticAnalysis_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionComponentMapForSemanticAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_optionComponentMapForSemanticAnalysis (void) ;

//--------------------------------- Handle copy
  public : GALGAS_optionComponentMapForSemanticAnalysis (const GALGAS_optionComponentMapForSemanticAnalysis & inSource) ;
  public : GALGAS_optionComponentMapForSemanticAnalysis & operator = (const GALGAS_optionComponentMapForSemanticAnalysis & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionComponentMapForSemanticAnalysis extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_optionComponentMapForSemanticAnalysis constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_optionComponentMapForSemanticAnalysis constructor_mapWithMapToOverride (const class GALGAS_optionComponentMapForSemanticAnalysis & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_commandLineOptionMap & inOperand2,
                                                      const class GALGAS_commandLineOptionMap & inOperand3,
                                                      const class GALGAS_commandLineOptionMap & inOperand4,
                                                      const class GALGAS_commandLineOptionMap & inOperand5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bool constinArgument1,
                                                   class GALGAS_commandLineOptionMap constinArgument2,
                                                   class GALGAS_commandLineOptionMap constinArgument3,
                                                   class GALGAS_commandLineOptionMap constinArgument4,
                                                   class GALGAS_commandLineOptionMap constinArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBoolOptionMapForKey (class GALGAS_commandLineOptionMap constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsPredefinedForKey (class GALGAS_bool constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMStringListOptionMapForKey (class GALGAS_commandLineOptionMap constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMStringOptionMapForKey (class GALGAS_commandLineOptionMap constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMUIntOptionMapForKey (class GALGAS_commandLineOptionMap constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   class GALGAS_commandLineOptionMap & outArgument2,
                                                   class GALGAS_commandLineOptionMap & outArgument3,
                                                   class GALGAS_commandLineOptionMap & outArgument4,
                                                   class GALGAS_commandLineOptionMap & outArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mBoolOptionMapForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPredefinedForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mStringListOptionMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mStringOptionMapForKey (const class GALGAS_string & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mUIntOptionMapForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_optionComponentMapForSemanticAnalysis getter_overriddenMap (C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_optionComponentMapForSemanticAnalysis * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                   const GALGAS_string & inKey
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_optionComponentMapForSemanticAnalysis ;
 
} ; // End of GALGAS_optionComponentMapForSemanticAnalysis class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_optionComponentMapForSemanticAnalysis : public cGenericAbstractEnumerator {
  public : cEnumerator_optionComponentMapForSemanticAnalysis (const GALGAS_optionComponentMapForSemanticAnalysis & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsPredefined (LOCATION_ARGS) const ;
  public : class GALGAS_commandLineOptionMap current_mBoolOptionMap (LOCATION_ARGS) const ;
  public : class GALGAS_commandLineOptionMap current_mUIntOptionMap (LOCATION_ARGS) const ;
  public : class GALGAS_commandLineOptionMap current_mStringOptionMap (LOCATION_ARGS) const ;
  public : class GALGAS_commandLineOptionMap current_mStringListOptionMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_optionComponentMapForSemanticAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@optionComponentMapForSemanticAnalysis' map                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_optionComponentMapForSemanticAnalysis : public cMapElement {
//--- Map attributes
  public : GALGAS_bool mAttribute_mIsPredefined ;
  public : GALGAS_commandLineOptionMap mAttribute_mBoolOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mUIntOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mStringOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mStringListOptionMap ;

//--- Constructor
  public : cMapElement_optionComponentMapForSemanticAnalysis (const GALGAS_lstring & inKey,
                                                              const GALGAS_bool & in_mIsPredefined,
                                                              const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                                              const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                                              const GALGAS_commandLineOptionMap & in_mStringOptionMap,
                                                              const GALGAS_commandLineOptionMap & in_mStringListOptionMap
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
//                              @optionComponentMapForSemanticAnalysis_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionComponentMapForSemanticAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_bool mAttribute_mIsPredefined ;
  public : GALGAS_commandLineOptionMap mAttribute_mBoolOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mUIntOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mStringOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mStringListOptionMap ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optionComponentMapForSemanticAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_optionComponentMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_optionComponentMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_optionComponentMapForSemanticAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                    const GALGAS_bool & in_mIsPredefined,
                                                                    const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                                                    const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                                                    const GALGAS_commandLineOptionMap & in_mStringOptionMap,
                                                                    const GALGAS_commandLineOptionMap & in_mStringListOptionMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionComponentMapForSemanticAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_optionComponentMapForSemanticAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_bool & inOperand1,
                                                                                           const class GALGAS_commandLineOptionMap & inOperand2,
                                                                                           const class GALGAS_commandLineOptionMap & inOperand3,
                                                                                           const class GALGAS_commandLineOptionMap & inOperand4,
                                                                                           const class GALGAS_commandLineOptionMap & inOperand5
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionComponentMapForSemanticAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mBoolOptionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPredefined (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mStringListOptionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mStringOptionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mUIntOptionMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionComponentMapForSemanticAnalysis_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @optionMapForSemanticAnalysis map                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_optionMapForSemanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_optionMapForSemanticAnalysis_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionMapForSemanticAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_optionMapForSemanticAnalysis (void) ;

//--------------------------------- Handle copy
  public : GALGAS_optionMapForSemanticAnalysis (const GALGAS_optionMapForSemanticAnalysis & inSource) ;
  public : GALGAS_optionMapForSemanticAnalysis & operator = (const GALGAS_optionMapForSemanticAnalysis & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionMapForSemanticAnalysis extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_optionMapForSemanticAnalysis constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_optionMapForSemanticAnalysis constructor_mapWithMapToOverride (const class GALGAS_optionMapForSemanticAnalysis & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                      const class GALGAS_char & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_string & inOperand4,
                                                      const class GALGAS_string & inOperand5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                   class GALGAS_char constinArgument2,
                                                   class GALGAS_string constinArgument3,
                                                   class GALGAS_string constinArgument4,
                                                   class GALGAS_string constinArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMCommentForKey (class GALGAS_string constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDefaultValueForKey (class GALGAS_string constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionCharForKey (class GALGAS_char constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionStringForKey (class GALGAS_string constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionTypeForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                   class GALGAS_char & outArgument2,
                                                   class GALGAS_string & outArgument3,
                                                   class GALGAS_string & outArgument4,
                                                   class GALGAS_string & outArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCommentForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mDefaultValueForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_char getter_mOptionCharForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionStringForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mOptionTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_optionMapForSemanticAnalysis getter_overriddenMap (C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_optionMapForSemanticAnalysis * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                          const GALGAS_string & inKey
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_optionMapForSemanticAnalysis ;
 
} ; // End of GALGAS_optionMapForSemanticAnalysis class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_optionMapForSemanticAnalysis : public cGenericAbstractEnumerator {
  public : cEnumerator_optionMapForSemanticAnalysis (const GALGAS_optionMapForSemanticAnalysis & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mOptionType (LOCATION_ARGS) const ;
  public : class GALGAS_char current_mOptionChar (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mOptionString (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mComment (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mDefaultValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_optionMapForSemanticAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionMapForSemanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@optionMapForSemanticAnalysis' map                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_optionMapForSemanticAnalysis : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mOptionType ;
  public : GALGAS_char mAttribute_mOptionChar ;
  public : GALGAS_string mAttribute_mOptionString ;
  public : GALGAS_string mAttribute_mComment ;
  public : GALGAS_string mAttribute_mDefaultValue ;

//--- Constructor
  public : cMapElement_optionMapForSemanticAnalysis (const GALGAS_lstring & inKey,
                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mOptionType,
                                                     const GALGAS_char & in_mOptionChar,
                                                     const GALGAS_string & in_mOptionString,
                                                     const GALGAS_string & in_mComment,
                                                     const GALGAS_string & in_mDefaultValue
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
//                                   @optionMapForSemanticAnalysis_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionMapForSemanticAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mOptionType ;
  public : GALGAS_char mAttribute_mOptionChar ;
  public : GALGAS_string mAttribute_mOptionString ;
  public : GALGAS_string mAttribute_mComment ;
  public : GALGAS_string mAttribute_mDefaultValue ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optionMapForSemanticAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_optionMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_optionMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_optionMapForSemanticAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                           const GALGAS_unifiedTypeMap_2D_proxy & in_mOptionType,
                                                           const GALGAS_char & in_mOptionChar,
                                                           const GALGAS_string & in_mOptionString,
                                                           const GALGAS_string & in_mComment,
                                                           const GALGAS_string & in_mDefaultValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionMapForSemanticAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_optionMapForSemanticAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                  const class GALGAS_char & inOperand2,
                                                                                  const class GALGAS_string & inOperand3,
                                                                                  const class GALGAS_string & inOperand4,
                                                                                  const class GALGAS_string & inOperand5
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionMapForSemanticAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mDefaultValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_char getter_mOptionChar (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mOptionType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionMapForSemanticAnalysis_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionMapForSemanticAnalysis_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @lexiqueComponentMapForSemanticAnalysis map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexiqueComponentMapForSemanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_lexiqueComponentMapForSemanticAnalysis_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexiqueComponentMapForSemanticAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_lexiqueComponentMapForSemanticAnalysis (void) ;

//--------------------------------- Handle copy
  public : GALGAS_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inSource) ;
  public : GALGAS_lexiqueComponentMapForSemanticAnalysis & operator = (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexiqueComponentMapForSemanticAnalysis extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexiqueComponentMapForSemanticAnalysis constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_lexiqueComponentMapForSemanticAnalysis constructor_mapWithMapToOverride (const class GALGAS_lexiqueComponentMapForSemanticAnalysis & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_terminalMap & inOperand1,
                                                      const class GALGAS_indexingListAST & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_terminalMap constinArgument1,
                                                   class GALGAS_indexingListAST constinArgument2,
                                                   class GALGAS_lstring constinArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndexingDirectoryForKey (class GALGAS_lstring constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndexingListASTForKey (class GALGAS_indexingListAST constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTerminalMapForKey (class GALGAS_terminalMap constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_terminalMap & outArgument1,
                                                   class GALGAS_indexingListAST & outArgument2,
                                                   class GALGAS_lstring & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIndexingDirectoryForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_indexingListAST getter_mIndexingListASTForKey (const class GALGAS_string & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalMap getter_mTerminalMapForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexiqueComponentMapForSemanticAnalysis getter_overriddenMap (C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_lexiqueComponentMapForSemanticAnalysis * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                    const GALGAS_string & inKey
                                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexiqueComponentMapForSemanticAnalysis ;
 
} ; // End of GALGAS_lexiqueComponentMapForSemanticAnalysis class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexiqueComponentMapForSemanticAnalysis : public cGenericAbstractEnumerator {
  public : cEnumerator_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inEnumeratedObject,
                                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_terminalMap current_mTerminalMap (LOCATION_ARGS) const ;
  public : class GALGAS_indexingListAST current_mIndexingListAST (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mIndexingDirectory (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Class for element of '@lexiqueComponentMapForSemanticAnalysis' map                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexiqueComponentMapForSemanticAnalysis : public cMapElement {
//--- Map attributes
  public : GALGAS_terminalMap mAttribute_mTerminalMap ;
  public : GALGAS_indexingListAST mAttribute_mIndexingListAST ;
  public : GALGAS_lstring mAttribute_mIndexingDirectory ;

//--- Constructor
  public : cMapElement_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lstring & inKey,
                                                               const GALGAS_terminalMap & in_mTerminalMap,
                                                               const GALGAS_indexingListAST & in_mIndexingListAST,
                                                               const GALGAS_lstring & in_mIndexingDirectory
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
//                              @lexiqueComponentMapForSemanticAnalysis_2D_element struct                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_terminalMap mAttribute_mTerminalMap ;
  public : GALGAS_indexingListAST mAttribute_mIndexingListAST ;
  public : GALGAS_lstring mAttribute_mIndexingDirectory ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                     const GALGAS_terminalMap & in_mTerminalMap,
                                                                     const GALGAS_indexingListAST & in_mIndexingListAST,
                                                                     const GALGAS_lstring & in_mIndexingDirectory) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_terminalMap & inOperand1,
                                                                                            const class GALGAS_indexingListAST & inOperand2,
                                                                                            const class GALGAS_lstring & inOperand3
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIndexingDirectory (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_indexingListAST getter_mIndexingListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalMap getter_mTerminalMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @syntaxComponentMap map                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_syntaxComponentMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_syntaxComponentMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxComponentMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_syntaxComponentMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_syntaxComponentMap (const GALGAS_syntaxComponentMap & inSource) ;
  public : GALGAS_syntaxComponentMap & operator = (const GALGAS_syntaxComponentMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxComponentMap extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_syntaxComponentMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_syntaxComponentMap constructor_mapWithMapToOverride (const class GALGAS_syntaxComponentMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                      const class GALGAS_syntaxRuleListAST & inOperand3,
                                                      const class GALGAS_bool & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring constinArgument1,
                                                   class GALGAS_nonterminalDeclarationListAST constinArgument2,
                                                   class GALGAS_syntaxRuleListAST constinArgument3,
                                                   class GALGAS_bool constinArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasTranslateFeatureForKey (class GALGAS_bool constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLexiqueNameForKey (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMNonterminalDeclarationListForKey (class GALGAS_nonterminalDeclarationListAST constinArgument0,
                                                                              class GALGAS_string constinArgument1,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRuleListForKey (class GALGAS_syntaxRuleListAST constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_nonterminalDeclarationListAST & outArgument2,
                                                   class GALGAS_syntaxRuleListAST & outArgument3,
                                                   class GALGAS_bool & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasTranslateFeatureForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexiqueNameForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_mRuleListForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxComponentMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_syntaxComponentMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_syntaxComponentMap ;
 
} ; // End of GALGAS_syntaxComponentMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_syntaxComponentMap : public cGenericAbstractEnumerator {
  public : cEnumerator_syntaxComponentMap (const GALGAS_syntaxComponentMap & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mLexiqueName (LOCATION_ARGS) const ;
  public : class GALGAS_nonterminalDeclarationListAST current_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public : class GALGAS_syntaxRuleListAST current_mRuleList (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasTranslateFeature (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_syntaxComponentMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@syntaxComponentMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_syntaxComponentMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mAttribute_mLexiqueName ;
  public : GALGAS_nonterminalDeclarationListAST mAttribute_mNonterminalDeclarationList ;
  public : GALGAS_syntaxRuleListAST mAttribute_mRuleList ;
  public : GALGAS_bool mAttribute_mHasTranslateFeature ;

//--- Constructor
  public : cMapElement_syntaxComponentMap (const GALGAS_lstring & inKey,
                                           const GALGAS_lstring & in_mLexiqueName,
                                           const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                           const GALGAS_syntaxRuleListAST & in_mRuleList,
                                           const GALGAS_bool & in_mHasTranslateFeature
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
//                                        @syntaxComponentMap_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxComponentMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lstring mAttribute_mLexiqueName ;
  public : GALGAS_nonterminalDeclarationListAST mAttribute_mNonterminalDeclarationList ;
  public : GALGAS_syntaxRuleListAST mAttribute_mRuleList ;
  public : GALGAS_bool mAttribute_mHasTranslateFeature ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_syntaxComponentMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_syntaxComponentMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_syntaxComponentMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_syntaxComponentMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_lstring & in_mLexiqueName,
                                                 const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                 const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                 const GALGAS_bool & in_mHasTranslateFeature) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxComponentMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_syntaxComponentMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                        const class GALGAS_syntaxRuleListAST & inOperand3,
                                                                        const class GALGAS_bool & inOperand4
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syntaxComponentMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasTranslateFeature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexiqueName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_mRuleList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxComponentMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @extensionMethodMapForType map                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_extensionMethodMapForType ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extensionMethodMapForType : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_extensionMethodMapForType (void) ;

//--------------------------------- Handle copy
  public : GALGAS_extensionMethodMapForType (const GALGAS_extensionMethodMapForType & inSource) ;
  public : GALGAS_extensionMethodMapForType & operator = (const GALGAS_extensionMethodMapForType & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionMethodMapForType extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_extensionMethodMapForType constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_extensionMethodMapForType constructor_mapWithMapToOverride (const class GALGAS_extensionMethodMapForType & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_formalParameterListAST & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_formalParameterListAST constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFormalParameterListForKey (class GALGAS_formalParameterListAST constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalParameterListForKey (const class GALGAS_string & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionMethodMapForType getter_overriddenMap (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_extensionMethodMapForType * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                       const GALGAS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_extensionMethodMapForType ;
 
} ; // End of GALGAS_extensionMethodMapForType class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_extensionMethodMapForType : public cGenericAbstractEnumerator {
  public : cEnumerator_extensionMethodMapForType (const GALGAS_extensionMethodMapForType & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_extensionMethodMapForType_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForType ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@extensionMethodMapForType' map                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_extensionMethodMapForType : public cMapElement {
//--- Map attributes
  public : GALGAS_formalParameterListAST mAttribute_mFormalParameterList ;

//--- Constructor
  public : cMapElement_extensionMethodMapForType (const GALGAS_lstring & inKey,
                                                  const GALGAS_formalParameterListAST & in_mFormalParameterList
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
//                                    @extensionMethodMapForType_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extensionMethodMapForType_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_formalParameterListAST mAttribute_mFormalParameterList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_extensionMethodMapForType_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_extensionMethodMapForType_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_extensionMethodMapForType_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_extensionMethodMapForType_2D_element (const GALGAS_lstring & in_lkey,
                                                        const GALGAS_formalParameterListAST & in_mFormalParameterList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionMethodMapForType_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_extensionMethodMapForType_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_formalParameterListAST & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extensionMethodMapForType_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalParameterList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionMethodMapForType_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForType_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @extensionMethodMapForBuildingContext map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_extensionMethodMapForBuildingContext ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extensionMethodMapForBuildingContext : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_extensionMethodMapForBuildingContext (void) ;

//--------------------------------- Handle copy
  public : GALGAS_extensionMethodMapForBuildingContext (const GALGAS_extensionMethodMapForBuildingContext & inSource) ;
  public : GALGAS_extensionMethodMapForBuildingContext & operator = (const GALGAS_extensionMethodMapForBuildingContext & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionMethodMapForBuildingContext extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_extensionMethodMapForBuildingContext constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_extensionMethodMapForBuildingContext constructor_mapWithMapToOverride (const class GALGAS_extensionMethodMapForBuildingContext & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_extensionMethodMapForType & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_extensionMethodMapForType constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExtensionMethodMapForTypeForKey (class GALGAS_extensionMethodMapForType constinArgument0,
                                                                             class GALGAS_string constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_extensionMethodMapForType & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_extensionMethodMapForType getter_mExtensionMethodMapForTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionMethodMapForBuildingContext getter_overriddenMap (C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_extensionMethodMapForBuildingContext * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                  const GALGAS_string & inKey
                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_extensionMethodMapForBuildingContext ;
 
} ; // End of GALGAS_extensionMethodMapForBuildingContext class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_extensionMethodMapForBuildingContext : public cGenericAbstractEnumerator {
  public : cEnumerator_extensionMethodMapForBuildingContext (const GALGAS_extensionMethodMapForBuildingContext & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_extensionMethodMapForType current_mExtensionMethodMapForType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_extensionMethodMapForBuildingContext_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@extensionMethodMapForBuildingContext' map                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_extensionMethodMapForBuildingContext : public cMapElement {
//--- Map attributes
  public : GALGAS_extensionMethodMapForType mAttribute_mExtensionMethodMapForType ;

//--- Constructor
  public : cMapElement_extensionMethodMapForBuildingContext (const GALGAS_lstring & inKey,
                                                             const GALGAS_extensionMethodMapForType & in_mExtensionMethodMapForType
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
//                               @extensionMethodMapForBuildingContext_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extensionMethodMapForBuildingContext_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_extensionMethodMapForType mAttribute_mExtensionMethodMapForType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_extensionMethodMapForBuildingContext_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_extensionMethodMapForBuildingContext_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_extensionMethodMapForBuildingContext_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_extensionMethodMapForBuildingContext_2D_element (const GALGAS_lstring & in_lkey,
                                                                   const GALGAS_extensionMethodMapForType & in_mExtensionMethodMapForType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionMethodMapForBuildingContext_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_extensionMethodMapForBuildingContext_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_extensionMethodMapForType & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extensionMethodMapForBuildingContext_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionMethodMapForType getter_mExtensionMethodMapForType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionMethodMapForBuildingContext_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @extensionModifierMapForType map                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_extensionModifierMapForType ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extensionModifierMapForType : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_extensionModifierMapForType (void) ;

//--------------------------------- Handle copy
  public : GALGAS_extensionModifierMapForType (const GALGAS_extensionModifierMapForType & inSource) ;
  public : GALGAS_extensionModifierMapForType & operator = (const GALGAS_extensionModifierMapForType & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionModifierMapForType extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_extensionModifierMapForType constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_extensionModifierMapForType constructor_mapWithMapToOverride (const class GALGAS_extensionModifierMapForType & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_formalParameterListAST & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_formalParameterListAST constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFormalParameterListForKey (class GALGAS_formalParameterListAST constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalParameterListForKey (const class GALGAS_string & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionModifierMapForType getter_overriddenMap (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_extensionModifierMapForType * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_extensionModifierMapForType ;
 
} ; // End of GALGAS_extensionModifierMapForType class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_extensionModifierMapForType : public cGenericAbstractEnumerator {
  public : cEnumerator_extensionModifierMapForType (const GALGAS_extensionModifierMapForType & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_extensionModifierMapForType_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionModifierMapForType ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@extensionModifierMapForType' map                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_extensionModifierMapForType : public cMapElement {
//--- Map attributes
  public : GALGAS_formalParameterListAST mAttribute_mFormalParameterList ;

//--- Constructor
  public : cMapElement_extensionModifierMapForType (const GALGAS_lstring & inKey,
                                                    const GALGAS_formalParameterListAST & in_mFormalParameterList
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
//                                   @extensionModifierMapForType_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extensionModifierMapForType_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_formalParameterListAST mAttribute_mFormalParameterList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_extensionModifierMapForType_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_extensionModifierMapForType_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_extensionModifierMapForType_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_extensionModifierMapForType_2D_element (const GALGAS_lstring & in_lkey,
                                                          const GALGAS_formalParameterListAST & in_mFormalParameterList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionModifierMapForType_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_extensionModifierMapForType_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_formalParameterListAST & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extensionModifierMapForType_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalParameterList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionModifierMapForType_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionModifierMapForType_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @extensionModifierMapForBuildingContext map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_extensionModifierMapForBuildingContext ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_extensionModifierMapForBuildingContext_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extensionModifierMapForBuildingContext : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_extensionModifierMapForBuildingContext (void) ;

//--------------------------------- Handle copy
  public : GALGAS_extensionModifierMapForBuildingContext (const GALGAS_extensionModifierMapForBuildingContext & inSource) ;
  public : GALGAS_extensionModifierMapForBuildingContext & operator = (const GALGAS_extensionModifierMapForBuildingContext & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionModifierMapForBuildingContext extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_extensionModifierMapForBuildingContext constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_extensionModifierMapForBuildingContext constructor_mapWithMapToOverride (const class GALGAS_extensionModifierMapForBuildingContext & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_extensionModifierMapForType & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_extensionModifierMapForType constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExtensionModifierMapForTypeForKey (class GALGAS_extensionModifierMapForType constinArgument0,
                                                                               class GALGAS_string constinArgument1,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_extensionModifierMapForType & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_extensionModifierMapForType getter_mExtensionModifierMapForTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionModifierMapForBuildingContext getter_overriddenMap (C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_extensionModifierMapForBuildingContext * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                    const GALGAS_string & inKey
                                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_extensionModifierMapForBuildingContext ;
 
} ; // End of GALGAS_extensionModifierMapForBuildingContext class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_extensionModifierMapForBuildingContext : public cGenericAbstractEnumerator {
  public : cEnumerator_extensionModifierMapForBuildingContext (const GALGAS_extensionModifierMapForBuildingContext & inEnumeratedObject,
                                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_extensionModifierMapForType current_mExtensionModifierMapForType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_extensionModifierMapForBuildingContext_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionModifierMapForBuildingContext ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Class for element of '@extensionModifierMapForBuildingContext' map                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_extensionModifierMapForBuildingContext : public cMapElement {
//--- Map attributes
  public : GALGAS_extensionModifierMapForType mAttribute_mExtensionModifierMapForType ;

//--- Constructor
  public : cMapElement_extensionModifierMapForBuildingContext (const GALGAS_lstring & inKey,
                                                               const GALGAS_extensionModifierMapForType & in_mExtensionModifierMapForType
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
//                              @extensionModifierMapForBuildingContext_2D_element struct                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extensionModifierMapForBuildingContext_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_extensionModifierMapForType mAttribute_mExtensionModifierMapForType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_extensionModifierMapForBuildingContext_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_extensionModifierMapForBuildingContext_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_extensionModifierMapForBuildingContext_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_extensionModifierMapForBuildingContext_2D_element (const GALGAS_lstring & in_lkey,
                                                                     const GALGAS_extensionModifierMapForType & in_mExtensionModifierMapForType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionModifierMapForBuildingContext_2D_element extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_extensionModifierMapForBuildingContext_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_extensionModifierMapForType & inOperand1
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extensionModifierMapForBuildingContext_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionModifierMapForType getter_mExtensionModifierMapForType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionModifierMapForBuildingContext_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionModifierMapForBuildingContext_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @extensionGetterMapForType map                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_extensionGetterMapForType ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extensionGetterMapForType : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_extensionGetterMapForType (void) ;

//--------------------------------- Handle copy
  public : GALGAS_extensionGetterMapForType (const GALGAS_extensionGetterMapForType & inSource) ;
  public : GALGAS_extensionGetterMapForType & operator = (const GALGAS_extensionGetterMapForType & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionGetterMapForType extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_extensionGetterMapForType constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_extensionGetterMapForType constructor_mapWithMapToOverride (const class GALGAS_extensionGetterMapForType & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_formalInputParameterListAST & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring constinArgument1,
                                                   class GALGAS_formalInputParameterListAST constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInputFormalParameterListForKey (class GALGAS_formalInputParameterListAST constinArgument0,
                                                                            class GALGAS_string constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMResultTypeNameForKey (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST getter_mInputFormalParameterListForKey (const class GALGAS_string & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultTypeNameForKey (const class GALGAS_string & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionGetterMapForType getter_overriddenMap (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_extensionGetterMapForType * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                       const GALGAS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_extensionGetterMapForType ;
 
} ; // End of GALGAS_extensionGetterMapForType class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_extensionGetterMapForType : public cGenericAbstractEnumerator {
  public : cEnumerator_extensionGetterMapForType (const GALGAS_extensionGetterMapForType & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mResultTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_formalInputParameterListAST current_mInputFormalParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_extensionGetterMapForType_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForType ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@extensionGetterMapForType' map                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_extensionGetterMapForType : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mAttribute_mResultTypeName ;
  public : GALGAS_formalInputParameterListAST mAttribute_mInputFormalParameterList ;

//--- Constructor
  public : cMapElement_extensionGetterMapForType (const GALGAS_lstring & inKey,
                                                  const GALGAS_lstring & in_mResultTypeName,
                                                  const GALGAS_formalInputParameterListAST & in_mInputFormalParameterList
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
//                                    @extensionGetterMapForType_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extensionGetterMapForType_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lstring mAttribute_mResultTypeName ;
  public : GALGAS_formalInputParameterListAST mAttribute_mInputFormalParameterList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_extensionGetterMapForType_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_extensionGetterMapForType_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_extensionGetterMapForType_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_extensionGetterMapForType_2D_element (const GALGAS_lstring & in_lkey,
                                                        const GALGAS_lstring & in_mResultTypeName,
                                                        const GALGAS_formalInputParameterListAST & in_mInputFormalParameterList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionGetterMapForType_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_extensionGetterMapForType_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_formalInputParameterListAST & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extensionGetterMapForType_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST getter_mInputFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionGetterMapForType_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForType_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @extensionGetterMapForBuildingContext map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_extensionGetterMapForBuildingContext ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extensionGetterMapForBuildingContext : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_extensionGetterMapForBuildingContext (void) ;

//--------------------------------- Handle copy
  public : GALGAS_extensionGetterMapForBuildingContext (const GALGAS_extensionGetterMapForBuildingContext & inSource) ;
  public : GALGAS_extensionGetterMapForBuildingContext & operator = (const GALGAS_extensionGetterMapForBuildingContext & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionGetterMapForBuildingContext extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_extensionGetterMapForBuildingContext constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_extensionGetterMapForBuildingContext constructor_mapWithMapToOverride (const class GALGAS_extensionGetterMapForBuildingContext & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_extensionGetterMapForType & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_extensionGetterMapForType constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExtensionGetterMapForTypeForKey (class GALGAS_extensionGetterMapForType constinArgument0,
                                                                             class GALGAS_string constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_extensionGetterMapForType & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_extensionGetterMapForType getter_mExtensionGetterMapForTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionGetterMapForBuildingContext getter_overriddenMap (C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_extensionGetterMapForBuildingContext * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                  const GALGAS_string & inKey
                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_extensionGetterMapForBuildingContext ;
 
} ; // End of GALGAS_extensionGetterMapForBuildingContext class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_extensionGetterMapForBuildingContext : public cGenericAbstractEnumerator {
  public : cEnumerator_extensionGetterMapForBuildingContext (const GALGAS_extensionGetterMapForBuildingContext & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_extensionGetterMapForType current_mExtensionGetterMapForType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_extensionGetterMapForBuildingContext_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@extensionGetterMapForBuildingContext' map                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_extensionGetterMapForBuildingContext : public cMapElement {
//--- Map attributes
  public : GALGAS_extensionGetterMapForType mAttribute_mExtensionGetterMapForType ;

//--- Constructor
  public : cMapElement_extensionGetterMapForBuildingContext (const GALGAS_lstring & inKey,
                                                             const GALGAS_extensionGetterMapForType & in_mExtensionGetterMapForType
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
//                               @extensionGetterMapForBuildingContext_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extensionGetterMapForBuildingContext_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_extensionGetterMapForType mAttribute_mExtensionGetterMapForType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_extensionGetterMapForBuildingContext_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_extensionGetterMapForBuildingContext_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_extensionGetterMapForBuildingContext_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_extensionGetterMapForBuildingContext_2D_element (const GALGAS_lstring & in_lkey,
                                                                   const GALGAS_extensionGetterMapForType & in_mExtensionGetterMapForType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionGetterMapForBuildingContext_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_extensionGetterMapForBuildingContext_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_extensionGetterMapForType & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extensionGetterMapForBuildingContext_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionGetterMapForType getter_mExtensionGetterMapForType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionGetterMapForBuildingContext_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @wrapperExtensionMap map                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_wrapperExtensionMap ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_wrapperExtensionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_wrapperExtensionMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_wrapperExtensionMap (const GALGAS_wrapperExtensionMap & inSource) ;
  public : GALGAS_wrapperExtensionMap & operator = (const GALGAS_wrapperExtensionMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_wrapperExtensionMap extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_wrapperExtensionMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_wrapperExtensionMap constructor_mapWithMapToOverride (const class GALGAS_wrapperExtensionMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperExtensionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_wrapperExtensionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_wrapperExtensionMap ;
 
} ; // End of GALGAS_wrapperExtensionMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_wrapperExtensionMap : public cGenericAbstractEnumerator {
  public : cEnumerator_wrapperExtensionMap (const GALGAS_wrapperExtensionMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_wrapperExtensionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperExtensionMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@wrapperExtensionMap' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_wrapperExtensionMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_wrapperExtensionMap (const GALGAS_lstring & inKey
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
//                                       @wrapperExtensionMap_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_wrapperExtensionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_wrapperExtensionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_wrapperExtensionMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_wrapperExtensionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_wrapperExtensionMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_wrapperExtensionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_wrapperExtensionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_wrapperExtensionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_wrapperExtensionMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperExtensionMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @semanticTypePrecedenceGraph graph                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticTypePrecedenceGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public : GALGAS_semanticTypePrecedenceGraph (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticTypePrecedenceGraph extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_semanticTypePrecedenceGraph constructor_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_addNode (class GALGAS_lstring inArgument0,
                                                 class GALGAS_semanticDeclarationAST inArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_circularities (class GALGAS_semanticDeclarationListAST & outArgument0,
                                                       class GALGAS_lstringlist & outArgument1
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GALGAS_semanticDeclarationListAST & outArgument0,
                                                                   class GALGAS_lstringlist & outArgument1,
                                                                   class GALGAS_semanticDeclarationListAST & outArgument2,
                                                                   class GALGAS_lstringlist & outArgument3,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GALGAS_semanticDeclarationListAST & outArgument0,
                                                                class GALGAS_lstringlist & outArgument1
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GALGAS_semanticDeclarationListAST & outArgument0,
                                                              class GALGAS_lstringlist & outArgument1
                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_topologicalSort (class GALGAS_semanticDeclarationListAST & outArgument0,
                                                         class GALGAS_lstringlist & outArgument1,
                                                         class GALGAS_semanticDeclarationListAST & outArgument2,
                                                         class GALGAS_lstringlist & outArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_accessibleNodesFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticTypePrecedenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticTypePrecedenceGraph getter_subgraphFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                               const class GALGAS_stringset & constinOperand1,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticTypePrecedenceGraph class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @semanticExpressionListForGeneration list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticExpressionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_semanticExpressionListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_semanticExpressionListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_semanticExpressionForGeneration & in_mExpression
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticExpressionListForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_semanticExpressionListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_semanticExpressionListForGeneration constructor_listWithValue (const class GALGAS_semanticExpressionForGeneration & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_semanticExpressionListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_semanticExpressionForGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration add_operation (const GALGAS_semanticExpressionListForGeneration & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_semanticExpressionForGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_semanticExpressionListForGeneration ;
 
} ; // End of GALGAS_semanticExpressionListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_semanticExpressionListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_semanticExpressionListForGeneration (const GALGAS_semanticExpressionListForGeneration & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_semanticExpressionForGeneration current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_semanticExpressionListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @semanticExpressionListForGeneration_2D_element struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticExpressionListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_semanticExpressionForGeneration mAttribute_mExpression ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_semanticExpressionListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_semanticExpressionListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_semanticExpressionListForGeneration_2D_element (const GALGAS_semanticExpressionForGeneration & in_mExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticExpressionListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_semanticExpressionListForGeneration_2D_element constructor_new (const class GALGAS_semanticExpressionForGeneration & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticExpressionListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticExpressionListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @formalParameterListForGeneration list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_formalParameterListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_formalParameterListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_formalParameterListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFormalSelector,
                                                  const class GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                  const class GALGAS_lstring & in_mFormalArgumentName,
                                                  const class GALGAS_string & in_mFormalArgumentCppName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_formalParameterListForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_formalParameterListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_formalParameterListForGeneration constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                     const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                     const class GALGAS_lstring & inOperand3,
                                                                                     const class GALGAS_string & inOperand4
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_formalParameterListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      const class GALGAS_string & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration add_operation (const GALGAS_formalParameterListForGeneration & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_formalArgumentPassingModeAST constinArgument1,
                                                       class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
                                                       class GALGAS_lstring constinArgument3,
                                                       class GALGAS_string constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                                  class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                  class GALGAS_lstring & outArgument3,
                                                  class GALGAS_string & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                                 class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class GALGAS_string & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                                       class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                       class GALGAS_lstring & outArgument3,
                                                       class GALGAS_string & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               class GALGAS_string & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_string & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalArgumentPassingModeAST getter_mFormalArgumentPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_formalParameterListForGeneration ;
 
} ; // End of GALGAS_formalParameterListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_formalParameterListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_formalParameterListForGeneration (const GALGAS_formalParameterListForGeneration & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public : class GALGAS_formalArgumentPassingModeAST current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mFormalArgumentType (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFormalArgumentCppName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_formalParameterListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @formalParameterListForGeneration_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_formalParameterListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mFormalSelector ;
  public : GALGAS_formalArgumentPassingModeAST mAttribute_mFormalArgumentPassingMode ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mFormalArgumentType ;
  public : GALGAS_lstring mAttribute_mFormalArgumentName ;
  public : GALGAS_string mAttribute_mFormalArgumentCppName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_formalParameterListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_formalParameterListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_formalParameterListForGeneration_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                               const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                               const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                               const GALGAS_lstring & in_mFormalArgumentName,
                                                               const GALGAS_string & in_mFormalArgumentCppName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_formalParameterListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_formalParameterListForGeneration_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                      const class GALGAS_lstring & inOperand3,
                                                                                      const class GALGAS_string & inOperand4
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_formalParameterListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalArgumentPassingModeAST getter_mFormalArgumentPassingMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mFormalArgumentType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_formalParameterListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @formalInputParameterListForGeneration list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_formalInputParameterListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_formalInputParameterListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_formalInputParameterListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFormalSelector,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                  const class GALGAS_string & in_mFormalArgumentCppName,
                                                  const class GALGAS_lstring & in_mFormalArgumentName,
                                                  const class GALGAS_bool & in_mIsConstant
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_formalInputParameterListForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_formalInputParameterListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_formalInputParameterListForGeneration constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                          const class GALGAS_string & inOperand2,
                                                                                          const class GALGAS_lstring & inOperand3,
                                                                                          const class GALGAS_bool & inOperand4
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_formalInputParameterListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      const class GALGAS_bool & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListForGeneration add_operation (const GALGAS_formalInputParameterListForGeneration & inOperand,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_lstring constinArgument3,
                                                       class GALGAS_bool constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  class GALGAS_lstring & outArgument3,
                                                  class GALGAS_bool & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class GALGAS_bool & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_lstring & outArgument3,
                                                       class GALGAS_bool & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               class GALGAS_bool & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsConstantAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_formalInputParameterListForGeneration ;
 
} ; // End of GALGAS_formalInputParameterListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_formalInputParameterListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_formalInputParameterListForGeneration (const GALGAS_formalInputParameterListForGeneration & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mFormalArgumentType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFormalArgumentCppName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsConstant (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_formalInputParameterListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalInputParameterListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @formalInputParameterListForGeneration_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_formalInputParameterListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mFormalSelector ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mFormalArgumentType ;
  public : GALGAS_string mAttribute_mFormalArgumentCppName ;
  public : GALGAS_lstring mAttribute_mFormalArgumentName ;
  public : GALGAS_bool mAttribute_mIsConstant ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_formalInputParameterListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_formalInputParameterListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_formalInputParameterListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_formalInputParameterListForGeneration_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                    const GALGAS_string & in_mFormalArgumentCppName,
                                                                    const GALGAS_lstring & in_mFormalArgumentName,
                                                                    const GALGAS_bool & in_mIsConstant) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_formalInputParameterListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_formalInputParameterListForGeneration_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                           const class GALGAS_string & inOperand2,
                                                                                           const class GALGAS_lstring & inOperand3,
                                                                                           const class GALGAS_bool & inOperand4
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_formalInputParameterListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mFormalArgumentType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsConstant (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_formalInputParameterListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalInputParameterListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @actualParameterListForGeneration list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_actualParameterListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_actualParameterListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_actualParameterListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_actualParameterForGeneration & in_mActualParameter
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_actualParameterListForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_actualParameterListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_actualParameterListForGeneration constructor_listWithValue (const class GALGAS_actualParameterForGeneration & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_actualParameterListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_actualParameterForGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListForGeneration add_operation (const GALGAS_actualParameterListForGeneration & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_actualParameterForGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_actualParameterForGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_actualParameterForGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_actualParameterForGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_actualParameterForGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_actualParameterForGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterForGeneration getter_mActualParameterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_actualParameterListForGeneration ;
 
} ; // End of GALGAS_actualParameterListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_actualParameterListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_actualParameterListForGeneration (const GALGAS_actualParameterListForGeneration & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_actualParameterForGeneration current_mActualParameter (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_actualParameterListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @actualParameterForGeneration class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_actualParameterForGeneration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_actualParameterForGeneration (void) ;

//---
  public : inline const class cPtr_actualParameterForGeneration * ptr (void) const { return (const cPtr_actualParameterForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_actualParameterForGeneration (const cPtr_actualParameterForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_actualParameterForGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_actualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mFormalArgumentType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_actualParameterForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @actualParameterForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_actualParameterForGeneration : public acPtr_class {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mFormalArgumentType ;

//--- Constructor
  public : cPtr_actualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType
                                              COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mFormalArgumentType (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @actualParameterListForGeneration_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_actualParameterListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_actualParameterForGeneration mAttribute_mActualParameter ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_actualParameterListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_actualParameterListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_actualParameterListForGeneration_2D_element (const GALGAS_actualParameterForGeneration & in_mActualParameter) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_actualParameterListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_actualParameterListForGeneration_2D_element constructor_new (const class GALGAS_actualParameterForGeneration & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_actualParameterListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterForGeneration getter_mActualParameter (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_actualParameterListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @semanticInstructionListForGeneration list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticInstructionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_semanticInstructionListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_semanticInstructionListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_semanticInstructionForGeneration & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticInstructionListForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_semanticInstructionListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_semanticInstructionListForGeneration constructor_listWithValue (const class GALGAS_semanticInstructionForGeneration & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_semanticInstructionListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_semanticInstructionForGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration add_operation (const GALGAS_semanticInstructionListForGeneration & inOperand,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_semanticInstructionForGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_semanticInstructionForGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_semanticInstructionForGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_semanticInstructionForGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_semanticInstructionForGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_semanticInstructionForGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionForGeneration getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_semanticInstructionListForGeneration ;
 
} ; // End of GALGAS_semanticInstructionListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_semanticInstructionListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_semanticInstructionListForGeneration (const GALGAS_semanticInstructionListForGeneration & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_semanticInstructionForGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_semanticInstructionListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @semanticInstructionForGeneration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticInstructionForGeneration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_semanticInstructionForGeneration (void) ;

//---
  public : inline const class cPtr_semanticInstructionForGeneration * ptr (void) const { return (const cPtr_semanticInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_semanticInstructionForGeneration (const cPtr_semanticInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticInstructionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @semanticInstructionForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_semanticInstructionForGeneration : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_semanticInstructionForGeneration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @semanticInstructionListForGeneration_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticInstructionListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_semanticInstructionForGeneration mAttribute_mInstruction ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_semanticInstructionListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_semanticInstructionListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_semanticInstructionListForGeneration_2D_element (const GALGAS_semanticInstructionForGeneration & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticInstructionListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_semanticInstructionListForGeneration_2D_element constructor_new (const class GALGAS_semanticInstructionForGeneration & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticInstructionListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionForGeneration getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticInstructionListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @listOfSemanticInstructionListForGeneration list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_listOfSemanticInstructionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_listOfSemanticInstructionListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_listOfSemanticInstructionListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                  const class GALGAS_location & in_mEndOfInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_listOfSemanticInstructionListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_listOfSemanticInstructionListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_listOfSemanticInstructionListForGeneration constructor_listWithValue (const class GALGAS_semanticInstructionListForGeneration & inOperand0,
                                                                                               const class GALGAS_location & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_listOfSemanticInstructionListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_semanticInstructionListForGeneration & inOperand0,
                                                      const class GALGAS_location & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_listOfSemanticInstructionListForGeneration add_operation (const GALGAS_listOfSemanticInstructionListForGeneration & inOperand,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_semanticInstructionListForGeneration constinArgument0,
                                                       class GALGAS_location constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_semanticInstructionListForGeneration & outArgument0,
                                                  class GALGAS_location & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_semanticInstructionListForGeneration & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_semanticInstructionListForGeneration & outArgument0,
                                                       class GALGAS_location & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_semanticInstructionListForGeneration & outArgument0,
                                               class GALGAS_location & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_semanticInstructionListForGeneration & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_listOfSemanticInstructionListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_listOfSemanticInstructionListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_listOfSemanticInstructionListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_listOfSemanticInstructionListForGeneration ;
 
} ; // End of GALGAS_listOfSemanticInstructionListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_listOfSemanticInstructionListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_listOfSemanticInstructionListForGeneration (const GALGAS_listOfSemanticInstructionListForGeneration & inEnumeratedObject,
                                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_semanticInstructionListForGeneration current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_listOfSemanticInstructionListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @listOfSemanticInstructionListForGeneration_2D_element struct                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_listOfSemanticInstructionListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfInstructionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_listOfSemanticInstructionListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_listOfSemanticInstructionListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_listOfSemanticInstructionListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_listOfSemanticInstructionListForGeneration_2D_element (const GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                         const GALGAS_location & in_mEndOfInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_listOfSemanticInstructionListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_listOfSemanticInstructionListForGeneration_2D_element constructor_new (const class GALGAS_semanticInstructionListForGeneration & inOperand0,
                                                                                                const class GALGAS_location & inOperand1
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_listOfSemanticInstructionListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_listOfSemanticInstructionListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @semanticDeclarationSortedListForGeneration sorted list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticDeclarationSortedListForGeneration : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_semanticDeclarationSortedListForGeneration (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticDeclarationSortedListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_semanticDeclarationSortedListForGeneration constructor_emptySortedList (LOCATION_ARGS) ;

  public : static GALGAS_semanticDeclarationSortedListForGeneration constructor_sortedListWithValue (const class GALGAS_string & inOperand0,
                                                                                                     const class GALGAS_semanticDeclarationForGeneration & inOperand1,
                                                                                                     const class GALGAS_string & inOperand2
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_semanticDeclarationSortedListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_semanticDeclarationForGeneration & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_string & outArgument0,
                                                     class GALGAS_semanticDeclarationForGeneration & outArgument1,
                                                     class GALGAS_string & outArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_string & outArgument0,
                                                     class GALGAS_semanticDeclarationForGeneration & outArgument1,
                                                     class GALGAS_string & outArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_string & outArgument0,
                                                  class GALGAS_semanticDeclarationForGeneration & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_string & outArgument0,
                                                  class GALGAS_semanticDeclarationForGeneration & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_semanticDeclarationSortedListForGeneration ;
 
} ; // End of GALGAS_semanticDeclarationSortedListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_semanticDeclarationSortedListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_semanticDeclarationSortedListForGeneration (const GALGAS_semanticDeclarationSortedListForGeneration & inEnumeratedObject,
                                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mMessage (LOCATION_ARGS) const ;
  public : class GALGAS_semanticDeclarationForGeneration current_mDeclaration (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mSortKey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_semanticDeclarationSortedListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationSortedListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @semanticDeclarationForGeneration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticDeclarationForGeneration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_semanticDeclarationForGeneration (void) ;

//---
  public : inline const class cPtr_semanticDeclarationForGeneration * ptr (void) const { return (const cPtr_semanticDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_semanticDeclarationForGeneration (const cPtr_semanticDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticDeclarationForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @semanticDeclarationForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_semanticDeclarationForGeneration : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_semanticDeclarationForGeneration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @semanticDeclarationSortedListForGeneration_2D_element struct                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticDeclarationSortedListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mMessage ;
  public : GALGAS_semanticDeclarationForGeneration mAttribute_mDeclaration ;
  public : GALGAS_string mAttribute_mSortKey ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_semanticDeclarationSortedListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_semanticDeclarationSortedListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_semanticDeclarationSortedListForGeneration_2D_element (const GALGAS_string & in_mMessage,
                                                                         const GALGAS_semanticDeclarationForGeneration & in_mDeclaration,
                                                                         const GALGAS_string & in_mSortKey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticDeclarationSortedListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_semanticDeclarationSortedListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                const class GALGAS_semanticDeclarationForGeneration & inOperand1,
                                                                                                const class GALGAS_string & inOperand2
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticDeclarationSortedListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationForGeneration getter_mDeclaration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSortKey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticDeclarationSortedListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationSortedListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @signatureForGrammarAnalysis list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_signatureForGrammarAnalysis : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_signatureForGrammarAnalysis (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_signatureForGrammarAnalysis (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                  const class GALGAS_lstring & in_mGalgasTypeNameForGrammarAnalysis
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_signatureForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_signatureForGrammarAnalysis constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_signatureForGrammarAnalysis constructor_listWithValue (const class GALGAS_formalArgumentPassingModeAST & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_signatureForGrammarAnalysis inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_formalArgumentPassingModeAST & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_signatureForGrammarAnalysis add_operation (const GALGAS_signatureForGrammarAnalysis & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_formalArgumentPassingModeAST constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_formalArgumentPassingModeAST & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_formalArgumentPassingModeAST & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_formalArgumentPassingModeAST & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_formalArgumentPassingModeAST & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_formalArgumentPassingModeAST & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalArgumentPassingModeAST getter_mFormalArgumentPassingModeForGrammarAnalysisAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGalgasTypeNameForGrammarAnalysisAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_signatureForGrammarAnalysis getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_signatureForGrammarAnalysis getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_signatureForGrammarAnalysis getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_signatureForGrammarAnalysis ;
 
} ; // End of GALGAS_signatureForGrammarAnalysis class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_signatureForGrammarAnalysis : public cGenericAbstractEnumerator {
  public : cEnumerator_signatureForGrammarAnalysis (const GALGAS_signatureForGrammarAnalysis & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_formalArgumentPassingModeAST current_mFormalArgumentPassingModeForGrammarAnalysis (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mGalgasTypeNameForGrammarAnalysis (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_signatureForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_signatureForGrammarAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @signatureForGrammarAnalysis_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_signatureForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_formalArgumentPassingModeAST mAttribute_mFormalArgumentPassingModeForGrammarAnalysis ;
  public : GALGAS_lstring mAttribute_mGalgasTypeNameForGrammarAnalysis ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_signatureForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_signatureForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_signatureForGrammarAnalysis_2D_element (const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                          const GALGAS_lstring & in_mGalgasTypeNameForGrammarAnalysis) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_signatureForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_signatureForGrammarAnalysis_2D_element constructor_new (const class GALGAS_formalArgumentPassingModeAST & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_signatureForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalArgumentPassingModeAST getter_mFormalArgumentPassingModeForGrammarAnalysis (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGalgasTypeNameForGrammarAnalysis (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_signatureForGrammarAnalysis_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_signatureForGrammarAnalysis_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @nonterminalSymbolLabelMapForGrammarAnalysis map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_nonterminalSymbolLabelMapForGrammarAnalysis_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis (void) ;

//--------------------------------- Handle copy
  public : GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) ;
  public : GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & operator = (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis constructor_mapWithMapToOverride (const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand0
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_signatureForGrammarAnalysis & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_signatureForGrammarAnalysis constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFormalParametersListForKey (class GALGAS_signatureForGrammarAnalysis constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_signatureForGrammarAnalysis & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_signatureForGrammarAnalysis getter_mFormalParametersListForKey (const class GALGAS_string & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis getter_overriddenMap (C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                         const GALGAS_string & inKey
                                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis ;
 
} ; // End of GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis : public cGenericAbstractEnumerator {
  public : cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_signatureForGrammarAnalysis current_mFormalParametersList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Class for element of '@nonterminalSymbolLabelMapForGrammarAnalysis' map                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis : public cMapElement {
//--- Map attributes
  public : GALGAS_signatureForGrammarAnalysis mAttribute_mFormalParametersList ;

//--- Constructor
  public : cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                                    const GALGAS_signatureForGrammarAnalysis & in_mFormalParametersList
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
//                           @nonterminalSymbolLabelMapForGrammarAnalysis_2D_element struct                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_signatureForGrammarAnalysis mAttribute_mFormalParametersList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                          const GALGAS_signatureForGrammarAnalysis & in_mFormalParametersList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                 const class GALGAS_signatureForGrammarAnalysis & inOperand1
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_signatureForGrammarAnalysis getter_mFormalParametersList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @nonTerminalSymbolMapForGrammarAnalysis map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_nonTerminalSymbolMapForGrammarAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_nonTerminalSymbolMapForGrammarAnalysis_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonTerminalSymbolMapForGrammarAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_nonTerminalSymbolMapForGrammarAnalysis (void) ;

//--------------------------------- Handle copy
  public : GALGAS_nonTerminalSymbolMapForGrammarAnalysis (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inSource) ;
  public : GALGAS_nonTerminalSymbolMapForGrammarAnalysis & operator = (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonTerminalSymbolMapForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_nonTerminalSymbolMapForGrammarAnalysis constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_nonTerminalSymbolMapForGrammarAnalysis constructor_mapWithMapToOverride (const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMNonTerminalIndexForKey (class GALGAS_uint constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMNonterminalSymbolParametersMapForKey (class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument0,
                                                                                  class GALGAS_string constinArgument1,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mNonTerminalIndexForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis getter_mNonterminalSymbolParametersMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                                                   C_Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonTerminalSymbolMapForGrammarAnalysis getter_overriddenMap (C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_nonTerminalSymbolMapForGrammarAnalysis * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                    const GALGAS_string & inKey
                                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_nonTerminalSymbolMapForGrammarAnalysis ;
 
} ; // End of GALGAS_nonTerminalSymbolMapForGrammarAnalysis class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_nonTerminalSymbolMapForGrammarAnalysis : public cGenericAbstractEnumerator {
  public : cEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inEnumeratedObject,
                                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
  public : class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Class for element of '@nonTerminalSymbolMapForGrammarAnalysis' map                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_nonTerminalSymbolMapForGrammarAnalysis : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mNonTerminalIndex ;
  public : GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis mAttribute_mNonterminalSymbolParametersMap ;

//--- Constructor
  public : cMapElement_nonTerminalSymbolMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                               const GALGAS_uint & in_mNonTerminalIndex,
                                                               const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap
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
//                              @nonTerminalSymbolMapForGrammarAnalysis_2D_element struct                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mNonTerminalIndex ;
  public : GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis mAttribute_mNonterminalSymbolParametersMap ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                     const GALGAS_uint & in_mNonTerminalIndex,
                                                                     const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_uint & inOperand1,
                                                                                            const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mNonTerminalIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis getter_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @nonTerminalToAddList list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonTerminalToAddList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_nonTerminalToAddList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_nonTerminalToAddList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mSyntaxComponentName,
                                                  const class GALGAS_uint & in_mNonTerminalToAddCount
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonTerminalToAddList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_nonTerminalToAddList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_nonTerminalToAddList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_uint & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_nonTerminalToAddList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_uint & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_nonTerminalToAddList add_operation (const GALGAS_nonTerminalToAddList & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_uint & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_uint & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mNonTerminalToAddCountAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSyntaxComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonTerminalToAddList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonTerminalToAddList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonTerminalToAddList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_nonTerminalToAddList ;
 
} ; // End of GALGAS_nonTerminalToAddList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_nonTerminalToAddList : public cGenericAbstractEnumerator {
  public : cEnumerator_nonTerminalToAddList (const GALGAS_nonTerminalToAddList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mNonTerminalToAddCount (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_nonTerminalToAddList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalToAddList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @nonTerminalToAddList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonTerminalToAddList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mSyntaxComponentName ;
  public : GALGAS_uint mAttribute_mNonTerminalToAddCount ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_nonTerminalToAddList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_nonTerminalToAddList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_nonTerminalToAddList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_nonTerminalToAddList_2D_element (const GALGAS_string & in_mSyntaxComponentName,
                                                   const GALGAS_uint & in_mNonTerminalToAddCount) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonTerminalToAddList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_nonTerminalToAddList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                          const class GALGAS_uint & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_nonTerminalToAddList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mNonTerminalToAddCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSyntaxComponentName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonTerminalToAddList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalToAddList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @terminalCheckAssignementList list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalCheckAssignementList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_terminalCheckAssignementList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_terminalCheckAssignementList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mTypeName,
                                                  const class GALGAS_string & in_mTargetVarCppName,
                                                  const class GALGAS_string & in_mSourceLexicalAttributeName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalCheckAssignementList extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_terminalCheckAssignementList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_terminalCheckAssignementList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_string & inOperand1,
                                                                                 const class GALGAS_string & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_terminalCheckAssignementList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_terminalCheckAssignementList add_operation (const GALGAS_terminalCheckAssignementList & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSourceLexicalAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetVarCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalCheckAssignementList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalCheckAssignementList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalCheckAssignementList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_terminalCheckAssignementList ;
 
} ; // End of GALGAS_terminalCheckAssignementList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_terminalCheckAssignementList : public cGenericAbstractEnumerator {
  public : cEnumerator_terminalCheckAssignementList (const GALGAS_terminalCheckAssignementList & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTargetVarCppName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mSourceLexicalAttributeName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_terminalCheckAssignementList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckAssignementList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @terminalCheckAssignementList_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalCheckAssignementList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mTypeName ;
  public : GALGAS_string mAttribute_mTargetVarCppName ;
  public : GALGAS_string mAttribute_mSourceLexicalAttributeName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_terminalCheckAssignementList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_terminalCheckAssignementList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_terminalCheckAssignementList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_terminalCheckAssignementList_2D_element (const GALGAS_string & in_mTypeName,
                                                           const GALGAS_string & in_mTargetVarCppName,
                                                           const GALGAS_string & in_mSourceLexicalAttributeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalCheckAssignementList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_terminalCheckAssignementList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_string & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_terminalCheckAssignementList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSourceLexicalAttributeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetVarCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalCheckAssignementList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckAssignementList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @abstractMethodDefinitionListForGeneration list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractMethodDefinitionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_abstractMethodDefinitionListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_abstractMethodDefinitionListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_bool & in_mIsOverriding,
                                                  const class GALGAS_lstring & in_mMethodName,
                                                  const class GALGAS_formalParameterListForGeneration & in_mSignature
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractMethodDefinitionListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_abstractMethodDefinitionListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_abstractMethodDefinitionListForGeneration constructor_listWithValue (const class GALGAS_bool & inOperand0,
                                                                                              const class GALGAS_lstring & inOperand1,
                                                                                              const class GALGAS_formalParameterListForGeneration & inOperand2
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_abstractMethodDefinitionListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_formalParameterListForGeneration & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_abstractMethodDefinitionListForGeneration add_operation (const GALGAS_abstractMethodDefinitionListForGeneration & inOperand,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_bool constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_formalParameterListForGeneration constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_bool & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_formalParameterListForGeneration & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_bool & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_formalParameterListForGeneration & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_bool & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_formalParameterListForGeneration & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_bool & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_formalParameterListForGeneration & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_bool & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_formalParameterListForGeneration & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsOverridingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMethodNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mSignatureAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractMethodDefinitionListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractMethodDefinitionListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractMethodDefinitionListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_abstractMethodDefinitionListForGeneration ;
 
} ; // End of GALGAS_abstractMethodDefinitionListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_abstractMethodDefinitionListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_abstractMethodDefinitionListForGeneration (const GALGAS_abstractMethodDefinitionListForGeneration & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_bool current_mIsOverriding (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mMethodName (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterListForGeneration current_mSignature (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_abstractMethodDefinitionListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractMethodDefinitionListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @abstractMethodDefinitionListForGeneration_2D_element struct                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractMethodDefinitionListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_bool mAttribute_mIsOverriding ;
  public : GALGAS_lstring mAttribute_mMethodName ;
  public : GALGAS_formalParameterListForGeneration mAttribute_mSignature ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_abstractMethodDefinitionListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_abstractMethodDefinitionListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_abstractMethodDefinitionListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_abstractMethodDefinitionListForGeneration_2D_element (const GALGAS_bool & in_mIsOverriding,
                                                                        const GALGAS_lstring & in_mMethodName,
                                                                        const GALGAS_formalParameterListForGeneration & in_mSignature) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractMethodDefinitionListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_abstractMethodDefinitionListForGeneration_2D_element constructor_new (const class GALGAS_bool & inOperand0,
                                                                                               const class GALGAS_lstring & inOperand1,
                                                                                               const class GALGAS_formalParameterListForGeneration & inOperand2
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractMethodDefinitionListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsOverriding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mSignature (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractMethodDefinitionListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractMethodDefinitionListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @methodDefinitionListForGeneration list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_methodDefinitionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_methodDefinitionListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_methodDefinitionListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_bool & in_mIsOverriding,
                                                  const class GALGAS_lstring & in_mMethodName,
                                                  const class GALGAS_formalParameterListForGeneration & in_mSignature,
                                                  const class GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_methodDefinitionListForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_methodDefinitionListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_methodDefinitionListForGeneration constructor_listWithValue (const class GALGAS_bool & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_formalParameterListForGeneration & inOperand2,
                                                                                      const class GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_methodDefinitionListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_formalParameterListForGeneration & inOperand2,
                                                      const class GALGAS_semanticInstructionListForGeneration & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_methodDefinitionListForGeneration add_operation (const GALGAS_methodDefinitionListForGeneration & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_bool constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_formalParameterListForGeneration constinArgument2,
                                                       class GALGAS_semanticInstructionListForGeneration constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_bool & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_formalParameterListForGeneration & outArgument2,
                                                  class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_bool & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_formalParameterListForGeneration & outArgument2,
                                                 class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_bool & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_formalParameterListForGeneration & outArgument2,
                                                       class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_bool & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_formalParameterListForGeneration & outArgument2,
                                               class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_bool & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_formalParameterListForGeneration & outArgument2,
                                              class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsOverridingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMethodNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mSignatureAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodDefinitionListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodDefinitionListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodDefinitionListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_methodDefinitionListForGeneration ;
 
} ; // End of GALGAS_methodDefinitionListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_methodDefinitionListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_methodDefinitionListForGeneration (const GALGAS_methodDefinitionListForGeneration & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_bool current_mIsOverriding (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mMethodName (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterListForGeneration current_mSignature (LOCATION_ARGS) const ;
  public : class GALGAS_semanticInstructionListForGeneration current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_methodDefinitionListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodDefinitionListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @methodDefinitionListForGeneration_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_methodDefinitionListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_bool mAttribute_mIsOverriding ;
  public : GALGAS_lstring mAttribute_mMethodName ;
  public : GALGAS_formalParameterListForGeneration mAttribute_mSignature ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mInstructionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_methodDefinitionListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_methodDefinitionListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_methodDefinitionListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_methodDefinitionListForGeneration_2D_element (const GALGAS_bool & in_mIsOverriding,
                                                                const GALGAS_lstring & in_mMethodName,
                                                                const GALGAS_formalParameterListForGeneration & in_mSignature,
                                                                const GALGAS_semanticInstructionListForGeneration & in_mInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_methodDefinitionListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_methodDefinitionListForGeneration_2D_element constructor_new (const class GALGAS_bool & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_formalParameterListForGeneration & inOperand2,
                                                                                       const class GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_methodDefinitionListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsOverriding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mSignature (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_methodDefinitionListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodDefinitionListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @filewrapperTemplateListForGeneration list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperTemplateListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_filewrapperTemplateListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_filewrapperTemplateListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mFilewrapperTemplateName,
                                                  const class GALGAS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                  const class GALGAS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperTemplateListForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_filewrapperTemplateListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_filewrapperTemplateListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                         const class GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                                                         const class GALGAS_templateInstructionListForGeneration & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_filewrapperTemplateListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                      const class GALGAS_templateInstructionListForGeneration & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_filewrapperTemplateListForGeneration add_operation (const GALGAS_filewrapperTemplateListForGeneration & inOperand,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_formalInputParameterListForGeneration constinArgument1,
                                                       class GALGAS_templateInstructionListForGeneration constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_formalInputParameterListForGeneration & outArgument1,
                                                  class GALGAS_templateInstructionListForGeneration & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_formalInputParameterListForGeneration & outArgument1,
                                                 class GALGAS_templateInstructionListForGeneration & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_formalInputParameterListForGeneration & outArgument1,
                                                       class GALGAS_templateInstructionListForGeneration & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_formalInputParameterListForGeneration & outArgument1,
                                               class GALGAS_templateInstructionListForGeneration & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_formalInputParameterListForGeneration & outArgument1,
                                              class GALGAS_templateInstructionListForGeneration & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration getter_mFilewrapperTemplateFormalInputParametersAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFilewrapperTemplateNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mTemplateInstructionListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                   C_Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_filewrapperTemplateListForGeneration ;
 
} ; // End of GALGAS_filewrapperTemplateListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_filewrapperTemplateListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_filewrapperTemplateListForGeneration (const GALGAS_filewrapperTemplateListForGeneration & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mFilewrapperTemplateName (LOCATION_ARGS) const ;
  public : class GALGAS_formalInputParameterListForGeneration current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const ;
  public : class GALGAS_templateInstructionListForGeneration current_mTemplateInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_filewrapperTemplateListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @filewrapperTemplateListForGeneration_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperTemplateListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mFilewrapperTemplateName ;
  public : GALGAS_formalInputParameterListForGeneration mAttribute_mFilewrapperTemplateFormalInputParameters ;
  public : GALGAS_templateInstructionListForGeneration mAttribute_mTemplateInstructionListForGeneration ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperTemplateListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_filewrapperTemplateListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_filewrapperTemplateListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_filewrapperTemplateListForGeneration_2D_element (const GALGAS_string & in_mFilewrapperTemplateName,
                                                                   const GALGAS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                   const GALGAS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperTemplateListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_filewrapperTemplateListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                          const class GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                                                          const class GALGAS_templateInstructionListForGeneration & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperTemplateListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration getter_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFilewrapperTemplateName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mTemplateInstructionListForGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperTemplateListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @variableMap unique map                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_variableMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_variableMap_searchForReadAccess ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_variableMap_searchForWriteAccess ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_variableMap_searchForReadWriteAccess ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_variableMap_searchForDropAccess ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_variableMap_neutralAccess ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_variableMap : public AC_GALGAS_uniqueMap {
//--------------------------------- Default constructor
  public : GALGAS_variableMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_variableMap (const GALGAS_variableMap & inSource) ;
  public : GALGAS_variableMap & operator = (const GALGAS_variableMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_variableMap extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_variableMap constructor_emptyMap (LOCATION_ARGS) ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_closeBranch (class GALGAS_location inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertConstantInputFormalArgument (class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                           class GALGAS_string constinArgument2,
                                                                           class GALGAS_string constinArgument3,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertConstantInputFormalArgumentDeclaredAsUnused (class GALGAS_lstring constinArgument0,
                                                                                           class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                                           class GALGAS_string constinArgument2,
                                                                                           class GALGAS_string constinArgument3,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertDefinedLocalVariable (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                    class GALGAS_string constinArgument2,
                                                                    class GALGAS_string constinArgument3,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertInputFormalArgument (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                   class GALGAS_string constinArgument2,
                                                                   class GALGAS_string constinArgument3,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertInputFormalArgumentDeclaredAsUnused (class GALGAS_lstring constinArgument0,
                                                                                   class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                                   class GALGAS_string constinArgument2,
                                                                                   class GALGAS_string constinArgument3,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertInputOutputFormalArgument (class GALGAS_lstring constinArgument0,
                                                                         class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                         class GALGAS_string constinArgument2,
                                                                         class GALGAS_string constinArgument3,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertInputOutputFormalArgumentDeclaredAsUnused (class GALGAS_lstring constinArgument0,
                                                                                         class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                                         class GALGAS_string constinArgument2,
                                                                                         class GALGAS_string constinArgument3,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertLocalConstant (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                             class GALGAS_string constinArgument2,
                                                             class GALGAS_string constinArgument3,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertMutableAttribute (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                class GALGAS_string constinArgument2,
                                                                class GALGAS_string constinArgument3,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertNonMutableAttribute (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                   class GALGAS_string constinArgument2,
                                                                   class GALGAS_string constinArgument3,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertOutputFormalArgument (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                    class GALGAS_string constinArgument2,
                                                                    class GALGAS_string constinArgument3,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertUndefinedLocalConstant (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                      class GALGAS_string constinArgument2,
                                                                      class GALGAS_string constinArgument3,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertUndefinedLocalVariable (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                      class GALGAS_string constinArgument2,
                                                                      class GALGAS_string constinArgument3,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertUsedLocalConstant (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                 class GALGAS_string constinArgument2,
                                                                 class GALGAS_string constinArgument3,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_neutralAccess (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_string & outArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_openOverrideForRepeatBlock (C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_openOverrideForSelectBlock (C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_searchForDropAccess (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                             class GALGAS_string & outArgument2,
                                                             class GALGAS_string & outArgument3,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_searchForReadAccess (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                             class GALGAS_string & outArgument2,
                                                             class GALGAS_string & outArgument3,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_searchForReadWriteAccess (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                                  class GALGAS_string & outArgument2,
                                                                  class GALGAS_string & outArgument3,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_searchForWriteAccess (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                              class GALGAS_string & outArgument2,
                                                              class GALGAS_string & outArgument3,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMCppNameForKey (class GALGAS_string constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMNameForCheckingFormalParameterUsingForKey (class GALGAS_string constinArgument0,
                                                                                       class GALGAS_string constinArgument1,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypeProxyForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_checkAutomatonStates (class GALGAS_location inArgument0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppNameForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mNameForCheckingFormalParameterUsingForKey (const class GALGAS_string & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mTypeProxyForKey (const class GALGAS_string & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_variableMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_variableMap ;
 
} ; // End of GALGAS_variableMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_variableMap : public cGenericAbstractEnumerator {
  public : cEnumerator_variableMap (const GALGAS_variableMap & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mTypeProxy (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mCppName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_variableMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@variableMap' map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_variableMap : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTypeProxy ;
  public : GALGAS_string mAttribute_mCppName ;
  public : GALGAS_string mAttribute_mNameForCheckingFormalParameterUsing ;

//--- Constructor
  public : cMapElement_variableMap (const GALGAS_lstring & inKey,
                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                    const GALGAS_string & in_mCppName,
                                    const GALGAS_string & in_mNameForCheckingFormalParameterUsing
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
//                                           @variableMap_2D_proxy map proxy                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_variableMap_2D_proxy : public AC_GALGAS_uniqueMapProxy {
//--------------------------------- Default constructor
  public : GALGAS_variableMap_2D_proxy (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_variableMap_2D_proxy extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_variableMap_2D_proxy constructor_neutralAccess (const class GALGAS_variableMap & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : static GALGAS_variableMap_2D_proxy constructor_null (LOCATION_ARGS) ;

  public : static GALGAS_variableMap_2D_proxy constructor_searchForDropAccess (const class GALGAS_variableMap & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

  public : static GALGAS_variableMap_2D_proxy constructor_searchForReadAccess (const class GALGAS_variableMap & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

  public : static GALGAS_variableMap_2D_proxy constructor_searchForReadWriteAccess (const class GALGAS_variableMap & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

  public : static GALGAS_variableMap_2D_proxy constructor_searchForWriteAccess (const class GALGAS_variableMap & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                class C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods
  public : static void class_method_makeProxy (class GALGAS_variableMap & ioArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_variableMap_2D_proxy & outArgument2
                                               COMMA_LOCATION_ARGS) ;

  public : static void class_method_makeProxyFromString (class GALGAS_variableMap & ioArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_variableMap_2D_proxy & outArgument2
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppName (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mNameForCheckingFormalParameterUsing (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mTypeProxy (C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_variableMap_2D_proxy class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_variableMap_2D_proxy ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @collectionValueElementListForGeneration list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_collectionValueElementListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_collectionValueElementListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_collectionValueElementListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractCollectionValueElementForGeneration & in_mElement
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_collectionValueElementListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_collectionValueElementListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_collectionValueElementListForGeneration constructor_listWithValue (const class GALGAS_abstractCollectionValueElementForGeneration & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_collectionValueElementListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractCollectionValueElementForGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_collectionValueElementListForGeneration add_operation (const GALGAS_collectionValueElementListForGeneration & inOperand,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractCollectionValueElementForGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractCollectionValueElementForGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractCollectionValueElementForGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractCollectionValueElementForGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractCollectionValueElementForGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractCollectionValueElementForGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractCollectionValueElementForGeneration getter_mElementAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_collectionValueElementListForGeneration ;
 
} ; // End of GALGAS_collectionValueElementListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_collectionValueElementListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_collectionValueElementListForGeneration (const GALGAS_collectionValueElementListForGeneration & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractCollectionValueElementForGeneration current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_collectionValueElementListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueElementListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @abstractCollectionValueElementForGeneration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractCollectionValueElementForGeneration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractCollectionValueElementForGeneration (void) ;

//---
  public : inline const class cPtr_abstractCollectionValueElementForGeneration * ptr (void) const { return (const cPtr_abstractCollectionValueElementForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractCollectionValueElementForGeneration (const cPtr_abstractCollectionValueElementForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractCollectionValueElementForGeneration extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractCollectionValueElementForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mExpressionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractCollectionValueElementForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Pointer class for @abstractCollectionValueElementForGeneration class                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractCollectionValueElementForGeneration : public acPtr_class {
//--- Attributes
  public : GALGAS_location mAttribute_mExpressionLocation ;

//--- Constructor
  public : cPtr_abstractCollectionValueElementForGeneration (const GALGAS_location & in_mExpressionLocation
                                                             COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mExpressionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @collectionValueElementListForGeneration_2D_element struct                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_collectionValueElementListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_abstractCollectionValueElementForGeneration mAttribute_mElement ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_collectionValueElementListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_collectionValueElementListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_collectionValueElementListForGeneration_2D_element (const GALGAS_abstractCollectionValueElementForGeneration & in_mElement) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_collectionValueElementListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_collectionValueElementListForGeneration_2D_element constructor_new (const class GALGAS_abstractCollectionValueElementForGeneration & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_collectionValueElementListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractCollectionValueElementForGeneration getter_mElement (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_collectionValueElementListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueElementListForGeneration_2D_element ;

#endif
