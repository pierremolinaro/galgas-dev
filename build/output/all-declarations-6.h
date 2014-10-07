#ifndef all_2D_declarations_2D__36__ENTITIES_DEFINED
#define all_2D_declarations_2D__36__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"

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
//   Enumerator declaration                                                    *
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
//   Enumerator declaration                                                    *
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
//   Enumerator declaration                                                    *
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
//   Enumerator declaration                                                    *
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
//   Enumerator declaration                                                    *
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
//   Enumerator declaration                                                    *
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
//   Enumerator declaration                                                    *
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
//   Enumerator declaration                                                    *
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
//                                    Parser class 'syntaxModelBuilder' declaration                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_syntaxModelBuilder {
//--- Virtual destructor
  public : virtual ~ cParser_syntaxModelBuilder (void) {}

//--- Non terminal declarations
  protected : virtual void nt_actual_5F_input_5F_parameter_5F_list_ (class GALGAS_actualInputParameterListAST & outArgument0,
                                                                     class C_String & ioSyntaxDirectedTranslationResult,
                                                                     class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                          class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_ (class GALGAS_actualParameterListAST & outArgument0,
                                                            class C_String & ioSyntaxDirectedTranslationResult,
                                                            class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                 class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_branchOfParseWhenInstruction_ (class GALGAS_syntaxInstructionList & outArgument0,
                                                             class C_String & ioSyntaxDirectedTranslationResult,
                                                             class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_branchOfParseWhenInstruction_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                  class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_branchOfParseWhenInstruction_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                           class C_String & ioSyntaxDirectedTranslationResult,
                                           class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                            class C_String & ioSyntaxDirectedTranslationResult,
                                                            class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                 class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_nonterminal_5F_declaration_ (class GALGAS_nonterminalDeclarationListAST & ioArgument0,
                                                           class C_String & ioSyntaxDirectedTranslationResult,
                                                           class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_nonterminal_5F_declaration_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_nonterminal_5F_declaration_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_nonterminal_5F_label_5F_declaration_ (const class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_nonTerminalLabelListAST & ioArgument1,
                                                                    class C_String & ioSyntaxDirectedTranslationResult,
                                                                    class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_nonterminal_5F_label_5F_declaration_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                         class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_nonterminal_5F_label_5F_declaration_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_declaration_ (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                        class C_String & ioSyntaxDirectedTranslationResult,
                                                        class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_declaration_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                             class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_declaration_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                        class C_String & ioSyntaxDirectedTranslationResult,
                                                        class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                             class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_component_5F_start_5F_symbol_ (class GALGAS_galgas_33_SyntaxComponentListAST_2D_element & outArgument0,
                                                                       class C_String & ioSyntaxDirectedTranslationResult,
                                                                       class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_component_5F_start_5F_symbol_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                            class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_component_5F_start_5F_symbol_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                            class C_String & ioSyntaxDirectedTranslationResult,
                                                                            class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                                 class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_instruction_ (class GALGAS_syntaxInstructionAST & outArgument0,
                                                      class C_String & ioSyntaxDirectedTranslationResult,
                                                      class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_instruction_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                           class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_instruction_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_instruction_5F_list_ (class GALGAS_syntaxInstructionList & outArgument0,
                                                              class C_String & ioSyntaxDirectedTranslationResult,
                                                              class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_instruction_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                   class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_instruction_5F_list_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_rule_5F_declaration_ (class GALGAS_syntaxRuleListAST & ioArgument0,
                                                              class C_String & ioSyntaxDirectedTranslationResult,
                                                              class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_rule_5F_declaration_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                   class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_rule_5F_declaration_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_rule_5F_label_ (const class GALGAS_lstring constinArgument0,
                                                        class GALGAS_syntaxRuleLabelListAST & ioArgument1,
                                                        class C_String & ioSyntaxDirectedTranslationResult,
                                                        class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_rule_5F_label_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                             class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_rule_5F_label_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_syntaxModelBuilder_syntax_5F_component_5F_start_5F_symbol_i0_ (GALGAS_galgas_33_SyntaxComponentListAST_2D_element & outArgument0,
                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                       C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_component_5F_start_5F_symbol_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                            C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_component_5F_start_5F_symbol_i0_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_nonterminal_5F_label_5F_declaration_i1_ (const GALGAS_lstring constinArgument0,
                                                                                    GALGAS_nonTerminalLabelListAST & ioArgument1,
                                                                                    C_String & ioSyntaxDirectedTranslationResult,
                                                                                    C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_nonterminal_5F_label_5F_declaration_i1_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                         C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_nonterminal_5F_label_5F_declaration_i1_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_nonterminal_5F_declaration_i2_ (GALGAS_nonterminalDeclarationListAST & ioArgument0,
                                                                           C_String & ioSyntaxDirectedTranslationResult,
                                                                           C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_nonterminal_5F_declaration_i2_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_nonterminal_5F_declaration_i2_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_rule_5F_label_i3_ (const GALGAS_lstring constinArgument0,
                                                                        GALGAS_syntaxRuleLabelListAST & ioArgument1,
                                                                        C_String & ioSyntaxDirectedTranslationResult,
                                                                        C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_rule_5F_label_i3_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                             C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_rule_5F_label_i3_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_rule_5F_declaration_i4_ (GALGAS_syntaxRuleListAST & ioArgument0,
                                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                                              C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_rule_5F_declaration_i4_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                   C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_rule_5F_declaration_i4_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_5F_list_i5_ (GALGAS_syntaxInstructionList & outArgument0,
                                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                                              C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_5F_list_i5_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                   C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_5F_list_i5_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i6_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                                      C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i6_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                           C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i6_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i7_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                                      C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i7_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                           C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i7_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i8_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                                      C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i8_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                           C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i8_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i9_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                                      C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i9_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                           C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i9_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i10_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i10_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i10_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_branchOfParseWhenInstruction_i11_ (GALGAS_syntaxInstructionList & outArgument0,
                                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                                              C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_branchOfParseWhenInstruction_i11_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                   C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_branchOfParseWhenInstruction_i11_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_branchOfParseWhenInstruction_i12_ (GALGAS_syntaxInstructionList & outArgument0,
                                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                                              C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_branchOfParseWhenInstruction_i12_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                   C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_branchOfParseWhenInstruction_i12_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i13_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i13_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i13_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i14_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i14_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i14_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i15_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i15_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_syntaxModelBuilder_syntax_5F_instruction_i15_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_syntaxModelBuilder_0 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_syntaxModelBuilder_1 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_syntaxModelBuilder_2 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_syntaxModelBuilder_3 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_syntaxModelBuilder_4 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_syntaxModelBuilder_5 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_syntaxModelBuilder_6 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_syntaxModelBuilder_7 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_syntaxModelBuilder_8 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_syntaxModelBuilder_9 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_syntaxModelBuilder_10 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_syntaxModelBuilder_11 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_syntaxModelBuilder_12 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_syntaxModelBuilder_13 (C_Lexique_galgas_5F_scanner *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @nonterminalCallInstruction class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonterminalCallInstruction : public GALGAS_syntaxInstructionAST {
//--- Constructor
  public : GALGAS_nonterminalCallInstruction (void) ;

//---
  public : inline const class cPtr_nonterminalCallInstruction * ptr (void) const { return (const cPtr_nonterminalCallInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_nonterminalCallInstruction (const cPtr_nonterminalCallInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonterminalCallInstruction extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_nonterminalCallInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2,
                                                                     const class GALGAS_actualParameterListAST & inOperand3,
                                                                     const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand4
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_nonterminalCallInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST reader_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult reader_mGrammarInstructionSyntaxDirectedTranslationResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLabelName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mNonterminalName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonterminalCallInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalCallInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @nonterminalCallInstruction class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_nonterminalCallInstruction : public cPtr_syntaxInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mNonterminalName ;
  public : GALGAS_lstring mAttribute_mLabelName ;
  public : GALGAS_actualParameterListAST mAttribute_mActualParameterList ;
  public : GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult ;

//--- Constructor
  public : cPtr_nonterminalCallInstruction (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_lstring & in_mNonterminalName,
                                            const GALGAS_lstring & in_mLabelName,
                                            const GALGAS_actualParameterListAST & in_mActualParameterList,
                                            const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mNonterminalName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLabelName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListAST reader_mActualParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult reader_mGrammarInstructionSyntaxDirectedTranslationResult (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @parseLoopInstruction class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_parseLoopInstruction : public GALGAS_syntaxInstructionAST {
//--- Constructor
  public : GALGAS_parseLoopInstruction (void) ;

//---
  public : inline const class cPtr_parseLoopInstruction * ptr (void) const { return (const cPtr_parseLoopInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_parseLoopInstruction (const cPtr_parseLoopInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_parseLoopInstruction extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_parseLoopInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                               const class GALGAS_semanticExpressionAST & inOperand1,
                                                               const class GALGAS_location & inOperand2,
                                                               const class GALGAS_semanticExpressionAST & inOperand3,
                                                               const class GALGAS_location & inOperand4,
                                                               const class GALGAS_syntaxInstructionList & inOperand5,
                                                               const class GALGAS_location & inOperand6
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_parseLoopInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList reader_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfVariantExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfWhileExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mVariantExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mWhileExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseLoopInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseLoopInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @parseLoopInstruction class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_parseLoopInstruction : public cPtr_syntaxInstructionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mVariantExpression ;
  public : GALGAS_location mAttribute_mEndOfVariantExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mWhileExpression ;
  public : GALGAS_location mAttribute_mEndOfWhileExpression ;
  public : GALGAS_syntaxInstructionList mAttribute_mDoInstructionList ;
  public : GALGAS_location mAttribute_mEndOfInstructionList ;

//--- Constructor
  public : cPtr_parseLoopInstruction (const GALGAS_location & in_mInstructionLocation,
                                      const GALGAS_semanticExpressionAST & in_mVariantExpression,
                                      const GALGAS_location & in_mEndOfVariantExpression,
                                      const GALGAS_semanticExpressionAST & in_mWhileExpression,
                                      const GALGAS_location & in_mEndOfWhileExpression,
                                      const GALGAS_syntaxInstructionList & in_mDoInstructionList,
                                      const GALGAS_location & in_mEndOfInstructionList
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mVariantExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfVariantExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mWhileExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfWhileExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxInstructionList reader_mDoInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @parseRewindInstruction class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_parseRewindInstruction : public GALGAS_syntaxInstructionAST {
//--- Constructor
  public : GALGAS_parseRewindInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_parseRewindInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_parseRewindInstruction * ptr (void) const { return (const cPtr_parseRewindInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_parseRewindInstruction (const cPtr_parseRewindInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_parseRewindInstruction extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_parseRewindInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_listOfSyntaxInstructionList & inOperand1,
                                                                 const class GALGAS_location & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_parseRewindInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfParseDoInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_listOfSyntaxInstructionList reader_mParseRewindBranchList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseRewindInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseRewindInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @parseRewindInstruction class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_parseRewindInstruction : public cPtr_syntaxInstructionAST {
//--- Attributes
  public : GALGAS_listOfSyntaxInstructionList mAttribute_mParseRewindBranchList ;
  public : GALGAS_location mAttribute_mEndOfParseDoInstruction ;

//--- Constructor
  public : cPtr_parseRewindInstruction (const GALGAS_location & in_mInstructionLocation,
                                        const GALGAS_listOfSyntaxInstructionList & in_mParseRewindBranchList,
                                        const GALGAS_location & in_mEndOfParseDoInstruction
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_listOfSyntaxInstructionList reader_mParseRewindBranchList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfParseDoInstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @parseWhenInstruction class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_parseWhenInstruction : public GALGAS_syntaxInstructionAST {
//--- Constructor
  public : GALGAS_parseWhenInstruction (void) ;

//---
  public : inline const class cPtr_parseWhenInstruction * ptr (void) const { return (const cPtr_parseWhenInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_parseWhenInstruction (const cPtr_parseWhenInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_parseWhenInstruction extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_parseWhenInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                               const class GALGAS_semanticExpressionAST & inOperand1,
                                                               const class GALGAS_location & inOperand2,
                                                               const class GALGAS_syntaxInstructionList & inOperand3,
                                                               const class GALGAS_location & inOperand4,
                                                               const class GALGAS_syntaxInstructionList & inOperand5,
                                                               const class GALGAS_location & inOperand6
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_parseWhenInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList reader_mElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfWhenExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfWhenInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mWhenExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList reader_mWhenInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseWhenInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseWhenInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @parseWhenInstruction class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_parseWhenInstruction : public cPtr_syntaxInstructionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mWhenExpression ;
  public : GALGAS_location mAttribute_mEndOfWhenExpression ;
  public : GALGAS_syntaxInstructionList mAttribute_mWhenInstructionList ;
  public : GALGAS_location mAttribute_mEndOfWhenInstructionList ;
  public : GALGAS_syntaxInstructionList mAttribute_mElseInstructionList ;
  public : GALGAS_location mAttribute_mEndOfElseInstructionList ;

//--- Constructor
  public : cPtr_parseWhenInstruction (const GALGAS_location & in_mInstructionLocation,
                                      const GALGAS_semanticExpressionAST & in_mWhenExpression,
                                      const GALGAS_location & in_mEndOfWhenExpression,
                                      const GALGAS_syntaxInstructionList & in_mWhenInstructionList,
                                      const GALGAS_location & in_mEndOfWhenInstructionList,
                                      const GALGAS_syntaxInstructionList & in_mElseInstructionList,
                                      const GALGAS_location & in_mEndOfElseInstructionList
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mWhenExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfWhenExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxInstructionList reader_mWhenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfWhenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxInstructionList reader_mElseInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfElseInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @repeatInstruction class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_repeatInstruction : public GALGAS_syntaxInstructionAST {
//--- Constructor
  public : GALGAS_repeatInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_repeatInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_repeatInstruction * ptr (void) const { return (const cPtr_repeatInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_repeatInstruction (const cPtr_repeatInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_repeatInstruction extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_repeatInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                            const class GALGAS_syntaxInstructionList & inOperand1,
                                                            const class GALGAS_location & inOperand2,
                                                            const class GALGAS_listOfSyntaxInstructionList & inOperand3,
                                                            const class GALGAS_location & inOperand4
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_repeatInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_repeat_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_repeated_5F_instructions_5F_branch (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_listOfSyntaxInstructionList reader_mRepeatBranchList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList reader_mRepeatedInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_repeatInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @repeatInstruction class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_repeatInstruction : public cPtr_syntaxInstructionAST {
//--- Attributes
  public : GALGAS_syntaxInstructionList mAttribute_mRepeatedInstructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch ;
  public : GALGAS_listOfSyntaxInstructionList mAttribute_mRepeatBranchList ;
  public : GALGAS_location mAttribute_mEndOf_5F_repeat_5F_instruction ;

//--- Constructor
  public : cPtr_repeatInstruction (const GALGAS_location & in_mInstructionLocation,
                                   const GALGAS_syntaxInstructionList & in_mRepeatedInstructionList,
                                   const GALGAS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                   const GALGAS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                                   const GALGAS_location & in_mEndOf_5F_repeat_5F_instruction
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxInstructionList reader_mRepeatedInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_repeated_5F_instructions_5F_branch (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_listOfSyntaxInstructionList reader_mRepeatBranchList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_repeat_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @selectInstruction class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_selectInstruction : public GALGAS_syntaxInstructionAST {
//--- Constructor
  public : GALGAS_selectInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_selectInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_selectInstruction * ptr (void) const { return (const cPtr_selectInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selectInstruction (const cPtr_selectInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selectInstruction extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_selectInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                            const class GALGAS_listOfSyntaxInstructionList & inOperand1,
                                                            const class GALGAS_location & inOperand2
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selectInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_select_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_listOfSyntaxInstructionList reader_mSelectBranchList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @selectInstruction class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selectInstruction : public cPtr_syntaxInstructionAST {
//--- Attributes
  public : GALGAS_listOfSyntaxInstructionList mAttribute_mSelectBranchList ;
  public : GALGAS_location mAttribute_mEndOf_5F_select_5F_instruction ;

//--- Constructor
  public : cPtr_selectInstruction (const GALGAS_location & in_mInstructionLocation,
                                   const GALGAS_listOfSyntaxInstructionList & in_mSelectBranchList,
                                   const GALGAS_location & in_mEndOf_5F_select_5F_instruction
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_listOfSyntaxInstructionList reader_mSelectBranchList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_select_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @syntaxSendInstruction class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxSendInstruction : public GALGAS_syntaxInstructionAST {
//--- Constructor
  public : GALGAS_syntaxSendInstruction (void) ;

//---
  public : inline const class cPtr_syntaxSendInstruction * ptr (void) const { return (const cPtr_syntaxSendInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_syntaxSendInstruction (const cPtr_syntaxSendInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxSendInstruction extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_syntaxSendInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_semanticExpressionAST & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syntaxSendInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxSendInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxSendInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @syntaxSendInstruction class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_syntaxSendInstruction : public cPtr_syntaxInstructionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mExpression ;

//--- Constructor
  public : cPtr_syntaxSendInstruction (const GALGAS_location & in_mInstructionLocation,
                                       const GALGAS_semanticExpressionAST & in_mExpression
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @terminalCheckInstruction class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalCheckInstruction : public GALGAS_syntaxInstructionAST {
//--- Constructor
  public : GALGAS_terminalCheckInstruction (void) ;

//---
  public : inline const class cPtr_terminalCheckInstruction * ptr (void) const { return (const cPtr_terminalCheckInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_terminalCheckInstruction (const cPtr_terminalCheckInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalCheckInstruction extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_terminalCheckInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_actualInputParameterListAST & inOperand2,
                                                                   const class GALGAS_lstringlist & inOperand3,
                                                                   const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand4,
                                                                   const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand5
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_terminalCheckInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualInputParameterListAST reader_mActualInputParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult reader_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult reader_mGrammarInstructionSyntaxDirectedTranslationToken (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mIndexingKeyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTerminalName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalCheckInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @terminalCheckInstruction class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_terminalCheckInstruction : public cPtr_syntaxInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTerminalName ;
  public : GALGAS_actualInputParameterListAST mAttribute_mActualInputParameterList ;
  public : GALGAS_lstringlist mAttribute_mIndexingKeyList ;
  public : GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  public : GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken ;

//--- Constructor
  public : cPtr_terminalCheckInstruction (const GALGAS_location & in_mInstructionLocation,
                                          const GALGAS_lstring & in_mTerminalName,
                                          const GALGAS_actualInputParameterListAST & in_mActualInputParameterList,
                                          const GALGAS_lstringlist & in_mIndexingKeyList,
                                          const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                          const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTerminalName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualInputParameterListAST reader_mActualInputParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mIndexingKeyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult reader_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult reader_mGrammarInstructionSyntaxDirectedTranslationToken (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Parser class 'grammarModelBuilder' declaration                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_grammarModelBuilder {
//--- Virtual destructor
  public : virtual ~ cParser_grammarModelBuilder (void) {}

//--- Non terminal declarations
  protected : virtual void nt_grammar_5F_component_5F_start_5F_symbol_ (class GALGAS_galgas_33_GrammarComponentListAST_2D_element & outArgument0,
                                                                        class C_String & ioSyntaxDirectedTranslationResult,
                                                                        class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_grammar_5F_component_5F_start_5F_symbol_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                             class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_grammar_5F_component_5F_start_5F_symbol_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_grammar_5F_start_5F_symbol_5F_label_ (const class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_nonTerminalLabelListAST & ioArgument1,
                                                                    class C_String & ioSyntaxDirectedTranslationResult,
                                                                    class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_grammar_5F_start_5F_symbol_5F_label_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                         class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_grammar_5F_start_5F_symbol_5F_label_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_label_5F_formal_5F_parameter_ (class GALGAS_lstring & outArgument0,
                                                             class GALGAS_formalParameterListAST & ioArgument1,
                                                             class C_String & ioSyntaxDirectedTranslationResult,
                                                             class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_label_5F_formal_5F_parameter_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                  class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_label_5F_formal_5F_parameter_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_grammarModelBuilder_grammar_5F_component_5F_start_5F_symbol_i0_ (GALGAS_galgas_33_GrammarComponentListAST_2D_element & outArgument0,
                                                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                                                         C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_grammar_5F_component_5F_start_5F_symbol_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                              C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_grammar_5F_component_5F_start_5F_symbol_i0_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_grammar_5F_start_5F_symbol_5F_label_i1_ (const GALGAS_lstring constinArgument0,
                                                                                     GALGAS_nonTerminalLabelListAST & ioArgument1,
                                                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_grammar_5F_start_5F_symbol_5F_label_i1_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                          C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_grammar_5F_start_5F_symbol_5F_label_i1_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i2_ (GALGAS_lstring & outArgument0,
                                                                              GALGAS_formalParameterListAST & ioArgument1,
                                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                                              C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i2_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                   C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i2_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i3_ (GALGAS_lstring & outArgument0,
                                                                              GALGAS_formalParameterListAST & ioArgument1,
                                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                                              C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i3_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                   C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i3_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i4_ (GALGAS_lstring & outArgument0,
                                                                              GALGAS_formalParameterListAST & ioArgument1,
                                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                                              C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i4_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                   C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i4_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i5_ (GALGAS_lstring & outArgument0,
                                                                              GALGAS_formalParameterListAST & ioArgument1,
                                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                                              C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i5_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                   C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i5_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_grammarModelBuilder_0 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_grammarModelBuilder_1 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_grammarModelBuilder_2 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_grammarModelBuilder_3 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_grammarModelBuilder_4 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_grammarModelBuilder_5 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_grammarModelBuilder_6 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_grammarModelBuilder_7 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_grammarModelBuilder_8 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_grammarModelBuilder_9 (C_Lexique_galgas_5F_scanner *) = 0 ;


} ;

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
//   Enumerator declaration                                                    *
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
//   Enumerator declaration                                                    *
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
//   Enumerator declaration                                                    *
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
//   Enumerator declaration                                                    *
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
//   Enumerator declaration                                                    *
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
//   Enumerator declaration                                                    *
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
//   Enumerator declaration                                                    *
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
//                                   Parser class 'programModelBuilder' declaration                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_programModelBuilder {
//--- Virtual destructor
  public : virtual ~ cParser_programModelBuilder (void) {}

//--- Non terminal declarations
  protected : virtual void nt_program_5F_component_5F_start_5F_symbol_ (class GALGAS_programComponentAST & outArgument0,
                                                                        class C_String & ioSyntaxDirectedTranslationResult,
                                                                        class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_program_5F_component_5F_start_5F_symbol_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                             class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_program_5F_component_5F_start_5F_symbol_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_declaration_ (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                        class C_String & ioSyntaxDirectedTranslationResult,
                                                        class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_declaration_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                             class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_declaration_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                                class C_String & ioSyntaxDirectedTranslationResult,
                                                                class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                     class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_programModelBuilder_program_5F_component_5F_start_5F_symbol_i0_ (GALGAS_programComponentAST & outArgument0,
                                                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                                                         C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_programModelBuilder_program_5F_component_5F_start_5F_symbol_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                              C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_programModelBuilder_program_5F_component_5F_start_5F_symbol_i0_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_programModelBuilder_0 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_programModelBuilder_1 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_programModelBuilder_2 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_programModelBuilder_3 (C_Lexique_galgas_5F_scanner *) = 0 ;


} ;

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
//   Enumerator declaration                                                    *
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
//                                                @sourceFileKind enum                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sourceFileKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_sourceFileKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_externSourceFile,
    kEnum_lexiqueSourceFile,
    kEnum_guiSourceFile,
    kEnum_optionSourceFile,
    kEnum_syntaxSourceFile,
    kEnum_semanticsSourceFile,
    kEnum_grammarSourceFile,
    kEnum_programSourceFile
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
  public : static GALGAS_sourceFileKind extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_sourceFileKind constructor_externSourceFile (LOCATION_ARGS) ;

  public : static GALGAS_sourceFileKind constructor_grammarSourceFile (LOCATION_ARGS) ;

  public : static GALGAS_sourceFileKind constructor_guiSourceFile (LOCATION_ARGS) ;

  public : static GALGAS_sourceFileKind constructor_lexiqueSourceFile (LOCATION_ARGS) ;

  public : static GALGAS_sourceFileKind constructor_optionSourceFile (LOCATION_ARGS) ;

  public : static GALGAS_sourceFileKind constructor_programSourceFile (LOCATION_ARGS) ;

  public : static GALGAS_sourceFileKind constructor_semanticsSourceFile (LOCATION_ARGS) ;

  public : static GALGAS_sourceFileKind constructor_syntaxSourceFile (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sourceFileKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isExternSourceFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isGrammarSourceFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isGuiSourceFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isLexiqueSourceFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isOptionSourceFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isProgramSourceFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSemanticsSourceFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSyntaxSourceFile (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sourceFileKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sourceFileKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @projectSourceList list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_projectSourceList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_projectSourceList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_projectSourceList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_sourceFileKind & in_mSourceKind,
                                                  const class GALGAS_lstring & in_mFilePath
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_projectSourceList extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_projectSourceList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_projectSourceList constructor_listWithValue (const class GALGAS_sourceFileKind & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_projectSourceList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_sourceFileKind & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_projectSourceList operator_concat (const GALGAS_projectSourceList & inOperand
                                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_projectSourceList add_operation (const GALGAS_projectSourceList & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_sourceFileKind constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_sourceFileKind & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_sourceFileKind & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_sourceFileKind & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_sourceFileKind & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_sourceFileKind & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFilePathAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sourceFileKind reader_mSourceKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_projectSourceList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_projectSourceList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_projectSourceList ;
 
} ; // End of GALGAS_projectSourceList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_projectSourceList : public cGenericAbstractEnumerator {
  public : cEnumerator_projectSourceList (const GALGAS_projectSourceList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_sourceFileKind current_mSourceKind (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFilePath (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_projectSourceList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectSourceList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @projectSourceList_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_projectSourceList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_sourceFileKind mAttribute_mSourceKind ;
  public : GALGAS_lstring mAttribute_mFilePath ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_projectSourceList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_projectSourceList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_projectSourceList_2D_element (const GALGAS_sourceFileKind & in_mSourceKind,
                                                const GALGAS_lstring & in_mFilePath) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_projectSourceList_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_projectSourceList_2D_element constructor_new (const class GALGAS_sourceFileKind & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_projectSourceList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFilePath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sourceFileKind reader_mSourceKind (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_projectSourceList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectSourceList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @qualifiedFeatureList list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_qualifiedFeatureList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_qualifiedFeatureList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_qualifiedFeatureList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFeatureName,
                                                  const class GALGAS_lstring & in_mFeatureValue
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_qualifiedFeatureList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_qualifiedFeatureList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_qualifiedFeatureList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_qualifiedFeatureList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_qualifiedFeatureList operator_concat (const GALGAS_qualifiedFeatureList & inOperand
                                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_qualifiedFeatureList add_operation (const GALGAS_qualifiedFeatureList & inOperand,
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

  public : VIRTUAL_IN_DEBUG class GALGAS_qualifiedFeatureList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_qualifiedFeatureList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_qualifiedFeatureList ;
 
} ; // End of GALGAS_qualifiedFeatureList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_qualifiedFeatureList : public cGenericAbstractEnumerator {
  public : cEnumerator_qualifiedFeatureList (const GALGAS_qualifiedFeatureList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mFeatureName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFeatureValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_qualifiedFeatureList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_qualifiedFeatureList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @qualifiedFeatureList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_qualifiedFeatureList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mFeatureName ;
  public : GALGAS_lstring mAttribute_mFeatureValue ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_qualifiedFeatureList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_qualifiedFeatureList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_qualifiedFeatureList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_qualifiedFeatureList_2D_element (const GALGAS_lstring & in_mFeatureName,
                                                   const GALGAS_lstring & in_mFeatureValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_qualifiedFeatureList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_qualifiedFeatureList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_qualifiedFeatureList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFeatureName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFeatureValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_qualifiedFeatureList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_qualifiedFeatureList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @XcodeObjectReferenceList list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_XcodeObjectReferenceList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_XcodeObjectReferenceList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_XcodeObjectReferenceList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mRefString,
                                                  const class GALGAS_string & in_mComment
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_XcodeObjectReferenceList extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_XcodeObjectReferenceList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_XcodeObjectReferenceList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                             const class GALGAS_string & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_XcodeObjectReferenceList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_XcodeObjectReferenceList operator_concat (const GALGAS_XcodeObjectReferenceList & inOperand
                                                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_XcodeObjectReferenceList add_operation (const GALGAS_XcodeObjectReferenceList & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mRefStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XcodeObjectReferenceList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XcodeObjectReferenceList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_XcodeObjectReferenceList ;
 
} ; // End of GALGAS_XcodeObjectReferenceList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_XcodeObjectReferenceList : public cGenericAbstractEnumerator {
  public : cEnumerator_XcodeObjectReferenceList (const GALGAS_XcodeObjectReferenceList & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mRefString (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mComment (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_XcodeObjectReferenceList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XcodeObjectReferenceList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @XcodeObjectReferenceList_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_XcodeObjectReferenceList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mRefString ;
  public : GALGAS_string mAttribute_mComment ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_XcodeObjectReferenceList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_XcodeObjectReferenceList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_XcodeObjectReferenceList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_XcodeObjectReferenceList_2D_element (const GALGAS_string & in_mRefString,
                                                       const GALGAS_string & in_mComment) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_XcodeObjectReferenceList_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_XcodeObjectReferenceList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                              const class GALGAS_string & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_XcodeObjectReferenceList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mRefString (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_XcodeObjectReferenceList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XcodeObjectReferenceList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @Xcode_PBXFileReference_map map                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_Xcode_5F_PBXFileReference_5F_map ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_Xcode_5F_PBXFileReference_5F_map_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXFileReference_5F_map : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXFileReference_5F_map (void) ;

//--------------------------------- Handle copy
  public : GALGAS_Xcode_5F_PBXFileReference_5F_map (const GALGAS_Xcode_5F_PBXFileReference_5F_map & inSource) ;
  public : GALGAS_Xcode_5F_PBXFileReference_5F_map & operator = (const GALGAS_Xcode_5F_PBXFileReference_5F_map & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXFileReference_5F_map extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXFileReference_5F_map constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_Xcode_5F_PBXFileReference_5F_map constructor_mapWithMapToOverride (const class GALGAS_Xcode_5F_PBXFileReference_5F_map & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_Xcode_5F_PBXFileReference_5F_abstract & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_Xcode_5F_PBXFileReference_5F_abstract constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMFileReferenceForKey (class GALGAS_Xcode_5F_PBXFileReference_5F_abstract constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_Xcode_5F_PBXFileReference_5F_abstract & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXFileReference_5F_abstract reader_mFileReferenceForKey (const class GALGAS_string & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXFileReference_5F_map reader_overriddenMap (C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_Xcode_5F_PBXFileReference_5F_map * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                              const GALGAS_string & inKey
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_Xcode_5F_PBXFileReference_5F_map ;
 
} ; // End of GALGAS_Xcode_5F_PBXFileReference_5F_map class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_Xcode_5F_PBXFileReference_5F_map : public cGenericAbstractEnumerator {
  public : cEnumerator_Xcode_5F_PBXFileReference_5F_map (const GALGAS_Xcode_5F_PBXFileReference_5F_map & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_Xcode_5F_PBXFileReference_5F_abstract current_mFileReference (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_map ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @Xcode_5F_PBXFileReference_5F_abstract class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXFileReference_5F_abstract : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_Xcode_5F_PBXFileReference_5F_abstract (void) ;

//---
  public : inline const class cPtr_Xcode_5F_PBXFileReference_5F_abstract * ptr (void) const { return (const cPtr_Xcode_5F_PBXFileReference_5F_abstract *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_Xcode_5F_PBXFileReference_5F_abstract (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXFileReference_5F_abstract extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_abstract & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFileName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXFileReference_5F_abstract class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_abstract ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@Xcode_PBXFileReference_map' map                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_Xcode_5F_PBXFileReference_5F_map : public cMapElement {
//--- Map attributes
  public : GALGAS_Xcode_5F_PBXFileReference_5F_abstract mAttribute_mFileReference ;

//--- Constructor
  public : cMapElement_Xcode_5F_PBXFileReference_5F_map (const GALGAS_lstring & inKey,
                                                         const GALGAS_Xcode_5F_PBXFileReference_5F_abstract & in_mFileReference
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
//                                 @Xcode_5F_PBXFileReference_5F_map_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_Xcode_5F_PBXFileReference_5F_abstract mAttribute_mFileReference ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element (const GALGAS_lstring & in_lkey,
                                                               const GALGAS_Xcode_5F_PBXFileReference_5F_abstract & in_mFileReference) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_Xcode_5F_PBXFileReference_5F_abstract & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXFileReference_5F_abstract reader_mFileReference (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @Xcode_PBXBuildFile_list list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXBuildFile_5F_list : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXBuildFile_5F_list (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_Xcode_5F_PBXBuildFile_5F_list (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_Xcode_5F_PBXBuildFile & in_mFile
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXBuildFile_5F_list extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXBuildFile_5F_list constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_Xcode_5F_PBXBuildFile_5F_list constructor_listWithValue (const class GALGAS_Xcode_5F_PBXBuildFile & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_Xcode_5F_PBXBuildFile_5F_list inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_Xcode_5F_PBXBuildFile & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXBuildFile_5F_list operator_concat (const GALGAS_Xcode_5F_PBXBuildFile_5F_list & inOperand
                                                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXBuildFile_5F_list add_operation (const GALGAS_Xcode_5F_PBXBuildFile_5F_list & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_Xcode_5F_PBXBuildFile constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_Xcode_5F_PBXBuildFile & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_Xcode_5F_PBXBuildFile & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_Xcode_5F_PBXBuildFile & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_Xcode_5F_PBXBuildFile & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_Xcode_5F_PBXBuildFile & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXBuildFile reader_mFileAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXBuildFile_5F_list reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXBuildFile_5F_list reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_Xcode_5F_PBXBuildFile_5F_list ;
 
} ; // End of GALGAS_Xcode_5F_PBXBuildFile_5F_list class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_Xcode_5F_PBXBuildFile_5F_list : public cGenericAbstractEnumerator {
  public : cEnumerator_Xcode_5F_PBXBuildFile_5F_list (const GALGAS_Xcode_5F_PBXBuildFile_5F_list & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_Xcode_5F_PBXBuildFile current_mFile (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_Xcode_5F_PBXBuildFile_5F_list_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXBuildFile_5F_list ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @Xcode_5F_PBXBuildFile class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXBuildFile : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_Xcode_5F_PBXBuildFile (void) ;

//---
  public : inline const class cPtr_Xcode_5F_PBXBuildFile * ptr (void) const { return (const cPtr_Xcode_5F_PBXBuildFile *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_Xcode_5F_PBXBuildFile (const cPtr_Xcode_5F_PBXBuildFile * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXBuildFile extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXBuildFile constructor_new (const class GALGAS_uint & inOperand0,
                                                                const class GALGAS_Xcode_5F_PBXFileReference_5F_abstract & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXBuildFile & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXFileReference_5F_abstract reader_mSourceFile (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXBuildFile class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXBuildFile ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @Xcode_PBXFileReference_abstract class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_Xcode_5F_PBXFileReference_5F_abstract : public acPtr_class {
//--- Attributes
  public : GALGAS_uint mAttribute_mSequenceNumber ;
  public : GALGAS_string mAttribute_mFileName ;

//--- Constructor
  public : cPtr_Xcode_5F_PBXFileReference_5F_abstract (const GALGAS_uint & in_mSequenceNumber,
                                                       const GALGAS_string & in_mFileName
                                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFileName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @Xcode_PBXBuildFile class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_Xcode_5F_PBXBuildFile : public acPtr_class {
//--- Attributes
  public : GALGAS_uint mAttribute_mSequenceNumber ;
  public : GALGAS_Xcode_5F_PBXFileReference_5F_abstract mAttribute_mSourceFile ;

//--- Constructor
  public : cPtr_Xcode_5F_PBXBuildFile (const GALGAS_uint & in_mSequenceNumber,
                                       const GALGAS_Xcode_5F_PBXFileReference_5F_abstract & in_mSourceFile
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXFileReference_5F_abstract reader_mSourceFile (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @Xcode_5F_PBXBuildFile_5F_list_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXBuildFile_5F_list_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_Xcode_5F_PBXBuildFile mAttribute_mFile ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXBuildFile_5F_list_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_Xcode_5F_PBXBuildFile_5F_list_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_Xcode_5F_PBXBuildFile_5F_list_2D_element (const GALGAS_Xcode_5F_PBXBuildFile & in_mFile) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXBuildFile_5F_list_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXBuildFile_5F_list_2D_element constructor_new (const class GALGAS_Xcode_5F_PBXBuildFile & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXBuildFile_5F_list_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXBuildFile reader_mFile (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXBuildFile_5F_list_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXBuildFile_5F_list_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @Xcode_PBXSourcesBuildPhase_list list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_Xcode_5F_PBXSourcesBuildPhase & in_mBuildPhase
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list constructor_listWithValue (const class GALGAS_Xcode_5F_PBXSourcesBuildPhase & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_Xcode_5F_PBXSourcesBuildPhase & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list operator_concat (const GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list & inOperand
                                                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list add_operation (const GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list & inOperand,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_Xcode_5F_PBXSourcesBuildPhase constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_Xcode_5F_PBXSourcesBuildPhase & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_Xcode_5F_PBXSourcesBuildPhase & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_Xcode_5F_PBXSourcesBuildPhase & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_Xcode_5F_PBXSourcesBuildPhase & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_Xcode_5F_PBXSourcesBuildPhase & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXSourcesBuildPhase reader_mBuildPhaseAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_Xcode_5F_PBXSourcesBuildPhase_5F_list ;
 
} ; // End of GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_Xcode_5F_PBXSourcesBuildPhase_5F_list : public cGenericAbstractEnumerator {
  public : cEnumerator_Xcode_5F_PBXSourcesBuildPhase_5F_list (const GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_Xcode_5F_PBXSourcesBuildPhase current_mBuildPhase (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @Xcode_5F_PBXSourcesBuildPhase class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXSourcesBuildPhase : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_Xcode_5F_PBXSourcesBuildPhase (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_PBXSourcesBuildPhase constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_Xcode_5F_PBXSourcesBuildPhase * ptr (void) const { return (const cPtr_Xcode_5F_PBXSourcesBuildPhase *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_Xcode_5F_PBXSourcesBuildPhase (const cPtr_Xcode_5F_PBXSourcesBuildPhase * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXSourcesBuildPhase extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXSourcesBuildPhase constructor_new (const class GALGAS_uint & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_Xcode_5F_PBXBuildFile_5F_list & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXSourcesBuildPhase & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXBuildFile_5F_list reader_mFileReferenceList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mNameForComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXSourcesBuildPhase class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXSourcesBuildPhase ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @Xcode_PBXSourcesBuildPhase class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_Xcode_5F_PBXSourcesBuildPhase : public acPtr_class {
//--- Attributes
  public : GALGAS_uint mAttribute_mSequenceNumber ;
  public : GALGAS_string mAttribute_mNameForComment ;
  public : GALGAS_Xcode_5F_PBXBuildFile_5F_list mAttribute_mFileReferenceList ;

//--- Constructor
  public : cPtr_Xcode_5F_PBXSourcesBuildPhase (const GALGAS_uint & in_mSequenceNumber,
                                               const GALGAS_string & in_mNameForComment,
                                               const GALGAS_Xcode_5F_PBXBuildFile_5F_list & in_mFileReferenceList
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mNameForComment (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXBuildFile_5F_list reader_mFileReferenceList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @Xcode_5F_PBXSourcesBuildPhase_5F_list_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_Xcode_5F_PBXSourcesBuildPhase mAttribute_mBuildPhase ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list_2D_element (const GALGAS_Xcode_5F_PBXSourcesBuildPhase & in_mBuildPhase) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list_2D_element constructor_new (const class GALGAS_Xcode_5F_PBXSourcesBuildPhase & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXSourcesBuildPhase reader_mBuildPhase (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXSourcesBuildPhase_5F_list_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @Xcode_PBXResourcesBuildPhase_list list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_Xcode_5F_PBXResourcesBuildPhase & in_mBuildPhase
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list constructor_listWithValue (const class GALGAS_Xcode_5F_PBXResourcesBuildPhase & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_Xcode_5F_PBXResourcesBuildPhase & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list operator_concat (const GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list & inOperand
                                                                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list add_operation (const GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list & inOperand,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_Xcode_5F_PBXResourcesBuildPhase constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_Xcode_5F_PBXResourcesBuildPhase & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_Xcode_5F_PBXResourcesBuildPhase & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_Xcode_5F_PBXResourcesBuildPhase & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_Xcode_5F_PBXResourcesBuildPhase & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_Xcode_5F_PBXResourcesBuildPhase & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXResourcesBuildPhase reader_mBuildPhaseAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_Xcode_5F_PBXResourcesBuildPhase_5F_list ;
 
} ; // End of GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_Xcode_5F_PBXResourcesBuildPhase_5F_list : public cGenericAbstractEnumerator {
  public : cEnumerator_Xcode_5F_PBXResourcesBuildPhase_5F_list (const GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_Xcode_5F_PBXResourcesBuildPhase current_mBuildPhase (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @Xcode_5F_PBXResourcesBuildPhase class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXResourcesBuildPhase : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_Xcode_5F_PBXResourcesBuildPhase (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_PBXResourcesBuildPhase constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_Xcode_5F_PBXResourcesBuildPhase * ptr (void) const { return (const cPtr_Xcode_5F_PBXResourcesBuildPhase *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_Xcode_5F_PBXResourcesBuildPhase (const cPtr_Xcode_5F_PBXResourcesBuildPhase * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXResourcesBuildPhase extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXResourcesBuildPhase constructor_new (const class GALGAS_uint & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          const class GALGAS_Xcode_5F_PBXBuildFile_5F_list & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXResourcesBuildPhase & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXBuildFile_5F_list reader_mFileReferenceList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mNameForComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXResourcesBuildPhase class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXResourcesBuildPhase ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @Xcode_PBXResourcesBuildPhase class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_Xcode_5F_PBXResourcesBuildPhase : public acPtr_class {
//--- Attributes
  public : GALGAS_uint mAttribute_mSequenceNumber ;
  public : GALGAS_string mAttribute_mNameForComment ;
  public : GALGAS_Xcode_5F_PBXBuildFile_5F_list mAttribute_mFileReferenceList ;

//--- Constructor
  public : cPtr_Xcode_5F_PBXResourcesBuildPhase (const GALGAS_uint & in_mSequenceNumber,
                                                 const GALGAS_string & in_mNameForComment,
                                                 const GALGAS_Xcode_5F_PBXBuildFile_5F_list & in_mFileReferenceList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mNameForComment (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXBuildFile_5F_list reader_mFileReferenceList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @Xcode_5F_PBXResourcesBuildPhase_5F_list_2D_element struct                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_Xcode_5F_PBXResourcesBuildPhase mAttribute_mBuildPhase ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list_2D_element (const GALGAS_Xcode_5F_PBXResourcesBuildPhase & in_mBuildPhase) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list_2D_element extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list_2D_element constructor_new (const class GALGAS_Xcode_5F_PBXResourcesBuildPhase & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXResourcesBuildPhase reader_mBuildPhase (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXResourcesBuildPhase_5F_list_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @Xcode_PBXCopyBuildPhase_list list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_Xcode_5F_PBXCopyBuildPhase & in_mBuildPhase
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list constructor_listWithValue (const class GALGAS_Xcode_5F_PBXCopyBuildPhase & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_Xcode_5F_PBXCopyBuildPhase & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list operator_concat (const GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list & inOperand
                                                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list add_operation (const GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list & inOperand,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_Xcode_5F_PBXCopyBuildPhase constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_Xcode_5F_PBXCopyBuildPhase & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_Xcode_5F_PBXCopyBuildPhase & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_Xcode_5F_PBXCopyBuildPhase & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_Xcode_5F_PBXCopyBuildPhase & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_Xcode_5F_PBXCopyBuildPhase & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXCopyBuildPhase reader_mBuildPhaseAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_Xcode_5F_PBXCopyBuildPhase_5F_list ;
 
} ; // End of GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_Xcode_5F_PBXCopyBuildPhase_5F_list : public cGenericAbstractEnumerator {
  public : cEnumerator_Xcode_5F_PBXCopyBuildPhase_5F_list (const GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list & inEnumeratedObject,
                                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_Xcode_5F_PBXCopyBuildPhase current_mBuildPhase (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @Xcode_5F_PBXCopyBuildPhase class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXCopyBuildPhase : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_Xcode_5F_PBXCopyBuildPhase (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_PBXCopyBuildPhase constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_Xcode_5F_PBXCopyBuildPhase * ptr (void) const { return (const cPtr_Xcode_5F_PBXCopyBuildPhase *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_Xcode_5F_PBXCopyBuildPhase (const cPtr_Xcode_5F_PBXCopyBuildPhase * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXCopyBuildPhase extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXCopyBuildPhase constructor_new (const class GALGAS_uint & inOperand0,
                                                                     const class GALGAS_string & inOperand1,
                                                                     const class GALGAS_uint & inOperand2,
                                                                     const class GALGAS_string & inOperand3,
                                                                     const class GALGAS_Xcode_5F_PBXBuildFile_5F_list & inOperand4
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXCopyBuildPhase & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mDestinationPath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mDestinationSubfolder (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXBuildFile_5F_list reader_mFileReferenceList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mNameForComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXCopyBuildPhase class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXCopyBuildPhase ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @Xcode_PBXCopyBuildPhase class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_Xcode_5F_PBXCopyBuildPhase : public acPtr_class {
//--- Attributes
  public : GALGAS_uint mAttribute_mSequenceNumber ;
  public : GALGAS_string mAttribute_mNameForComment ;
  public : GALGAS_uint mAttribute_mDestinationSubfolder ;
  public : GALGAS_string mAttribute_mDestinationPath ;
  public : GALGAS_Xcode_5F_PBXBuildFile_5F_list mAttribute_mFileReferenceList ;

//--- Constructor
  public : cPtr_Xcode_5F_PBXCopyBuildPhase (const GALGAS_uint & in_mSequenceNumber,
                                            const GALGAS_string & in_mNameForComment,
                                            const GALGAS_uint & in_mDestinationSubfolder,
                                            const GALGAS_string & in_mDestinationPath,
                                            const GALGAS_Xcode_5F_PBXBuildFile_5F_list & in_mFileReferenceList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mNameForComment (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mDestinationSubfolder (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mDestinationPath (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXBuildFile_5F_list reader_mFileReferenceList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @Xcode_5F_PBXCopyBuildPhase_5F_list_2D_element struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_Xcode_5F_PBXCopyBuildPhase mAttribute_mBuildPhase ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list_2D_element (const GALGAS_Xcode_5F_PBXCopyBuildPhase & in_mBuildPhase) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list_2D_element extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list_2D_element constructor_new (const class GALGAS_Xcode_5F_PBXCopyBuildPhase & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXCopyBuildPhase reader_mBuildPhase (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXCopyBuildPhase_5F_list_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @Xcode_PBXFrameworksBuildPhase_list list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_Xcode_5F_PBXFrameworksBuildPhase & in_mBuildPhase
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list constructor_listWithValue (const class GALGAS_Xcode_5F_PBXFrameworksBuildPhase & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_Xcode_5F_PBXFrameworksBuildPhase & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list operator_concat (const GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list & inOperand
                                                                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list add_operation (const GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list & inOperand,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_Xcode_5F_PBXFrameworksBuildPhase constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_Xcode_5F_PBXFrameworksBuildPhase & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_Xcode_5F_PBXFrameworksBuildPhase & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_Xcode_5F_PBXFrameworksBuildPhase & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_Xcode_5F_PBXFrameworksBuildPhase & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_Xcode_5F_PBXFrameworksBuildPhase & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXFrameworksBuildPhase reader_mBuildPhaseAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_Xcode_5F_PBXFrameworksBuildPhase_5F_list ;
 
} ; // End of GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_Xcode_5F_PBXFrameworksBuildPhase_5F_list : public cGenericAbstractEnumerator {
  public : cEnumerator_Xcode_5F_PBXFrameworksBuildPhase_5F_list (const GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list & inEnumeratedObject,
                                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_Xcode_5F_PBXFrameworksBuildPhase current_mBuildPhase (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @Xcode_5F_PBXFrameworksBuildPhase class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXFrameworksBuildPhase : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_Xcode_5F_PBXFrameworksBuildPhase (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_PBXFrameworksBuildPhase constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_Xcode_5F_PBXFrameworksBuildPhase * ptr (void) const { return (const cPtr_Xcode_5F_PBXFrameworksBuildPhase *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_Xcode_5F_PBXFrameworksBuildPhase (const cPtr_Xcode_5F_PBXFrameworksBuildPhase * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXFrameworksBuildPhase extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXFrameworksBuildPhase constructor_new (const class GALGAS_uint & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_Xcode_5F_PBXBuildFile_5F_list & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXFrameworksBuildPhase & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXBuildFile_5F_list reader_mFileReferenceList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mNameForComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXFrameworksBuildPhase class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXFrameworksBuildPhase ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @Xcode_PBXFrameworksBuildPhase class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_Xcode_5F_PBXFrameworksBuildPhase : public acPtr_class {
//--- Attributes
  public : GALGAS_uint mAttribute_mSequenceNumber ;
  public : GALGAS_string mAttribute_mNameForComment ;
  public : GALGAS_Xcode_5F_PBXBuildFile_5F_list mAttribute_mFileReferenceList ;

//--- Constructor
  public : cPtr_Xcode_5F_PBXFrameworksBuildPhase (const GALGAS_uint & in_mSequenceNumber,
                                                  const GALGAS_string & in_mNameForComment,
                                                  const GALGAS_Xcode_5F_PBXBuildFile_5F_list & in_mFileReferenceList
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mNameForComment (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXBuildFile_5F_list reader_mFileReferenceList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @Xcode_5F_PBXFrameworksBuildPhase_5F_list_2D_element struct                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_Xcode_5F_PBXFrameworksBuildPhase mAttribute_mBuildPhase ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list_2D_element (const GALGAS_Xcode_5F_PBXFrameworksBuildPhase & in_mBuildPhase) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list_2D_element extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list_2D_element constructor_new (const class GALGAS_Xcode_5F_PBXFrameworksBuildPhase & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXFrameworksBuildPhase reader_mBuildPhase (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @Xcode_PBXGroup_list list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXGroup_5F_list : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXGroup_5F_list (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_Xcode_5F_PBXGroup_5F_list (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_Xcode_5F_PBXGroup & in_mGroup
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXGroup_5F_list extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXGroup_5F_list constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_Xcode_5F_PBXGroup_5F_list constructor_listWithValue (const class GALGAS_Xcode_5F_PBXGroup & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_Xcode_5F_PBXGroup_5F_list inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_Xcode_5F_PBXGroup & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXGroup_5F_list operator_concat (const GALGAS_Xcode_5F_PBXGroup_5F_list & inOperand
                                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXGroup_5F_list add_operation (const GALGAS_Xcode_5F_PBXGroup_5F_list & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_Xcode_5F_PBXGroup constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_Xcode_5F_PBXGroup & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_Xcode_5F_PBXGroup & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_Xcode_5F_PBXGroup & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_Xcode_5F_PBXGroup & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_Xcode_5F_PBXGroup & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXGroup reader_mGroupAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXGroup_5F_list reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXGroup_5F_list reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_Xcode_5F_PBXGroup_5F_list ;
 
} ; // End of GALGAS_Xcode_5F_PBXGroup_5F_list class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_Xcode_5F_PBXGroup_5F_list : public cGenericAbstractEnumerator {
  public : cEnumerator_Xcode_5F_PBXGroup_5F_list (const GALGAS_Xcode_5F_PBXGroup_5F_list & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_Xcode_5F_PBXGroup current_mGroup (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_Xcode_5F_PBXGroup_5F_list_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXGroup_5F_list ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @Xcode_5F_PBXGroup class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXGroup : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_Xcode_5F_PBXGroup (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_PBXGroup constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_Xcode_5F_PBXGroup * ptr (void) const { return (const cPtr_Xcode_5F_PBXGroup *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_Xcode_5F_PBXGroup (const cPtr_Xcode_5F_PBXGroup * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXGroup extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXGroup constructor_new (const class GALGAS_uint & inOperand0,
                                                            const class GALGAS_string & inOperand1,
                                                            const class GALGAS_string & inOperand2,
                                                            const class GALGAS_XcodeObjectReferenceList & inOperand3
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXGroup & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_XcodeObjectReferenceList reader_mChildrenGroupList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mGroupName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mGroupPath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXGroup class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXGroup ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @Xcode_PBXGroup class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_Xcode_5F_PBXGroup : public acPtr_class {
//--- Attributes
  public : GALGAS_uint mAttribute_mSequenceNumber ;
  public : GALGAS_string mAttribute_mGroupName ;
  public : GALGAS_string mAttribute_mGroupPath ;
  public : GALGAS_XcodeObjectReferenceList mAttribute_mChildrenGroupList ;

//--- Constructor
  public : cPtr_Xcode_5F_PBXGroup (const GALGAS_uint & in_mSequenceNumber,
                                   const GALGAS_string & in_mGroupName,
                                   const GALGAS_string & in_mGroupPath,
                                   const GALGAS_XcodeObjectReferenceList & in_mChildrenGroupList
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mGroupName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mGroupPath (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_XcodeObjectReferenceList reader_mChildrenGroupList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @Xcode_5F_PBXGroup_5F_list_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXGroup_5F_list_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_Xcode_5F_PBXGroup mAttribute_mGroup ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_PBXGroup_5F_list_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXGroup_5F_list_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_Xcode_5F_PBXGroup_5F_list_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_Xcode_5F_PBXGroup_5F_list_2D_element (const GALGAS_Xcode_5F_PBXGroup & in_mGroup) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXGroup_5F_list_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXGroup_5F_list_2D_element constructor_new (const class GALGAS_Xcode_5F_PBXGroup & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXGroup_5F_list_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXGroup reader_mGroup (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXGroup_5F_list_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXGroup_5F_list_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @Xcode_XCBuildConfiguration_list list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_XCBuildConfiguration_5F_list : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_XCBuildConfiguration_5F_list (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_Xcode_5F_XCBuildConfiguration_5F_list (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_Xcode_5F_XCBuildConfiguration & in_mBuildConfig
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_XCBuildConfiguration_5F_list extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_XCBuildConfiguration_5F_list constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_Xcode_5F_XCBuildConfiguration_5F_list constructor_listWithValue (const class GALGAS_Xcode_5F_XCBuildConfiguration & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_Xcode_5F_XCBuildConfiguration_5F_list inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_Xcode_5F_XCBuildConfiguration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_XCBuildConfiguration_5F_list operator_concat (const GALGAS_Xcode_5F_XCBuildConfiguration_5F_list & inOperand
                                                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_XCBuildConfiguration_5F_list add_operation (const GALGAS_Xcode_5F_XCBuildConfiguration_5F_list & inOperand,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_Xcode_5F_XCBuildConfiguration constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_Xcode_5F_XCBuildConfiguration & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_Xcode_5F_XCBuildConfiguration & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_Xcode_5F_XCBuildConfiguration & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_Xcode_5F_XCBuildConfiguration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_Xcode_5F_XCBuildConfiguration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_XCBuildConfiguration reader_mBuildConfigAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_XCBuildConfiguration_5F_list reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_XCBuildConfiguration_5F_list reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_Xcode_5F_XCBuildConfiguration_5F_list ;
 
} ; // End of GALGAS_Xcode_5F_XCBuildConfiguration_5F_list class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_Xcode_5F_XCBuildConfiguration_5F_list : public cGenericAbstractEnumerator {
  public : cEnumerator_Xcode_5F_XCBuildConfiguration_5F_list (const GALGAS_Xcode_5F_XCBuildConfiguration_5F_list & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_Xcode_5F_XCBuildConfiguration current_mBuildConfig (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_Xcode_5F_XCBuildConfiguration_5F_list_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_XCBuildConfiguration_5F_list ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @Xcode_5F_XCBuildConfiguration class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_XCBuildConfiguration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_Xcode_5F_XCBuildConfiguration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_XCBuildConfiguration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_Xcode_5F_XCBuildConfiguration * ptr (void) const { return (const cPtr_Xcode_5F_XCBuildConfiguration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_Xcode_5F_XCBuildConfiguration (const cPtr_Xcode_5F_XCBuildConfiguration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_XCBuildConfiguration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_XCBuildConfiguration constructor_new (const class GALGAS_uint & inOperand0,
                                                                        const class GALGAS_uint & inOperand1,
                                                                        const class GALGAS_stringlist & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_XCBuildConfiguration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mSequenceNumber_31_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mSequenceNumber_32_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mSettings (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_XCBuildConfiguration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_XCBuildConfiguration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @Xcode_XCBuildConfiguration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_Xcode_5F_XCBuildConfiguration : public acPtr_class {
//--- Attributes
  public : GALGAS_uint mAttribute_mSequenceNumber_31_ ;
  public : GALGAS_uint mAttribute_mSequenceNumber_32_ ;
  public : GALGAS_stringlist mAttribute_mSettings ;

//--- Constructor
  public : cPtr_Xcode_5F_XCBuildConfiguration (const GALGAS_uint & in_mSequenceNumber_31_,
                                               const GALGAS_uint & in_mSequenceNumber_32_,
                                               const GALGAS_stringlist & in_mSettings
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mSequenceNumber_31_ (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mSequenceNumber_32_ (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringlist reader_mSettings (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @Xcode_5F_XCBuildConfiguration_5F_list_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_XCBuildConfiguration_5F_list_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_Xcode_5F_XCBuildConfiguration mAttribute_mBuildConfig ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_XCBuildConfiguration_5F_list_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_XCBuildConfiguration_5F_list_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_Xcode_5F_XCBuildConfiguration_5F_list_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_Xcode_5F_XCBuildConfiguration_5F_list_2D_element (const GALGAS_Xcode_5F_XCBuildConfiguration & in_mBuildConfig) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_XCBuildConfiguration_5F_list_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_XCBuildConfiguration_5F_list_2D_element constructor_new (const class GALGAS_Xcode_5F_XCBuildConfiguration & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_XCBuildConfiguration_5F_list_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_XCBuildConfiguration reader_mBuildConfig (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_XCBuildConfiguration_5F_list_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_XCBuildConfiguration_5F_list_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @Xcode_PBXNativeTarget_list list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXNativeTarget_5F_list : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXNativeTarget_5F_list (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_Xcode_5F_PBXNativeTarget_5F_list (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mTargetKey,
                                                  const class GALGAS_string & in_mTargetName,
                                                  const class GALGAS_Xcode_5F_XCBuildConfiguration & in_mTargetConfiguration,
                                                  const class GALGAS_string & in_mProductInstallPath,
                                                  const class GALGAS_string & in_mProductName,
                                                  const class GALGAS_Xcode_5F_productFileReference & in_mProduct,
                                                  const class GALGAS_stringlist & in_mBuildPhaseKeyList,
                                                  const class GALGAS_stringlist & in_mDependencyKeyList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXNativeTarget_5F_list extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXNativeTarget_5F_list constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_Xcode_5F_PBXNativeTarget_5F_list constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                     const class GALGAS_string & inOperand1,
                                                                                     const class GALGAS_Xcode_5F_XCBuildConfiguration & inOperand2,
                                                                                     const class GALGAS_string & inOperand3,
                                                                                     const class GALGAS_string & inOperand4,
                                                                                     const class GALGAS_Xcode_5F_productFileReference & inOperand5,
                                                                                     const class GALGAS_stringlist & inOperand6,
                                                                                     const class GALGAS_stringlist & inOperand7
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_Xcode_5F_PBXNativeTarget_5F_list inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_Xcode_5F_XCBuildConfiguration & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_string & inOperand4,
                                                      const class GALGAS_Xcode_5F_productFileReference & inOperand5,
                                                      const class GALGAS_stringlist & inOperand6,
                                                      const class GALGAS_stringlist & inOperand7
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXNativeTarget_5F_list operator_concat (const GALGAS_Xcode_5F_PBXNativeTarget_5F_list & inOperand
                                                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXNativeTarget_5F_list add_operation (const GALGAS_Xcode_5F_PBXNativeTarget_5F_list & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_Xcode_5F_XCBuildConfiguration constinArgument2,
                                                         class GALGAS_string constinArgument3,
                                                         class GALGAS_string constinArgument4,
                                                         class GALGAS_Xcode_5F_productFileReference constinArgument5,
                                                         class GALGAS_stringlist constinArgument6,
                                                         class GALGAS_stringlist constinArgument7,
                                                         class GALGAS_uint constinArgument8,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_Xcode_5F_XCBuildConfiguration & outArgument2,
                                                    class GALGAS_string & outArgument3,
                                                    class GALGAS_string & outArgument4,
                                                    class GALGAS_Xcode_5F_productFileReference & outArgument5,
                                                    class GALGAS_stringlist & outArgument6,
                                                    class GALGAS_stringlist & outArgument7,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_Xcode_5F_XCBuildConfiguration & outArgument2,
                                                   class GALGAS_string & outArgument3,
                                                   class GALGAS_string & outArgument4,
                                                   class GALGAS_Xcode_5F_productFileReference & outArgument5,
                                                   class GALGAS_stringlist & outArgument6,
                                                   class GALGAS_stringlist & outArgument7,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_Xcode_5F_XCBuildConfiguration & outArgument2,
                                                         class GALGAS_string & outArgument3,
                                                         class GALGAS_string & outArgument4,
                                                         class GALGAS_Xcode_5F_productFileReference & outArgument5,
                                                         class GALGAS_stringlist & outArgument6,
                                                         class GALGAS_stringlist & outArgument7,
                                                         class GALGAS_uint constinArgument8,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_Xcode_5F_XCBuildConfiguration & outArgument2,
                                               class GALGAS_string & outArgument3,
                                               class GALGAS_string & outArgument4,
                                               class GALGAS_Xcode_5F_productFileReference & outArgument5,
                                               class GALGAS_stringlist & outArgument6,
                                               class GALGAS_stringlist & outArgument7,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_Xcode_5F_XCBuildConfiguration & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_string & outArgument4,
                                              class GALGAS_Xcode_5F_productFileReference & outArgument5,
                                              class GALGAS_stringlist & outArgument6,
                                              class GALGAS_stringlist & outArgument7,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mBuildPhaseKeyListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mDependencyKeyListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_productFileReference reader_mProductAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProductInstallPathAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProductNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_XCBuildConfiguration reader_mTargetConfigurationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetKeyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXNativeTarget_5F_list reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXNativeTarget_5F_list reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_Xcode_5F_PBXNativeTarget_5F_list ;
 
} ; // End of GALGAS_Xcode_5F_PBXNativeTarget_5F_list class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_Xcode_5F_PBXNativeTarget_5F_list : public cGenericAbstractEnumerator {
  public : cEnumerator_Xcode_5F_PBXNativeTarget_5F_list (const GALGAS_Xcode_5F_PBXNativeTarget_5F_list & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mTargetKey (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTargetName (LOCATION_ARGS) const ;
  public : class GALGAS_Xcode_5F_XCBuildConfiguration current_mTargetConfiguration (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mProductInstallPath (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mProductName (LOCATION_ARGS) const ;
  public : class GALGAS_Xcode_5F_productFileReference current_mProduct (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mBuildPhaseKeyList (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mDependencyKeyList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_Xcode_5F_PBXNativeTarget_5F_list_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXNativeTarget_5F_list ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @Xcode_5F_productFileReference class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_productFileReference : public GALGAS_Xcode_5F_PBXFileReference_5F_abstract {
//--- Constructor
  public : GALGAS_Xcode_5F_productFileReference (void) ;

//---
  public : inline const class cPtr_Xcode_5F_productFileReference * ptr (void) const { return (const cPtr_Xcode_5F_productFileReference *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_Xcode_5F_productFileReference (const cPtr_Xcode_5F_productFileReference * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_productFileReference extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_productFileReference & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_productFileReference class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_productFileReference ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @Xcode_productFileReference class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_Xcode_5F_productFileReference : public cPtr_Xcode_5F_PBXFileReference_5F_abstract {
//--- Attributes

//--- Constructor
  public : cPtr_Xcode_5F_productFileReference (const GALGAS_uint & in_mSequenceNumber,
                                               const GALGAS_string & in_mFileName
                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @Xcode_5F_PBXNativeTarget_5F_list_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXNativeTarget_5F_list_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mTargetKey ;
  public : GALGAS_string mAttribute_mTargetName ;
  public : GALGAS_Xcode_5F_XCBuildConfiguration mAttribute_mTargetConfiguration ;
  public : GALGAS_string mAttribute_mProductInstallPath ;
  public : GALGAS_string mAttribute_mProductName ;
  public : GALGAS_Xcode_5F_productFileReference mAttribute_mProduct ;
  public : GALGAS_stringlist mAttribute_mBuildPhaseKeyList ;
  public : GALGAS_stringlist mAttribute_mDependencyKeyList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXNativeTarget_5F_list_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_Xcode_5F_PBXNativeTarget_5F_list_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_Xcode_5F_PBXNativeTarget_5F_list_2D_element (const GALGAS_string & in_mTargetKey,
                                                               const GALGAS_string & in_mTargetName,
                                                               const GALGAS_Xcode_5F_XCBuildConfiguration & in_mTargetConfiguration,
                                                               const GALGAS_string & in_mProductInstallPath,
                                                               const GALGAS_string & in_mProductName,
                                                               const GALGAS_Xcode_5F_productFileReference & in_mProduct,
                                                               const GALGAS_stringlist & in_mBuildPhaseKeyList,
                                                               const GALGAS_stringlist & in_mDependencyKeyList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXNativeTarget_5F_list_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXNativeTarget_5F_list_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                      const class GALGAS_string & inOperand1,
                                                                                      const class GALGAS_Xcode_5F_XCBuildConfiguration & inOperand2,
                                                                                      const class GALGAS_string & inOperand3,
                                                                                      const class GALGAS_string & inOperand4,
                                                                                      const class GALGAS_Xcode_5F_productFileReference & inOperand5,
                                                                                      const class GALGAS_stringlist & inOperand6,
                                                                                      const class GALGAS_stringlist & inOperand7
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXNativeTarget_5F_list_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mBuildPhaseKeyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mDependencyKeyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_productFileReference reader_mProduct (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProductInstallPath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProductName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_XCBuildConfiguration reader_mTargetConfiguration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetKey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXNativeTarget_5F_list_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXNativeTarget_5F_list_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @Xcode_targetDependencyDescription_list list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_targetDependencyDescription_5F_list : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_targetDependencyDescription_5F_list (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_Xcode_5F_targetDependencyDescription_5F_list (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_Xcode_5F_targetDependencyDescription & in_mDependency
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_targetDependencyDescription_5F_list extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_targetDependencyDescription_5F_list constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_Xcode_5F_targetDependencyDescription_5F_list constructor_listWithValue (const class GALGAS_Xcode_5F_targetDependencyDescription & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_Xcode_5F_targetDependencyDescription_5F_list inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_Xcode_5F_targetDependencyDescription & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_targetDependencyDescription_5F_list operator_concat (const GALGAS_Xcode_5F_targetDependencyDescription_5F_list & inOperand
                                                                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_targetDependencyDescription_5F_list add_operation (const GALGAS_Xcode_5F_targetDependencyDescription_5F_list & inOperand,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_Xcode_5F_targetDependencyDescription constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_Xcode_5F_targetDependencyDescription & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_Xcode_5F_targetDependencyDescription & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_Xcode_5F_targetDependencyDescription & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_Xcode_5F_targetDependencyDescription & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_Xcode_5F_targetDependencyDescription & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_targetDependencyDescription reader_mDependencyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_targetDependencyDescription_5F_list reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_targetDependencyDescription_5F_list reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_Xcode_5F_targetDependencyDescription_5F_list ;
 
} ; // End of GALGAS_Xcode_5F_targetDependencyDescription_5F_list class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_Xcode_5F_targetDependencyDescription_5F_list : public cGenericAbstractEnumerator {
  public : cEnumerator_Xcode_5F_targetDependencyDescription_5F_list (const GALGAS_Xcode_5F_targetDependencyDescription_5F_list & inEnumeratedObject,
                                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_Xcode_5F_targetDependencyDescription current_mDependency (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_Xcode_5F_targetDependencyDescription_5F_list_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_targetDependencyDescription_5F_list ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @Xcode_5F_targetDependencyDescription class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_targetDependencyDescription : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_Xcode_5F_targetDependencyDescription (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_targetDependencyDescription constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_Xcode_5F_targetDependencyDescription * ptr (void) const { return (const cPtr_Xcode_5F_targetDependencyDescription *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_Xcode_5F_targetDependencyDescription (const cPtr_Xcode_5F_targetDependencyDescription * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_targetDependencyDescription extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_targetDependencyDescription constructor_new (const class GALGAS_uint & inOperand0,
                                                                               const class GALGAS_string & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_targetDependencyDescription & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mDependencyTarget (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_targetDependencyDescription class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_targetDependencyDescription ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @Xcode_targetDependencyDescription class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_Xcode_5F_targetDependencyDescription : public acPtr_class {
//--- Attributes
  public : GALGAS_uint mAttribute_mSequenceNumber ;
  public : GALGAS_string mAttribute_mDependencyTarget ;

//--- Constructor
  public : cPtr_Xcode_5F_targetDependencyDescription (const GALGAS_uint & in_mSequenceNumber,
                                                      const GALGAS_string & in_mDependencyTarget
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mSequenceNumber (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mDependencyTarget (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           @Xcode_5F_targetDependencyDescription_5F_list_2D_element struct                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_targetDependencyDescription_5F_list_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_Xcode_5F_targetDependencyDescription mAttribute_mDependency ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_targetDependencyDescription_5F_list_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_targetDependencyDescription_5F_list_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_Xcode_5F_targetDependencyDescription_5F_list_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_Xcode_5F_targetDependencyDescription_5F_list_2D_element (const GALGAS_Xcode_5F_targetDependencyDescription & in_mDependency) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_targetDependencyDescription_5F_list_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_targetDependencyDescription_5F_list_2D_element constructor_new (const class GALGAS_Xcode_5F_targetDependencyDescription & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_targetDependencyDescription_5F_list_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_targetDependencyDescription reader_mDependency (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_targetDependencyDescription_5F_list_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_targetDependencyDescription_5F_list_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @Xcode_PBXVariantGroup_list list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXVariantGroup_5F_list : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXVariantGroup_5F_list (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_Xcode_5F_PBXVariantGroup_5F_list (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mPBXVariantKey,
                                                  const class GALGAS_string & in_mPBXFileReferenceKey,
                                                  const class GALGAS_string & in_mName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXVariantGroup_5F_list extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXVariantGroup_5F_list constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_Xcode_5F_PBXVariantGroup_5F_list constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                     const class GALGAS_string & inOperand1,
                                                                                     const class GALGAS_string & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_Xcode_5F_PBXVariantGroup_5F_list inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXVariantGroup_5F_list operator_concat (const GALGAS_Xcode_5F_PBXVariantGroup_5F_list & inOperand
                                                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXVariantGroup_5F_list add_operation (const GALGAS_Xcode_5F_PBXVariantGroup_5F_list & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_string constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mPBXFileReferenceKeyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mPBXVariantKeyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXVariantGroup_5F_list reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXVariantGroup_5F_list reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_Xcode_5F_PBXVariantGroup_5F_list ;
 
} ; // End of GALGAS_Xcode_5F_PBXVariantGroup_5F_list class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_Xcode_5F_PBXVariantGroup_5F_list : public cGenericAbstractEnumerator {
  public : cEnumerator_Xcode_5F_PBXVariantGroup_5F_list (const GALGAS_Xcode_5F_PBXVariantGroup_5F_list & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mPBXVariantKey (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mPBXFileReferenceKey (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXVariantGroup_5F_list ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @Xcode_5F_PBXVariantGroup_5F_list_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mPBXVariantKey ;
  public : GALGAS_string mAttribute_mPBXFileReferenceKey ;
  public : GALGAS_string mAttribute_mName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element (const GALGAS_string & in_mPBXVariantKey,
                                                               const GALGAS_string & in_mPBXFileReferenceKey,
                                                               const GALGAS_string & in_mName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                      const class GALGAS_string & inOperand1,
                                                                                      const class GALGAS_string & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mPBXFileReferenceKey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mPBXVariantKey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @projectQualifiedFeatureMap map                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_projectQualifiedFeatureMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_projectQualifiedFeatureMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_projectQualifiedFeatureMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_projectQualifiedFeatureMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_projectQualifiedFeatureMap (const GALGAS_projectQualifiedFeatureMap & inSource) ;
  public : GALGAS_projectQualifiedFeatureMap & operator = (const GALGAS_projectQualifiedFeatureMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_projectQualifiedFeatureMap extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_projectQualifiedFeatureMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_projectQualifiedFeatureMap constructor_mapWithMapToOverride (const class GALGAS_projectQualifiedFeatureMap & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_lstring constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMFeatureValueForKey (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFeatureValueForKey (const class GALGAS_string & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_projectQualifiedFeatureMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_projectQualifiedFeatureMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                        const GALGAS_string & inKey
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_projectQualifiedFeatureMap ;
 
} ; // End of GALGAS_projectQualifiedFeatureMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_projectQualifiedFeatureMap : public cGenericAbstractEnumerator {
  public : cEnumerator_projectQualifiedFeatureMap (const GALGAS_projectQualifiedFeatureMap & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFeatureValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_projectQualifiedFeatureMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@projectQualifiedFeatureMap' map                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_projectQualifiedFeatureMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mAttribute_mFeatureValue ;

//--- Constructor
  public : cMapElement_projectQualifiedFeatureMap (const GALGAS_lstring & inKey,
                                                   const GALGAS_lstring & in_mFeatureValue
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
//                                    @projectQualifiedFeatureMap_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_projectQualifiedFeatureMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lstring mAttribute_mFeatureValue ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_projectQualifiedFeatureMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_projectQualifiedFeatureMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_projectQualifiedFeatureMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_projectQualifiedFeatureMap_2D_element (const GALGAS_lstring & in_lkey,
                                                         const GALGAS_lstring & in_mFeatureValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_projectQualifiedFeatureMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_projectQualifiedFeatureMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_projectQualifiedFeatureMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFeatureValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_projectQualifiedFeatureMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Parser class 'projectModelBuilder' declaration                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_projectModelBuilder {
//--- Virtual destructor
  public : virtual ~ cParser_projectModelBuilder (void) {}

//--- Non terminal declarations
  protected : virtual void nt_project_5F_component_5F_start_5F_symbol_ (class GALGAS_projectComponentAST & outArgument0,
                                                                        class C_String & ioSyntaxDirectedTranslationResult,
                                                                        class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_project_5F_component_5F_start_5F_symbol_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                             class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_projectModelBuilder_project_5F_component_5F_start_5F_symbol_i0_ (GALGAS_projectComponentAST & outArgument0,
                                                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                                                         C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_projectModelBuilder_project_5F_component_5F_start_5F_symbol_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                              C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_projectModelBuilder_project_5F_component_5F_start_5F_symbol_i0_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_projectModelBuilder_0 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_projectModelBuilder_1 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_projectModelBuilder_2 (C_Lexique_galgas_5F_scanner *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @projectComponentAST struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_projectComponentAST : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_projectSourceList mAttribute_mProjectSourceList ;
  public : GALGAS_luint mAttribute_mMajorVersion ;
  public : GALGAS_luint mAttribute_mMinorVersion ;
  public : GALGAS_luint mAttribute_mRevisionVersion ;
  public : GALGAS_lstringlist mAttribute_mGenerationFeatureList ;
  public : GALGAS_qualifiedFeatureList mAttribute_mQualifiedFeatureList ;
  public : GALGAS_lstring mAttribute_mProjectName ;
  public : GALGAS_lstring mAttribute_mTargetName ;
  public : GALGAS_location mAttribute_mEndOfSourceFile ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_projectComponentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_projectComponentAST (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_projectComponentAST (void) ;

//--------------------------------- Native constructor
  public : GALGAS_projectComponentAST (const GALGAS_projectSourceList & in_mProjectSourceList,
                                       const GALGAS_luint & in_mMajorVersion,
                                       const GALGAS_luint & in_mMinorVersion,
                                       const GALGAS_luint & in_mRevisionVersion,
                                       const GALGAS_lstringlist & in_mGenerationFeatureList,
                                       const GALGAS_qualifiedFeatureList & in_mQualifiedFeatureList,
                                       const GALGAS_lstring & in_mProjectName,
                                       const GALGAS_lstring & in_mTargetName,
                                       const GALGAS_location & in_mEndOfSourceFile) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_projectComponentAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_projectComponentAST constructor_new (const class GALGAS_projectSourceList & inOperand0,
                                                              const class GALGAS_luint & inOperand1,
                                                              const class GALGAS_luint & inOperand2,
                                                              const class GALGAS_luint & inOperand3,
                                                              const class GALGAS_lstringlist & inOperand4,
                                                              const class GALGAS_qualifiedFeatureList & inOperand5,
                                                              const class GALGAS_lstring & inOperand6,
                                                              const class GALGAS_lstring & inOperand7,
                                                              const class GALGAS_location & inOperand8
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_projectComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfSourceFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mGenerationFeatureList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mMajorVersion (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mMinorVersion (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mProjectName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_projectSourceList reader_mProjectSourceList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_qualifiedFeatureList reader_mQualifiedFeatureList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mRevisionVersion (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_projectComponentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectComponentAST ;

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
                                                      const class GALGAS_unifiedTypeMapProxy & inOperand1
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
   kToken_uniquemap,
   kToken_unused,
   kToken_var,
   kToken_warning,
   kToken_while,
   kToken_with,
   kToken__2A_,
   kToken__2C_,
   kToken__2B_,
   kToken__2D__2D_,
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
   kToken__2B__2B_,
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
   kToken__7E_} ;

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
  public : virtual int16_t terminalVocabularyCount (void) const { return 136 ; }

//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;

//--- Enter Token
  protected : void enterToken (const cTokenFor_galgas_33_Scanner & inToken) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#endif
#endif
