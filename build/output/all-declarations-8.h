#ifndef all_2D_declarations_2D__38__ENTITIES_DEFINED
#define all_2D_declarations_2D__38__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-7.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Parser class 'galgas3ProgramDeclarations' declaration                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_galgas_33_ProgramDeclarations {
//--- Virtual destructor
  public : virtual ~ cParser_galgas_33_ProgramDeclarations (void) {}

//--- Non terminal declarations
  protected : virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_galgas_33_ProgramDeclarations_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ProgramDeclarations_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ProgramDeclarations_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ProgramDeclarations_declaration_i1_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ProgramDeclarations_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ProgramDeclarations_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ProgramDeclarations_declaration_i2_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ProgramDeclarations_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected : void rule_galgas_33_ProgramDeclarations_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_galgas_33_ProgramDeclarations_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ProgramDeclarations_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected : virtual int32_t select_galgas_33_ProgramDeclarations_2 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @headerCompositionMap map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_headerCompositionMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_headerCompositionMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_headerCompositionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_headerCompositionMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_headerCompositionMap (const GALGAS_headerCompositionMap & inSource) ;
  public : GALGAS_headerCompositionMap & operator = (const GALGAS_headerCompositionMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_headerCompositionMap extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_headerCompositionMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_headerCompositionMap constructor_mapWithMapToOverride (const class GALGAS_headerCompositionMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_stringset & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_stringset constinArgument1,
                                                     class GALGAS_string constinArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMHeaderStringForKey (class GALGAS_string constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMInclusionForKey (class GALGAS_stringset constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_stringset & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mHeaderStringForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset reader_mInclusionForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_headerCompositionMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_headerCompositionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_headerCompositionMap ;
 
} ; // End of GALGAS_headerCompositionMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_headerCompositionMap : public cGenericAbstractEnumerator {
  public : cEnumerator_headerCompositionMap (const GALGAS_headerCompositionMap & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_stringset current_mInclusion (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mHeaderString (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_headerCompositionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerCompositionMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@headerCompositionMap' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_headerCompositionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_stringset mAttribute_mInclusion ;
  public : GALGAS_string mAttribute_mHeaderString ;

//--- Constructor
  public : cMapElement_headerCompositionMap (const GALGAS_lstring & inKey,
                                             const GALGAS_stringset & in_mInclusion,
                                             const GALGAS_string & in_mHeaderString
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
//                                       @headerCompositionMap_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_headerCompositionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_stringset mAttribute_mInclusion ;
  public : GALGAS_string mAttribute_mHeaderString ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_headerCompositionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_headerCompositionMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_headerCompositionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_headerCompositionMap_2D_element (const GALGAS_lstring & in_lkey,
                                                   const GALGAS_stringset & in_mInclusion,
                                                   const GALGAS_string & in_mHeaderString) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_headerCompositionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_headerCompositionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_stringset & inOperand1,
                                                                          const class GALGAS_string & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_headerCompositionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mHeaderString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset reader_mInclusion (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_headerCompositionMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerCompositionMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @headerRepartitionMap map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_headerRepartitionMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_headerRepartitionMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_headerRepartitionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_headerRepartitionMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_headerRepartitionMap (const GALGAS_headerRepartitionMap & inSource) ;
  public : GALGAS_headerRepartitionMap & operator = (const GALGAS_headerRepartitionMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_headerRepartitionMap extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_headerRepartitionMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_headerRepartitionMap constructor_mapWithMapToOverride (const class GALGAS_headerRepartitionMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_string constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMHeaderFileNameForKey (class GALGAS_string constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mHeaderFileNameForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_headerRepartitionMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_headerRepartitionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_headerRepartitionMap ;
 
} ; // End of GALGAS_headerRepartitionMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_headerRepartitionMap : public cGenericAbstractEnumerator {
  public : cEnumerator_headerRepartitionMap (const GALGAS_headerRepartitionMap & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mHeaderFileName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_headerRepartitionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerRepartitionMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@headerRepartitionMap' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_headerRepartitionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_string mAttribute_mHeaderFileName ;

//--- Constructor
  public : cMapElement_headerRepartitionMap (const GALGAS_lstring & inKey,
                                             const GALGAS_string & in_mHeaderFileName
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
//                                       @headerRepartitionMap_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_headerRepartitionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_string mAttribute_mHeaderFileName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_headerRepartitionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_headerRepartitionMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_headerRepartitionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_headerRepartitionMap_2D_element (const GALGAS_lstring & in_lkey,
                                                   const GALGAS_string & in_mHeaderFileName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_headerRepartitionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_headerRepartitionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_string & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_headerRepartitionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mHeaderFileName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_headerRepartitionMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerRepartitionMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @XCodeGroupList list                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_XCodeGroupList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_XCodeGroupList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_XCodeGroupList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mGroupReference,
                                                  const class GALGAS_string & in_mGroupName,
                                                  const class GALGAS_string & in_mGroupPath,
                                                  const class GALGAS_stringlist & in_mChildrenRefs
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_XCodeGroupList extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_XCodeGroupList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_XCodeGroupList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                   const class GALGAS_string & inOperand1,
                                                                   const class GALGAS_string & inOperand2,
                                                                   const class GALGAS_stringlist & inOperand3
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_XCodeGroupList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_stringlist & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_XCodeGroupList operator_concat (const GALGAS_XCodeGroupList & inOperand
                                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_XCodeGroupList add_operation (const GALGAS_XCodeGroupList & inOperand,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_string constinArgument2,
                                                         class GALGAS_stringlist constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    class GALGAS_stringlist & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   class GALGAS_stringlist & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_string & outArgument2,
                                                         class GALGAS_stringlist & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_stringlist & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_stringlist & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mChildrenRefsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mGroupNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mGroupPathAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mGroupReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeGroupList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeGroupList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_XCodeGroupList ;
 
} ; // End of GALGAS_XCodeGroupList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_XCodeGroupList : public cGenericAbstractEnumerator {
  public : cEnumerator_XCodeGroupList (const GALGAS_XCodeGroupList & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mGroupReference (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mGroupName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mGroupPath (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mChildrenRefs (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_XCodeGroupList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @XCodeGroupList_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_XCodeGroupList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mGroupReference ;
  public : GALGAS_string mAttribute_mGroupName ;
  public : GALGAS_string mAttribute_mGroupPath ;
  public : GALGAS_stringlist mAttribute_mChildrenRefs ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_XCodeGroupList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_XCodeGroupList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_XCodeGroupList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_XCodeGroupList_2D_element (const GALGAS_string & in_mGroupReference,
                                             const GALGAS_string & in_mGroupName,
                                             const GALGAS_string & in_mGroupPath,
                                             const GALGAS_stringlist & in_mChildrenRefs) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_XCodeGroupList_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_XCodeGroupList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                    const class GALGAS_string & inOperand1,
                                                                    const class GALGAS_string & inOperand2,
                                                                    const class GALGAS_stringlist & inOperand3
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_XCodeGroupList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mChildrenRefs (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mGroupName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mGroupPath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mGroupReference (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_XCodeGroupList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @XCodeToolTargetList list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_XCodeToolTargetList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_XCodeToolTargetList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_XCodeToolTargetList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mTargetRef,
                                                  const class GALGAS_string & in_mTargetName,
                                                  const class GALGAS_string & in_mProductFileReference,
                                                  const class GALGAS_string & in_mProductFileName,
                                                  const class GALGAS_stringlist & in_mBuildPhaseRefList,
                                                  const class GALGAS_string & in_mBuildPhaseRef,
                                                  const class GALGAS_string & in_mBuildConfigurationListRef,
                                                  const class GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                  const class GALGAS_string & in_mBuildConfigurationRef,
                                                  const class GALGAS_stringlist & in_mFrameworksFileRefList,
                                                  const class GALGAS_string & in_mFrameworkBuildPhaseRef
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_XCodeToolTargetList extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_XCodeToolTargetList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_XCodeToolTargetList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_string & inOperand2,
                                                                        const class GALGAS_string & inOperand3,
                                                                        const class GALGAS_stringlist & inOperand4,
                                                                        const class GALGAS_string & inOperand5,
                                                                        const class GALGAS_string & inOperand6,
                                                                        const class GALGAS_stringlist & inOperand7,
                                                                        const class GALGAS_string & inOperand8,
                                                                        const class GALGAS_stringlist & inOperand9,
                                                                        const class GALGAS_string & inOperand10
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_XCodeToolTargetList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_stringlist & inOperand4,
                                                      const class GALGAS_string & inOperand5,
                                                      const class GALGAS_string & inOperand6,
                                                      const class GALGAS_stringlist & inOperand7,
                                                      const class GALGAS_string & inOperand8,
                                                      const class GALGAS_stringlist & inOperand9,
                                                      const class GALGAS_string & inOperand10
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_XCodeToolTargetList operator_concat (const GALGAS_XCodeToolTargetList & inOperand
                                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_XCodeToolTargetList add_operation (const GALGAS_XCodeToolTargetList & inOperand,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_string constinArgument2,
                                                         class GALGAS_string constinArgument3,
                                                         class GALGAS_stringlist constinArgument4,
                                                         class GALGAS_string constinArgument5,
                                                         class GALGAS_string constinArgument6,
                                                         class GALGAS_stringlist constinArgument7,
                                                         class GALGAS_string constinArgument8,
                                                         class GALGAS_stringlist constinArgument9,
                                                         class GALGAS_string constinArgument10,
                                                         class GALGAS_uint constinArgument11,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    class GALGAS_string & outArgument3,
                                                    class GALGAS_stringlist & outArgument4,
                                                    class GALGAS_string & outArgument5,
                                                    class GALGAS_string & outArgument6,
                                                    class GALGAS_stringlist & outArgument7,
                                                    class GALGAS_string & outArgument8,
                                                    class GALGAS_stringlist & outArgument9,
                                                    class GALGAS_string & outArgument10,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   class GALGAS_string & outArgument3,
                                                   class GALGAS_stringlist & outArgument4,
                                                   class GALGAS_string & outArgument5,
                                                   class GALGAS_string & outArgument6,
                                                   class GALGAS_stringlist & outArgument7,
                                                   class GALGAS_string & outArgument8,
                                                   class GALGAS_stringlist & outArgument9,
                                                   class GALGAS_string & outArgument10,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_string & outArgument2,
                                                         class GALGAS_string & outArgument3,
                                                         class GALGAS_stringlist & outArgument4,
                                                         class GALGAS_string & outArgument5,
                                                         class GALGAS_string & outArgument6,
                                                         class GALGAS_stringlist & outArgument7,
                                                         class GALGAS_string & outArgument8,
                                                         class GALGAS_stringlist & outArgument9,
                                                         class GALGAS_string & outArgument10,
                                                         class GALGAS_uint constinArgument11,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_string & outArgument3,
                                               class GALGAS_stringlist & outArgument4,
                                               class GALGAS_string & outArgument5,
                                               class GALGAS_string & outArgument6,
                                               class GALGAS_stringlist & outArgument7,
                                               class GALGAS_string & outArgument8,
                                               class GALGAS_stringlist & outArgument9,
                                               class GALGAS_string & outArgument10,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_stringlist & outArgument4,
                                              class GALGAS_string & outArgument5,
                                              class GALGAS_string & outArgument6,
                                              class GALGAS_stringlist & outArgument7,
                                              class GALGAS_string & outArgument8,
                                              class GALGAS_stringlist & outArgument9,
                                              class GALGAS_string & outArgument10,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBuildConfigurationListRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBuildConfigurationRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mBuildConfigurationSettingListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBuildPhaseRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mBuildPhaseRefListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFrameworkBuildPhaseRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mFrameworksFileRefListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProductFileNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProductFileReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeToolTargetList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeToolTargetList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_XCodeToolTargetList ;
 
} ; // End of GALGAS_XCodeToolTargetList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_XCodeToolTargetList : public cGenericAbstractEnumerator {
  public : cEnumerator_XCodeToolTargetList (const GALGAS_XCodeToolTargetList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mTargetRef (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTargetName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mProductFileName (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_XCodeToolTargetList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @XCodeToolTargetList_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_XCodeToolTargetList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mTargetRef ;
  public : GALGAS_string mAttribute_mTargetName ;
  public : GALGAS_string mAttribute_mProductFileReference ;
  public : GALGAS_string mAttribute_mProductFileName ;
  public : GALGAS_stringlist mAttribute_mBuildPhaseRefList ;
  public : GALGAS_string mAttribute_mBuildPhaseRef ;
  public : GALGAS_string mAttribute_mBuildConfigurationListRef ;
  public : GALGAS_stringlist mAttribute_mBuildConfigurationSettingList ;
  public : GALGAS_string mAttribute_mBuildConfigurationRef ;
  public : GALGAS_stringlist mAttribute_mFrameworksFileRefList ;
  public : GALGAS_string mAttribute_mFrameworkBuildPhaseRef ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_XCodeToolTargetList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_XCodeToolTargetList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_XCodeToolTargetList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_XCodeToolTargetList_2D_element (const GALGAS_string & in_mTargetRef,
                                                  const GALGAS_string & in_mTargetName,
                                                  const GALGAS_string & in_mProductFileReference,
                                                  const GALGAS_string & in_mProductFileName,
                                                  const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                  const GALGAS_string & in_mBuildPhaseRef,
                                                  const GALGAS_string & in_mBuildConfigurationListRef,
                                                  const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                  const GALGAS_string & in_mBuildConfigurationRef,
                                                  const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                  const GALGAS_string & in_mFrameworkBuildPhaseRef) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_XCodeToolTargetList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_XCodeToolTargetList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_string & inOperand2,
                                                                         const class GALGAS_string & inOperand3,
                                                                         const class GALGAS_stringlist & inOperand4,
                                                                         const class GALGAS_string & inOperand5,
                                                                         const class GALGAS_string & inOperand6,
                                                                         const class GALGAS_stringlist & inOperand7,
                                                                         const class GALGAS_string & inOperand8,
                                                                         const class GALGAS_stringlist & inOperand9,
                                                                         const class GALGAS_string & inOperand10
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_XCodeToolTargetList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBuildConfigurationListRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBuildConfigurationRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mBuildConfigurationSettingList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBuildPhaseRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mBuildPhaseRefList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mFrameworksFileRefList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProductFileName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProductFileReference (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetRef (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_XCodeToolTargetList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @XCodeAppTargetList list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_XCodeAppTargetList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_XCodeAppTargetList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_XCodeAppTargetList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mTargetRef,
                                                  const class GALGAS_string & in_mTargetName,
                                                  const class GALGAS_string & in_mProductFileReference,
                                                  const class GALGAS_string & in_mProductFileName,
                                                  const class GALGAS_stringlist & in_mBuildPhaseRefList,
                                                  const class GALGAS_string & in_mBuildPhaseRef,
                                                  const class GALGAS_string & in_mBuildConfigurationListRef,
                                                  const class GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                  const class GALGAS_string & in_mBuildConfigurationRef,
                                                  const class GALGAS_stringlist & in_mFrameworksFileRefList,
                                                  const class GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                  const class GALGAS__32_stringlist & in_mDependentTargets,
                                                  const class GALGAS_string & in_mResourceBuildRef,
                                                  const class GALGAS_stringlist & in_mResourceFileBuildRefs
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_XCodeAppTargetList extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_XCodeAppTargetList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_XCodeAppTargetList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_string & inOperand2,
                                                                       const class GALGAS_string & inOperand3,
                                                                       const class GALGAS_stringlist & inOperand4,
                                                                       const class GALGAS_string & inOperand5,
                                                                       const class GALGAS_string & inOperand6,
                                                                       const class GALGAS_stringlist & inOperand7,
                                                                       const class GALGAS_string & inOperand8,
                                                                       const class GALGAS_stringlist & inOperand9,
                                                                       const class GALGAS_string & inOperand10,
                                                                       const class GALGAS__32_stringlist & inOperand11,
                                                                       const class GALGAS_string & inOperand12,
                                                                       const class GALGAS_stringlist & inOperand13
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_XCodeAppTargetList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_stringlist & inOperand4,
                                                      const class GALGAS_string & inOperand5,
                                                      const class GALGAS_string & inOperand6,
                                                      const class GALGAS_stringlist & inOperand7,
                                                      const class GALGAS_string & inOperand8,
                                                      const class GALGAS_stringlist & inOperand9,
                                                      const class GALGAS_string & inOperand10,
                                                      const class GALGAS__32_stringlist & inOperand11,
                                                      const class GALGAS_string & inOperand12,
                                                      const class GALGAS_stringlist & inOperand13
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_XCodeAppTargetList operator_concat (const GALGAS_XCodeAppTargetList & inOperand
                                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_XCodeAppTargetList add_operation (const GALGAS_XCodeAppTargetList & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_string constinArgument2,
                                                         class GALGAS_string constinArgument3,
                                                         class GALGAS_stringlist constinArgument4,
                                                         class GALGAS_string constinArgument5,
                                                         class GALGAS_string constinArgument6,
                                                         class GALGAS_stringlist constinArgument7,
                                                         class GALGAS_string constinArgument8,
                                                         class GALGAS_stringlist constinArgument9,
                                                         class GALGAS_string constinArgument10,
                                                         class GALGAS__32_stringlist constinArgument11,
                                                         class GALGAS_string constinArgument12,
                                                         class GALGAS_stringlist constinArgument13,
                                                         class GALGAS_uint constinArgument14,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    class GALGAS_string & outArgument3,
                                                    class GALGAS_stringlist & outArgument4,
                                                    class GALGAS_string & outArgument5,
                                                    class GALGAS_string & outArgument6,
                                                    class GALGAS_stringlist & outArgument7,
                                                    class GALGAS_string & outArgument8,
                                                    class GALGAS_stringlist & outArgument9,
                                                    class GALGAS_string & outArgument10,
                                                    class GALGAS__32_stringlist & outArgument11,
                                                    class GALGAS_string & outArgument12,
                                                    class GALGAS_stringlist & outArgument13,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   class GALGAS_string & outArgument3,
                                                   class GALGAS_stringlist & outArgument4,
                                                   class GALGAS_string & outArgument5,
                                                   class GALGAS_string & outArgument6,
                                                   class GALGAS_stringlist & outArgument7,
                                                   class GALGAS_string & outArgument8,
                                                   class GALGAS_stringlist & outArgument9,
                                                   class GALGAS_string & outArgument10,
                                                   class GALGAS__32_stringlist & outArgument11,
                                                   class GALGAS_string & outArgument12,
                                                   class GALGAS_stringlist & outArgument13,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_string & outArgument2,
                                                         class GALGAS_string & outArgument3,
                                                         class GALGAS_stringlist & outArgument4,
                                                         class GALGAS_string & outArgument5,
                                                         class GALGAS_string & outArgument6,
                                                         class GALGAS_stringlist & outArgument7,
                                                         class GALGAS_string & outArgument8,
                                                         class GALGAS_stringlist & outArgument9,
                                                         class GALGAS_string & outArgument10,
                                                         class GALGAS__32_stringlist & outArgument11,
                                                         class GALGAS_string & outArgument12,
                                                         class GALGAS_stringlist & outArgument13,
                                                         class GALGAS_uint constinArgument14,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_string & outArgument3,
                                               class GALGAS_stringlist & outArgument4,
                                               class GALGAS_string & outArgument5,
                                               class GALGAS_string & outArgument6,
                                               class GALGAS_stringlist & outArgument7,
                                               class GALGAS_string & outArgument8,
                                               class GALGAS_stringlist & outArgument9,
                                               class GALGAS_string & outArgument10,
                                               class GALGAS__32_stringlist & outArgument11,
                                               class GALGAS_string & outArgument12,
                                               class GALGAS_stringlist & outArgument13,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_stringlist & outArgument4,
                                              class GALGAS_string & outArgument5,
                                              class GALGAS_string & outArgument6,
                                              class GALGAS_stringlist & outArgument7,
                                              class GALGAS_string & outArgument8,
                                              class GALGAS_stringlist & outArgument9,
                                              class GALGAS_string & outArgument10,
                                              class GALGAS__32_stringlist & outArgument11,
                                              class GALGAS_string & outArgument12,
                                              class GALGAS_stringlist & outArgument13,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBuildConfigurationListRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBuildConfigurationRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mBuildConfigurationSettingListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBuildPhaseRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mBuildPhaseRefListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_mDependentTargetsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFrameworkBuildPhaseRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mFrameworksFileRefListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProductFileNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProductFileReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mResourceBuildRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mResourceFileBuildRefsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeAppTargetList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeAppTargetList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_XCodeAppTargetList ;
 
} ; // End of GALGAS_XCodeAppTargetList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_XCodeAppTargetList : public cGenericAbstractEnumerator {
  public : cEnumerator_XCodeAppTargetList (const GALGAS_XCodeAppTargetList & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mTargetRef (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTargetName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mProductFileName (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
  public : class GALGAS__32_stringlist current_mDependentTargets (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mResourceBuildRef (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mResourceFileBuildRefs (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_XCodeAppTargetList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @XCodeAppTargetList_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_XCodeAppTargetList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mTargetRef ;
  public : GALGAS_string mAttribute_mTargetName ;
  public : GALGAS_string mAttribute_mProductFileReference ;
  public : GALGAS_string mAttribute_mProductFileName ;
  public : GALGAS_stringlist mAttribute_mBuildPhaseRefList ;
  public : GALGAS_string mAttribute_mBuildPhaseRef ;
  public : GALGAS_string mAttribute_mBuildConfigurationListRef ;
  public : GALGAS_stringlist mAttribute_mBuildConfigurationSettingList ;
  public : GALGAS_string mAttribute_mBuildConfigurationRef ;
  public : GALGAS_stringlist mAttribute_mFrameworksFileRefList ;
  public : GALGAS_string mAttribute_mFrameworkBuildPhaseRef ;
  public : GALGAS__32_stringlist mAttribute_mDependentTargets ;
  public : GALGAS_string mAttribute_mResourceBuildRef ;
  public : GALGAS_stringlist mAttribute_mResourceFileBuildRefs ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_XCodeAppTargetList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_XCodeAppTargetList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_XCodeAppTargetList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_XCodeAppTargetList_2D_element (const GALGAS_string & in_mTargetRef,
                                                 const GALGAS_string & in_mTargetName,
                                                 const GALGAS_string & in_mProductFileReference,
                                                 const GALGAS_string & in_mProductFileName,
                                                 const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                 const GALGAS_string & in_mBuildPhaseRef,
                                                 const GALGAS_string & in_mBuildConfigurationListRef,
                                                 const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                 const GALGAS_string & in_mBuildConfigurationRef,
                                                 const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                 const GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                 const GALGAS__32_stringlist & in_mDependentTargets,
                                                 const GALGAS_string & in_mResourceBuildRef,
                                                 const GALGAS_stringlist & in_mResourceFileBuildRefs) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_XCodeAppTargetList_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_XCodeAppTargetList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_string & inOperand2,
                                                                        const class GALGAS_string & inOperand3,
                                                                        const class GALGAS_stringlist & inOperand4,
                                                                        const class GALGAS_string & inOperand5,
                                                                        const class GALGAS_string & inOperand6,
                                                                        const class GALGAS_stringlist & inOperand7,
                                                                        const class GALGAS_string & inOperand8,
                                                                        const class GALGAS_stringlist & inOperand9,
                                                                        const class GALGAS_string & inOperand10,
                                                                        const class GALGAS__32_stringlist & inOperand11,
                                                                        const class GALGAS_string & inOperand12,
                                                                        const class GALGAS_stringlist & inOperand13
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_XCodeAppTargetList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBuildConfigurationListRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBuildConfigurationRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mBuildConfigurationSettingList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBuildPhaseRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mBuildPhaseRefList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist reader_mDependentTargets (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mFrameworksFileRefList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProductFileName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProductFileReference (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mResourceBuildRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mResourceFileBuildRefs (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTargetRef (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_XCodeAppTargetList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @BuildFileList list                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_BuildFileList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_BuildFileList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_BuildFileList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mFileReference,
                                                  const class GALGAS_string & in_mFileName,
                                                  const class GALGAS_string & in_mBuildReference
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_BuildFileList extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_BuildFileList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_BuildFileList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                  const class GALGAS_string & inOperand1,
                                                                  const class GALGAS_string & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_BuildFileList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_BuildFileList operator_concat (const GALGAS_BuildFileList & inOperand
                                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_BuildFileList add_operation (const GALGAS_BuildFileList & inOperand,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBuildReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFileNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFileReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_BuildFileList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_BuildFileList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_BuildFileList ;
 
} ; // End of GALGAS_BuildFileList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_BuildFileList : public cGenericAbstractEnumerator {
  public : cEnumerator_BuildFileList (const GALGAS_BuildFileList & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mFileReference (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFileName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBuildReference (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_BuildFileList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @BuildFileList_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_BuildFileList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mFileReference ;
  public : GALGAS_string mAttribute_mFileName ;
  public : GALGAS_string mAttribute_mBuildReference ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_BuildFileList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_BuildFileList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_BuildFileList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_BuildFileList_2D_element (const GALGAS_string & in_mFileReference,
                                            const GALGAS_string & in_mFileName,
                                            const GALGAS_string & in_mBuildReference) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_BuildFileList_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_BuildFileList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                   const class GALGAS_string & inOperand1,
                                                                   const class GALGAS_string & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_BuildFileList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBuildReference (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFileName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFileReference (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_BuildFileList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*

//class C_Compiler ;
//class GALGAS_lstring ;
//class GALGAS_string ;

//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_templateGrammar : public cParser_templateSyntax {
//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public : virtual void nt_expression_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_ (GALGAS_templateExpressionAST & outArgument0,
                                        C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'factor' non terminal
//--- 'parse' label
  public : virtual void nt_factor_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_factor_ (GALGAS_templateExpressionAST & outArgument0,
                                    C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'output_expression_list' non terminal
//--- 'parse' label
  public : virtual void nt_output_5F_expression_5F_list_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_output_5F_expression_5F_list_ (GALGAS_templateExpressionListAST & outArgument0,
                                                          C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
  public : virtual void nt_primary_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_primary_ (GALGAS_templateExpressionAST & outArgument0,
                                     C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'relation_factor' non terminal
//--- 'parse' label
  public : virtual void nt_relation_5F_factor_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_relation_5F_factor_ (GALGAS_templateExpressionAST & outArgument0,
                                                C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'relation_term' non terminal
//--- 'parse' label
  public : virtual void nt_relation_5F_term_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_relation_5F_term_ (GALGAS_templateExpressionAST & outArgument0,
                                              C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'simple_expression' non terminal
//--- 'parse' label
  public : virtual void nt_simple_5F_expression_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_simple_5F_expression_ (GALGAS_templateExpressionAST & outArgument0,
                                                  C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_template_5F_instruction_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_template_5F_instruction_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                     C_Lexique_galgasTemplateScanner * inCompiler) ;

//------------------------------------- 'template_parser_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_template_5F_parser_5F_start_5F_symbol_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_template_5F_parser_5F_start_5F_symbol_ (GALGAS_templateInstructionListAST & outArgument0,
                                                                   C_Lexique_galgasTemplateScanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_templateInstructionListAST & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_templateInstructionListAST & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//------------------------------------- 'term' non terminal
//--- 'parse' label
  public : virtual void nt_term_parse (C_Lexique_galgasTemplateScanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_term_ (GALGAS_templateExpressionAST & outArgument0,
                                  C_Lexique_galgasTemplateScanner * inCompiler) ;

  public : virtual int32_t select_templateSyntax_0 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_1 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_2 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_3 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_4 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_5 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_6 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_7 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_8 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_9 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_10 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_11 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_12 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_13 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_14 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_15 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_16 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_17 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_18 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_19 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_20 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_21 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_22 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_23 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_24 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_25 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_26 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_27 (C_Lexique_galgasTemplateScanner *) ;

  public : virtual int32_t select_templateSyntax_28 (C_Lexique_galgasTemplateScanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*

//class C_Compiler ;
//class GALGAS_lstring ;
//class GALGAS_string ;

//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_lexiqueLL_31_grammar : public cParser_lexiqueSyntax {
//------------------------------------- 'extern_routine_or_function_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_extern_5F_routine_5F_or_5F_function_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_extern_5F_routine_5F_or_5F_function_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_extern_5F_routine_5F_or_5F_function_5F_declaration_ (GALGAS_externRoutineListAST & ioArgument0,
                                                                                GALGAS_externFunctionListAST & ioArgument1,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'function_call_or_attribute' non terminal
//--- 'parse' label
  public : virtual void nt_function_5F_call_5F_or_5F_attribute_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                      C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_function_5F_call_5F_or_5F_attribute_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_function_5F_call_5F_or_5F_attribute_ (const GALGAS_lstring inArgument0,
                                                                 GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument1,
                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_attribute_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_attribute_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                      C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_attribute_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_attribute_5F_declaration_ (GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_explicit_rule' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_explicit_5F_rule_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_explicit_5F_rule_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_explicit_5F_rule_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                         C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_expression' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_expression_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                        C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_expression_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_expression_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_factor' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_factor_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                    C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_factor_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_factor_ (GALGAS_lexicalExpressionAST & outArgument0,
                                               C_String & ioSyntaxDirectedTranslationResult,
                                               C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_implicit_rule' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_implicit_5F_rule_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_implicit_5F_rule_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_implicit_5F_rule_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                         C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_instruction_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                         C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_instruction_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_instruction_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                    C_String & ioSyntaxDirectedTranslationResult,
                                                    C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_list_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_list_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_list_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_list_5F_declaration_ (GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_list_entry' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_list_5F_entry_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                           C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_list_5F_entry_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_list_5F_entry_ (GALGAS_lexicalListEntryListAST & ioArgument0,
                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                      C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_message_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_message_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                    C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_message_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_message_5F_declaration_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                               C_String & ioSyntaxDirectedTranslationResult,
                                                               C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_output_effective_argument' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_output_5F_effective_5F_argument_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                             C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                        C_String & ioSyntaxDirectedTranslationResult,
                                                                        C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_send_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_send_5F_instruction_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_send_5F_instruction_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_send_5F_instruction_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexical_term' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_term_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_term_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_term_ (GALGAS_lexicalExpressionAST & outArgument0,
                                             C_String & ioSyntaxDirectedTranslationResult,
                                             C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'lexique_component_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_lexique_5F_component_5F_start_5F_symbol_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexique_5F_component_5F_start_5F_symbol_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexique_5F_component_5F_start_5F_symbol_ (GALGAS_galgas_33_LexiqueComponentListAST_2D_element & outArgument0,
                                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_galgas_33_LexiqueComponentListAST_2D_element & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_galgas_33_LexiqueComponentListAST_2D_element & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Start symbol indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//------------------------------------- 'repeat_while_branch' non terminal
//--- 'parse' label
  public : virtual void nt_repeat_5F_while_5F_branch_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_repeat_5F_while_5F_branch_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_repeat_5F_while_5F_branch_ (GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'style_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_style_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_style_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_style_5F_declaration_ (GALGAS_lexicalStyleListAST & ioArgument0,
                                                  C_String & ioSyntaxDirectedTranslationResult,
                                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'template_delimitor' non terminal
//--- 'parse' label
  public : virtual void nt_template_5F_delimitor_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                        C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_template_5F_delimitor_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_template_5F_delimitor_ (GALGAS_metamodelTemplateDelimitorListAST & ioArgument0,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'template_replacement' non terminal
//--- 'parse' label
  public : virtual void nt_template_5F_replacement_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_template_5F_replacement_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_template_5F_replacement_ (GALGAS_templateReplacementListAST & ioArgument0,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'terminal_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_terminal_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_terminal_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_terminal_5F_declaration_ (GALGAS_terminalDeclarationListAST & ioArgument0,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

  public : virtual int32_t select_lexiqueSyntax_0 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_1 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_2 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_3 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_4 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_5 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_6 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_7 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_8 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_9 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_10 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_11 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_12 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_13 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_14 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_15 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_16 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_17 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_18 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_19 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_20 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_21 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_22 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_23 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_24 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_25 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_26 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_27 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_28 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_29 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_30 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_31 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_32 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_33 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_34 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_35 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_lexiqueSyntax_36 (C_Lexique_galgas_5F_scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*

//class C_Compiler ;
//class GALGAS_lstring ;
//class GALGAS_string ;

//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_optionLL_31_grammar : public cParser_optionSyntax {
//------------------------------------- 'option' non terminal
//--- 'parse' label
  public : virtual void nt_option_parse (C_String & ioSyntaxDirectedTranslationResult,
                                         C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_option_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_option_ (GALGAS_commandLineOptionListAST & ioArgument0,
                                    C_String & ioSyntaxDirectedTranslationResult,
                                    C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'option_component_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_option_5F_component_5F_start_5F_symbol_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                         C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_option_5F_component_5F_start_5F_symbol_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_option_5F_component_5F_start_5F_symbol_ (GALGAS_optionComponentAST & outArgument0,
                                                                    C_String & ioSyntaxDirectedTranslationResult,
                                                                    C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_optionComponentAST & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_optionComponentAST & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Start symbol indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

  public : virtual int32_t select_optionSyntax_0 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_optionSyntax_1 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_optionSyntax_2 (C_Lexique_galgas_5F_scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*

//class C_Compiler ;
//class GALGAS_lstring ;
//class GALGAS_string ;

//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_guiGrammar : public cParser_guiSyntax {
//------------------------------------- 'gui_component_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_gui_5F_component_5F_start_5F_symbol_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                      C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_gui_5F_component_5F_start_5F_symbol_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gui_5F_component_5F_start_5F_symbol_ (GALGAS_guiComponentAST & outArgument0,
                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_guiComponentAST & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_guiComponentAST & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Start symbol indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

  public : virtual int32_t select_guiSyntax_0 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_guiSyntax_1 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_guiSyntax_2 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_guiSyntax_3 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_guiSyntax_4 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_guiSyntax_5 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_guiSyntax_6 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_guiSyntax_7 (C_Lexique_galgas_5F_scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*

//class C_Compiler ;
//class GALGAS_lstring ;
//class GALGAS_string ;

//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_semanticsSLRgrammar : public cParser_expressionSyntax,
                                     public cParser_parameterArgumentSyntax,
                                     public cParser_semanticInstructionsSyntax,
                                     public cParser_semanticsComponent,
                                     public cParser_semanticDeclarationsSyntax {
//------------------------------------- 'actual_input_parameter' non terminal
//--- 'parse' label
  public : virtual void nt_actual_5F_input_5F_parameter_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                               C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_actual_5F_input_5F_parameter_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_actual_5F_input_5F_parameter_ (GALGAS_lstring & outArgument0,
                                                          GALGAS_abstractInputParameter & outArgument1,
                                                          C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'actual_input_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_actual_5F_input_5F_parameter_5F_list_ (GALGAS_actualInputParameterListAST & outArgument0,
                                                                  C_String & ioSyntaxDirectedTranslationResult,
                                                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'actual_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_actual_5F_parameter_5F_list_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_actual_5F_parameter_5F_list_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_actual_5F_parameter_5F_list_ (GALGAS_actualParameterListAST & outArgument0,
                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                         C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'attribute_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_attribute_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                           C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_attribute_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_attribute_5F_declaration_ (GALGAS_attributeInCollectionListAST & ioArgument0,
                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                      C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'cast_else_or_default' non terminal
//--- 'parse' label
  public : virtual void nt_cast_5F_else_5F_or_5F_default_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_cast_5F_else_5F_or_5F_default_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_cast_5F_else_5F_or_5F_default_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                           C_String & ioSyntaxDirectedTranslationResult,
                                                           C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'cast_instruction_branch' non terminal
//--- 'parse' label
  public : virtual void nt_cast_5F_instruction_5F_branch_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_cast_5F_instruction_5F_branch_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_cast_5F_instruction_5F_branch_ (GALGAS_castInstructionBranchListAST & ioArgument0,
                                                           C_String & ioSyntaxDirectedTranslationResult,
                                                           C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'collection_value_element' non terminal
//--- 'parse' label
  public : virtual void nt_collection_5F_value_5F_element_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_collection_5F_value_5F_element_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_collection_5F_value_5F_element_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'concatenation_term' non terminal
//--- 'parse' label
  public : virtual void nt_concatenation_5F_term_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                        C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_concatenation_5F_term_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_concatenation_5F_term_ (GALGAS_semanticExpressionAST & outArgument0,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public : virtual void nt_expression_parse (C_String & ioSyntaxDirectedTranslationResult,
                                             C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_expression_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_ (GALGAS_semanticExpressionAST & outArgument0,
                                        C_String & ioSyntaxDirectedTranslationResult,
                                        C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'factor' non terminal
//--- 'parse' label
  public : virtual void nt_factor_parse (C_String & ioSyntaxDirectedTranslationResult,
                                         C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_factor_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_factor_ (GALGAS_semanticExpressionAST & outArgument0,
                                    C_String & ioSyntaxDirectedTranslationResult,
                                    C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'for_instruction_element' non terminal
//--- 'parse' label
  public : virtual void nt_for_5F_instruction_5F_element_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_for_5F_instruction_5F_element_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_for_5F_instruction_5F_element_ (GALGAS_foreachInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                           C_String & ioSyntaxDirectedTranslationResult,
                                                           C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'for_instruction_enumerated_object' non terminal
//--- 'parse' label
  public : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                             C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                        C_String & ioSyntaxDirectedTranslationResult,
                                                                        C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'foreach_enumerated_object' non terminal
//--- 'parse' label
  public : virtual void nt_foreach_5F_enumerated_5F_object_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_foreach_5F_enumerated_5F_object_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_foreach_5F_enumerated_5F_object_ (GALGAS_foreachInstructionEnumeratedObjectListAST & ioArgument0,
                                                             C_String & ioSyntaxDirectedTranslationResult,
                                                             C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'formal_input_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_formal_5F_input_5F_parameter_5F_list_ (GALGAS_formalInputParameterListAST & outArgument0,
                                                                  C_String & ioSyntaxDirectedTranslationResult,
                                                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'formal_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_formal_5F_parameter_5F_list_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_formal_5F_parameter_5F_list_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_formal_5F_parameter_5F_list_ (GALGAS_formalParameterListAST & outArgument0,
                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                         C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'if_branch' non terminal
//--- 'parse' label
  public : virtual void nt_if_5F_branch_parse (C_String & ioSyntaxDirectedTranslationResult,
                                               C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_if_5F_branch_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_if_5F_branch_ (GALGAS_semanticInstructionAST & outArgument0,
                                          C_String & ioSyntaxDirectedTranslationResult,
                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'insert_method_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_insert_5F_method_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_insert_5F_method_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_insert_5F_method_5F_declaration_ (GALGAS_insertMethodListAST & ioArgument0,
                                                             C_String & ioSyntaxDirectedTranslationResult,
                                                             C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'local_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_local_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_local_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_local_5F_declaration_ (GALGAS_bool & outArgument0,
                                                  C_String & ioSyntaxDirectedTranslationResult,
                                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'match_entry' non terminal
//--- 'parse' label
  public : virtual void nt_match_5F_entry_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                 C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_match_5F_entry_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_match_5F_entry_ (GALGAS_matchEntryListAST & ioArgument0,
                                            C_String & ioSyntaxDirectedTranslationResult,
                                            C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'match_instruction_branch' non terminal
//--- 'parse' label
  public : virtual void nt_match_5F_instruction_5F_branch_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_match_5F_instruction_5F_branch_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_match_5F_instruction_5F_branch_ (GALGAS_matchInstructionBranchListAST & ioArgument0,
                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'output_expression_list' non terminal
//--- 'parse' label
  public : virtual void nt_output_5F_expression_5F_list_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                               C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_output_5F_expression_5F_list_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_output_5F_expression_5F_list_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                          C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
  public : virtual void nt_primary_parse (C_String & ioSyntaxDirectedTranslationResult,
                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_primary_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_primary_ (GALGAS_semanticExpressionAST & outArgument0,
                                     C_String & ioSyntaxDirectedTranslationResult,
                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'relation_factor' non terminal
//--- 'parse' label
  public : virtual void nt_relation_5F_factor_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_relation_5F_factor_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_relation_5F_factor_ (GALGAS_semanticExpressionAST & outArgument0,
                                                C_String & ioSyntaxDirectedTranslationResult,
                                                C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'relation_term' non terminal
//--- 'parse' label
  public : virtual void nt_relation_5F_term_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                   C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_relation_5F_term_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_relation_5F_term_ (GALGAS_semanticExpressionAST & outArgument0,
                                              C_String & ioSyntaxDirectedTranslationResult,
                                              C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'semantic_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_semantic_5F_declaration_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_semantic_5F_declaration_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_semantic_5F_declaration_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'semantic_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_semantic_5F_instruction_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_semantic_5F_instruction_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_semantic_5F_instruction_ (GALGAS_semanticInstructionAST & outArgument0,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'semantic_instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_semantic_5F_instruction_5F_list_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_semantic_5F_instruction_5F_list_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_semantic_5F_instruction_5F_list_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                             C_String & ioSyntaxDirectedTranslationResult,
                                                             C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'semantics_component_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_semantics_5F_component_5F_start_5F_symbol_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_semantics_5F_component_5F_start_5F_symbol_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_semantics_5F_component_5F_start_5F_symbol_ (GALGAS_semanticsComponentAST & outArgument0,
                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_semanticsComponentAST & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_semanticsComponentAST & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Start symbol indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//------------------------------------- 'simple_expression' non terminal
//--- 'parse' label
  public : virtual void nt_simple_5F_expression_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_simple_5F_expression_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_simple_5F_expression_ (GALGAS_semanticExpressionAST & outArgument0,
                                                  C_String & ioSyntaxDirectedTranslationResult,
                                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'sortedlist_sort_descriptor' non terminal
//--- 'parse' label
  public : virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                   C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_sortedlist_5F_sort_5F_descriptor_ (GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'syntax_directed_translation_result' non terminal
//--- 'parse' label
  public : virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                              C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                                         C_Lexique_galgas_5F_scanner * inCompiler) ;

//------------------------------------- 'term' non terminal
//--- 'parse' label
  public : virtual void nt_term_parse (C_String & ioSyntaxDirectedTranslationResult,
                                       C_Lexique_galgas_5F_scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_term_indexing (C_Lexique_galgas_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_term_ (GALGAS_semanticExpressionAST & outArgument0,
                                  C_String & ioSyntaxDirectedTranslationResult,
                                  C_Lexique_galgas_5F_scanner * inCompiler) ;

  public : virtual int32_t select_expressionSyntax_0 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_1 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_2 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_3 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_4 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_5 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_6 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_7 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_8 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_9 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_10 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_11 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_12 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_13 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_14 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_15 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_expressionSyntax_16 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_0 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_1 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_2 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_3 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_4 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_5 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_6 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_7 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_8 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_9 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_10 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_parameterArgumentSyntax_11 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_0 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_1 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_2 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_3 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_4 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_5 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_6 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_7 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_8 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_9 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_10 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_11 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_12 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_13 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_14 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_15 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_16 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_17 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_18 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_19 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_20 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_21 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_22 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_23 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_24 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_25 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_26 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_27 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_28 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_29 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_30 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_31 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_32 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_33 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_34 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_35 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_36 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_37 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_38 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_39 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_40 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_41 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_42 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_43 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_44 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_45 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_46 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_47 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_48 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_49 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_50 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_51 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_52 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_53 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_54 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_55 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_56 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_57 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_58 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_59 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_60 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_61 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_62 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_63 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_64 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_65 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticInstructionsSyntax_66 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticsComponent_0 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_0 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_1 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_2 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_3 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_4 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_5 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_6 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_7 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_8 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_9 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_10 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_11 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_12 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_13 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_14 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_15 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_16 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_17 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_18 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_19 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_20 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_21 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_22 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_23 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_24 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_25 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_26 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_27 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_28 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_29 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_30 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_31 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_32 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_33 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_34 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_35 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_36 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_37 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_38 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_39 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_40 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_41 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_42 (C_Lexique_galgas_5F_scanner *) ;

  public : virtual int32_t select_semanticDeclarationsSyntax_43 (C_Lexique_galgas_5F_scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
#endif
