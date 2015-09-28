#ifndef all_2D_declarations_2D__36__ENTITIES_DEFINED
#define all_2D_declarations_2D__36__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @localConstantList list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_localConstantList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_localConstantList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_localConstantList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                  const class GALGAS_lstring & in_mName,
                                                  const class GALGAS_bool & in_mNoWarningIfUnused,
                                                  const class GALGAS_string & in_mCppName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_localConstantList extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_localConstantList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_localConstantList constructor_listWithValue (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_bool & inOperand2,
                                                                      const class GALGAS_string & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_localConstantList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_string & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_localConstantList operator_concat (const GALGAS_localConstantList & inOperand
                                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_localConstantList add_operation (const GALGAS_localConstantList & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_bool constinArgument2,
                                                         class GALGAS_string constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_bool & outArgument2,
                                                    class GALGAS_string & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   class GALGAS_string & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_bool & outArgument2,
                                                         class GALGAS_string & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               class GALGAS_string & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNoWarningIfUnusedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_localConstantList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_localConstantList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_localConstantList ;
 
} ; // End of GALGAS_localConstantList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_localConstantList : public cGenericAbstractEnumerator {
  public : cEnumerator_localConstantList (const GALGAS_localConstantList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mType (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mNoWarningIfUnused (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mCppName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_localConstantList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @localConstantList_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_localConstantList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mType ;
  public : GALGAS_lstring mAttribute_mName ;
  public : GALGAS_bool mAttribute_mNoWarningIfUnused ;
  public : GALGAS_string mAttribute_mCppName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_localConstantList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_localConstantList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_localConstantList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_localConstantList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                const GALGAS_lstring & in_mName,
                                                const GALGAS_bool & in_mNoWarningIfUnused,
                                                const GALGAS_string & in_mCppName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_localConstantList_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_localConstantList_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_bool & inOperand2,
                                                                       const class GALGAS_string & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_localConstantList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNoWarningIfUnused (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localConstantList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @localInitializedVariableList list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_localInitializedVariableList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_localInitializedVariableList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_localInitializedVariableList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                  const class GALGAS_lstring & in_mName,
                                                  const class GALGAS_string & in_mCppName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_localInitializedVariableList extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_localInitializedVariableList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_localInitializedVariableList constructor_listWithValue (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_string & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_localInitializedVariableList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_localInitializedVariableList operator_concat (const GALGAS_localInitializedVariableList & inOperand
                                                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_localInitializedVariableList add_operation (const GALGAS_localInitializedVariableList & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_string constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_string & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_localInitializedVariableList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_localInitializedVariableList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_localInitializedVariableList ;
 
} ; // End of GALGAS_localInitializedVariableList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_localInitializedVariableList : public cGenericAbstractEnumerator {
  public : cEnumerator_localInitializedVariableList (const GALGAS_localInitializedVariableList & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mType (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mCppName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_localInitializedVariableList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localInitializedVariableList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @localInitializedVariableList_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_localInitializedVariableList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mType ;
  public : GALGAS_lstring mAttribute_mName ;
  public : GALGAS_string mAttribute_mCppName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_localInitializedVariableList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_localInitializedVariableList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_localInitializedVariableList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_localInitializedVariableList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                           const GALGAS_lstring & in_mName,
                                                           const GALGAS_string & in_mCppName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_localInitializedVariableList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_localInitializedVariableList_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_string & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_localInitializedVariableList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localInitializedVariableList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localInitializedVariableList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @attributeIndexMap map                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_attributeIndexMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_attributeIndexMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_attributeIndexMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_attributeIndexMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_attributeIndexMap (const GALGAS_attributeIndexMap & inSource) ;
  public : GALGAS_attributeIndexMap & operator = (const GALGAS_attributeIndexMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_attributeIndexMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_attributeIndexMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_attributeIndexMap constructor_mapWithMapToOverride (const class GALGAS_attributeIndexMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMAttributeTypeIndexForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mAttributeTypeIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_attributeIndexMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_attributeIndexMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_attributeIndexMap ;
 
} ; // End of GALGAS_attributeIndexMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_attributeIndexMap : public cGenericAbstractEnumerator {
  public : cEnumerator_attributeIndexMap (const GALGAS_attributeIndexMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mAttributeTypeIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_attributeIndexMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_attributeIndexMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@attributeIndexMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_attributeIndexMap : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mAttributeTypeIndex ;

//--- Constructor
  public : cMapElement_attributeIndexMap (const GALGAS_lstring & inKey,
                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeTypeIndex
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
//                                        @attributeIndexMap_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_attributeIndexMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mAttributeTypeIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_attributeIndexMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_attributeIndexMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_attributeIndexMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_attributeIndexMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeTypeIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_attributeIndexMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_attributeIndexMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_attributeIndexMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mAttributeTypeIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_attributeIndexMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_attributeIndexMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @insertMethodMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_insertMethodMap ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_insertMethodMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_insertMethodMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_insertMethodMap (const GALGAS_insertMethodMap & inSource) ;
  public : GALGAS_insertMethodMap & operator = (const GALGAS_insertMethodMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_insertMethodMap extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_insertMethodMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_insertMethodMap constructor_mapWithMapToOverride (const class GALGAS_insertMethodMap & inOperand0
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
  public : VIRTUAL_IN_DEBUG class GALGAS_insertMethodMap reader_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_insertMethodMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_insertMethodMap ;
 
} ; // End of GALGAS_insertMethodMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_insertMethodMap : public cGenericAbstractEnumerator {
  public : cEnumerator_insertMethodMap (const GALGAS_insertMethodMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_insertMethodMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertMethodMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@insertMethodMap' map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_insertMethodMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_insertMethodMap (const GALGAS_lstring & inKey
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
//                                         @insertMethodMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_insertMethodMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_insertMethodMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_insertMethodMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_insertMethodMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_insertMethodMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_insertMethodMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_insertMethodMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_insertMethodMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_insertMethodMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertMethodMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @searchMethodMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_searchMethodMap ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_searchMethodMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_searchMethodMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_searchMethodMap (const GALGAS_searchMethodMap & inSource) ;
  public : GALGAS_searchMethodMap & operator = (const GALGAS_searchMethodMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_searchMethodMap extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_searchMethodMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_searchMethodMap constructor_mapWithMapToOverride (const class GALGAS_searchMethodMap & inOperand0
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
  public : VIRTUAL_IN_DEBUG class GALGAS_searchMethodMap reader_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_searchMethodMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_searchMethodMap ;
 
} ; // End of GALGAS_searchMethodMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_searchMethodMap : public cGenericAbstractEnumerator {
  public : cEnumerator_searchMethodMap (const GALGAS_searchMethodMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_searchMethodMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_searchMethodMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@searchMethodMap' map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_searchMethodMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_searchMethodMap (const GALGAS_lstring & inKey
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
//                                         @searchMethodMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_searchMethodMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_searchMethodMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_searchMethodMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_searchMethodMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_searchMethodMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_searchMethodMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_searchMethodMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_searchMethodMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_searchMethodMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_searchMethodMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @declaredMethodMap map                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_declaredMethodMap ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_declaredMethodMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_declaredMethodMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_declaredMethodMap (const GALGAS_declaredMethodMap & inSource) ;
  public : GALGAS_declaredMethodMap & operator = (const GALGAS_declaredMethodMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_declaredMethodMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_declaredMethodMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_declaredMethodMap constructor_mapWithMapToOverride (const class GALGAS_declaredMethodMap & inOperand0
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
  public : VIRTUAL_IN_DEBUG class GALGAS_declaredMethodMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_declaredMethodMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_declaredMethodMap ;
 
} ; // End of GALGAS_declaredMethodMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_declaredMethodMap : public cGenericAbstractEnumerator {
  public : cEnumerator_declaredMethodMap (const GALGAS_declaredMethodMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_declaredMethodMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredMethodMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@declaredMethodMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_declaredMethodMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_declaredMethodMap (const GALGAS_lstring & inKey
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
//                                        @declaredMethodMap_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_declaredMethodMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_declaredMethodMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_declaredMethodMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_declaredMethodMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_declaredMethodMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_declaredMethodMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_declaredMethodMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_declaredMethodMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_declaredMethodMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredMethodMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @nonterminalLabelMap map                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_nonterminalLabelMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_nonterminalLabelMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonterminalLabelMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_nonterminalLabelMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_nonterminalLabelMap (const GALGAS_nonterminalLabelMap & inSource) ;
  public : GALGAS_nonterminalLabelMap & operator = (const GALGAS_nonterminalLabelMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonterminalLabelMap extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_nonterminalLabelMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_nonterminalLabelMap constructor_mapWithMapToOverride (const class GALGAS_nonterminalLabelMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_formalParameterListForGeneration & inOperand1,
                                                      const class GALGAS_formalParameterSignature & inOperand2,
                                                      const class GALGAS_location & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_formalParameterListForGeneration constinArgument1,
                                                     class GALGAS_formalParameterSignature constinArgument2,
                                                     class GALGAS_location constinArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMEndOfArgumentLocationForKey (class GALGAS_location constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMSignatureForGenerationForKey (class GALGAS_formalParameterListForGeneration constinArgument0,
                                                                            class GALGAS_string constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMSignatureForKey (class GALGAS_formalParameterSignature constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_formalParameterListForGeneration & outArgument1,
                                                   class GALGAS_formalParameterSignature & outArgument2,
                                                   class GALGAS_location & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfArgumentLocationForKey (const class GALGAS_string & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration reader_mSignatureForGenerationForKey (const class GALGAS_string & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature reader_mSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalLabelMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_nonterminalLabelMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_nonterminalLabelMap ;
 
} ; // End of GALGAS_nonterminalLabelMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_nonterminalLabelMap : public cGenericAbstractEnumerator {
  public : cEnumerator_nonterminalLabelMap (const GALGAS_nonterminalLabelMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterListForGeneration current_mSignatureForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterSignature current_mSignature (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_nonterminalLabelMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalLabelMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@nonterminalLabelMap' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_nonterminalLabelMap : public cMapElement {
//--- Map attributes
  public : GALGAS_formalParameterListForGeneration mAttribute_mSignatureForGeneration ;
  public : GALGAS_formalParameterSignature mAttribute_mSignature ;
  public : GALGAS_location mAttribute_mEndOfArgumentLocation ;

//--- Constructor
  public : cMapElement_nonterminalLabelMap (const GALGAS_lstring & inKey,
                                            const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                            const GALGAS_formalParameterSignature & in_mSignature,
                                            const GALGAS_location & in_mEndOfArgumentLocation
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
//                                       @nonterminalLabelMap_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonterminalLabelMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_formalParameterListForGeneration mAttribute_mSignatureForGeneration ;
  public : GALGAS_formalParameterSignature mAttribute_mSignature ;
  public : GALGAS_location mAttribute_mEndOfArgumentLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_nonterminalLabelMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_nonterminalLabelMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_nonterminalLabelMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_nonterminalLabelMap_2D_element (const GALGAS_lstring & in_lkey,
                                                  const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                  const GALGAS_formalParameterSignature & in_mSignature,
                                                  const GALGAS_location & in_mEndOfArgumentLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonterminalLabelMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_nonterminalLabelMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_formalParameterListForGeneration & inOperand1,
                                                                         const class GALGAS_formalParameterSignature & inOperand2,
                                                                         const class GALGAS_location & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_nonterminalLabelMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfArgumentLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature reader_mSignature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration reader_mSignatureForGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonterminalLabelMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalLabelMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @nonterminalMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_nonterminalMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_nonterminalMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonterminalMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_nonterminalMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_nonterminalMap (const GALGAS_nonterminalMap & inSource) ;
  public : GALGAS_nonterminalMap & operator = (const GALGAS_nonterminalMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonterminalMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_nonterminalMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_nonterminalMap constructor_mapWithMapToOverride (const class GALGAS_nonterminalMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_nonterminalLabelMap & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_nonterminalLabelMap constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMLabelMapForKey (class GALGAS_nonterminalLabelMap constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_nonterminalLabelMap & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalLabelMap reader_mLabelMapForKey (const class GALGAS_string & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalMap reader_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_nonterminalMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_nonterminalMap ;
 
} ; // End of GALGAS_nonterminalMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_nonterminalMap : public cGenericAbstractEnumerator {
  public : cEnumerator_nonterminalMap (const GALGAS_nonterminalMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_nonterminalLabelMap current_mLabelMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_nonterminalMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@nonterminalMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_nonterminalMap : public cMapElement {
//--- Map attributes
  public : GALGAS_nonterminalLabelMap mAttribute_mLabelMap ;

//--- Constructor
  public : cMapElement_nonterminalMap (const GALGAS_lstring & inKey,
                                       const GALGAS_nonterminalLabelMap & in_mLabelMap
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
//                                          @nonterminalMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonterminalMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_nonterminalLabelMap mAttribute_mLabelMap ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_nonterminalMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_nonterminalMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_nonterminalMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_nonterminalMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_nonterminalLabelMap & in_mLabelMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonterminalMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_nonterminalMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_nonterminalLabelMap & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_nonterminalMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalLabelMap reader_mLabelMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonterminalMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @ruleLabelImplementationList list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ruleLabelImplementationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_ruleLabelImplementationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_ruleLabelImplementationList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mLabelName,
                                                  const class GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                  const class GALGAS_formalParameterSignature & in_mSignature,
                                                  const class GALGAS_location & in_mEndOfArgumentLocation,
                                                  const class GALGAS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ruleLabelImplementationList extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ruleLabelImplementationList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_ruleLabelImplementationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_formalParameterListForGeneration & inOperand1,
                                                                                const class GALGAS_formalParameterSignature & inOperand2,
                                                                                const class GALGAS_location & inOperand3,
                                                                                const class GALGAS_semanticInstructionListForGeneration & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_ruleLabelImplementationList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_formalParameterListForGeneration & inOperand1,
                                                      const class GALGAS_formalParameterSignature & inOperand2,
                                                      const class GALGAS_location & inOperand3,
                                                      const class GALGAS_semanticInstructionListForGeneration & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_ruleLabelImplementationList operator_concat (const GALGAS_ruleLabelImplementationList & inOperand
                                                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_ruleLabelImplementationList add_operation (const GALGAS_ruleLabelImplementationList & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_formalParameterListForGeneration constinArgument1,
                                                         class GALGAS_formalParameterSignature constinArgument2,
                                                         class GALGAS_location constinArgument3,
                                                         class GALGAS_semanticInstructionListForGeneration constinArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_formalParameterListForGeneration & outArgument1,
                                                    class GALGAS_formalParameterSignature & outArgument2,
                                                    class GALGAS_location & outArgument3,
                                                    class GALGAS_semanticInstructionListForGeneration & outArgument4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_formalParameterListForGeneration & outArgument1,
                                                   class GALGAS_formalParameterSignature & outArgument2,
                                                   class GALGAS_location & outArgument3,
                                                   class GALGAS_semanticInstructionListForGeneration & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_formalParameterListForGeneration & outArgument1,
                                                         class GALGAS_formalParameterSignature & outArgument2,
                                                         class GALGAS_location & outArgument3,
                                                         class GALGAS_semanticInstructionListForGeneration & outArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_formalParameterListForGeneration & outArgument1,
                                               class GALGAS_formalParameterSignature & outArgument2,
                                               class GALGAS_location & outArgument3,
                                               class GALGAS_semanticInstructionListForGeneration & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalParameterListForGeneration & outArgument1,
                                              class GALGAS_formalParameterSignature & outArgument2,
                                              class GALGAS_location & outArgument3,
                                              class GALGAS_semanticInstructionListForGeneration & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfArgumentLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration reader_mInstructionListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLabelNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature reader_mSignatureAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration reader_mSignatureForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ruleLabelImplementationList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ruleLabelImplementationList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_ruleLabelImplementationList ;
 
} ; // End of GALGAS_ruleLabelImplementationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_ruleLabelImplementationList : public cGenericAbstractEnumerator {
  public : cEnumerator_ruleLabelImplementationList (const GALGAS_ruleLabelImplementationList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterListForGeneration current_mSignatureForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterSignature current_mSignature (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
  public : class GALGAS_semanticInstructionListForGeneration current_mInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_ruleLabelImplementationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleLabelImplementationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @ruleLabelImplementationList_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ruleLabelImplementationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mLabelName ;
  public : GALGAS_formalParameterListForGeneration mAttribute_mSignatureForGeneration ;
  public : GALGAS_formalParameterSignature mAttribute_mSignature ;
  public : GALGAS_location mAttribute_mEndOfArgumentLocation ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mInstructionListForGeneration ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ruleLabelImplementationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_ruleLabelImplementationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_ruleLabelImplementationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ruleLabelImplementationList_2D_element (const GALGAS_lstring & in_mLabelName,
                                                          const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                          const GALGAS_formalParameterSignature & in_mSignature,
                                                          const GALGAS_location & in_mEndOfArgumentLocation,
                                                          const GALGAS_semanticInstructionListForGeneration & in_mInstructionListForGeneration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ruleLabelImplementationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ruleLabelImplementationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_formalParameterListForGeneration & inOperand1,
                                                                                 const class GALGAS_formalParameterSignature & inOperand2,
                                                                                 const class GALGAS_location & inOperand3,
                                                                                 const class GALGAS_semanticInstructionListForGeneration & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ruleLabelImplementationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfArgumentLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration reader_mInstructionListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLabelName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature reader_mSignature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration reader_mSignatureForGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ruleLabelImplementationList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleLabelImplementationList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @ruleDeclarationList list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ruleDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_ruleDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_ruleDeclarationList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mNonterminalName,
                                                  const class GALGAS_uint & in_mRuleIndex,
                                                  const class GALGAS_ruleLabelImplementationList & in_mLabelImplementationList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ruleDeclarationList extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ruleDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_ruleDeclarationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_uint & inOperand1,
                                                                        const class GALGAS_ruleLabelImplementationList & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_ruleDeclarationList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_ruleLabelImplementationList & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_ruleDeclarationList operator_concat (const GALGAS_ruleDeclarationList & inOperand
                                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_ruleDeclarationList add_operation (const GALGAS_ruleDeclarationList & inOperand,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         class GALGAS_ruleLabelImplementationList constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_uint & outArgument1,
                                                    class GALGAS_ruleLabelImplementationList & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   class GALGAS_ruleLabelImplementationList & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_uint & outArgument1,
                                                         class GALGAS_ruleLabelImplementationList & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_uint & outArgument1,
                                               class GALGAS_ruleLabelImplementationList & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              class GALGAS_ruleLabelImplementationList & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ruleLabelImplementationList reader_mLabelImplementationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mNonterminalNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mRuleIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ruleDeclarationList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ruleDeclarationList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_ruleDeclarationList ;
 
} ; // End of GALGAS_ruleDeclarationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_ruleDeclarationList : public cGenericAbstractEnumerator {
  public : cEnumerator_ruleDeclarationList (const GALGAS_ruleDeclarationList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mNonterminalName (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mRuleIndex (LOCATION_ARGS) const ;
  public : class GALGAS_ruleLabelImplementationList current_mLabelImplementationList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_ruleDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleDeclarationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @ruleDeclarationList_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ruleDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mNonterminalName ;
  public : GALGAS_uint mAttribute_mRuleIndex ;
  public : GALGAS_ruleLabelImplementationList mAttribute_mLabelImplementationList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ruleDeclarationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_ruleDeclarationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_ruleDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ruleDeclarationList_2D_element (const GALGAS_string & in_mNonterminalName,
                                                  const GALGAS_uint & in_mRuleIndex,
                                                  const GALGAS_ruleLabelImplementationList & in_mLabelImplementationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ruleDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ruleDeclarationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_uint & inOperand1,
                                                                         const class GALGAS_ruleLabelImplementationList & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ruleDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ruleLabelImplementationList reader_mLabelImplementationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mNonterminalName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mRuleIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ruleDeclarationList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleDeclarationList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @syntaxListForGeneration list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_syntaxListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_syntaxListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_galgas_33_SyntaxComponentListAST_2D_element & in_mSyntaxComponentRoot,
                                                  const class GALGAS_syntaxDeclarationForGeneration & in_mSyntaxGeneration,
                                                  const class GALGAS_bool & in_mHasIndexing
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxListForGeneration extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_syntaxListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_syntaxListForGeneration constructor_listWithValue (const class GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inOperand0,
                                                                            const class GALGAS_syntaxDeclarationForGeneration & inOperand1,
                                                                            const class GALGAS_bool & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_syntaxListForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inOperand0,
                                                      const class GALGAS_syntaxDeclarationForGeneration & inOperand1,
                                                      const class GALGAS_bool & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxListForGeneration operator_concat (const GALGAS_syntaxListForGeneration & inOperand
                                                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxListForGeneration add_operation (const GALGAS_syntaxListForGeneration & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_galgas_33_SyntaxComponentListAST_2D_element constinArgument0,
                                                         class GALGAS_syntaxDeclarationForGeneration constinArgument1,
                                                         class GALGAS_bool constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_galgas_33_SyntaxComponentListAST_2D_element & outArgument0,
                                                    class GALGAS_syntaxDeclarationForGeneration & outArgument1,
                                                    class GALGAS_bool & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_galgas_33_SyntaxComponentListAST_2D_element & outArgument0,
                                                   class GALGAS_syntaxDeclarationForGeneration & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_galgas_33_SyntaxComponentListAST_2D_element & outArgument0,
                                                         class GALGAS_syntaxDeclarationForGeneration & outArgument1,
                                                         class GALGAS_bool & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_galgas_33_SyntaxComponentListAST_2D_element & outArgument0,
                                               class GALGAS_syntaxDeclarationForGeneration & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_galgas_33_SyntaxComponentListAST_2D_element & outArgument0,
                                              class GALGAS_syntaxDeclarationForGeneration & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasIndexingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxComponentListAST_2D_element reader_mSyntaxComponentRootAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxDeclarationForGeneration reader_mSyntaxGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxListForGeneration reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxListForGeneration reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syntaxListForGeneration ;
 
} ; // End of GALGAS_syntaxListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_syntaxListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_syntaxListForGeneration (const GALGAS_syntaxListForGeneration & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_galgas_33_SyntaxComponentListAST_2D_element current_mSyntaxComponentRoot (LOCATION_ARGS) const ;
  public : class GALGAS_syntaxDeclarationForGeneration current_mSyntaxGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasIndexing (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_syntaxListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @syntaxDeclarationForGeneration class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxDeclarationForGeneration : public GALGAS_semanticDeclarationForGeneration {
//--- Constructor
  public : GALGAS_syntaxDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_syntaxDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_syntaxDeclarationForGeneration * ptr (void) const { return (const cPtr_syntaxDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_syntaxDeclarationForGeneration (const cPtr_syntaxDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_syntaxDeclarationForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_nonterminalMap & inOperand2,
                                                                         const class GALGAS_ruleDeclarationList & inOperand3,
                                                                         const class GALGAS_uint & inOperand4,
                                                                         const class GALGAS_bool & inOperand5,
                                                                         const class GALGAS_bool & inOperand6
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syntaxDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasIndexing (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasTranslateFeature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mLexiqueName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalMap reader_mNonterminalDeclarationMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ruleDeclarationList reader_mRuleDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mSelectMethodCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mSyntaxComponentName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxDeclarationForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @syntaxDeclarationForGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_syntaxDeclarationForGeneration : public cPtr_semanticDeclarationForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mSyntaxComponentName ;
  public : GALGAS_string mAttribute_mLexiqueName ;
  public : GALGAS_nonterminalMap mAttribute_mNonterminalDeclarationMap ;
  public : GALGAS_ruleDeclarationList mAttribute_mRuleDeclarationList ;
  public : GALGAS_uint mAttribute_mSelectMethodCount ;
  public : GALGAS_bool mAttribute_mHasIndexing ;
  public : GALGAS_bool mAttribute_mHasTranslateFeature ;

//--- Constructor
  public : cPtr_syntaxDeclarationForGeneration (const GALGAS_string & in_mSyntaxComponentName,
                                                const GALGAS_string & in_mLexiqueName,
                                                const GALGAS_nonterminalMap & in_mNonterminalDeclarationMap,
                                                const GALGAS_ruleDeclarationList & in_mRuleDeclarationList,
                                                const GALGAS_uint & in_mSelectMethodCount,
                                                const GALGAS_bool & in_mHasIndexing,
                                                const GALGAS_bool & in_mHasTranslateFeature
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mSyntaxComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mLexiqueName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_nonterminalMap reader_mNonterminalDeclarationMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ruleDeclarationList reader_mRuleDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mSelectMethodCount (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mHasIndexing (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mHasTranslateFeature (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @syntaxListForGeneration_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_galgas_33_SyntaxComponentListAST_2D_element mAttribute_mSyntaxComponentRoot ;
  public : GALGAS_syntaxDeclarationForGeneration mAttribute_mSyntaxGeneration ;
  public : GALGAS_bool mAttribute_mHasIndexing ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_syntaxListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_syntaxListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_syntaxListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_syntaxListForGeneration_2D_element (const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & in_mSyntaxComponentRoot,
                                                      const GALGAS_syntaxDeclarationForGeneration & in_mSyntaxGeneration,
                                                      const GALGAS_bool & in_mHasIndexing) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_syntaxListForGeneration_2D_element constructor_new (const class GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inOperand0,
                                                                             const class GALGAS_syntaxDeclarationForGeneration & inOperand1,
                                                                             const class GALGAS_bool & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syntaxListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasIndexing (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxComponentListAST_2D_element reader_mSyntaxComponentRoot (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxDeclarationForGeneration reader_mSyntaxGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @keySortedList sorted list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_keySortedList : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_keySortedList (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_keySortedList extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_keySortedList constructor_emptySortedList (LOCATION_ARGS) ;

  public : static GALGAS_keySortedList constructor_sortedListWithValue (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_uint & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_keySortedList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_uint & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_keySortedList operator_concat (const GALGAS_keySortedList & inOperand
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_popGreatest (class GALGAS_string & outArgument0,
                                                       class GALGAS_uint & outArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popSmallest (class GALGAS_string & outArgument0,
                                                       class GALGAS_uint & outArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_string & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_string & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_keySortedList ;
 
} ; // End of GALGAS_keySortedList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_keySortedList : public cGenericAbstractEnumerator {
  public : cEnumerator_keySortedList (const GALGAS_keySortedList & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mKey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mOrder (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_keySortedList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_keySortedList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @keySortedList_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_keySortedList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mKey ;
  public : GALGAS_uint mAttribute_mOrder ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_keySortedList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_keySortedList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_keySortedList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_keySortedList_2D_element (const GALGAS_string & in_mKey,
                                            const GALGAS_uint & in_mOrder) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_keySortedList_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_keySortedList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                   const class GALGAS_uint & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_keySortedList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mKey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mOrder (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_keySortedList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_keySortedList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @semanticImportDependenceGraph graph                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticImportDependenceGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public : GALGAS_semanticImportDependenceGraph (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticImportDependenceGraph extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_semanticImportDependenceGraph constructor_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertNode (class GALGAS_lstring inArgument0,
                                                      class GALGAS_string inArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_circularities (class GALGAS_stringlist & outArgument0,
                                                       class GALGAS_lstringlist & outArgument1
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GALGAS_stringlist & outArgument0,
                                                                   class GALGAS_lstringlist & outArgument1,
                                                                   class GALGAS_stringlist & outArgument2,
                                                                   class GALGAS_lstringlist & outArgument3,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GALGAS_stringlist & outArgument0,
                                                                class GALGAS_lstringlist & outArgument1
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GALGAS_stringlist & outArgument0,
                                                              class GALGAS_lstringlist & outArgument1
                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_topologicalSort (class GALGAS_stringlist & outArgument0,
                                                         class GALGAS_lstringlist & outArgument1,
                                                         class GALGAS_stringlist & outArgument2,
                                                         class GALGAS_lstringlist & outArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_accessibleNodesFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticImportDependenceGraph reader_reversedGraph (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticImportDependenceGraph reader_subgraphFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                                 const class GALGAS_stringset & constinOperand1,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticImportDependenceGraph class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticImportDependenceGraph ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @enumConstantListForGeneration list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumConstantListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_enumConstantListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_enumConstantListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mConstantName,
                                                  const class GALGAS_unifiedTypeMapProxyList & in_mAssociatedValueTypeList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumConstantListForGeneration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumConstantListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_enumConstantListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                  const class GALGAS_unifiedTypeMapProxyList & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_enumConstantListForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_unifiedTypeMapProxyList & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_enumConstantListForGeneration operator_concat (const GALGAS_enumConstantListForGeneration & inOperand
                                                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_enumConstantListForGeneration add_operation (const GALGAS_enumConstantListForGeneration & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_unifiedTypeMapProxyList constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_unifiedTypeMapProxyList & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_unifiedTypeMapProxyList & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_unifiedTypeMapProxyList & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_unifiedTypeMapProxyList & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_unifiedTypeMapProxyList & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxyList reader_mAssociatedValueTypeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mConstantNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantListForGeneration reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantListForGeneration reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_enumConstantListForGeneration ;
 
} ; // End of GALGAS_enumConstantListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_enumConstantListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_enumConstantListForGeneration (const GALGAS_enumConstantListForGeneration & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mConstantName (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMapProxyList current_mAssociatedValueTypeList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_enumConstantListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @enumConstantListForGeneration_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumConstantListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mConstantName ;
  public : GALGAS_unifiedTypeMapProxyList mAttribute_mAssociatedValueTypeList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumConstantListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_enumConstantListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_enumConstantListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_enumConstantListForGeneration_2D_element (const GALGAS_string & in_mConstantName,
                                                            const GALGAS_unifiedTypeMapProxyList & in_mAssociatedValueTypeList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumConstantListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumConstantListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                   const class GALGAS_unifiedTypeMapProxyList & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumConstantListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxyList reader_mAssociatedValueTypeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mConstantName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumConstantListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @mapAutomatonMessageKind enum                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapAutomatonMessageKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_mapAutomatonMessageKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_noMessage,
    kEnum_warningMessage,
    kEnum_errorMessage
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapAutomatonMessageKind extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapAutomatonMessageKind constructor_errorMessage (LOCATION_ARGS) ;

  public : static GALGAS_mapAutomatonMessageKind constructor_noMessage (LOCATION_ARGS) ;

  public : static GALGAS_mapAutomatonMessageKind constructor_warningMessage (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mapAutomatonMessageKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isErrorMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isNoMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isWarningMessage (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapAutomatonMessageKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapAutomatonMessageKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @mapStateTransitionList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapStateTransitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_mapStateTransitionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_mapStateTransitionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mActionName,
                                                  const class GALGAS_lstring & in_mTargetStateName,
                                                  const class GALGAS_mapAutomatonMessageKind & in_mTransitionMessageKind,
                                                  const class GALGAS_lstring & in_mTransitionMessage
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapStateTransitionList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapStateTransitionList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_mapStateTransitionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_mapAutomatonMessageKind & inOperand2,
                                                                           const class GALGAS_lstring & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_mapStateTransitionList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_mapAutomatonMessageKind & inOperand2,
                                                      const class GALGAS_lstring & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapStateTransitionList operator_concat (const GALGAS_mapStateTransitionList & inOperand
                                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapStateTransitionList add_operation (const GALGAS_mapStateTransitionList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_mapAutomatonMessageKind constinArgument2,
                                                         class GALGAS_lstring constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_mapAutomatonMessageKind & outArgument2,
                                                    class GALGAS_lstring & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_mapAutomatonMessageKind & outArgument2,
                                                   class GALGAS_lstring & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_mapAutomatonMessageKind & outArgument2,
                                                         class GALGAS_lstring & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_mapAutomatonMessageKind & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_mapAutomatonMessageKind & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_mapStateTransitionList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapStateTransitionList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_mapStateTransitionList ;
 
} ; // End of GALGAS_mapStateTransitionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_mapStateTransitionList : public cGenericAbstractEnumerator {
  public : cEnumerator_mapStateTransitionList (const GALGAS_mapStateTransitionList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mActionName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mTargetStateName (LOCATION_ARGS) const ;
  public : class GALGAS_mapAutomatonMessageKind current_mTransitionMessageKind (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mTransitionMessage (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_mapStateTransitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapStateTransitionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @mapStateTransitionList_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapStateTransitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mActionName ;
  public : GALGAS_lstring mAttribute_mTargetStateName ;
  public : GALGAS_mapAutomatonMessageKind mAttribute_mTransitionMessageKind ;
  public : GALGAS_lstring mAttribute_mTransitionMessage ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_mapStateTransitionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_mapStateTransitionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_mapStateTransitionList_2D_element (const GALGAS_lstring & in_mActionName,
                                                     const GALGAS_lstring & in_mTargetStateName,
                                                     const GALGAS_mapAutomatonMessageKind & in_mTransitionMessageKind,
                                                     const GALGAS_lstring & in_mTransitionMessage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapStateTransitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapStateTransitionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_mapAutomatonMessageKind & inOperand2,
                                                                            const class GALGAS_lstring & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mapStateTransitionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mActionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetStateName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTransitionMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonMessageKind reader_mTransitionMessageKind (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapStateTransitionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapStateTransitionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @mapStateList list                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapStateList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_mapStateList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_mapStateList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mStateName,
                                                  const class GALGAS_mapAutomatonMessageKind & in_mStateMessageKind,
                                                  const class GALGAS_lstring & in_mStateMessage,
                                                  const class GALGAS_mapStateTransitionList & in_mTransitionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapStateList extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapStateList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_mapStateList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_mapAutomatonMessageKind & inOperand1,
                                                                 const class GALGAS_lstring & inOperand2,
                                                                 const class GALGAS_mapStateTransitionList & inOperand3
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_mapStateList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_mapAutomatonMessageKind & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_mapStateTransitionList & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapStateList operator_concat (const GALGAS_mapStateList & inOperand
                                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapStateList add_operation (const GALGAS_mapStateList & inOperand,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_mapAutomatonMessageKind constinArgument1,
                                                         class GALGAS_lstring constinArgument2,
                                                         class GALGAS_mapStateTransitionList constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_mapAutomatonMessageKind & outArgument1,
                                                    class GALGAS_lstring & outArgument2,
                                                    class GALGAS_mapStateTransitionList & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_mapAutomatonMessageKind & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   class GALGAS_mapStateTransitionList & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_mapAutomatonMessageKind & outArgument1,
                                                         class GALGAS_lstring & outArgument2,
                                                         class GALGAS_mapStateTransitionList & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_mapAutomatonMessageKind & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_mapStateTransitionList & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_mapAutomatonMessageKind & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_mapStateTransitionList & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_mapStateList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapStateList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_mapStateList ;
 
} ; // End of GALGAS_mapStateList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_mapStateList : public cGenericAbstractEnumerator {
  public : cEnumerator_mapStateList (const GALGAS_mapStateList & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mStateName (LOCATION_ARGS) const ;
  public : class GALGAS_mapAutomatonMessageKind current_mStateMessageKind (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mStateMessage (LOCATION_ARGS) const ;
  public : class GALGAS_mapStateTransitionList current_mTransitionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_mapStateList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapStateList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @mapStateList_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapStateList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mStateName ;
  public : GALGAS_mapAutomatonMessageKind mAttribute_mStateMessageKind ;
  public : GALGAS_lstring mAttribute_mStateMessage ;
  public : GALGAS_mapStateTransitionList mAttribute_mTransitionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_mapStateList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_mapStateList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_mapStateList_2D_element (const GALGAS_lstring & in_mStateName,
                                           const GALGAS_mapAutomatonMessageKind & in_mStateMessageKind,
                                           const GALGAS_lstring & in_mStateMessage,
                                           const GALGAS_mapStateTransitionList & in_mTransitionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapStateList_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapStateList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_mapAutomatonMessageKind & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2,
                                                                  const class GALGAS_mapStateTransitionList & inOperand3
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mapStateList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mStateMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonMessageKind reader_mStateMessageKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mStateName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapStateTransitionList reader_mTransitionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapStateList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapStateList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @mapOverrideBlockDescriptorAST list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapOverrideBlockDescriptorAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_mapOverrideBlockDescriptorAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_mapOverrideBlockDescriptorAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mLeftState,
                                                  const class GALGAS_lstring & in_mRightState,
                                                  const class GALGAS_lstring & in_mResultingState,
                                                  const class GALGAS_mapAutomatonMessageKind & in_mMessageKind,
                                                  const class GALGAS_lstring & in_mTransitionMessage
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapOverrideBlockDescriptorAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapOverrideBlockDescriptorAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_mapOverrideBlockDescriptorAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_lstring & inOperand2,
                                                                                  const class GALGAS_mapAutomatonMessageKind & inOperand3,
                                                                                  const class GALGAS_lstring & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_mapOverrideBlockDescriptorAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_mapAutomatonMessageKind & inOperand3,
                                                      const class GALGAS_lstring & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapOverrideBlockDescriptorAST operator_concat (const GALGAS_mapOverrideBlockDescriptorAST & inOperand
                                                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapOverrideBlockDescriptorAST add_operation (const GALGAS_mapOverrideBlockDescriptorAST & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_lstring constinArgument2,
                                                         class GALGAS_mapAutomatonMessageKind constinArgument3,
                                                         class GALGAS_lstring constinArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_lstring & outArgument2,
                                                    class GALGAS_mapAutomatonMessageKind & outArgument3,
                                                    class GALGAS_lstring & outArgument4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   class GALGAS_mapAutomatonMessageKind & outArgument3,
                                                   class GALGAS_lstring & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_lstring & outArgument2,
                                                         class GALGAS_mapAutomatonMessageKind & outArgument3,
                                                         class GALGAS_lstring & outArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_mapAutomatonMessageKind & outArgument3,
                                               class GALGAS_lstring & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_mapAutomatonMessageKind & outArgument3,
                                              class GALGAS_lstring & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_mapOverrideBlockDescriptorAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapOverrideBlockDescriptorAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_mapOverrideBlockDescriptorAST ;
 
} ; // End of GALGAS_mapOverrideBlockDescriptorAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_mapOverrideBlockDescriptorAST : public cGenericAbstractEnumerator {
  public : cEnumerator_mapOverrideBlockDescriptorAST (const GALGAS_mapOverrideBlockDescriptorAST & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mLeftState (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mRightState (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mResultingState (LOCATION_ARGS) const ;
  public : class GALGAS_mapAutomatonMessageKind current_mMessageKind (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mTransitionMessage (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_mapOverrideBlockDescriptorAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapOverrideBlockDescriptorAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @mapOverrideBlockDescriptorAST_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapOverrideBlockDescriptorAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mLeftState ;
  public : GALGAS_lstring mAttribute_mRightState ;
  public : GALGAS_lstring mAttribute_mResultingState ;
  public : GALGAS_mapAutomatonMessageKind mAttribute_mMessageKind ;
  public : GALGAS_lstring mAttribute_mTransitionMessage ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_mapOverrideBlockDescriptorAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_mapOverrideBlockDescriptorAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_mapOverrideBlockDescriptorAST_2D_element (const GALGAS_lstring & in_mLeftState,
                                                            const GALGAS_lstring & in_mRightState,
                                                            const GALGAS_lstring & in_mResultingState,
                                                            const GALGAS_mapAutomatonMessageKind & in_mMessageKind,
                                                            const GALGAS_lstring & in_mTransitionMessage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapOverrideBlockDescriptorAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapOverrideBlockDescriptorAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_lstring & inOperand2,
                                                                                   const class GALGAS_mapAutomatonMessageKind & inOperand3,
                                                                                   const class GALGAS_lstring & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mapOverrideBlockDescriptorAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLeftState (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonMessageKind reader_mMessageKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mResultingState (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRightState (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTransitionMessage (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapOverrideBlockDescriptorAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapOverrideBlockDescriptorAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @mapOverrideBlockListAST list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapOverrideBlockListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_mapOverrideBlockListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_mapOverrideBlockListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mOverrideBlockName,
                                                  const class GALGAS_mapOverrideBlockDescriptorAST & in_mMapOverrideBlockDescriptor_31_AST,
                                                  const class GALGAS_mapOverrideBlockDescriptorAST & in_mMapOverrideBlockDescriptor_32_AST
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapOverrideBlockListAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapOverrideBlockListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_mapOverrideBlockListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_mapOverrideBlockDescriptorAST & inOperand1,
                                                                            const class GALGAS_mapOverrideBlockDescriptorAST & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_mapOverrideBlockListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_mapOverrideBlockDescriptorAST & inOperand1,
                                                      const class GALGAS_mapOverrideBlockDescriptorAST & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapOverrideBlockListAST operator_concat (const GALGAS_mapOverrideBlockListAST & inOperand
                                                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapOverrideBlockListAST add_operation (const GALGAS_mapOverrideBlockListAST & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_mapOverrideBlockDescriptorAST constinArgument1,
                                                         class GALGAS_mapOverrideBlockDescriptorAST constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_mapOverrideBlockDescriptorAST & outArgument1,
                                                    class GALGAS_mapOverrideBlockDescriptorAST & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_mapOverrideBlockDescriptorAST & outArgument1,
                                                   class GALGAS_mapOverrideBlockDescriptorAST & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_mapOverrideBlockDescriptorAST & outArgument1,
                                                         class GALGAS_mapOverrideBlockDescriptorAST & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_mapOverrideBlockDescriptorAST & outArgument1,
                                               class GALGAS_mapOverrideBlockDescriptorAST & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_mapOverrideBlockDescriptorAST & outArgument1,
                                              class GALGAS_mapOverrideBlockDescriptorAST & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_mapOverrideBlockListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapOverrideBlockListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_mapOverrideBlockListAST ;
 
} ; // End of GALGAS_mapOverrideBlockListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_mapOverrideBlockListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_mapOverrideBlockListAST (const GALGAS_mapOverrideBlockListAST & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mOverrideBlockName (LOCATION_ARGS) const ;
  public : class GALGAS_mapOverrideBlockDescriptorAST current_mMapOverrideBlockDescriptor_31_AST (LOCATION_ARGS) const ;
  public : class GALGAS_mapOverrideBlockDescriptorAST current_mMapOverrideBlockDescriptor_32_AST (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_mapOverrideBlockListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapOverrideBlockListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @mapOverrideBlockListAST_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapOverrideBlockListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mOverrideBlockName ;
  public : GALGAS_mapOverrideBlockDescriptorAST mAttribute_mMapOverrideBlockDescriptor_31_AST ;
  public : GALGAS_mapOverrideBlockDescriptorAST mAttribute_mMapOverrideBlockDescriptor_32_AST ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_mapOverrideBlockListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_mapOverrideBlockListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_mapOverrideBlockListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_mapOverrideBlockListAST_2D_element (const GALGAS_lstring & in_mOverrideBlockName,
                                                      const GALGAS_mapOverrideBlockDescriptorAST & in_mMapOverrideBlockDescriptor_31_AST,
                                                      const GALGAS_mapOverrideBlockDescriptorAST & in_mMapOverrideBlockDescriptor_32_AST) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapOverrideBlockListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapOverrideBlockListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_mapOverrideBlockDescriptorAST & inOperand1,
                                                                             const class GALGAS_mapOverrideBlockDescriptorAST & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mapOverrideBlockListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_mapOverrideBlockDescriptorAST reader_mMapOverrideBlockDescriptor_31_AST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapOverrideBlockDescriptorAST reader_mMapOverrideBlockDescriptor_32_AST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOverrideBlockName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapOverrideBlockListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapOverrideBlockListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @mapStateTransitionSortedList sorted list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapStateTransitionSortedList : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_mapStateTransitionSortedList (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapStateTransitionSortedList extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapStateTransitionSortedList constructor_emptySortedList (LOCATION_ARGS) ;

  public : static GALGAS_mapStateTransitionSortedList constructor_sortedListWithValue (const class GALGAS_uint & inOperand0,
                                                                                       const class GALGAS_string & inOperand1,
                                                                                       const class GALGAS_uint & inOperand2,
                                                                                       const class GALGAS_string & inOperand3,
                                                                                       const class GALGAS_mapAutomatonMessageKind & inOperand4,
                                                                                       const class GALGAS_string & inOperand5
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_mapStateTransitionSortedList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_mapAutomatonMessageKind & inOperand4,
                                                      const class GALGAS_string & inOperand5
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapStateTransitionSortedList operator_concat (const GALGAS_mapStateTransitionSortedList & inOperand
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_popGreatest (class GALGAS_uint & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_uint & outArgument2,
                                                       class GALGAS_string & outArgument3,
                                                       class GALGAS_mapAutomatonMessageKind & outArgument4,
                                                       class GALGAS_string & outArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popSmallest (class GALGAS_uint & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_uint & outArgument2,
                                                       class GALGAS_string & outArgument3,
                                                       class GALGAS_mapAutomatonMessageKind & outArgument4,
                                                       class GALGAS_string & outArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_uint & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_mapAutomatonMessageKind & outArgument4,
                                                  class GALGAS_string & outArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_uint & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_mapAutomatonMessageKind & outArgument4,
                                                  class GALGAS_string & outArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_mapStateTransitionSortedList ;
 
} ; // End of GALGAS_mapStateTransitionSortedList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_mapStateTransitionSortedList : public cGenericAbstractEnumerator {
  public : cEnumerator_mapStateTransitionSortedList (const GALGAS_mapStateTransitionSortedList & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_uint current_mActionIndex (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mActionName (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mTargetStateIndex (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTargetStateName (LOCATION_ARGS) const ;
  public : class GALGAS_mapAutomatonMessageKind current_mTransitionMessageKind (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTransitionMessage (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_mapStateTransitionSortedList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapStateTransitionSortedList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @mapStateTransitionSortedList_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapStateTransitionSortedList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_uint mAttribute_mActionIndex ;
  public : GALGAS_string mAttribute_mActionName ;
  public : GALGAS_uint mAttribute_mTargetStateIndex ;
  public : GALGAS_string mAttribute_mTargetStateName ;
  public : GALGAS_mapAutomatonMessageKind mAttribute_mTransitionMessageKind ;
  public : GALGAS_string mAttribute_mTransitionMessage ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_mapStateTransitionSortedList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_mapStateTransitionSortedList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_mapStateTransitionSortedList_2D_element (const GALGAS_uint & in_mActionIndex,
                                                           const GALGAS_string & in_mActionName,
                                                           const GALGAS_uint & in_mTargetStateIndex,
                                                           const GALGAS_string & in_mTargetStateName,
                                                           const GALGAS_mapAutomatonMessageKind & in_mTransitionMessageKind,
                                                           const GALGAS_string & in_mTransitionMessage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapStateTransitionSortedList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapStateTransitionSortedList_2D_element constructor_new (const class GALGAS_uint & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_uint & inOperand2,
                                                                                  const class GALGAS_string & inOperand3,
                                                                                  const class GALGAS_mapAutomatonMessageKind & inOperand4,
                                                                                  const class GALGAS_string & inOperand5
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mapStateTransitionSortedList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mActionIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mActionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mTargetStateIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetStateName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTransitionMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonMessageKind reader_mTransitionMessageKind (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapStateTransitionSortedList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapStateTransitionSortedList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @mapStateSortedList sorted list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapStateSortedList : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_mapStateSortedList (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapStateSortedList extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapStateSortedList constructor_emptySortedList (LOCATION_ARGS) ;

  public : static GALGAS_mapStateSortedList constructor_sortedListWithValue (const class GALGAS_uint & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_mapAutomatonMessageKind & inOperand2,
                                                                             const class GALGAS_string & inOperand3,
                                                                             const class GALGAS_mapStateTransitionSortedList & inOperand4
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_mapStateSortedList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_mapAutomatonMessageKind & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_mapStateTransitionSortedList & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapStateSortedList operator_concat (const GALGAS_mapStateSortedList & inOperand
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_popGreatest (class GALGAS_uint & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_mapAutomatonMessageKind & outArgument2,
                                                       class GALGAS_string & outArgument3,
                                                       class GALGAS_mapStateTransitionSortedList & outArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popSmallest (class GALGAS_uint & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_mapAutomatonMessageKind & outArgument2,
                                                       class GALGAS_string & outArgument3,
                                                       class GALGAS_mapStateTransitionSortedList & outArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_uint & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_mapAutomatonMessageKind & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_mapStateTransitionSortedList & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_uint & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_mapAutomatonMessageKind & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_mapStateTransitionSortedList & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_mapStateSortedList ;
 
} ; // End of GALGAS_mapStateSortedList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_mapStateSortedList : public cGenericAbstractEnumerator {
  public : cEnumerator_mapStateSortedList (const GALGAS_mapStateSortedList & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_uint current_mStateIndex (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mStateName (LOCATION_ARGS) const ;
  public : class GALGAS_mapAutomatonMessageKind current_mStateMessageKind (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mStateMessage (LOCATION_ARGS) const ;
  public : class GALGAS_mapStateTransitionSortedList current_mTransitionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_mapStateSortedList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapStateSortedList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @mapStateSortedList_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapStateSortedList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_uint mAttribute_mStateIndex ;
  public : GALGAS_string mAttribute_mStateName ;
  public : GALGAS_mapAutomatonMessageKind mAttribute_mStateMessageKind ;
  public : GALGAS_string mAttribute_mStateMessage ;
  public : GALGAS_mapStateTransitionSortedList mAttribute_mTransitionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_mapStateSortedList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_mapStateSortedList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_mapStateSortedList_2D_element (const GALGAS_uint & in_mStateIndex,
                                                 const GALGAS_string & in_mStateName,
                                                 const GALGAS_mapAutomatonMessageKind & in_mStateMessageKind,
                                                 const GALGAS_string & in_mStateMessage,
                                                 const GALGAS_mapStateTransitionSortedList & in_mTransitionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapStateSortedList_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapStateSortedList_2D_element constructor_new (const class GALGAS_uint & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_mapAutomatonMessageKind & inOperand2,
                                                                        const class GALGAS_string & inOperand3,
                                                                        const class GALGAS_mapStateTransitionSortedList & inOperand4
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mapStateSortedList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mStateIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mStateMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonMessageKind reader_mStateMessageKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mStateName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapStateTransitionSortedList reader_mTransitionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapStateSortedList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapStateSortedList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @mapAutomatonStateMap map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_mapAutomatonStateMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_mapAutomatonStateMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapAutomatonStateMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_mapAutomatonStateMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_mapAutomatonStateMap (const GALGAS_mapAutomatonStateMap & inSource) ;
  public : GALGAS_mapAutomatonStateMap & operator = (const GALGAS_mapAutomatonStateMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapAutomatonStateMap extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapAutomatonStateMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_mapAutomatonStateMap constructor_mapWithMapToOverride (const class GALGAS_mapAutomatonStateMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_mapAutomatonMessageKind & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_uint constinArgument1,
                                                     class GALGAS_mapAutomatonMessageKind constinArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMStateIndexForKey (class GALGAS_uint constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMStateMessageKindForKey (class GALGAS_mapAutomatonMessageKind constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   class GALGAS_mapAutomatonMessageKind & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mStateIndexForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonMessageKind reader_mStateMessageKindForKey (const class GALGAS_string & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonStateMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_mapAutomatonStateMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_mapAutomatonStateMap ;
 
} ; // End of GALGAS_mapAutomatonStateMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_mapAutomatonStateMap : public cGenericAbstractEnumerator {
  public : cEnumerator_mapAutomatonStateMap (const GALGAS_mapAutomatonStateMap & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mStateIndex (LOCATION_ARGS) const ;
  public : class GALGAS_mapAutomatonMessageKind current_mStateMessageKind (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_mapAutomatonStateMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapAutomatonStateMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@mapAutomatonStateMap' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_mapAutomatonStateMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mStateIndex ;
  public : GALGAS_mapAutomatonMessageKind mAttribute_mStateMessageKind ;

//--- Constructor
  public : cMapElement_mapAutomatonStateMap (const GALGAS_lstring & inKey,
                                             const GALGAS_uint & in_mStateIndex,
                                             const GALGAS_mapAutomatonMessageKind & in_mStateMessageKind
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
//                                       @mapAutomatonStateMap_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapAutomatonStateMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mStateIndex ;
  public : GALGAS_mapAutomatonMessageKind mAttribute_mStateMessageKind ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_mapAutomatonStateMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_mapAutomatonStateMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_mapAutomatonStateMap_2D_element (const GALGAS_lstring & in_lkey,
                                                   const GALGAS_uint & in_mStateIndex,
                                                   const GALGAS_mapAutomatonMessageKind & in_mStateMessageKind) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapAutomatonStateMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapAutomatonStateMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_uint & inOperand1,
                                                                          const class GALGAS_mapAutomatonMessageKind & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mapAutomatonStateMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mStateIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonMessageKind reader_mStateMessageKind (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapAutomatonStateMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapAutomatonStateMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @mapAutomatonActionMap map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_mapAutomatonActionMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_mapAutomatonActionMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapAutomatonActionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_mapAutomatonActionMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_mapAutomatonActionMap (const GALGAS_mapAutomatonActionMap & inSource) ;
  public : GALGAS_mapAutomatonActionMap & operator = (const GALGAS_mapAutomatonActionMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapAutomatonActionMap extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapAutomatonActionMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_mapAutomatonActionMap constructor_mapWithMapToOverride (const class GALGAS_mapAutomatonActionMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_uint constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMActionIndexForKey (class GALGAS_uint constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mActionIndexForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonActionMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_mapAutomatonActionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_mapAutomatonActionMap ;
 
} ; // End of GALGAS_mapAutomatonActionMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_mapAutomatonActionMap : public cGenericAbstractEnumerator {
  public : cEnumerator_mapAutomatonActionMap (const GALGAS_mapAutomatonActionMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mActionIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_mapAutomatonActionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapAutomatonActionMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@mapAutomatonActionMap' map                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_mapAutomatonActionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mActionIndex ;

//--- Constructor
  public : cMapElement_mapAutomatonActionMap (const GALGAS_lstring & inKey,
                                              const GALGAS_uint & in_mActionIndex
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
//                                      @mapAutomatonActionMap_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapAutomatonActionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mActionIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_mapAutomatonActionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_mapAutomatonActionMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_mapAutomatonActionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_mapAutomatonActionMap_2D_element (const GALGAS_lstring & in_lkey,
                                                    const GALGAS_uint & in_mActionIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapAutomatonActionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapAutomatonActionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_uint & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mapAutomatonActionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mActionIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapAutomatonActionMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapAutomatonActionMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @branchBehaviourSortedListForMapOverride sorted list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_branchBehaviourSortedListForMapOverride : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_branchBehaviourSortedListForMapOverride (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_branchBehaviourSortedListForMapOverride extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_branchBehaviourSortedListForMapOverride constructor_emptySortedList (LOCATION_ARGS) ;

  public : static GALGAS_branchBehaviourSortedListForMapOverride constructor_sortedListWithValue (const class GALGAS_uint & inOperand0,
                                                                                                  const class GALGAS_string & inOperand1,
                                                                                                  const class GALGAS_uint & inOperand2,
                                                                                                  const class GALGAS_string & inOperand3,
                                                                                                  const class GALGAS_uint & inOperand4,
                                                                                                  const class GALGAS_string & inOperand5,
                                                                                                  const class GALGAS_mapAutomatonMessageKind & inOperand6,
                                                                                                  const class GALGAS_string & inOperand7
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_branchBehaviourSortedListForMapOverride inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_uint & inOperand4,
                                                      const class GALGAS_string & inOperand5,
                                                      const class GALGAS_mapAutomatonMessageKind & inOperand6,
                                                      const class GALGAS_string & inOperand7
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_branchBehaviourSortedListForMapOverride operator_concat (const GALGAS_branchBehaviourSortedListForMapOverride & inOperand
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_popGreatest (class GALGAS_uint & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_uint & outArgument2,
                                                       class GALGAS_string & outArgument3,
                                                       class GALGAS_uint & outArgument4,
                                                       class GALGAS_string & outArgument5,
                                                       class GALGAS_mapAutomatonMessageKind & outArgument6,
                                                       class GALGAS_string & outArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popSmallest (class GALGAS_uint & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_uint & outArgument2,
                                                       class GALGAS_string & outArgument3,
                                                       class GALGAS_uint & outArgument4,
                                                       class GALGAS_string & outArgument5,
                                                       class GALGAS_mapAutomatonMessageKind & outArgument6,
                                                       class GALGAS_string & outArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_uint & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_uint & outArgument4,
                                                  class GALGAS_string & outArgument5,
                                                  class GALGAS_mapAutomatonMessageKind & outArgument6,
                                                  class GALGAS_string & outArgument7,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_uint & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_uint & outArgument4,
                                                  class GALGAS_string & outArgument5,
                                                  class GALGAS_mapAutomatonMessageKind & outArgument6,
                                                  class GALGAS_string & outArgument7,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_branchBehaviourSortedListForMapOverride ;
 
} ; // End of GALGAS_branchBehaviourSortedListForMapOverride class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_branchBehaviourSortedListForMapOverride : public cGenericAbstractEnumerator {
  public : cEnumerator_branchBehaviourSortedListForMapOverride (const GALGAS_branchBehaviourSortedListForMapOverride & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_uint current_mStartStateIndex (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mStartStateName (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mCurrentStateIndex (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mCurrentStateName (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mFinalStateIndex (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFinalStateName (LOCATION_ARGS) const ;
  public : class GALGAS_mapAutomatonMessageKind current_mBehaviourMessageKind (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBehaviourMessage (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_branchBehaviourSortedListForMapOverride_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchBehaviourSortedListForMapOverride ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @branchBehaviourSortedListForMapOverride_2D_element struct                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_branchBehaviourSortedListForMapOverride_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_uint mAttribute_mStartStateIndex ;
  public : GALGAS_string mAttribute_mStartStateName ;
  public : GALGAS_uint mAttribute_mCurrentStateIndex ;
  public : GALGAS_string mAttribute_mCurrentStateName ;
  public : GALGAS_uint mAttribute_mFinalStateIndex ;
  public : GALGAS_string mAttribute_mFinalStateName ;
  public : GALGAS_mapAutomatonMessageKind mAttribute_mBehaviourMessageKind ;
  public : GALGAS_string mAttribute_mBehaviourMessage ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_branchBehaviourSortedListForMapOverride_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_branchBehaviourSortedListForMapOverride_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_branchBehaviourSortedListForMapOverride_2D_element (const GALGAS_uint & in_mStartStateIndex,
                                                                      const GALGAS_string & in_mStartStateName,
                                                                      const GALGAS_uint & in_mCurrentStateIndex,
                                                                      const GALGAS_string & in_mCurrentStateName,
                                                                      const GALGAS_uint & in_mFinalStateIndex,
                                                                      const GALGAS_string & in_mFinalStateName,
                                                                      const GALGAS_mapAutomatonMessageKind & in_mBehaviourMessageKind,
                                                                      const GALGAS_string & in_mBehaviourMessage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_branchBehaviourSortedListForMapOverride_2D_element extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_branchBehaviourSortedListForMapOverride_2D_element constructor_new (const class GALGAS_uint & inOperand0,
                                                                                             const class GALGAS_string & inOperand1,
                                                                                             const class GALGAS_uint & inOperand2,
                                                                                             const class GALGAS_string & inOperand3,
                                                                                             const class GALGAS_uint & inOperand4,
                                                                                             const class GALGAS_string & inOperand5,
                                                                                             const class GALGAS_mapAutomatonMessageKind & inOperand6,
                                                                                             const class GALGAS_string & inOperand7
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_branchBehaviourSortedListForMapOverride_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBehaviourMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonMessageKind reader_mBehaviourMessageKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mCurrentStateIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCurrentStateName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mFinalStateIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFinalStateName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mStartStateIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mStartStateName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_branchBehaviourSortedListForMapOverride_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchBehaviourSortedListForMapOverride_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @mapOverrideList list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapOverrideList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_mapOverrideList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_mapOverrideList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mOverrideName,
                                                  const class GALGAS_branchBehaviourSortedListForMapOverride & in_mBranchBehaviourSortedListForMapOverride,
                                                  const class GALGAS_branchBehaviourSortedListForMapOverride & in_mBranchCombinationSortedListForMapOverride
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapOverrideList extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapOverrideList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_mapOverrideList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                    const class GALGAS_branchBehaviourSortedListForMapOverride & inOperand1,
                                                                    const class GALGAS_branchBehaviourSortedListForMapOverride & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_mapOverrideList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_branchBehaviourSortedListForMapOverride & inOperand1,
                                                      const class GALGAS_branchBehaviourSortedListForMapOverride & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapOverrideList operator_concat (const GALGAS_mapOverrideList & inOperand
                                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapOverrideList add_operation (const GALGAS_mapOverrideList & inOperand,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_branchBehaviourSortedListForMapOverride constinArgument1,
                                                         class GALGAS_branchBehaviourSortedListForMapOverride constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_branchBehaviourSortedListForMapOverride & outArgument1,
                                                    class GALGAS_branchBehaviourSortedListForMapOverride & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_branchBehaviourSortedListForMapOverride & outArgument1,
                                                   class GALGAS_branchBehaviourSortedListForMapOverride & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_branchBehaviourSortedListForMapOverride & outArgument1,
                                                         class GALGAS_branchBehaviourSortedListForMapOverride & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_branchBehaviourSortedListForMapOverride & outArgument1,
                                               class GALGAS_branchBehaviourSortedListForMapOverride & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_branchBehaviourSortedListForMapOverride & outArgument1,
                                              class GALGAS_branchBehaviourSortedListForMapOverride & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_branchBehaviourSortedListForMapOverride reader_mBranchBehaviourSortedListForMapOverrideAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                         C_Compiler * inCompiler
                                                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_branchBehaviourSortedListForMapOverride reader_mBranchCombinationSortedListForMapOverrideAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                           C_Compiler * inCompiler
                                                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOverrideNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapOverrideList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapOverrideList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_mapOverrideList ;
 
} ; // End of GALGAS_mapOverrideList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_mapOverrideList : public cGenericAbstractEnumerator {
  public : cEnumerator_mapOverrideList (const GALGAS_mapOverrideList & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mOverrideName (LOCATION_ARGS) const ;
  public : class GALGAS_branchBehaviourSortedListForMapOverride current_mBranchBehaviourSortedListForMapOverride (LOCATION_ARGS) const ;
  public : class GALGAS_branchBehaviourSortedListForMapOverride current_mBranchCombinationSortedListForMapOverride (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_mapOverrideList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapOverrideList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @mapOverrideList_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapOverrideList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mOverrideName ;
  public : GALGAS_branchBehaviourSortedListForMapOverride mAttribute_mBranchBehaviourSortedListForMapOverride ;
  public : GALGAS_branchBehaviourSortedListForMapOverride mAttribute_mBranchCombinationSortedListForMapOverride ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_mapOverrideList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_mapOverrideList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_mapOverrideList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_mapOverrideList_2D_element (const GALGAS_string & in_mOverrideName,
                                              const GALGAS_branchBehaviourSortedListForMapOverride & in_mBranchBehaviourSortedListForMapOverride,
                                              const GALGAS_branchBehaviourSortedListForMapOverride & in_mBranchCombinationSortedListForMapOverride) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapOverrideList_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapOverrideList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                     const class GALGAS_branchBehaviourSortedListForMapOverride & inOperand1,
                                                                     const class GALGAS_branchBehaviourSortedListForMapOverride & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mapOverrideList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_branchBehaviourSortedListForMapOverride reader_mBranchBehaviourSortedListForMapOverride (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_branchBehaviourSortedListForMapOverride reader_mBranchCombinationSortedListForMapOverride (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOverrideName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapOverrideList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapOverrideList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @sortedListSortDescriptorListAST list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sortedListSortDescriptorListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_sortedListSortDescriptorListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_sortedListSortDescriptorListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mSortedAttributeName,
                                                  const class GALGAS_bool & in_mAscending
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sortedListSortDescriptorListAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_sortedListSortDescriptorListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_sortedListSortDescriptorListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_bool & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_sortedListSortDescriptorListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_sortedListSortDescriptorListAST operator_concat (const GALGAS_sortedListSortDescriptorListAST & inOperand
                                                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_sortedListSortDescriptorListAST add_operation (const GALGAS_sortedListSortDescriptorListAST & inOperand,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_bool constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_bool & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_bool & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_sortedListSortDescriptorListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sortedListSortDescriptorListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_sortedListSortDescriptorListAST ;
 
} ; // End of GALGAS_sortedListSortDescriptorListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_sortedListSortDescriptorListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_sortedListSortDescriptorListAST (const GALGAS_sortedListSortDescriptorListAST & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mSortedAttributeName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mAscending (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_sortedListSortDescriptorListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @sortedListSortDescriptorListAST_2D_element struct                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sortedListSortDescriptorListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mSortedAttributeName ;
  public : GALGAS_bool mAttribute_mAscending ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_sortedListSortDescriptorListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_sortedListSortDescriptorListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_sortedListSortDescriptorListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_sortedListSortDescriptorListAST_2D_element (const GALGAS_lstring & in_mSortedAttributeName,
                                                              const GALGAS_bool & in_mAscending) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sortedListSortDescriptorListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_sortedListSortDescriptorListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_bool & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sortedListSortDescriptorListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mAscending (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mSortedAttributeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sortedListSortDescriptorListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @sortDescriptorListForGeneration list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sortDescriptorListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_sortDescriptorListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_sortDescriptorListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeTypeIndex,
                                                  const class GALGAS_string & in_mAttributeName,
                                                  const class GALGAS_bool & in_mAscendingOrder
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sortDescriptorListForGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_sortDescriptorListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_sortDescriptorListForGeneration constructor_listWithValue (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                    const class GALGAS_string & inOperand1,
                                                                                    const class GALGAS_bool & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_sortDescriptorListForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_bool & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_sortDescriptorListForGeneration operator_concat (const GALGAS_sortDescriptorListForGeneration & inOperand
                                                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_sortDescriptorListForGeneration add_operation (const GALGAS_sortDescriptorListForGeneration & inOperand,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_bool constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_bool & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_bool & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mAscendingOrderAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mAttributeTypeIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sortDescriptorListForGeneration reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sortDescriptorListForGeneration reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_sortDescriptorListForGeneration ;
 
} ; // End of GALGAS_sortDescriptorListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_sortDescriptorListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_sortDescriptorListForGeneration (const GALGAS_sortDescriptorListForGeneration & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mAttributeTypeIndex (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mAttributeName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mAscendingOrder (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_sortDescriptorListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortDescriptorListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @sortDescriptorListForGeneration_2D_element struct                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sortDescriptorListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mAttributeTypeIndex ;
  public : GALGAS_string mAttribute_mAttributeName ;
  public : GALGAS_bool mAttribute_mAscendingOrder ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_sortDescriptorListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_sortDescriptorListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_sortDescriptorListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_sortDescriptorListForGeneration_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeTypeIndex,
                                                              const GALGAS_string & in_mAttributeName,
                                                              const GALGAS_bool & in_mAscendingOrder) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sortDescriptorListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_sortDescriptorListForGeneration_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                     const class GALGAS_string & inOperand1,
                                                                                     const class GALGAS_bool & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sortDescriptorListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mAscendingOrder (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mAttributeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mAttributeTypeIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sortDescriptorListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortDescriptorListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @syntaxInstructionListForGrammarAnalysis list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxInstructionListForGrammarAnalysis : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_syntaxInstructionListForGrammarAnalysis (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_syntaxInstructionListForGrammarAnalysis (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxInstructionListForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_syntaxInstructionListForGrammarAnalysis constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_syntaxInstructionListForGrammarAnalysis constructor_listWithValue (const class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_syntaxInstructionListForGrammarAnalysis inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxInstructionListForGrammarAnalysis operator_concat (const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand
                                                                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxInstructionListForGrammarAnalysis add_operation (const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_abstractSyntaxInstructionForGrammarAnalysis constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractSyntaxInstructionForGrammarAnalysis reader_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionListForGrammarAnalysis reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionListForGrammarAnalysis reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syntaxInstructionListForGrammarAnalysis ;
 
} ; // End of GALGAS_syntaxInstructionListForGrammarAnalysis class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_syntaxInstructionListForGrammarAnalysis : public cGenericAbstractEnumerator {
  public : cEnumerator_syntaxInstructionListForGrammarAnalysis (const GALGAS_syntaxInstructionListForGrammarAnalysis & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractSyntaxInstructionForGrammarAnalysis current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @abstractSyntaxInstructionForGrammarAnalysis class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractSyntaxInstructionForGrammarAnalysis : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractSyntaxInstructionForGrammarAnalysis (void) ;

//---
  public : inline const class cPtr_abstractSyntaxInstructionForGrammarAnalysis * ptr (void) const { return (const cPtr_abstractSyntaxInstructionForGrammarAnalysis *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractSyntaxInstructionForGrammarAnalysis (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractSyntaxInstructionForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mStartLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractSyntaxInstructionForGrammarAnalysis class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis ;

#include "separateHeaderFor_abstractSyntaxInstructionForGrammarAnalysis.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @syntaxInstructionListForGrammarAnalysis_2D_element struct                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_abstractSyntaxInstructionForGrammarAnalysis mAttribute_mInstruction ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element constructor_new (const class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractSyntaxInstructionForGrammarAnalysis reader_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @productionRuleListForGrammarAnalysis list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_productionRuleListForGrammarAnalysis : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_productionRuleListForGrammarAnalysis (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_productionRuleListForGrammarAnalysis (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mLeftNonterminalSymbol,
                                                  const class GALGAS_uint & in_mLeftNonterminalSymbolIndex,
                                                  const class GALGAS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                  const class GALGAS_uint & in_mProductionIndex
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_productionRuleListForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_productionRuleListForGrammarAnalysis constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_productionRuleListForGrammarAnalysis constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_uint & inOperand1,
                                                                                         const class GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                         const class GALGAS_uint & inOperand3
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_productionRuleListForGrammarAnalysis inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                      const class GALGAS_uint & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_productionRuleListForGrammarAnalysis operator_concat (const GALGAS_productionRuleListForGrammarAnalysis & inOperand
                                                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_productionRuleListForGrammarAnalysis add_operation (const GALGAS_productionRuleListForGrammarAnalysis & inOperand,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         class GALGAS_syntaxInstructionListForGrammarAnalysis constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_uint & outArgument1,
                                                    class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                                    class GALGAS_uint & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                                   class GALGAS_uint & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_uint & outArgument1,
                                                         class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                                         class GALGAS_uint & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_uint & outArgument1,
                                               class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                               class GALGAS_uint & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                              class GALGAS_uint & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionListForGrammarAnalysis reader_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLeftNonterminalSymbolAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mLeftNonterminalSymbolIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mProductionIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_productionRuleListForGrammarAnalysis reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_productionRuleListForGrammarAnalysis reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_productionRuleListForGrammarAnalysis ;
 
} ; // End of GALGAS_productionRuleListForGrammarAnalysis class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_productionRuleListForGrammarAnalysis : public cGenericAbstractEnumerator {
  public : cEnumerator_productionRuleListForGrammarAnalysis (const GALGAS_productionRuleListForGrammarAnalysis & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mLeftNonterminalSymbol (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mLeftNonterminalSymbolIndex (LOCATION_ARGS) const ;
  public : class GALGAS_syntaxInstructionListForGrammarAnalysis current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mProductionIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_productionRuleListForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @productionRuleListForGrammarAnalysis_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_productionRuleListForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mLeftNonterminalSymbol ;
  public : GALGAS_uint mAttribute_mLeftNonterminalSymbolIndex ;
  public : GALGAS_syntaxInstructionListForGrammarAnalysis mAttribute_mInstructionList ;
  public : GALGAS_uint mAttribute_mProductionIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_productionRuleListForGrammarAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_productionRuleListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_productionRuleListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_productionRuleListForGrammarAnalysis_2D_element (const GALGAS_lstring & in_mLeftNonterminalSymbol,
                                                                   const GALGAS_uint & in_mLeftNonterminalSymbolIndex,
                                                                   const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                   const GALGAS_uint & in_mProductionIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_productionRuleListForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_productionRuleListForGrammarAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_uint & inOperand1,
                                                                                          const class GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                          const class GALGAS_uint & inOperand3
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_productionRuleListForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionListForGrammarAnalysis reader_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLeftNonterminalSymbol (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mLeftNonterminalSymbolIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mProductionIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_productionRuleListForGrammarAnalysis_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @unusedNonTerminalSymbolMapForGrammarAnalysis map                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis (void) ;

//--------------------------------- Handle copy
  public : GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) ;
  public : GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & operator = (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis constructor_mapWithMapToOverride (const class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inOperand0
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_uint constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMNonTerminalIndexForKey (class GALGAS_uint constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mNonTerminalIndexForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis reader_overriddenMap (C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                          const GALGAS_string & inKey
                                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis ;
 
} ; // End of GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis : public cGenericAbstractEnumerator {
  public : cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inEnumeratedObject,
                                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Class for element of '@unusedNonTerminalSymbolMapForGrammarAnalysis' map                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mNonTerminalIndex ;

//--- Constructor
  public : cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                                     const GALGAS_uint & in_mNonTerminalIndex
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
//                           @unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element struct                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mNonTerminalIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                           const GALGAS_uint & in_mNonTerminalIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                  const class GALGAS_uint & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mNonTerminalIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @nonTerminalSymbolSortedListForGrammarAnalysis sorted list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis constructor_emptySortedList (LOCATION_ARGS) ;

  public : static GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis constructor_sortedListWithValue (const class GALGAS_lstring & inOperand0,
                                                                                                        const class GALGAS_uint & inOperand1,
                                                                                                        const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis operator_concat (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inOperand
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_popGreatest (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_uint & outArgument1,
                                                       class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popSmallest (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_uint & outArgument1,
                                                       class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis ;
 
} ; // End of GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis : public cGenericAbstractEnumerator {
  public : cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mNonTerminalSymbol (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
  public : class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          @nonTerminalSymbolSortedListForGrammarAnalysis_2D_element struct                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mNonTerminalSymbol ;
  public : GALGAS_uint mAttribute_mNonTerminalIndex ;
  public : GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis mAttribute_mNonterminalSymbolParametersMap ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (const GALGAS_lstring & in_mNonTerminalSymbol,
                                                                            const GALGAS_uint & in_mNonTerminalIndex,
                                                                            const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                   const class GALGAS_uint & inOperand1,
                                                                                                   const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mNonTerminalIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mNonTerminalSymbol (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis reader_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @branchListForGrammarAnalysis list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_branchListForGrammarAnalysis : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_branchListForGrammarAnalysis (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_branchListForGrammarAnalysis (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_branchListForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_branchListForGrammarAnalysis constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_branchListForGrammarAnalysis constructor_listWithValue (const class GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_branchListForGrammarAnalysis inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_branchListForGrammarAnalysis operator_concat (const GALGAS_branchListForGrammarAnalysis & inOperand
                                                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_branchListForGrammarAnalysis add_operation (const GALGAS_branchListForGrammarAnalysis & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionListForGrammarAnalysis reader_mSyntaxInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_branchListForGrammarAnalysis reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_branchListForGrammarAnalysis reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_branchListForGrammarAnalysis ;
 
} ; // End of GALGAS_branchListForGrammarAnalysis class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_branchListForGrammarAnalysis : public cGenericAbstractEnumerator {
  public : cEnumerator_branchListForGrammarAnalysis (const GALGAS_branchListForGrammarAnalysis & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_syntaxInstructionListForGrammarAnalysis current_mSyntaxInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_branchListForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @branchListForGrammarAnalysis_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_branchListForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_syntaxInstructionListForGrammarAnalysis mAttribute_mSyntaxInstructionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_branchListForGrammarAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_branchListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_branchListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_branchListForGrammarAnalysis_2D_element (const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_branchListForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_branchListForGrammarAnalysis_2D_element constructor_new (const class GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_branchListForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionListForGrammarAnalysis reader_mSyntaxInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_branchListForGrammarAnalysis_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @syntaxComponentListForGrammarAnalysis list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxComponentListForGrammarAnalysis : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_syntaxComponentListForGrammarAnalysis (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_syntaxComponentListForGrammarAnalysis (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                  const class GALGAS_lstring & in_mSyntaxComponentName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxComponentListForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_syntaxComponentListForGrammarAnalysis constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_syntaxComponentListForGrammarAnalysis constructor_listWithValue (const class GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_syntaxComponentListForGrammarAnalysis inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxComponentListForGrammarAnalysis operator_concat (const GALGAS_syntaxComponentListForGrammarAnalysis & inOperand
                                                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxComponentListForGrammarAnalysis add_operation (const GALGAS_syntaxComponentListForGrammarAnalysis & inOperand,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_productionRuleListForGrammarAnalysis constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_productionRuleListForGrammarAnalysis & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_productionRuleListForGrammarAnalysis & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_productionRuleListForGrammarAnalysis & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_productionRuleListForGrammarAnalysis & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_productionRuleListForGrammarAnalysis & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_productionRuleListForGrammarAnalysis reader_mProductionRulesListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mSyntaxComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxComponentListForGrammarAnalysis reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxComponentListForGrammarAnalysis reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syntaxComponentListForGrammarAnalysis ;
 
} ; // End of GALGAS_syntaxComponentListForGrammarAnalysis class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_syntaxComponentListForGrammarAnalysis : public cGenericAbstractEnumerator {
  public : cEnumerator_syntaxComponentListForGrammarAnalysis (const GALGAS_syntaxComponentListForGrammarAnalysis & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_productionRuleListForGrammarAnalysis current_mProductionRulesList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_syntaxComponentListForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @syntaxComponentListForGrammarAnalysis_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxComponentListForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_productionRuleListForGrammarAnalysis mAttribute_mProductionRulesList ;
  public : GALGAS_lstring mAttribute_mSyntaxComponentName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_syntaxComponentListForGrammarAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (const GALGAS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                    const GALGAS_lstring & in_mSyntaxComponentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxComponentListForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_syntaxComponentListForGrammarAnalysis_2D_element constructor_new (const class GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                           const class GALGAS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_productionRuleListForGrammarAnalysis reader_mProductionRulesList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mSyntaxComponentName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxComponentListForGrammarAnalysis_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @terminalSymbolsMapForGrammarAnalysis map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_terminalSymbolsMapForGrammarAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_terminalSymbolsMapForGrammarAnalysis_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalSymbolsMapForGrammarAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_terminalSymbolsMapForGrammarAnalysis (void) ;

//--------------------------------- Handle copy
  public : GALGAS_terminalSymbolsMapForGrammarAnalysis (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inSource) ;
  public : GALGAS_terminalSymbolsMapForGrammarAnalysis & operator = (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalSymbolsMapForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_terminalSymbolsMapForGrammarAnalysis constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_terminalSymbolsMapForGrammarAnalysis constructor_mapWithMapToOverride (const class GALGAS_terminalSymbolsMapForGrammarAnalysis & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_uint constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMTerminalIndexForKey (class GALGAS_uint constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mTerminalIndexForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalSymbolsMapForGrammarAnalysis reader_overriddenMap (C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_terminalSymbolsMapForGrammarAnalysis * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                  const GALGAS_string & inKey
                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_terminalSymbolsMapForGrammarAnalysis ;
 
} ; // End of GALGAS_terminalSymbolsMapForGrammarAnalysis class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_terminalSymbolsMapForGrammarAnalysis : public cGenericAbstractEnumerator {
  public : cEnumerator_terminalSymbolsMapForGrammarAnalysis (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mTerminalIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@terminalSymbolsMapForGrammarAnalysis' map                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_terminalSymbolsMapForGrammarAnalysis : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mTerminalIndex ;

//--- Constructor
  public : cMapElement_terminalSymbolsMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                             const GALGAS_uint & in_mTerminalIndex
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
//                               @terminalSymbolsMapForGrammarAnalysis_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mTerminalIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                   const GALGAS_uint & in_mTerminalIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_uint & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mTerminalIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @programListForGeneration list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_programListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_programListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_programListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_semanticDeclarationForGeneration & in_mDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_programListForGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_programListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_programListForGeneration constructor_listWithValue (const class GALGAS_semanticDeclarationForGeneration & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_programListForGeneration inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_semanticDeclarationForGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_programListForGeneration operator_concat (const GALGAS_programListForGeneration & inOperand
                                                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_programListForGeneration add_operation (const GALGAS_programListForGeneration & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_semanticDeclarationForGeneration constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_semanticDeclarationForGeneration & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_semanticDeclarationForGeneration & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_semanticDeclarationForGeneration & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_semanticDeclarationForGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_semanticDeclarationForGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationForGeneration reader_mDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_programListForGeneration reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_programListForGeneration reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_programListForGeneration ;
 
} ; // End of GALGAS_programListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_programListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_programListForGeneration (const GALGAS_programListForGeneration & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_semanticDeclarationForGeneration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_programListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @programListForGeneration_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_programListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_semanticDeclarationForGeneration mAttribute_mDeclaration ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_programListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_programListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_programListForGeneration_2D_element (const GALGAS_semanticDeclarationForGeneration & in_mDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_programListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_programListForGeneration_2D_element constructor_new (const class GALGAS_semanticDeclarationForGeneration & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_programListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationForGeneration reader_mDeclaration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_programListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programListForGeneration_2D_element ;

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
//   Enumerator declaration                                                                                            *
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
//   Enumerator declaration                                                                                            *
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
//   Enumerator declaration                                                                                            *
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
//   Enumerator declaration                                                                                            *
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
//   Enumerator declaration                                                                                            *
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
  public : C_BigInt mLexicalAttribute_bigintValue ;
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
   kToken_bigint,
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
  public : GALGAS_lbigint synthetizedAttribute_bigintValue (void) const ;
  public : GALGAS_lchar synthetizedAttribute_charValue (void) const ;
  public : GALGAS_ldouble synthetizedAttribute_floatValue (void) const ;
  public : GALGAS_lstring synthetizedAttribute_identifierString (void) const ;
  public : GALGAS_lsint synthetizedAttribute_sint_33__32_value (void) const ;
  public : GALGAS_lsint_36__34_ synthetizedAttribute_sint_36__34_value (void) const ;
  public : GALGAS_lstring synthetizedAttribute_tokenString (void) const ;
  public : GALGAS_luint synthetizedAttribute_uint_33__32_value (void) const ;
  public : GALGAS_luint_36__34_ synthetizedAttribute_uint_36__34_value (void) const ;


//--- Attribute access
  public : C_BigInt attributeValue_bigintValue (void) const ;
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
  public : virtual int16_t terminalVocabularyCount (void) const { return 145 ; }

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
#endif
