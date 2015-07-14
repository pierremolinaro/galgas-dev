#ifndef all_2D_declarations_2D__33__ENTITIES_DEFINED
#define all_2D_declarations_2D__33__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @externTypeMethodList list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externTypeMethodList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_externTypeMethodList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_externTypeMethodList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mMethodName,
                                                  const class GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                  const class GALGAS_location & in_mDeclarationLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externTypeMethodList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_externTypeMethodList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_externTypeMethodList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_formalParameterListAST & inOperand1,
                                                                         const class GALGAS_location & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_externTypeMethodList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_formalParameterListAST & inOperand1,
                                                      const class GALGAS_location & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_externTypeMethodList operator_concat (const GALGAS_externTypeMethodList & inOperand
                                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_externTypeMethodList add_operation (const GALGAS_externTypeMethodList & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_formalParameterListAST constinArgument1,
                                                         class GALGAS_location constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_formalParameterListAST & outArgument1,
                                                    class GALGAS_location & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_formalParameterListAST & outArgument1,
                                                   class GALGAS_location & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_formalParameterListAST & outArgument1,
                                                         class GALGAS_location & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_formalParameterListAST & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalParameterListAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mDeclarationLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST reader_mFormalParameterListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMethodNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externTypeMethodList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externTypeMethodList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externTypeMethodList ;
 
} ; // End of GALGAS_externTypeMethodList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_externTypeMethodList : public cGenericAbstractEnumerator {
  public : cEnumerator_externTypeMethodList (const GALGAS_externTypeMethodList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mMethodName (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mDeclarationLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externTypeMethodList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeMethodList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @externTypeMethodList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externTypeMethodList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mMethodName ;
  public : GALGAS_formalParameterListAST mAttribute_mFormalParameterList ;
  public : GALGAS_location mAttribute_mDeclarationLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_externTypeMethodList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_externTypeMethodList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_externTypeMethodList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_externTypeMethodList_2D_element (const GALGAS_lstring & in_mMethodName,
                                                   const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                   const GALGAS_location & in_mDeclarationLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externTypeMethodList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_externTypeMethodList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_formalParameterListAST & inOperand1,
                                                                          const class GALGAS_location & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externTypeMethodList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mDeclarationLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST reader_mFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMethodName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externTypeMethodList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeMethodList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @typeNameFormalParameterNameList_2D_element struct                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeNameFormalParameterNameList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mFormalSelector ;
  public : GALGAS_lstring mAttribute_mFormalParameterTypeName ;
  public : GALGAS_lstring mAttribute_mFormalParameterName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typeNameFormalParameterNameList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_typeNameFormalParameterNameList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_typeNameFormalParameterNameList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_typeNameFormalParameterNameList_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                              const GALGAS_lstring & in_mFormalParameterTypeName,
                                                              const GALGAS_lstring & in_mFormalParameterName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeNameFormalParameterNameList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_typeNameFormalParameterNameList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeNameFormalParameterNameList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFormalParameterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFormalParameterTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFormalSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeNameFormalParameterNameList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeNameFormalParameterNameList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @syntaxInstructionList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxInstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_syntaxInstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_syntaxInstructionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_syntaxInstructionAST & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxInstructionList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_syntaxInstructionList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_syntaxInstructionList constructor_listWithValue (const class GALGAS_syntaxInstructionAST & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_syntaxInstructionList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_syntaxInstructionAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxInstructionList operator_concat (const GALGAS_syntaxInstructionList & inOperand
                                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxInstructionList add_operation (const GALGAS_syntaxInstructionList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_syntaxInstructionAST constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_syntaxInstructionAST & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_syntaxInstructionAST & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_syntaxInstructionAST & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_syntaxInstructionAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_syntaxInstructionAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syntaxInstructionList ;
 
} ; // End of GALGAS_syntaxInstructionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_syntaxInstructionList : public cGenericAbstractEnumerator {
  public : cEnumerator_syntaxInstructionList (const GALGAS_syntaxInstructionList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_syntaxInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_syntaxInstructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @syntaxInstructionList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxInstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_syntaxInstructionAST mAttribute_mInstruction ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_syntaxInstructionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_syntaxInstructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_syntaxInstructionList_2D_element (const GALGAS_syntaxInstructionAST & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxInstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_syntaxInstructionList_2D_element constructor_new (const class GALGAS_syntaxInstructionAST & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syntaxInstructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionAST reader_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxInstructionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @nonTerminalLabelListAST_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonTerminalLabelListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mLabelName ;
  public : GALGAS_formalParameterListAST mAttribute_mFormalArgumentList ;
  public : GALGAS_location mAttribute_mEndOfArgumentLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_nonTerminalLabelListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_nonTerminalLabelListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_nonTerminalLabelListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_nonTerminalLabelListAST_2D_element (const GALGAS_lstring & in_mLabelName,
                                                      const GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                                      const GALGAS_location & in_mEndOfArgumentLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonTerminalLabelListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_nonTerminalLabelListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_formalParameterListAST & inOperand1,
                                                                             const class GALGAS_location & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_nonTerminalLabelListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfArgumentLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST reader_mFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLabelName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonTerminalLabelListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalLabelListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @nonterminalDeclarationListAST_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonterminalDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mNonterminalName ;
  public : GALGAS_nonTerminalLabelListAST mAttribute_mLabels ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_nonterminalDeclarationListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_nonterminalDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_nonterminalDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_nonterminalDeclarationListAST_2D_element (const GALGAS_lstring & in_mNonterminalName,
                                                            const GALGAS_nonTerminalLabelListAST & in_mLabels) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonterminalDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_nonterminalDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_nonTerminalLabelListAST & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_nonterminalDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_nonTerminalLabelListAST reader_mLabels (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mNonterminalName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonterminalDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @syntaxRuleLabelListAST list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxRuleLabelListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_syntaxRuleLabelListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_syntaxRuleLabelListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mLabelName,
                                                  const class GALGAS_formalParameterListAST & in_mFormalArguments,
                                                  const class GALGAS_location & in_mEndOfArgumentLocation,
                                                  const class GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                  const class GALGAS_location & in_mEndOfInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxRuleLabelListAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_syntaxRuleLabelListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_syntaxRuleLabelListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_formalParameterListAST & inOperand1,
                                                                           const class GALGAS_location & inOperand2,
                                                                           const class GALGAS_syntaxInstructionList & inOperand3,
                                                                           const class GALGAS_location & inOperand4
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_syntaxRuleLabelListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_formalParameterListAST & inOperand1,
                                                      const class GALGAS_location & inOperand2,
                                                      const class GALGAS_syntaxInstructionList & inOperand3,
                                                      const class GALGAS_location & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxRuleLabelListAST operator_concat (const GALGAS_syntaxRuleLabelListAST & inOperand
                                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxRuleLabelListAST add_operation (const GALGAS_syntaxRuleLabelListAST & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_formalParameterListAST constinArgument1,
                                                         class GALGAS_location constinArgument2,
                                                         class GALGAS_syntaxInstructionList constinArgument3,
                                                         class GALGAS_location constinArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_formalParameterListAST & outArgument1,
                                                    class GALGAS_location & outArgument2,
                                                    class GALGAS_syntaxInstructionList & outArgument3,
                                                    class GALGAS_location & outArgument4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_formalParameterListAST & outArgument1,
                                                   class GALGAS_location & outArgument2,
                                                   class GALGAS_syntaxInstructionList & outArgument3,
                                                   class GALGAS_location & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_formalParameterListAST & outArgument1,
                                                         class GALGAS_location & outArgument2,
                                                         class GALGAS_syntaxInstructionList & outArgument3,
                                                         class GALGAS_location & outArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_formalParameterListAST & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               class GALGAS_syntaxInstructionList & outArgument3,
                                               class GALGAS_location & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalParameterListAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              class GALGAS_syntaxInstructionList & outArgument3,
                                              class GALGAS_location & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleLabelListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleLabelListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syntaxRuleLabelListAST ;
 
} ; // End of GALGAS_syntaxRuleLabelListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_syntaxRuleLabelListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_syntaxRuleLabelListAST (const GALGAS_syntaxRuleLabelListAST & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public : class GALGAS_formalParameterListAST current_mFormalArguments (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
  public : class GALGAS_syntaxInstructionList current_mSyntaxInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_syntaxRuleLabelListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleLabelListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @syntaxRuleLabelListAST_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxRuleLabelListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mLabelName ;
  public : GALGAS_formalParameterListAST mAttribute_mFormalArguments ;
  public : GALGAS_location mAttribute_mEndOfArgumentLocation ;
  public : GALGAS_syntaxInstructionList mAttribute_mSyntaxInstructionList ;
  public : GALGAS_location mAttribute_mEndOfInstructionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_syntaxRuleLabelListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_syntaxRuleLabelListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_syntaxRuleLabelListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_syntaxRuleLabelListAST_2D_element (const GALGAS_lstring & in_mLabelName,
                                                     const GALGAS_formalParameterListAST & in_mFormalArguments,
                                                     const GALGAS_location & in_mEndOfArgumentLocation,
                                                     const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                     const GALGAS_location & in_mEndOfInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxRuleLabelListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_syntaxRuleLabelListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_formalParameterListAST & inOperand1,
                                                                            const class GALGAS_location & inOperand2,
                                                                            const class GALGAS_syntaxInstructionList & inOperand3,
                                                                            const class GALGAS_location & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syntaxRuleLabelListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfArgumentLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST reader_mFormalArguments (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLabelName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList reader_mSyntaxInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxRuleLabelListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleLabelListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @syntaxRuleListAST_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxRuleListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mNonterminalName ;
  public : GALGAS_syntaxRuleLabelListAST mAttribute_mLabelList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_syntaxRuleListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_syntaxRuleListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_syntaxRuleListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_syntaxRuleListAST_2D_element (const GALGAS_lstring & in_mNonterminalName,
                                                const GALGAS_syntaxRuleLabelListAST & in_mLabelList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxRuleListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_syntaxRuleListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_syntaxRuleLabelListAST & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syntaxRuleListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleLabelListAST reader_mLabelList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mNonterminalName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxRuleListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @listOfSyntaxInstructionList list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_listOfSyntaxInstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_listOfSyntaxInstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_listOfSyntaxInstructionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                  const class GALGAS_location & in_mEndOf_5F_instructions
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_listOfSyntaxInstructionList extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_listOfSyntaxInstructionList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_listOfSyntaxInstructionList constructor_listWithValue (const class GALGAS_syntaxInstructionList & inOperand0,
                                                                                const class GALGAS_location & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_listOfSyntaxInstructionList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_syntaxInstructionList & inOperand0,
                                                      const class GALGAS_location & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_listOfSyntaxInstructionList operator_concat (const GALGAS_listOfSyntaxInstructionList & inOperand
                                                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_listOfSyntaxInstructionList add_operation (const GALGAS_listOfSyntaxInstructionList & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_syntaxInstructionList constinArgument0,
                                                         class GALGAS_location constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_syntaxInstructionList & outArgument0,
                                                    class GALGAS_location & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_syntaxInstructionList & outArgument0,
                                                   class GALGAS_location & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_syntaxInstructionList & outArgument0,
                                                         class GALGAS_location & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_syntaxInstructionList & outArgument0,
                                               class GALGAS_location & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_syntaxInstructionList & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_listOfSyntaxInstructionList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_listOfSyntaxInstructionList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_listOfSyntaxInstructionList ;
 
} ; // End of GALGAS_listOfSyntaxInstructionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_listOfSyntaxInstructionList : public cGenericAbstractEnumerator {
  public : cEnumerator_listOfSyntaxInstructionList (const GALGAS_listOfSyntaxInstructionList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_syntaxInstructionList current_mSyntaxInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOf_5F_instructions (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_listOfSyntaxInstructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @listOfSyntaxInstructionList_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_listOfSyntaxInstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_syntaxInstructionList mAttribute_mSyntaxInstructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_instructions ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_listOfSyntaxInstructionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_listOfSyntaxInstructionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_listOfSyntaxInstructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_listOfSyntaxInstructionList_2D_element (const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                          const GALGAS_location & in_mEndOf_5F_instructions) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_listOfSyntaxInstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_listOfSyntaxInstructionList_2D_element constructor_new (const class GALGAS_syntaxInstructionList & inOperand0,
                                                                                 const class GALGAS_location & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_listOfSyntaxInstructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_instructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList reader_mSyntaxInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_listOfSyntaxInstructionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @collectionValueElementList list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_collectionValueElementList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_collectionValueElementList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_collectionValueElementList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractCollectionValueElement & in_mElement
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_collectionValueElementList extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_collectionValueElementList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_collectionValueElementList constructor_listWithValue (const class GALGAS_abstractCollectionValueElement & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_collectionValueElementList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractCollectionValueElement & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_collectionValueElementList operator_concat (const GALGAS_collectionValueElementList & inOperand
                                                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_collectionValueElementList add_operation (const GALGAS_collectionValueElementList & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_abstractCollectionValueElement constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_abstractCollectionValueElement & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_abstractCollectionValueElement & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_abstractCollectionValueElement & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractCollectionValueElement & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractCollectionValueElement & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractCollectionValueElement reader_mElementAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_collectionValueElementList ;
 
} ; // End of GALGAS_collectionValueElementList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_collectionValueElementList : public cGenericAbstractEnumerator {
  public : cEnumerator_collectionValueElementList (const GALGAS_collectionValueElementList & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractCollectionValueElement current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_collectionValueElementList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueElementList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @abstractCollectionValueElement class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractCollectionValueElement : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractCollectionValueElement (void) ;

//---
  public : inline const class cPtr_abstractCollectionValueElement * ptr (void) const { return (const cPtr_abstractCollectionValueElement *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractCollectionValueElement (const cPtr_abstractCollectionValueElement * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractCollectionValueElement extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractCollectionValueElement & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractCollectionValueElement class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractCollectionValueElement ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @abstractCollectionValueElement class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractCollectionValueElement : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractCollectionValueElement (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @collectionValueElementList_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_collectionValueElementList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_abstractCollectionValueElement mAttribute_mElement ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_collectionValueElementList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_collectionValueElementList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_collectionValueElementList_2D_element (const GALGAS_abstractCollectionValueElement & in_mElement) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_collectionValueElementList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_collectionValueElementList_2D_element constructor_new (const class GALGAS_abstractCollectionValueElement & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_collectionValueElementList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractCollectionValueElement reader_mElement (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_collectionValueElementList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueElementList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @galgas3SyntaxComponentListAST list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_SyntaxComponentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_galgas_33_SyntaxComponentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_galgas_33_SyntaxComponentListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mSyntaxComponentName,
                                                  const class GALGAS_lstring & in_mImportedLexiqueFilePath,
                                                  const class GALGAS_lstringlist & in_mImportedComponentFileNameList,
                                                  const class GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                  const class GALGAS_syntaxRuleListAST & in_mRuleList,
                                                  const class GALGAS_semanticDeclarationListAST & in_mSemanticDeclarationList,
                                                  const class GALGAS_bool & in_mHasTranslateFeature
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_SyntaxComponentListAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_galgas_33_SyntaxComponentListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_galgas_33_SyntaxComponentListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_lstringlist & inOperand2,
                                                                                     const class GALGAS_nonterminalDeclarationListAST & inOperand3,
                                                                                     const class GALGAS_syntaxRuleListAST & inOperand4,
                                                                                     const class GALGAS_semanticDeclarationListAST & inOperand5,
                                                                                     const class GALGAS_bool & inOperand6
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_galgas_33_SyntaxComponentListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstringlist & inOperand2,
                                                      const class GALGAS_nonterminalDeclarationListAST & inOperand3,
                                                      const class GALGAS_syntaxRuleListAST & inOperand4,
                                                      const class GALGAS_semanticDeclarationListAST & inOperand5,
                                                      const class GALGAS_bool & inOperand6
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_galgas_33_SyntaxComponentListAST operator_concat (const GALGAS_galgas_33_SyntaxComponentListAST & inOperand
                                                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_galgas_33_SyntaxComponentListAST add_operation (const GALGAS_galgas_33_SyntaxComponentListAST & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_lstringlist constinArgument2,
                                                         class GALGAS_nonterminalDeclarationListAST constinArgument3,
                                                         class GALGAS_syntaxRuleListAST constinArgument4,
                                                         class GALGAS_semanticDeclarationListAST constinArgument5,
                                                         class GALGAS_bool constinArgument6,
                                                         class GALGAS_uint constinArgument7,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_lstringlist & outArgument2,
                                                    class GALGAS_nonterminalDeclarationListAST & outArgument3,
                                                    class GALGAS_syntaxRuleListAST & outArgument4,
                                                    class GALGAS_semanticDeclarationListAST & outArgument5,
                                                    class GALGAS_bool & outArgument6,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_lstringlist & outArgument2,
                                                   class GALGAS_nonterminalDeclarationListAST & outArgument3,
                                                   class GALGAS_syntaxRuleListAST & outArgument4,
                                                   class GALGAS_semanticDeclarationListAST & outArgument5,
                                                   class GALGAS_bool & outArgument6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_lstringlist & outArgument2,
                                                         class GALGAS_nonterminalDeclarationListAST & outArgument3,
                                                         class GALGAS_syntaxRuleListAST & outArgument4,
                                                         class GALGAS_semanticDeclarationListAST & outArgument5,
                                                         class GALGAS_bool & outArgument6,
                                                         class GALGAS_uint constinArgument7,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstringlist & outArgument2,
                                               class GALGAS_nonterminalDeclarationListAST & outArgument3,
                                               class GALGAS_syntaxRuleListAST & outArgument4,
                                               class GALGAS_semanticDeclarationListAST & outArgument5,
                                               class GALGAS_bool & outArgument6,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstringlist & outArgument2,
                                              class GALGAS_nonterminalDeclarationListAST & outArgument3,
                                              class GALGAS_syntaxRuleListAST & outArgument4,
                                              class GALGAS_semanticDeclarationListAST & outArgument5,
                                              class GALGAS_bool & outArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasTranslateFeatureAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mImportedComponentFileNameListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mImportedLexiqueFilePathAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST reader_mNonterminalDeclarationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST reader_mRuleListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationListAST reader_mSemanticDeclarationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mSyntaxComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxComponentListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxComponentListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_galgas_33_SyntaxComponentListAST ;
 
} ; // End of GALGAS_galgas_33_SyntaxComponentListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_galgas_33_SyntaxComponentListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_galgas_33_SyntaxComponentListAST (const GALGAS_galgas_33_SyntaxComponentListAST & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mImportedLexiqueFilePath (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mImportedComponentFileNameList (LOCATION_ARGS) const ;
  public : class GALGAS_nonterminalDeclarationListAST current_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public : class GALGAS_syntaxRuleListAST current_mRuleList (LOCATION_ARGS) const ;
  public : class GALGAS_semanticDeclarationListAST current_mSemanticDeclarationList (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasTranslateFeature (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_galgas_33_SyntaxComponentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @galgas3SyntaxExtensionListAST list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_SyntaxExtensionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_galgas_33_SyntaxExtensionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_galgas_33_SyntaxExtensionListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mSyntaxComponentName,
                                                  const class GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                  const class GALGAS_syntaxRuleListAST & in_mRuleList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_SyntaxExtensionListAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_galgas_33_SyntaxExtensionListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_galgas_33_SyntaxExtensionListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                     const class GALGAS_syntaxRuleListAST & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_galgas_33_SyntaxExtensionListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                      const class GALGAS_syntaxRuleListAST & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_galgas_33_SyntaxExtensionListAST operator_concat (const GALGAS_galgas_33_SyntaxExtensionListAST & inOperand
                                                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_galgas_33_SyntaxExtensionListAST add_operation (const GALGAS_galgas_33_SyntaxExtensionListAST & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_nonterminalDeclarationListAST constinArgument1,
                                                         class GALGAS_syntaxRuleListAST constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                                    class GALGAS_syntaxRuleListAST & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                                   class GALGAS_syntaxRuleListAST & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                                         class GALGAS_syntaxRuleListAST & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                               class GALGAS_syntaxRuleListAST & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                              class GALGAS_syntaxRuleListAST & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST reader_mNonterminalDeclarationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST reader_mRuleListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mSyntaxComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_galgas_33_SyntaxExtensionListAST ;
 
} ; // End of GALGAS_galgas_33_SyntaxExtensionListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_galgas_33_SyntaxExtensionListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_galgas_33_SyntaxExtensionListAST (const GALGAS_galgas_33_SyntaxExtensionListAST & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public : class GALGAS_nonterminalDeclarationListAST current_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public : class GALGAS_syntaxRuleListAST current_mRuleList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @galgas_33_SyntaxExtensionListAST_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mSyntaxComponentName ;
  public : GALGAS_nonterminalDeclarationListAST mAttribute_mNonterminalDeclarationList ;
  public : GALGAS_syntaxRuleListAST mAttribute_mRuleList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_galgas_33_SyntaxExtensionListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (const GALGAS_lstring & in_mSyntaxComponentName,
                                                               const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                               const GALGAS_syntaxRuleListAST & in_mRuleList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_SyntaxExtensionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_galgas_33_SyntaxExtensionListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                      const class GALGAS_syntaxRuleListAST & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_galgas_33_SyntaxExtensionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST reader_mNonterminalDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST reader_mRuleList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mSyntaxComponentName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_SyntaxExtensionListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @syntaxExtensions list map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxExtensions : public AC_GALGAS_listmap {
//--------------------------------- Default constructor
  public : GALGAS_syntaxExtensions (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxExtensions extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_syntaxExtensions constructor_emptyMap (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                      const class GALGAS_syntaxRuleListAST & inOperand3
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST reader_listForKey (const class GALGAS_string & constinOperand0
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syntaxExtensions ;
 
} ; // End of GALGAS_syntaxExtensions class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_syntaxExtensions : public cGenericAbstractEnumerator {
  public : cEnumerator_syntaxExtensions (const GALGAS_syntaxExtensions & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_key (LOCATION_ARGS) const ;
  public : class GALGAS_galgas_33_SyntaxExtensionListAST current_mList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_syntaxExtensions_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensions ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @syntaxExtensions_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxExtensions_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_key ;
  public : GALGAS_galgas_33_SyntaxExtensionListAST mAttribute_mList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_syntaxExtensions_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_syntaxExtensions_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_syntaxExtensions_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_syntaxExtensions_2D_element (const GALGAS_string & in_key,
                                               const GALGAS_galgas_33_SyntaxExtensionListAST & in_mList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxExtensions_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_syntaxExtensions_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                      const class GALGAS_galgas_33_SyntaxExtensionListAST & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syntaxExtensions_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_key (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST reader_mList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxExtensions_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensions_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @galgas3GrammarComponentListAST list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_GrammarComponentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_galgas_33_GrammarComponentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_galgas_33_GrammarComponentListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lbool & in_mHasIndexing,
                                                  const class GALGAS_lstring & in_mGrammarComponentName,
                                                  const class GALGAS_lstring & in_mGrammarClass,
                                                  const class GALGAS_lstringlist & in_mSyntaxComponents,
                                                  const class GALGAS_lstring & in_mStartSymbolName,
                                                  const class GALGAS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                  const class GALGAS_lstringlist & in_mUnusedNonterminalList,
                                                  const class GALGAS_bool & in_mHasTranslateFeature
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_GrammarComponentListAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_galgas_33_GrammarComponentListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_galgas_33_GrammarComponentListAST constructor_listWithValue (const class GALGAS_lbool & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2,
                                                                                      const class GALGAS_lstringlist & inOperand3,
                                                                                      const class GALGAS_lstring & inOperand4,
                                                                                      const class GALGAS_nonTerminalLabelListAST & inOperand5,
                                                                                      const class GALGAS_lstringlist & inOperand6,
                                                                                      const class GALGAS_bool & inOperand7
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_galgas_33_GrammarComponentListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lbool & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_lstringlist & inOperand3,
                                                      const class GALGAS_lstring & inOperand4,
                                                      const class GALGAS_nonTerminalLabelListAST & inOperand5,
                                                      const class GALGAS_lstringlist & inOperand6,
                                                      const class GALGAS_bool & inOperand7
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_galgas_33_GrammarComponentListAST operator_concat (const GALGAS_galgas_33_GrammarComponentListAST & inOperand
                                                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_galgas_33_GrammarComponentListAST add_operation (const GALGAS_galgas_33_GrammarComponentListAST & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lbool constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_lstring constinArgument2,
                                                         class GALGAS_lstringlist constinArgument3,
                                                         class GALGAS_lstring constinArgument4,
                                                         class GALGAS_nonTerminalLabelListAST constinArgument5,
                                                         class GALGAS_lstringlist constinArgument6,
                                                         class GALGAS_bool constinArgument7,
                                                         class GALGAS_uint constinArgument8,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lbool & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_lstring & outArgument2,
                                                    class GALGAS_lstringlist & outArgument3,
                                                    class GALGAS_lstring & outArgument4,
                                                    class GALGAS_nonTerminalLabelListAST & outArgument5,
                                                    class GALGAS_lstringlist & outArgument6,
                                                    class GALGAS_bool & outArgument7,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lbool & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   class GALGAS_lstringlist & outArgument3,
                                                   class GALGAS_lstring & outArgument4,
                                                   class GALGAS_nonTerminalLabelListAST & outArgument5,
                                                   class GALGAS_lstringlist & outArgument6,
                                                   class GALGAS_bool & outArgument7,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lbool & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_lstring & outArgument2,
                                                         class GALGAS_lstringlist & outArgument3,
                                                         class GALGAS_lstring & outArgument4,
                                                         class GALGAS_nonTerminalLabelListAST & outArgument5,
                                                         class GALGAS_lstringlist & outArgument6,
                                                         class GALGAS_bool & outArgument7,
                                                         class GALGAS_uint constinArgument8,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lbool & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_lstringlist & outArgument3,
                                               class GALGAS_lstring & outArgument4,
                                               class GALGAS_nonTerminalLabelListAST & outArgument5,
                                               class GALGAS_lstringlist & outArgument6,
                                               class GALGAS_bool & outArgument7,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lbool & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_lstringlist & outArgument3,
                                              class GALGAS_lstring & outArgument4,
                                              class GALGAS_nonTerminalLabelListAST & outArgument5,
                                              class GALGAS_lstringlist & outArgument6,
                                              class GALGAS_bool & outArgument7,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mGrammarClassAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mGrammarComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbool reader_mHasIndexingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasTranslateFeatureAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonTerminalLabelListAST reader_mStartSymbolLabelListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mStartSymbolNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mSyntaxComponentsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mUnusedNonterminalListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_GrammarComponentListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_GrammarComponentListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_galgas_33_GrammarComponentListAST ;
 
} ; // End of GALGAS_galgas_33_GrammarComponentListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_galgas_33_GrammarComponentListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_galgas_33_GrammarComponentListAST (const GALGAS_galgas_33_GrammarComponentListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lbool current_mHasIndexing (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mGrammarComponentName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mGrammarClass (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mSyntaxComponents (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mStartSymbolName (LOCATION_ARGS) const ;
  public : class GALGAS_nonTerminalLabelListAST current_mStartSymbolLabelList (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mUnusedNonterminalList (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mHasTranslateFeature (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_galgas_33_GrammarComponentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @prologueEpilogueList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_prologueEpilogueList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_semanticInstructionListAST mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfInstructionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_prologueEpilogueList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_prologueEpilogueList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_prologueEpilogueList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_prologueEpilogueList_2D_element (const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                   const GALGAS_location & in_mEndOfInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_prologueEpilogueList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_prologueEpilogueList_2D_element constructor_new (const class GALGAS_semanticInstructionListAST & inOperand0,
                                                                          const class GALGAS_location & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_prologueEpilogueList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prologueEpilogueList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prologueEpilogueList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @programRuleList_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_programRuleList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mSourceFileExtension ;
  public : GALGAS_lstring mAttribute_mSourceFileHelp ;
  public : GALGAS_lstring mAttribute_mSourceFileVariableName ;
  public : GALGAS_bool mAttribute_mSourceFileVariableNameIsUnused ;
  public : GALGAS_lstring mAttribute_mReferenceGrammar ;
  public : GALGAS_semanticInstructionListAST mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfInstructionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_programRuleList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_programRuleList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_programRuleList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_programRuleList_2D_element (const GALGAS_lstring & in_mSourceFileExtension,
                                              const GALGAS_lstring & in_mSourceFileHelp,
                                              const GALGAS_lstring & in_mSourceFileVariableName,
                                              const GALGAS_bool & in_mSourceFileVariableNameIsUnused,
                                              const GALGAS_lstring & in_mReferenceGrammar,
                                              const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                              const GALGAS_location & in_mEndOfInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_programRuleList_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_programRuleList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2,
                                                                     const class GALGAS_bool & inOperand3,
                                                                     const class GALGAS_lstring & inOperand4,
                                                                     const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                     const class GALGAS_location & inOperand6
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_programRuleList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mReferenceGrammar (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mSourceFileExtension (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mSourceFileHelp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mSourceFileVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_programRuleList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programRuleList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @galgas3GUIComponentListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_GUIComponentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_galgas_33_GUIComponentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_galgas_33_GUIComponentListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mGUIComponentName,
                                                  const class GALGAS_lstringlist & in_mImportedOptionList,
                                                  const class GALGAS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                  const class GALGAS_withLexiqueListAST & in_mWithLexiqueList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_GUIComponentListAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_galgas_33_GUIComponentListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_galgas_33_GUIComponentListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstringlist & inOperand1,
                                                                                  const class GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                                  const class GALGAS_withLexiqueListAST & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_galgas_33_GUIComponentListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstringlist & inOperand1,
                                                      const class GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                      const class GALGAS_withLexiqueListAST & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_galgas_33_GUIComponentListAST operator_concat (const GALGAS_galgas_33_GUIComponentListAST & inOperand
                                                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_galgas_33_GUIComponentListAST add_operation (const GALGAS_galgas_33_GUIComponentListAST & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lstringlist constinArgument1,
                                                         class GALGAS_guiSimpleAttributeListAST constinArgument2,
                                                         class GALGAS_withLexiqueListAST constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstringlist & outArgument1,
                                                    class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                                    class GALGAS_withLexiqueListAST & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lstringlist & outArgument1,
                                                   class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                                   class GALGAS_withLexiqueListAST & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lstringlist & outArgument1,
                                                         class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                                         class GALGAS_withLexiqueListAST & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstringlist & outArgument1,
                                               class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                               class GALGAS_withLexiqueListAST & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                              class GALGAS_withLexiqueListAST & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mGUIComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiSimpleAttributeListAST reader_mGlobalSimpleAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mImportedOptionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_withLexiqueListAST reader_mWithLexiqueListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_GUIComponentListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_GUIComponentListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_galgas_33_GUIComponentListAST ;
 
} ; // End of GALGAS_galgas_33_GUIComponentListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_galgas_33_GUIComponentListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_galgas_33_GUIComponentListAST (const GALGAS_galgas_33_GUIComponentListAST & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mGUIComponentName (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mImportedOptionList (LOCATION_ARGS) const ;
  public : class GALGAS_guiSimpleAttributeListAST current_mGlobalSimpleAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_withLexiqueListAST current_mWithLexiqueList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_galgas_33_GUIComponentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_GUIComponentListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @galgas_33_GUIComponentListAST_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_GUIComponentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mGUIComponentName ;
  public : GALGAS_lstringlist mAttribute_mImportedOptionList ;
  public : GALGAS_guiSimpleAttributeListAST mAttribute_mGlobalSimpleAttributeList ;
  public : GALGAS_withLexiqueListAST mAttribute_mWithLexiqueList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_galgas_33_GUIComponentListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_galgas_33_GUIComponentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_galgas_33_GUIComponentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_galgas_33_GUIComponentListAST_2D_element (const GALGAS_lstring & in_mGUIComponentName,
                                                            const GALGAS_lstringlist & in_mImportedOptionList,
                                                            const GALGAS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                            const GALGAS_withLexiqueListAST & in_mWithLexiqueList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_GUIComponentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_galgas_33_GUIComponentListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstringlist & inOperand1,
                                                                                   const class GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                                   const class GALGAS_withLexiqueListAST & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_galgas_33_GUIComponentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mGUIComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiSimpleAttributeListAST reader_mGlobalSimpleAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mImportedOptionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_withLexiqueListAST reader_mWithLexiqueList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_GUIComponentListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_GUIComponentListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Parser class 'expressionSyntax' declaration                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_expressionSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_expressionSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_collection_5F_value_5F_element_ (class GALGAS_abstractCollectionValueElement & outArgument0,
                                                               class C_String & ioSyntaxDirectedTranslationResult,
                                                               class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_collection_5F_value_5F_element_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                    class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_collection_5F_value_5F_element_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_concatenation_5F_term_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                      class C_String & ioSyntaxDirectedTranslationResult,
                                                      class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_concatenation_5F_term_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                           class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_concatenation_5F_term_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                           class C_String & ioSyntaxDirectedTranslationResult,
                                           class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_factor_ (class GALGAS_semanticExpressionAST & outArgument0,
                                       class C_String & ioSyntaxDirectedTranslationResult,
                                       class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_factor_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                            class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_factor_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_output_5F_expression_5F_list_ (class GALGAS_actualOutputExpressionList & outArgument0,
                                                             class C_String & ioSyntaxDirectedTranslationResult,
                                                             class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_output_5F_expression_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                  class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_output_5F_expression_5F_list_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_primary_ (class GALGAS_semanticExpressionAST & outArgument0,
                                        class C_String & ioSyntaxDirectedTranslationResult,
                                        class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_primary_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                             class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_primary_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_factor_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                   class C_String & ioSyntaxDirectedTranslationResult,
                                                   class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_factor_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                        class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_factor_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_term_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                 class C_String & ioSyntaxDirectedTranslationResult,
                                                 class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_term_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                      class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_relation_5F_term_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                     class C_String & ioSyntaxDirectedTranslationResult,
                                                     class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_expression_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                          class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_expression_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_term_ (class GALGAS_semanticExpressionAST & outArgument0,
                                     class C_String & ioSyntaxDirectedTranslationResult,
                                     class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_term_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                          class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_term_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_expressionSyntax_output_5F_expression_5F_list_i0_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                                           C_String & ioSyntaxDirectedTranslationResult,
                                                                           C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_output_5F_expression_5F_list_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_output_5F_expression_5F_list_i0_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_expression_i1_ (GALGAS_semanticExpressionAST & outArgument0,
                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                         C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_expression_i1_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_expression_i1_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_concatenation_5F_term_i2_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                    C_String & ioSyntaxDirectedTranslationResult,
                                                                    C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_concatenation_5F_term_i2_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                         C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_concatenation_5F_term_i2_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_relation_5F_term_i3_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_String & ioSyntaxDirectedTranslationResult,
                                                               C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_relation_5F_term_i3_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                    C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_relation_5F_term_i3_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_relation_5F_factor_i4_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_relation_5F_factor_i4_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_relation_5F_factor_i4_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_simple_5F_expression_i5_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                                   C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_simple_5F_expression_i5_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                        C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_simple_5F_expression_i5_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_term_i6_ (GALGAS_semanticExpressionAST & outArgument0,
                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                   C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_term_i6_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                        C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_term_i6_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_factor_i7_ (GALGAS_semanticExpressionAST & outArgument0,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_factor_i7_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_factor_i7_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_factor_i8_ (GALGAS_semanticExpressionAST & outArgument0,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_factor_i8_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_factor_i8_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_factor_i9_ (GALGAS_semanticExpressionAST & outArgument0,
                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_factor_i9_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                          C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_factor_i9_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_factor_i10_ (GALGAS_semanticExpressionAST & outArgument0,
                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_factor_i10_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                           C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_factor_i10_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_factor_i11_ (GALGAS_semanticExpressionAST & outArgument0,
                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_factor_i11_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                           C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_factor_i11_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i12_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i12_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i12_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i13_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i13_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i13_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i14_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i14_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i14_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i15_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i15_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i15_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i16_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i16_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i16_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i17_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i17_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i17_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i18_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i18_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i18_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i19_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i19_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i19_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i20_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i20_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i20_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i21_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i21_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i21_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i22_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i22_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i22_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i23_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i23_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i23_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i24_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i24_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i24_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i25_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i25_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i25_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i26_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i26_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i26_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i27_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i27_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i27_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i28_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i28_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i28_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i29_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i29_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i29_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i30_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i30_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i30_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i31_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i31_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i31_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i32_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i32_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i32_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i33_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i33_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i33_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i34_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i34_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i34_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i35_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i35_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i35_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_collection_5F_value_5F_element_i36_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                                              C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_collection_5F_value_5F_element_i36_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                   C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_collection_5F_value_5F_element_i36_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_collection_5F_value_5F_element_i37_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                                              C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_collection_5F_value_5F_element_i37_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                   C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_collection_5F_value_5F_element_i37_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i38_ (GALGAS_semanticExpressionAST & outArgument0,
                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i38_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_expressionSyntax_primary_i38_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_expressionSyntax_0 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_expressionSyntax_1 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_expressionSyntax_2 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_expressionSyntax_3 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_expressionSyntax_4 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_expressionSyntax_5 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_expressionSyntax_6 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_expressionSyntax_7 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_expressionSyntax_8 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_expressionSyntax_9 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_expressionSyntax_10 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_expressionSyntax_11 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_expressionSyntax_12 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_expressionSyntax_13 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_expressionSyntax_14 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_expressionSyntax_15 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_expressionSyntax_16 (C_Lexique_galgas_32_Scanner *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @addExpressionAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_addExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_addExpressionAST (void) ;

//---
  public : inline const class cPtr_addExpressionAST * ptr (void) const { return (const cPtr_addExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_addExpressionAST (const cPtr_addExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_addExpressionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_addExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                           const class GALGAS_semanticExpressionAST & inOperand1,
                                                           const class GALGAS_semanticExpressionAST & inOperand2
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_addExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_addExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @addExpressionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_addExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_addExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                  const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                  const GALGAS_semanticExpressionAST & in_mRightExpression
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @addExpressionNoOverflowAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_addExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_addExpressionNoOverflowAST (void) ;

//---
  public : inline const class cPtr_addExpressionNoOverflowAST * ptr (void) const { return (const cPtr_addExpressionNoOverflowAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_addExpressionNoOverflowAST (const cPtr_addExpressionNoOverflowAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_addExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_addExpressionNoOverflowAST constructor_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                                     const class GALGAS_semanticExpressionAST & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_addExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_addExpressionNoOverflowAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @addExpressionNoOverflowAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_addExpressionNoOverflowAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_addExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @andExpressionAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_andExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_andExpressionAST (void) ;

//---
  public : inline const class cPtr_andExpressionAST * ptr (void) const { return (const cPtr_andExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_andExpressionAST (const cPtr_andExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_andExpressionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_andExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                           const class GALGAS_semanticExpressionAST & inOperand1,
                                                           const class GALGAS_semanticExpressionAST & inOperand2
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_andExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @andExpressionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_andExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_andExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                  const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                  const GALGAS_semanticExpressionAST & in_mRightExpression
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @andShortExpressionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_andShortExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_andShortExpressionAST (void) ;

//---
  public : inline const class cPtr_andShortExpressionAST * ptr (void) const { return (const cPtr_andShortExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_andShortExpressionAST (const cPtr_andShortExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_andShortExpressionAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_andShortExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_semanticExpressionAST & inOperand1,
                                                                const class GALGAS_semanticExpressionAST & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_andShortExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andShortExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andShortExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @andShortExpressionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_andShortExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_andShortExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                       const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                       const GALGAS_semanticExpressionAST & in_mRightExpression
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @castInExpressionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_castInExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_castInExpressionAST (void) ;

//---
  public : inline const class cPtr_castInExpressionAST * ptr (void) const { return (const cPtr_castInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_castInExpressionAST (const cPtr_castInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_castInExpressionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_castInExpressionAST constructor_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                              const class GALGAS_location & inOperand1,
                                                              const class GALGAS_lstring & inOperand2
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_castInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfReceiverExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mReceiverExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_castInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @castInExpressionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_castInExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mReceiverExpression ;
  public : GALGAS_location mAttribute_mEndOfReceiverExpression ;
  public : GALGAS_lstring mAttribute_mTypeName ;

//--- Constructor
  public : cPtr_castInExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                     const GALGAS_location & in_mEndOfReceiverExpression,
                                     const GALGAS_lstring & in_mTypeName
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @closedSliceExpressionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_closedSliceExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_closedSliceExpressionAST (void) ;

//---
  public : inline const class cPtr_closedSliceExpressionAST * ptr (void) const { return (const cPtr_closedSliceExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_closedSliceExpressionAST (const cPtr_closedSliceExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_closedSliceExpressionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_closedSliceExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_semanticExpressionAST & inOperand1,
                                                                   const class GALGAS_semanticExpressionAST & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_closedSliceExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_closedSliceExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_closedSliceExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @closedSliceExpressionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_closedSliceExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_closedSliceExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                          const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                          const GALGAS_semanticExpressionAST & in_mRightExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @collectionValueAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_collectionValueAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_collectionValueAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_collectionValueAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_collectionValueAST * ptr (void) const { return (const cPtr_collectionValueAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_collectionValueAST (const cPtr_collectionValueAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_collectionValueAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_collectionValueAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                             const class GALGAS_collectionValueElementList & inOperand1,
                                                             const class GALGAS_location & inOperand2
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_collectionValueAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementList reader_mElementList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfCollectionValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_collectionValueAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @collectionValueAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_collectionValueAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_collectionValueElementList mAttribute_mElementList ;
  public : GALGAS_location mAttribute_mEndOfCollectionValue ;

//--- Constructor
  public : cPtr_collectionValueAST (const GALGAS_lstring & in_mTypeName,
                                    const GALGAS_collectionValueElementList & in_mElementList,
                                    const GALGAS_location & in_mEndOfCollectionValue
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_collectionValueElementList reader_mElementList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfCollectionValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @complementExpressionAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_complementExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_complementExpressionAST (void) ;

//---
  public : inline const class cPtr_complementExpressionAST * ptr (void) const { return (const cPtr_complementExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_complementExpressionAST (const cPtr_complementExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_complementExpressionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_complementExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_semanticExpressionAST & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_complementExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_complementExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_complementExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @complementExpressionAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_complementExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mExpression ;

//--- Constructor
  public : cPtr_complementExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                         const GALGAS_semanticExpressionAST & in_mExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @concatExpressionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_concatExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_concatExpressionAST (void) ;

//---
  public : inline const class cPtr_concatExpressionAST * ptr (void) const { return (const cPtr_concatExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_concatExpressionAST (const cPtr_concatExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_concatExpressionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_concatExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                              const class GALGAS_semanticExpressionAST & inOperand1,
                                                              const class GALGAS_semanticExpressionAST & inOperand2
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_concatExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_concatExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_concatExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @concatExpressionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_concatExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_concatExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                     const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                     const GALGAS_semanticExpressionAST & in_mRightExpression
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @constructorExpressionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_constructorExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_constructorExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_constructorExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_constructorExpressionAST * ptr (void) const { return (const cPtr_constructorExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_constructorExpressionAST (const cPtr_constructorExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constructorExpressionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_constructorExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_actualOutputExpressionList & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constructorExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mConstructorName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList reader_mExpressions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @constructorExpressionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_constructorExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mConstructorName ;
  public : GALGAS_actualOutputExpressionList mAttribute_mExpressions ;

//--- Constructor
  public : cPtr_constructorExpressionAST (const GALGAS_lstring & in_mTypeName,
                                          const GALGAS_lstring & in_mConstructorName,
                                          const GALGAS_actualOutputExpressionList & in_mExpressions
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mConstructorName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList reader_mExpressions (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @defaultConstructorExpressionAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_defaultConstructorExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_defaultConstructorExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_defaultConstructorExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_defaultConstructorExpressionAST * ptr (void) const { return (const cPtr_defaultConstructorExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_defaultConstructorExpressionAST (const cPtr_defaultConstructorExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_defaultConstructorExpressionAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_defaultConstructorExpressionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_defaultConstructorExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_defaultConstructorExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_defaultConstructorExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @defaultConstructorExpressionAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_defaultConstructorExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;

//--- Constructor
  public : cPtr_defaultConstructorExpressionAST (const GALGAS_lstring & in_mTypeName
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @divisionExpressionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_divisionExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_divisionExpressionAST (void) ;

//---
  public : inline const class cPtr_divisionExpressionAST * ptr (void) const { return (const cPtr_divisionExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_divisionExpressionAST (const cPtr_divisionExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_divisionExpressionAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_divisionExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_semanticExpressionAST & inOperand1,
                                                                const class GALGAS_semanticExpressionAST & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_divisionExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_divisionExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divisionExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @divisionExpressionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_divisionExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_divisionExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                       const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                       const GALGAS_semanticExpressionAST & in_mRightExpression
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @divisionExpressionNoOverflowAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_divisionExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_divisionExpressionNoOverflowAST (void) ;

//---
  public : inline const class cPtr_divisionExpressionNoOverflowAST * ptr (void) const { return (const cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_divisionExpressionNoOverflowAST (const cPtr_divisionExpressionNoOverflowAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_divisionExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_divisionExpressionNoOverflowAST constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_semanticExpressionAST & inOperand1,
                                                                          const class GALGAS_semanticExpressionAST & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_divisionExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_divisionExpressionNoOverflowAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @divisionExpressionNoOverflowAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_divisionExpressionNoOverflowAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_divisionExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                                 const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                 const GALGAS_semanticExpressionAST & in_mRightExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @equalExpressionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_equalExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_equalExpressionAST (void) ;

//---
  public : inline const class cPtr_equalExpressionAST * ptr (void) const { return (const cPtr_equalExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_equalExpressionAST (const cPtr_equalExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_equalExpressionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_equalExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                             const class GALGAS_semanticExpressionAST & inOperand1,
                                                             const class GALGAS_semanticExpressionAST & inOperand2
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_equalExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_equalExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equalExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @equalExpressionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_equalExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_equalExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                    const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                    const GALGAS_semanticExpressionAST & in_mRightExpression
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @expressionCollectionValue class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_expressionCollectionValue : public GALGAS_abstractCollectionValueElement {
//--- Constructor
  public : GALGAS_expressionCollectionValue (void) ;

//---
  public : inline const class cPtr_expressionCollectionValue * ptr (void) const { return (const cPtr_expressionCollectionValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_expressionCollectionValue (const cPtr_expressionCollectionValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_expressionCollectionValue extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_expressionCollectionValue constructor_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                    const class GALGAS_location & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_expressionCollectionValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mExpressionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionCollectionValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionCollectionValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @expressionCollectionValue class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_expressionCollectionValue : public cPtr_abstractCollectionValueElement {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mExpression ;
  public : GALGAS_location mAttribute_mExpressionLocation ;

//--- Constructor
  public : cPtr_expressionCollectionValue (const GALGAS_semanticExpressionAST & in_mExpression,
                                           const GALGAS_location & in_mExpressionLocation
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mExpressionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @expressionListCollectionValue class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_expressionListCollectionValue : public GALGAS_abstractCollectionValueElement {
//--- Constructor
  public : GALGAS_expressionListCollectionValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_expressionListCollectionValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_expressionListCollectionValue * ptr (void) const { return (const cPtr_expressionListCollectionValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_expressionListCollectionValue (const cPtr_expressionListCollectionValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_expressionListCollectionValue extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_expressionListCollectionValue constructor_new (const class GALGAS_actualOutputExpressionList & inOperand0,
                                                                        const class GALGAS_location & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_expressionListCollectionValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfExpressionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList reader_mExpressionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionListCollectionValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionListCollectionValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @expressionListCollectionValue class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_expressionListCollectionValue : public cPtr_abstractCollectionValueElement {
//--- Attributes
  public : GALGAS_actualOutputExpressionList mAttribute_mExpressionList ;
  public : GALGAS_location mAttribute_mEndOfExpressionLocation ;

//--- Constructor
  public : cPtr_expressionListCollectionValue (const GALGAS_actualOutputExpressionList & in_mExpressionList,
                                               const GALGAS_location & in_mEndOfExpressionLocation
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList reader_mExpressionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfExpressionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @falseExpressionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_falseExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_falseExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_falseExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_falseExpressionAST * ptr (void) const { return (const cPtr_falseExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_falseExpressionAST (const cPtr_falseExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_falseExpressionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_falseExpressionAST constructor_new (const class GALGAS_location & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_falseExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_falseExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @falseExpressionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_falseExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mLocation ;

//--- Constructor
  public : cPtr_falseExpressionAST (const GALGAS_location & in_mLocation
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @filewrapperInExpressionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperInExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_filewrapperInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_filewrapperInExpressionAST * ptr (void) const { return (const cPtr_filewrapperInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_filewrapperInExpressionAST (const cPtr_filewrapperInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_filewrapperInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFilewrapperName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFilewrapperPath (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @filewrapperInExpressionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_filewrapperInExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mFilewrapperName ;
  public : GALGAS_lstring mAttribute_mFilewrapperPath ;

//--- Constructor
  public : cPtr_filewrapperInExpressionAST (const GALGAS_lstring & in_mFilewrapperName,
                                            const GALGAS_lstring & in_mFilewrapperPath
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mFilewrapperName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mFilewrapperPath (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @filewrapperObjectInstanciationInExpressionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperObjectInstanciationInExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_filewrapperObjectInstanciationInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperObjectInstanciationInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_filewrapperObjectInstanciationInExpressionAST * ptr (void) const { return (const cPtr_filewrapperObjectInstanciationInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_filewrapperObjectInstanciationInExpressionAST (const cPtr_filewrapperObjectInstanciationInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperObjectInstanciationInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_filewrapperObjectInstanciationInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperObjectInstanciationInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFilewrapperName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperObjectInstanciationInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Pointer class for @filewrapperObjectInstanciationInExpressionAST class                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_filewrapperObjectInstanciationInExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mFilewrapperName ;

//--- Constructor
  public : cPtr_filewrapperObjectInstanciationInExpressionAST (const GALGAS_lstring & in_mFilewrapperName
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mFilewrapperName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @filewrapperTemplateInExpressionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperTemplateInExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_filewrapperTemplateInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperTemplateInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_filewrapperTemplateInExpressionAST * ptr (void) const { return (const cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_filewrapperTemplateInExpressionAST (const cPtr_filewrapperTemplateInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperTemplateInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_filewrapperTemplateInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_actualOutputExpressionList & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperTemplateInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList reader_mExpressions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFilewrapperName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFilewrapperTemplateName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperTemplateInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @filewrapperTemplateInExpressionAST class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_filewrapperTemplateInExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mFilewrapperName ;
  public : GALGAS_lstring mAttribute_mFilewrapperTemplateName ;
  public : GALGAS_actualOutputExpressionList mAttribute_mExpressions ;

//--- Constructor
  public : cPtr_filewrapperTemplateInExpressionAST (const GALGAS_lstring & in_mFilewrapperName,
                                                    const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                    const GALGAS_actualOutputExpressionList & in_mExpressions
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mFilewrapperName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mFilewrapperTemplateName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList reader_mExpressions (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @functionCallExpressionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionCallExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_functionCallExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_functionCallExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_functionCallExpressionAST * ptr (void) const { return (const cPtr_functionCallExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_functionCallExpressionAST (const cPtr_functionCallExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionCallExpressionAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_functionCallExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_actualOutputExpressionList & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionCallExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList reader_mExpressionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFunctionName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionCallExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @functionCallExpressionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_functionCallExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mFunctionName ;
  public : GALGAS_actualOutputExpressionList mAttribute_mExpressionList ;

//--- Constructor
  public : cPtr_functionCallExpressionAST (const GALGAS_lstring & in_mFunctionName,
                                           const GALGAS_actualOutputExpressionList & in_mExpressionList
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList reader_mExpressionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @greaterOrEqualExpressionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_greaterOrEqualExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_greaterOrEqualExpressionAST (void) ;

//---
  public : inline const class cPtr_greaterOrEqualExpressionAST * ptr (void) const { return (const cPtr_greaterOrEqualExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_greaterOrEqualExpressionAST (const cPtr_greaterOrEqualExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_greaterOrEqualExpressionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_greaterOrEqualExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_semanticExpressionAST & inOperand1,
                                                                      const class GALGAS_semanticExpressionAST & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_greaterOrEqualExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_greaterOrEqualExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_greaterOrEqualExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @greaterOrEqualExpressionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_greaterOrEqualExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_greaterOrEqualExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                             const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                             const GALGAS_semanticExpressionAST & in_mRightExpression
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @hereExpressionAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_hereExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_hereExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_hereExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_hereExpressionAST * ptr (void) const { return (const cPtr_hereExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_hereExpressionAST (const cPtr_hereExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_hereExpressionAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_hereExpressionAST constructor_new (const class GALGAS_location & inOperand0
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_hereExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_hereExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_hereExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @hereExpressionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_hereExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mLocation ;

//--- Constructor
  public : cPtr_hereExpressionAST (const GALGAS_location & in_mLocation
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @ifExpressionAST class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ifExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_ifExpressionAST (void) ;

//---
  public : inline const class cPtr_ifExpressionAST * ptr (void) const { return (const cPtr_ifExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ifExpressionAST (const cPtr_ifExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ifExpressionAST extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ifExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                          const class GALGAS_semanticExpressionAST & inOperand1,
                                                          const class GALGAS_semanticExpressionAST & inOperand2,
                                                          const class GALGAS_semanticExpressionAST & inOperand3
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ifExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mElseExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mIfExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mThenExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @ifExpressionAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ifExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mIfExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mThenExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mElseExpression ;

//--- Constructor
  public : cPtr_ifExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                 const GALGAS_semanticExpressionAST & in_mIfExpression,
                                 const GALGAS_semanticExpressionAST & in_mThenExpression,
                                 const GALGAS_semanticExpressionAST & in_mElseExpression
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mIfExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mThenExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mElseExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @leftShiftExpressionAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_leftShiftExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_leftShiftExpressionAST (void) ;

//---
  public : inline const class cPtr_leftShiftExpressionAST * ptr (void) const { return (const cPtr_leftShiftExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_leftShiftExpressionAST (const cPtr_leftShiftExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_leftShiftExpressionAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_leftShiftExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_semanticExpressionAST & inOperand1,
                                                                 const class GALGAS_semanticExpressionAST & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_leftShiftExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_leftShiftExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @leftShiftExpressionAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_leftShiftExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_leftShiftExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                        const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                        const GALGAS_semanticExpressionAST & in_mRightExpression
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @lexiqueIntrospectionExpressionAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexiqueIntrospectionExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_lexiqueIntrospectionExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexiqueIntrospectionExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexiqueIntrospectionExpressionAST * ptr (void) const { return (const cPtr_lexiqueIntrospectionExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexiqueIntrospectionExpressionAST (const cPtr_lexiqueIntrospectionExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexiqueIntrospectionExpressionAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexiqueIntrospectionExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexiqueIntrospectionExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLexiqueComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLexiqueReaderName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueIntrospectionExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @lexiqueIntrospectionExpressionAST class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexiqueIntrospectionExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLexiqueComponentName ;
  public : GALGAS_lstring mAttribute_mLexiqueReaderName ;

//--- Constructor
  public : cPtr_lexiqueIntrospectionExpressionAST (const GALGAS_lstring & in_mLexiqueComponentName,
                                                   const GALGAS_lstring & in_mLexiqueReaderName
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLexiqueComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLexiqueReaderName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @literalCharExpressionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalCharExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_literalCharExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalCharExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalCharExpressionAST * ptr (void) const { return (const cPtr_literalCharExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalCharExpressionAST (const cPtr_literalCharExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalCharExpressionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalCharExpressionAST constructor_new (const class GALGAS_lchar & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalCharExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lchar reader_mCharacter (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalCharExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalCharExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @literalCharExpressionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalCharExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lchar mAttribute_mCharacter ;

//--- Constructor
  public : cPtr_literalCharExpressionAST (const GALGAS_lchar & in_mCharacter
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lchar reader_mCharacter (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @literalDoubleExpressionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalDoubleExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_literalDoubleExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalDoubleExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalDoubleExpressionAST * ptr (void) const { return (const cPtr_literalDoubleExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalDoubleExpressionAST (const cPtr_literalDoubleExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalDoubleExpressionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalDoubleExpressionAST constructor_new (const class GALGAS_ldouble & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalDoubleExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ldouble reader_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalDoubleExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalDoubleExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @literalDoubleExpressionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalDoubleExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_ldouble mAttribute_mValue ;

//--- Constructor
  public : cPtr_literalDoubleExpressionAST (const GALGAS_ldouble & in_mValue
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ldouble reader_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @literalSInt_36__34_ExpressionAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalSInt_36__34_ExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_literalSInt_36__34_ExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalSInt_36__34_ExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalSInt_36__34_ExpressionAST * ptr (void) const { return (const cPtr_literalSInt_36__34_ExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalSInt_36__34_ExpressionAST (const cPtr_literalSInt_36__34_ExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalSInt_36__34_ExpressionAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalSInt_36__34_ExpressionAST constructor_new (const class GALGAS_lsint_36__34_ & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalSInt_36__34_ExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lsint_36__34_ reader_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalSInt_36__34_ExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @literalSInt64ExpressionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalSInt_36__34_ExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lsint_36__34_ mAttribute_mValue ;

//--- Constructor
  public : cPtr_literalSInt_36__34_ExpressionAST (const GALGAS_lsint_36__34_ & in_mValue
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lsint_36__34_ reader_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @literalSIntExpressionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalSIntExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_literalSIntExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalSIntExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalSIntExpressionAST * ptr (void) const { return (const cPtr_literalSIntExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalSIntExpressionAST (const cPtr_literalSIntExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalSIntExpressionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalSIntExpressionAST constructor_new (const class GALGAS_lsint & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalSIntExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lsint reader_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalSIntExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSIntExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @literalSIntExpressionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalSIntExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lsint mAttribute_mValue ;

//--- Constructor
  public : cPtr_literalSIntExpressionAST (const GALGAS_lsint & in_mValue
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lsint reader_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @literalStringExpressionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalStringExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_literalStringExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalStringExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalStringExpressionAST * ptr (void) const { return (const cPtr_literalStringExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalStringExpressionAST (const cPtr_literalStringExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalStringExpressionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalStringExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_stringlist & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalStringExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mStringSequence (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalStringExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @literalStringExpressionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalStringExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mLocation ;
  public : GALGAS_stringlist mAttribute_mStringSequence ;

//--- Constructor
  public : cPtr_literalStringExpressionAST (const GALGAS_location & in_mLocation,
                                            const GALGAS_stringlist & in_mStringSequence
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringlist reader_mStringSequence (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @literalTypeInExpressionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalTypeInExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_literalTypeInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalTypeInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalTypeInExpressionAST * ptr (void) const { return (const cPtr_literalTypeInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalTypeInExpressionAST (const cPtr_literalTypeInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalTypeInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalTypeInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalTypeInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLiteralTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalTypeInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalTypeInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @literalTypeInExpressionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalTypeInExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLiteralTypeName ;

//--- Constructor
  public : cPtr_literalTypeInExpressionAST (const GALGAS_lstring & in_mLiteralTypeName
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLiteralTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @literalUInt_36__34_ExpressionAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalUInt_36__34_ExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_literalUInt_36__34_ExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalUInt_36__34_ExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalUInt_36__34_ExpressionAST * ptr (void) const { return (const cPtr_literalUInt_36__34_ExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalUInt_36__34_ExpressionAST (const cPtr_literalUInt_36__34_ExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalUInt_36__34_ExpressionAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalUInt_36__34_ExpressionAST constructor_new (const class GALGAS_luint_36__34_ & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalUInt_36__34_ExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint_36__34_ reader_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalUInt_36__34_ExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @literalUInt64ExpressionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalUInt_36__34_ExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_luint_36__34_ mAttribute_mValue ;

//--- Constructor
  public : cPtr_literalUInt_36__34_ExpressionAST (const GALGAS_luint_36__34_ & in_mValue
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint_36__34_ reader_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @literalUIntExpressionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalUIntExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_literalUIntExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalUIntExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalUIntExpressionAST * ptr (void) const { return (const cPtr_literalUIntExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalUIntExpressionAST (const cPtr_literalUIntExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalUIntExpressionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalUIntExpressionAST constructor_new (const class GALGAS_luint & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalUIntExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalUIntExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUIntExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @literalUIntExpressionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalUIntExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_luint mAttribute_mValue ;

//--- Constructor
  public : cPtr_literalUIntExpressionAST (const GALGAS_luint & in_mValue
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint reader_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lowerOrEqualExpressionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lowerOrEqualExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_lowerOrEqualExpressionAST (void) ;

//---
  public : inline const class cPtr_lowerOrEqualExpressionAST * ptr (void) const { return (const cPtr_lowerOrEqualExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lowerOrEqualExpressionAST (const cPtr_lowerOrEqualExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lowerOrEqualExpressionAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lowerOrEqualExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_semanticExpressionAST & inOperand1,
                                                                    const class GALGAS_semanticExpressionAST & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lowerOrEqualExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lowerOrEqualExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lowerOrEqualExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @lowerOrEqualExpressionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lowerOrEqualExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_lowerOrEqualExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                           const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                           const GALGAS_semanticExpressionAST & in_mRightExpression
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @moduloExpressionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_moduloExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_moduloExpressionAST (void) ;

//---
  public : inline const class cPtr_moduloExpressionAST * ptr (void) const { return (const cPtr_moduloExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_moduloExpressionAST (const cPtr_moduloExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_moduloExpressionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_moduloExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                              const class GALGAS_semanticExpressionAST & inOperand1,
                                                              const class GALGAS_semanticExpressionAST & inOperand2
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_moduloExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_moduloExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_moduloExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @moduloExpressionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_moduloExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_moduloExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                     const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                     const GALGAS_semanticExpressionAST & in_mRightExpression
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @multiplicationExpressionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_multiplicationExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_multiplicationExpressionAST (void) ;

//---
  public : inline const class cPtr_multiplicationExpressionAST * ptr (void) const { return (const cPtr_multiplicationExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_multiplicationExpressionAST (const cPtr_multiplicationExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_multiplicationExpressionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_multiplicationExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_semanticExpressionAST & inOperand1,
                                                                      const class GALGAS_semanticExpressionAST & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_multiplicationExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_multiplicationExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multiplicationExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @multiplicationExpressionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_multiplicationExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_multiplicationExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                             const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                             const GALGAS_semanticExpressionAST & in_mRightExpression
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @multiplicationExpressionNoOverflowAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_multiplicationExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_multiplicationExpressionNoOverflowAST (void) ;

//---
  public : inline const class cPtr_multiplicationExpressionNoOverflowAST * ptr (void) const { return (const cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_multiplicationExpressionNoOverflowAST (const cPtr_multiplicationExpressionNoOverflowAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_multiplicationExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_multiplicationExpressionNoOverflowAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                const class GALGAS_semanticExpressionAST & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_multiplicationExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_multiplicationExpressionNoOverflowAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @multiplicationExpressionNoOverflowAST class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_multiplicationExpressionNoOverflowAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_multiplicationExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                                       const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                       const GALGAS_semanticExpressionAST & in_mRightExpression
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @notEqualExpressionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_notEqualExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_notEqualExpressionAST (void) ;

//---
  public : inline const class cPtr_notEqualExpressionAST * ptr (void) const { return (const cPtr_notEqualExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_notEqualExpressionAST (const cPtr_notEqualExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_notEqualExpressionAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_notEqualExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_semanticExpressionAST & inOperand1,
                                                                const class GALGAS_semanticExpressionAST & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_notEqualExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_notEqualExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notEqualExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @notEqualExpressionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_notEqualExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_notEqualExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                       const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                       const GALGAS_semanticExpressionAST & in_mRightExpression
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @notExpressionAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_notExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_notExpressionAST (void) ;

//---
  public : inline const class cPtr_notExpressionAST * ptr (void) const { return (const cPtr_notExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_notExpressionAST (const cPtr_notExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_notExpressionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_notExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                           const class GALGAS_semanticExpressionAST & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_notExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_notExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @notExpressionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_notExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mExpression ;

//--- Constructor
  public : cPtr_notExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                  const GALGAS_semanticExpressionAST & in_mExpression
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @openedSliceExpressionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_openedSliceExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_openedSliceExpressionAST (void) ;

//---
  public : inline const class cPtr_openedSliceExpressionAST * ptr (void) const { return (const cPtr_openedSliceExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_openedSliceExpressionAST (const cPtr_openedSliceExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_openedSliceExpressionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_openedSliceExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_semanticExpressionAST & inOperand1,
                                                                   const class GALGAS_semanticExpressionAST & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_openedSliceExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_openedSliceExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedSliceExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @openedSliceExpressionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_openedSliceExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_openedSliceExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                          const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                          const GALGAS_semanticExpressionAST & in_mRightExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @optionExpressionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_optionExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optionExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_optionExpressionAST * ptr (void) const { return (const cPtr_optionExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_optionExpressionAST (const cPtr_optionExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionExpressionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_optionExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                              const class GALGAS_lstring & inOperand1,
                                                              const class GALGAS_lstring & inOperand2
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionEntryName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionReaderName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @optionExpressionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_optionExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mOptionComponentName ;
  public : GALGAS_lstring mAttribute_mOptionEntryName ;
  public : GALGAS_lstring mAttribute_mOptionReaderName ;

//--- Constructor
  public : cPtr_optionExpressionAST (const GALGAS_lstring & in_mOptionComponentName,
                                     const GALGAS_lstring & in_mOptionEntryName,
                                     const GALGAS_lstring & in_mOptionReaderName
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOptionComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOptionEntryName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOptionReaderName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @orExpressionAST class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_orExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_orExpressionAST (void) ;

//---
  public : inline const class cPtr_orExpressionAST * ptr (void) const { return (const cPtr_orExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_orExpressionAST (const cPtr_orExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_orExpressionAST extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_orExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                          const class GALGAS_semanticExpressionAST & inOperand1,
                                                          const class GALGAS_semanticExpressionAST & inOperand2
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_orExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @orExpressionAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_orExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_orExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                 const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                 const GALGAS_semanticExpressionAST & in_mRightExpression
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @orShortExpressionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_orShortExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_orShortExpressionAST (void) ;

//---
  public : inline const class cPtr_orShortExpressionAST * ptr (void) const { return (const cPtr_orShortExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_orShortExpressionAST (const cPtr_orShortExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_orShortExpressionAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_orShortExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                               const class GALGAS_semanticExpressionAST & inOperand1,
                                                               const class GALGAS_semanticExpressionAST & inOperand2
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_orShortExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orShortExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orShortExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @orShortExpressionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_orShortExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_orShortExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                      const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                      const GALGAS_semanticExpressionAST & in_mRightExpression
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @readerCallExpressionAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_readerCallExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_readerCallExpressionAST (void) ;

//---
  public : inline const class cPtr_readerCallExpressionAST * ptr (void) const { return (const cPtr_readerCallExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_readerCallExpressionAST (const cPtr_readerCallExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_readerCallExpressionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_readerCallExpressionAST constructor_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_actualOutputExpressionList & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_readerCallExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList reader_mExpressions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mReaderName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mReceiver (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readerCallExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readerCallExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @readerCallExpressionAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_readerCallExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mReceiver ;
  public : GALGAS_lstring mAttribute_mReaderName ;
  public : GALGAS_actualOutputExpressionList mAttribute_mExpressions ;

//--- Constructor
  public : cPtr_readerCallExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiver,
                                         const GALGAS_lstring & in_mReaderName,
                                         const GALGAS_actualOutputExpressionList & in_mExpressions
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mReceiver (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mReaderName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList reader_mExpressions (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @rightShiftExpressionAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_rightShiftExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_rightShiftExpressionAST (void) ;

//---
  public : inline const class cPtr_rightShiftExpressionAST * ptr (void) const { return (const cPtr_rightShiftExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_rightShiftExpressionAST (const cPtr_rightShiftExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_rightShiftExpressionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_rightShiftExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_semanticExpressionAST & inOperand1,
                                                                  const class GALGAS_semanticExpressionAST & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_rightShiftExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_rightShiftExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rightShiftExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @rightShiftExpressionAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_rightShiftExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_rightShiftExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                         const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                         const GALGAS_semanticExpressionAST & in_mRightExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @selfCopyInExpressionAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_selfCopyInExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_selfCopyInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_selfCopyInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_selfCopyInExpressionAST * ptr (void) const { return (const cPtr_selfCopyInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selfCopyInExpressionAST (const cPtr_selfCopyInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selfCopyInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_selfCopyInExpressionAST constructor_new (const class GALGAS_location & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selfCopyInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mSelfLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfCopyInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfCopyInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @selfCopyInExpressionAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selfCopyInExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mSelfLocation ;

//--- Constructor
  public : cPtr_selfCopyInExpressionAST (const GALGAS_location & in_mSelfLocation
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mSelfLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @strictGreaterExpressionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_strictGreaterExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_strictGreaterExpressionAST (void) ;

//---
  public : inline const class cPtr_strictGreaterExpressionAST * ptr (void) const { return (const cPtr_strictGreaterExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_strictGreaterExpressionAST (const cPtr_strictGreaterExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_strictGreaterExpressionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_strictGreaterExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                                     const class GALGAS_semanticExpressionAST & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_strictGreaterExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_strictGreaterExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_strictGreaterExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @strictGreaterExpressionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_strictGreaterExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_strictGreaterExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @strictLowerExpressionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_strictLowerExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_strictLowerExpressionAST (void) ;

//---
  public : inline const class cPtr_strictLowerExpressionAST * ptr (void) const { return (const cPtr_strictLowerExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_strictLowerExpressionAST (const cPtr_strictLowerExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_strictLowerExpressionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_strictLowerExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_semanticExpressionAST & inOperand1,
                                                                   const class GALGAS_semanticExpressionAST & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_strictLowerExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_strictLowerExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_strictLowerExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @strictLowerExpressionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_strictLowerExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_strictLowerExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                          const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                          const GALGAS_semanticExpressionAST & in_mRightExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @structFieldAccessExpressionAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structFieldAccessExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_structFieldAccessExpressionAST (void) ;

//---
  public : inline const class cPtr_structFieldAccessExpressionAST * ptr (void) const { return (const cPtr_structFieldAccessExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_structFieldAccessExpressionAST (const cPtr_structFieldAccessExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structFieldAccessExpressionAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_structFieldAccessExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_semanticExpressionAST & inOperand1,
                                                                         const class GALGAS_lstring & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structFieldAccessExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mStructFieldName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structFieldAccessExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structFieldAccessExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @structFieldAccessExpressionAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_structFieldAccessExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mExpression ;
  public : GALGAS_lstring mAttribute_mStructFieldName ;

//--- Constructor
  public : cPtr_structFieldAccessExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                const GALGAS_semanticExpressionAST & in_mExpression,
                                                const GALGAS_lstring & in_mStructFieldName
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mStructFieldName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @subExpressionAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_subExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_subExpressionAST (void) ;

//---
  public : inline const class cPtr_subExpressionAST * ptr (void) const { return (const cPtr_subExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_subExpressionAST (const cPtr_subExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_subExpressionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_subExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                           const class GALGAS_semanticExpressionAST & inOperand1,
                                                           const class GALGAS_semanticExpressionAST & inOperand2
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_subExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_subExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @subExpressionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_subExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_subExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                  const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                  const GALGAS_semanticExpressionAST & in_mRightExpression
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @subExpressionNoOverflowAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_subExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_subExpressionNoOverflowAST (void) ;

//---
  public : inline const class cPtr_subExpressionNoOverflowAST * ptr (void) const { return (const cPtr_subExpressionNoOverflowAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_subExpressionNoOverflowAST (const cPtr_subExpressionNoOverflowAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_subExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_subExpressionNoOverflowAST constructor_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                                     const class GALGAS_semanticExpressionAST & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_subExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_subExpressionNoOverflowAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @subExpressionNoOverflowAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_subExpressionNoOverflowAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_subExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @testDynamicClassInExpressionAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_testDynamicClassInExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_testDynamicClassInExpressionAST (void) ;

//---
  public : inline const class cPtr_testDynamicClassInExpressionAST * ptr (void) const { return (const cPtr_testDynamicClassInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_testDynamicClassInExpressionAST (const cPtr_testDynamicClassInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_testDynamicClassInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_testDynamicClassInExpressionAST constructor_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                          const class GALGAS_location & inOperand1,
                                                                          const class GALGAS_dynamicTypeComparisonKind & inOperand2,
                                                                          const class GALGAS_lstring & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_testDynamicClassInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfReceiverExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mReceiverExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_dynamicTypeComparisonKind reader_mTypeComparisonKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_testDynamicClassInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @testDynamicClassInExpressionAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_testDynamicClassInExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mReceiverExpression ;
  public : GALGAS_location mAttribute_mEndOfReceiverExpression ;
  public : GALGAS_dynamicTypeComparisonKind mAttribute_mTypeComparisonKind ;
  public : GALGAS_lstring mAttribute_mTypeName ;

//--- Constructor
  public : cPtr_testDynamicClassInExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                 const GALGAS_location & in_mEndOfReceiverExpression,
                                                 const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                 const GALGAS_lstring & in_mTypeName
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_dynamicTypeComparisonKind reader_mTypeComparisonKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @trueExpressionAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_trueExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_trueExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_trueExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_trueExpressionAST * ptr (void) const { return (const cPtr_trueExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_trueExpressionAST (const cPtr_trueExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_trueExpressionAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_trueExpressionAST constructor_new (const class GALGAS_location & inOperand0
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_trueExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_trueExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @trueExpressionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_trueExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mLocation ;

//--- Constructor
  public : cPtr_trueExpressionAST (const GALGAS_location & in_mLocation
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @unaryMinusExpressionAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unaryMinusExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_unaryMinusExpressionAST (void) ;

//---
  public : inline const class cPtr_unaryMinusExpressionAST * ptr (void) const { return (const cPtr_unaryMinusExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_unaryMinusExpressionAST (const cPtr_unaryMinusExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unaryMinusExpressionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_unaryMinusExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_semanticExpressionAST & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_unaryMinusExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unaryMinusExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @unaryMinusExpressionAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_unaryMinusExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mExpression ;

//--- Constructor
  public : cPtr_unaryMinusExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                         const GALGAS_semanticExpressionAST & in_mExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @unaryMinusNoOverflowExpressionAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unaryMinusNoOverflowExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_unaryMinusNoOverflowExpressionAST (void) ;

//---
  public : inline const class cPtr_unaryMinusNoOverflowExpressionAST * ptr (void) const { return (const cPtr_unaryMinusNoOverflowExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_unaryMinusNoOverflowExpressionAST (const cPtr_unaryMinusNoOverflowExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unaryMinusNoOverflowExpressionAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_unaryMinusNoOverflowExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_semanticExpressionAST & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_unaryMinusNoOverflowExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unaryMinusNoOverflowExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusNoOverflowExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @unaryMinusNoOverflowExpressionAST class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_unaryMinusNoOverflowExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mExpression ;

//--- Constructor
  public : cPtr_unaryMinusNoOverflowExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                   const GALGAS_semanticExpressionAST & in_mExpression
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @varInExpressionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varInExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_varInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_varInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_varInExpressionAST * ptr (void) const { return (const cPtr_varInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_varInExpressionAST (const cPtr_varInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varInExpressionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_varInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @varInExpressionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_varInExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mVarName ;

//--- Constructor
  public : cPtr_varInExpressionAST (const GALGAS_lstring & in_mVarName
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mVarName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @xorExpressionAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_xorExpressionAST : public GALGAS_semanticExpressionAST {
//--- Constructor
  public : GALGAS_xorExpressionAST (void) ;

//---
  public : inline const class cPtr_xorExpressionAST * ptr (void) const { return (const cPtr_xorExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_xorExpressionAST (const cPtr_xorExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_xorExpressionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_xorExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                           const class GALGAS_semanticExpressionAST & inOperand1,
                                                           const class GALGAS_semanticExpressionAST & inOperand2
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_xorExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_xorExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @xorExpressionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_xorExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_semanticExpressionAST mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_xorExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                  const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                  const GALGAS_semanticExpressionAST & in_mRightExpression
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Parser class 'parameterArgumentSyntax' declaration                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_parameterArgumentSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_parameterArgumentSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_actual_5F_parameter_5F_list_ (class GALGAS_actualParameterListAST & outArgument0,
                                                            class C_String & ioSyntaxDirectedTranslationResult,
                                                            class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                 class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                           class C_String & ioSyntaxDirectedTranslationResult,
                                           class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                     class C_String & ioSyntaxDirectedTranslationResult,
                                                                     class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                          class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                            class C_String & ioSyntaxDirectedTranslationResult,
                                                            class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                 class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_parameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GALGAS_formalParameterListAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_parameterArgumentSyntax_formal_5F_parameter_5F_list_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_parameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_parameterArgumentSyntax_actual_5F_parameter_5F_list_i1_ (GALGAS_actualParameterListAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_parameterArgumentSyntax_actual_5F_parameter_5F_list_i1_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_parameterArgumentSyntax_actual_5F_parameter_5F_list_i1_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_parameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_ (GALGAS_formalInputParameterListAST & outArgument0,
                                                                                          C_String & ioSyntaxDirectedTranslationResult,
                                                                                          C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_parameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                               C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_parameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_parameterArgumentSyntax_0 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_1 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_2 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_3 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_4 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_5 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_6 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_7 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_8 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_9 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_10 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_11 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_12 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_13 (C_Lexique_galgas_32_Scanner *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @inputActualExistingVariableParameterAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_inputActualExistingVariableParameterAST : public GALGAS_actualParameterAST {
//--- Constructor
  public : GALGAS_inputActualExistingVariableParameterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputActualExistingVariableParameterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputActualExistingVariableParameterAST * ptr (void) const { return (const cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputActualExistingVariableParameterAST (const cPtr_inputActualExistingVariableParameterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputActualExistingVariableParameterAST extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_inputActualExistingVariableParameterAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputActualExistingVariableParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mActualSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mInputActualParameterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputActualExistingVariableParameterAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @inputActualExistingVariableParameterAST class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_inputActualExistingVariableParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mActualSelector ;
  public : GALGAS_lstring mAttribute_mInputActualParameterName ;

//--- Constructor
  public : cPtr_inputActualExistingVariableParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                         const GALGAS_lstring & in_mInputActualParameterName
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualSelector (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mInputActualParameterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @inputActualNewConstantParameterAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_inputActualNewConstantParameterAST : public GALGAS_actualParameterAST {
//--- Constructor
  public : GALGAS_inputActualNewConstantParameterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputActualNewConstantParameterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputActualNewConstantParameterAST * ptr (void) const { return (const cPtr_inputActualNewConstantParameterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputActualNewConstantParameterAST (const cPtr_inputActualNewConstantParameterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputActualNewConstantParameterAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_inputActualNewConstantParameterAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_lstring & inOperand2,
                                                                             const class GALGAS_bool & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputActualNewConstantParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mActualSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mInputActualParameterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mInputOptionalActualTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mMarkedAsUnused (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputActualNewConstantParameterAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @inputActualNewConstantParameterAST class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_inputActualNewConstantParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mActualSelector ;
  public : GALGAS_lstring mAttribute_mInputOptionalActualTypeName ;
  public : GALGAS_lstring mAttribute_mInputActualParameterName ;
  public : GALGAS_bool mAttribute_mMarkedAsUnused ;

//--- Constructor
  public : cPtr_inputActualNewConstantParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                    const GALGAS_lstring & in_mInputOptionalActualTypeName,
                                                    const GALGAS_lstring & in_mInputActualParameterName,
                                                    const GALGAS_bool & in_mMarkedAsUnused
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualSelector (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mInputOptionalActualTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mInputActualParameterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mMarkedAsUnused (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @inputActualNewVariableParameterAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_inputActualNewVariableParameterAST : public GALGAS_actualParameterAST {
//--- Constructor
  public : GALGAS_inputActualNewVariableParameterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputActualNewVariableParameterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputActualNewVariableParameterAST * ptr (void) const { return (const cPtr_inputActualNewVariableParameterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputActualNewVariableParameterAST (const cPtr_inputActualNewVariableParameterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputActualNewVariableParameterAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_inputActualNewVariableParameterAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_lstring & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputActualNewVariableParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mActualSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mInputActualParameterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mInputOptionalActualTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputActualNewVariableParameterAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @inputActualNewVariableParameterAST class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_inputActualNewVariableParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mActualSelector ;
  public : GALGAS_lstring mAttribute_mInputOptionalActualTypeName ;
  public : GALGAS_lstring mAttribute_mInputActualParameterName ;

//--- Constructor
  public : cPtr_inputActualNewVariableParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                    const GALGAS_lstring & in_mInputOptionalActualTypeName,
                                                    const GALGAS_lstring & in_mInputActualParameterName
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualSelector (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mInputOptionalActualTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mInputActualParameterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @inputJokerActualParameterAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_inputJokerActualParameterAST : public GALGAS_actualParameterAST {
//--- Constructor
  public : GALGAS_inputJokerActualParameterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputJokerActualParameterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputJokerActualParameterAST * ptr (void) const { return (const cPtr_inputJokerActualParameterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputJokerActualParameterAST (const cPtr_inputJokerActualParameterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputJokerActualParameterAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_inputJokerActualParameterAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_uint & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputJokerActualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mJokerIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mQualifierLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputJokerActualParameterAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerActualParameterAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @inputJokerActualParameterAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_inputJokerActualParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_location mAttribute_mQualifierLocation ;
  public : GALGAS_uint mAttribute_mJokerIndex ;

//--- Constructor
  public : cPtr_inputJokerActualParameterAST (const GALGAS_location & in_mQualifierLocation,
                                              const GALGAS_uint & in_mJokerIndex
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mQualifierLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mJokerIndex (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @inputSingleJokerActualParameterAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_inputSingleJokerActualParameterAST : public GALGAS_actualParameterAST {
//--- Constructor
  public : GALGAS_inputSingleJokerActualParameterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputSingleJokerActualParameterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputSingleJokerActualParameterAST * ptr (void) const { return (const cPtr_inputSingleJokerActualParameterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputSingleJokerActualParameterAST (const cPtr_inputSingleJokerActualParameterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputSingleJokerActualParameterAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_inputSingleJokerActualParameterAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputSingleJokerActualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mActualSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputSingleJokerActualParameterAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @inputSingleJokerActualParameterAST class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_inputSingleJokerActualParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mActualSelector ;

//--- Constructor
  public : cPtr_inputSingleJokerActualParameterAST (const GALGAS_lstring & in_mActualSelector
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualSelector (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @outputActualParameterAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outputActualParameterAST : public GALGAS_actualParameterAST {
//--- Constructor
  public : GALGAS_outputActualParameterAST (void) ;

//---
  public : inline const class cPtr_outputActualParameterAST * ptr (void) const { return (const cPtr_outputActualParameterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_outputActualParameterAST (const cPtr_outputActualParameterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outputActualParameterAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outputActualParameterAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_semanticExpressionAST & inOperand1,
                                                                   const class GALGAS_location & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outputActualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mActualSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfExpressionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mOutputActualParameterExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outputActualParameterAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @outputActualParameterAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_outputActualParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mActualSelector ;
  public : GALGAS_semanticExpressionAST mAttribute_mOutputActualParameterExpression ;
  public : GALGAS_location mAttribute_mEndOfExpressionLocation ;

//--- Constructor
  public : cPtr_outputActualParameterAST (const GALGAS_lstring & in_mActualSelector,
                                          const GALGAS_semanticExpressionAST & in_mOutputActualParameterExpression,
                                          const GALGAS_location & in_mEndOfExpressionLocation
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualSelector (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mOutputActualParameterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfExpressionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @outputInputActualParameterAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outputInputActualParameterAST : public GALGAS_actualParameterAST {
//--- Constructor
  public : GALGAS_outputInputActualParameterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outputInputActualParameterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_outputInputActualParameterAST * ptr (void) const { return (const cPtr_outputInputActualParameterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_outputInputActualParameterAST (const cPtr_outputInputActualParameterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outputInputActualParameterAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outputInputActualParameterAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_lstringlist & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outputInputActualParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mActualSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOutputInputActualParameterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outputInputActualParameterAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @outputInputActualParameterAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_outputInputActualParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mActualSelector ;
  public : GALGAS_lstring mAttribute_mOutputInputActualParameterName ;
  public : GALGAS_lstringlist mAttribute_mStructAttributeList ;

//--- Constructor
  public : cPtr_outputInputActualParameterAST (const GALGAS_lstring & in_mActualSelector,
                                               const GALGAS_lstring & in_mOutputInputActualParameterName,
                                               const GALGAS_lstringlist & in_mStructAttributeList
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualSelector (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOutputInputActualParameterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mStructAttributeList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @outputInputJokerParameterAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outputInputJokerParameterAST : public GALGAS_actualParameterAST {
//--- Constructor
  public : GALGAS_outputInputJokerParameterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outputInputJokerParameterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_outputInputJokerParameterAST * ptr (void) const { return (const cPtr_outputInputJokerParameterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_outputInputJokerParameterAST (const cPtr_outputInputJokerParameterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outputInputJokerParameterAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outputInputJokerParameterAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_uint & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outputInputJokerParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mJokerIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mQualifierLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outputInputJokerParameterAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputJokerParameterAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @outputInputJokerParameterAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_outputInputJokerParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_location mAttribute_mQualifierLocation ;
  public : GALGAS_uint mAttribute_mJokerIndex ;

//--- Constructor
  public : cPtr_outputInputJokerParameterAST (const GALGAS_location & in_mQualifierLocation,
                                              const GALGAS_uint & in_mJokerIndex
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mQualifierLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mJokerIndex (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @outputInputSingleJokerParameterAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_outputInputSingleJokerParameterAST : public GALGAS_actualParameterAST {
//--- Constructor
  public : GALGAS_outputInputSingleJokerParameterAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outputInputSingleJokerParameterAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_outputInputSingleJokerParameterAST * ptr (void) const { return (const cPtr_outputInputSingleJokerParameterAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_outputInputSingleJokerParameterAST (const cPtr_outputInputSingleJokerParameterAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outputInputSingleJokerParameterAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_outputInputSingleJokerParameterAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outputInputSingleJokerParameterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mActualSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outputInputSingleJokerParameterAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @outputInputSingleJokerParameterAST class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_outputInputSingleJokerParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mActualSelector ;

//--- Constructor
  public : cPtr_outputInputSingleJokerParameterAST (const GALGAS_lstring & in_mActualSelector
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualSelector (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Parser class 'semanticInstructionsSyntax' declaration                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_semanticInstructionsSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_semanticInstructionsSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_actual_5F_input_5F_parameter_ (class GALGAS_lstring & outArgument0,
                                                             class GALGAS_abstractInputParameter & outArgument1,
                                                             class C_String & ioSyntaxDirectedTranslationResult,
                                                             class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_input_5F_parameter_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                  class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_input_5F_parameter_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_input_5F_parameter_5F_list_ (class GALGAS_actualInputParameterListAST & outArgument0,
                                                                     class C_String & ioSyntaxDirectedTranslationResult,
                                                                     class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                          class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_ (class GALGAS_actualParameterListAST & outArgument0,
                                                            class C_String & ioSyntaxDirectedTranslationResult,
                                                            class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                 class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_cast_5F_else_5F_or_5F_default_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                              class C_String & ioSyntaxDirectedTranslationResult,
                                                              class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_cast_5F_else_5F_or_5F_default_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                   class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_cast_5F_else_5F_or_5F_default_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_cast_5F_instruction_5F_branch_ (class GALGAS_castInstructionBranchListAST & ioArgument0,
                                                              class C_String & ioSyntaxDirectedTranslationResult,
                                                              class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_cast_5F_instruction_5F_branch_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                   class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_cast_5F_instruction_5F_branch_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                           class C_String & ioSyntaxDirectedTranslationResult,
                                           class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_for_5F_instruction_5F_element_ (class GALGAS_foreachInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                              class C_String & ioSyntaxDirectedTranslationResult,
                                                              class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_for_5F_instruction_5F_element_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                   class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_for_5F_instruction_5F_element_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                           class C_String & ioSyntaxDirectedTranslationResult,
                                                                           class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                                class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_foreach_5F_enumerated_5F_object_ (class GALGAS_foreachInstructionEnumeratedObjectListAST & ioArgument0,
                                                                class C_String & ioSyntaxDirectedTranslationResult,
                                                                class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_foreach_5F_enumerated_5F_object_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                     class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_foreach_5F_enumerated_5F_object_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                     class C_String & ioSyntaxDirectedTranslationResult,
                                                                     class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                          class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                            class C_String & ioSyntaxDirectedTranslationResult,
                                                            class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                 class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_if_5F_branch_ (class GALGAS_semanticInstructionAST & outArgument0,
                                             class C_String & ioSyntaxDirectedTranslationResult,
                                             class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_if_5F_branch_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                  class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_if_5F_branch_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_local_5F_declaration_ (class GALGAS_bool & outArgument0,
                                                     class C_String & ioSyntaxDirectedTranslationResult,
                                                     class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_local_5F_declaration_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                          class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_local_5F_declaration_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_match_5F_entry_ (class GALGAS_matchEntryListAST & ioArgument0,
                                               class C_String & ioSyntaxDirectedTranslationResult,
                                               class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_match_5F_entry_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                    class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_match_5F_entry_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_match_5F_instruction_5F_branch_ (class GALGAS_matchInstructionBranchListAST & ioArgument0,
                                                               class C_String & ioSyntaxDirectedTranslationResult,
                                                               class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_match_5F_instruction_5F_branch_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                    class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_match_5F_instruction_5F_branch_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_output_5F_expression_5F_list_ (class GALGAS_actualOutputExpressionList & outArgument0,
                                                             class C_String & ioSyntaxDirectedTranslationResult,
                                                             class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_output_5F_expression_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                  class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_output_5F_expression_5F_list_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_declaration_ (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                        class C_String & ioSyntaxDirectedTranslationResult,
                                                        class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_declaration_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                             class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_declaration_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                        class C_String & ioSyntaxDirectedTranslationResult,
                                                        class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                             class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                                class C_String & ioSyntaxDirectedTranslationResult,
                                                                class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                     class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                            class C_String & ioSyntaxDirectedTranslationResult,
                                                                            class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                                 class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                                        C_String & ioSyntaxDirectedTranslationResult,
                                                                                        C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_5F_list_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                             C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_5F_list_i0_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_local_5F_declaration_i1_ (GALGAS_bool & outArgument0,
                                                                             C_String & ioSyntaxDirectedTranslationResult,
                                                                             C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_local_5F_declaration_i1_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                  C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_local_5F_declaration_i1_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i2_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i2_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i2_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i3_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i3_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i3_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i4_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i4_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i4_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i5_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i5_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i5_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i6_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i6_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i6_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i7_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i7_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i7_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i8_ (GALGAS_semanticDeclarationListAST & ioArgument0,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i8_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_declaration_i8_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i9_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i9_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i9_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i10_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i10_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i10_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i11_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i11_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i11_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i12_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i12_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i12_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i13_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i13_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i13_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i14_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i14_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i14_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i15_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i15_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i15_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i16_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i16_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i16_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i17_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i17_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i17_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i18_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i18_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i18_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i19_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i19_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i19_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i20_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i20_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i20_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i21_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i21_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i21_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i22_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i22_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i22_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i23_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i23_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i23_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i24_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i24_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i24_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_foreach_5F_enumerated_5F_object_i25_ (GALGAS_foreachInstructionEnumeratedObjectListAST & ioArgument0,
                                                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                                                         C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_foreach_5F_enumerated_5F_object_i25_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                              C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_foreach_5F_enumerated_5F_object_i25_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i26_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i26_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i26_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_for_5F_instruction_5F_element_i27_ (GALGAS_foreachInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_for_5F_instruction_5F_element_i27_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_for_5F_instruction_5F_element_i27_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_for_5F_instruction_5F_element_i28_ (GALGAS_foreachInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_for_5F_instruction_5F_element_i28_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_for_5F_instruction_5F_element_i28_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_for_5F_instruction_5F_element_i29_ (GALGAS_foreachInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_for_5F_instruction_5F_element_i29_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_for_5F_instruction_5F_element_i29_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                    C_String & ioSyntaxDirectedTranslationResult,
                                                                                                    C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                         C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                    C_String & ioSyntaxDirectedTranslationResult,
                                                                                                    C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                         C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i32_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                    C_String & ioSyntaxDirectedTranslationResult,
                                                                                                    C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i32_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                         C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i32_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i33_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i33_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i33_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_if_5F_branch_i34_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_if_5F_branch_i34_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                           C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_if_5F_branch_i34_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i35_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i35_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i35_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_match_5F_entry_i36_ (GALGAS_matchEntryListAST & ioArgument0,
                                                                        C_String & ioSyntaxDirectedTranslationResult,
                                                                        C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_match_5F_entry_i36_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                             C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_match_5F_entry_i36_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_match_5F_entry_i37_ (GALGAS_matchEntryListAST & ioArgument0,
                                                                        C_String & ioSyntaxDirectedTranslationResult,
                                                                        C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_match_5F_entry_i37_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                             C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_match_5F_entry_i37_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_match_5F_instruction_5F_branch_i38_ (GALGAS_matchInstructionBranchListAST & ioArgument0,
                                                                                        C_String & ioSyntaxDirectedTranslationResult,
                                                                                        C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_match_5F_instruction_5F_branch_i38_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                             C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_match_5F_instruction_5F_branch_i38_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i39_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i39_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i39_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i40_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i40_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i40_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i41_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i41_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i41_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i42_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i42_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i42_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i43_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i43_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i43_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i44_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i44_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i44_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i45_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i45_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i45_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i46_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i46_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i46_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i47_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i47_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i47_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_cast_5F_instruction_5F_branch_i48_ (GALGAS_castInstructionBranchListAST & ioArgument0,
                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_cast_5F_instruction_5F_branch_i48_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_cast_5F_instruction_5F_branch_i48_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_cast_5F_else_5F_or_5F_default_i49_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_cast_5F_else_5F_or_5F_default_i49_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_cast_5F_else_5F_or_5F_default_i49_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_cast_5F_else_5F_or_5F_default_i50_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_cast_5F_else_5F_or_5F_default_i50_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_cast_5F_else_5F_or_5F_default_i50_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_cast_5F_else_5F_or_5F_default_i51_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_cast_5F_else_5F_or_5F_default_i51_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_cast_5F_else_5F_or_5F_default_i51_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i52_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i52_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i52_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i53_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i53_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i53_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i54_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i54_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i54_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i55_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i55_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i55_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i56_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i56_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i56_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i57_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i57_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i57_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i58_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i58_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i58_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i59_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i59_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i59_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i60_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i60_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i60_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i61_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i61_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                          C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i61_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i62_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i62_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i62_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i63_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i63_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i63_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_actual_5F_input_5F_parameter_i64_ (GALGAS_lstring & outArgument0,
                                                                                      GALGAS_abstractInputParameter & outArgument1,
                                                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_actual_5F_input_5F_parameter_i64_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                           C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_actual_5F_input_5F_parameter_i64_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i65_ (GALGAS_actualInputParameterListAST & outArgument0,
                                                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                                                              C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i65_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                   C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i65_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i66_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i66_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_semanticInstructionsSyntax_semantic_5F_instruction_i66_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_semanticInstructionsSyntax_0 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_1 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_2 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_3 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_4 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_5 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_6 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_7 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_8 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_9 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_10 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_11 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_12 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_13 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_14 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_15 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_16 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_17 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_18 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_19 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_20 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_21 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_22 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_23 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_24 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_25 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_26 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_27 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_28 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_29 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_30 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_31 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_32 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_33 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_34 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_35 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_36 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_37 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_38 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_39 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_40 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_41 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_42 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_43 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_44 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_45 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_46 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_47 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_48 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_49 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_50 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_51 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_52 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_53 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_54 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_55 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_56 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_57 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_58 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_59 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_60 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_61 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_62 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_63 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_64 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_65 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_66 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_67 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_68 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_semanticInstructionsSyntax_69 (C_Lexique_galgas_32_Scanner *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          @abstractGrammarInstructionSyntaxDirectedTranslationResult class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (void) ;

//---
  public : inline const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * ptr (void) const { return (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Pointer class for @abstractGrammarInstructionSyntaxDirectedTranslationResult class                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @assignmentInstructionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_assignmentInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_assignmentInstructionAST (void) ;

//---
  public : inline const class cPtr_assignmentInstructionAST * ptr (void) const { return (const cPtr_assignmentInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_assignmentInstructionAST (const cPtr_assignmentInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assignmentInstructionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_assignmentInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_lstringlist & inOperand2,
                                                                   const class GALGAS_semanticExpressionAST & inOperand3
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mStructAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetVariableName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @assignmentInstructionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_assignmentInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetVariableName ;
  public : GALGAS_lstringlist mAttribute_mStructAttributeList ;
  public : GALGAS_semanticExpressionAST mAttribute_mSourceExpression ;

//--- Constructor
  public : cPtr_assignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                          const GALGAS_lstring & in_mTargetVariableName,
                                          const GALGAS_lstringlist & in_mStructAttributeList,
                                          const GALGAS_semanticExpressionAST & in_mSourceExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @concatInstructionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_concatInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_concatInstructionAST (void) ;

//---
  public : inline const class cPtr_concatInstructionAST * ptr (void) const { return (const cPtr_concatInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_concatInstructionAST (const cPtr_concatInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_concatInstructionAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_concatInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                               const class GALGAS_lstring & inOperand1,
                                                               const class GALGAS_lstringlist & inOperand2,
                                                               const class GALGAS_semanticExpressionAST & inOperand3
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_concatInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mStructAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetVariableName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_concatInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_concatInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @concatInstructionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_concatInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetVariableName ;
  public : GALGAS_lstringlist mAttribute_mStructAttributeList ;
  public : GALGAS_semanticExpressionAST mAttribute_mSourceExpression ;

//--- Constructor
  public : cPtr_concatInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                      const GALGAS_lstring & in_mTargetVariableName,
                                      const GALGAS_lstringlist & in_mStructAttributeList,
                                      const GALGAS_semanticExpressionAST & in_mSourceExpression
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @dropInstructionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_dropInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_dropInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_dropInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_dropInstructionAST * ptr (void) const { return (const cPtr_dropInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_dropInstructionAST (const cPtr_dropInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_dropInstructionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_dropInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                             const class GALGAS_lstringlist & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_dropInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mDropList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dropInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dropInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @dropInstructionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_dropInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstringlist mAttribute_mDropList ;

//--- Constructor
  public : cPtr_dropInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                    const GALGAS_lstringlist & in_mDropList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mDropList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @enumeratedCollectionCstListInExpAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumeratedCollectionCstListInExpAST : public GALGAS_abstractEnumeratedCollectionAST {
//--- Constructor
  public : GALGAS_enumeratedCollectionCstListInExpAST (void) ;

//---
  public : inline const class cPtr_enumeratedCollectionCstListInExpAST * ptr (void) const { return (const cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enumeratedCollectionCstListInExpAST (const cPtr_enumeratedCollectionCstListInExpAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumeratedCollectionCstListInExpAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumeratedCollectionCstListInExpAST constructor_new (const class GALGAS_foreachInstructionEnumeratedObjectElementListAST & inOperand0,
                                                                              const class GALGAS_bool & inOperand1,
                                                                              const class GALGAS_semanticExpressionAST & inOperand2,
                                                                              const class GALGAS_location & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumeratedCollectionCstListInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_foreachInstructionEnumeratedObjectElementListAST reader_mElementList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfEnumerationExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mEndsWithEllipsis (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mEnumeratedExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumeratedCollectionCstListInExpAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @enumeratedCollectionCstListInExpAST class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_enumeratedCollectionCstListInExpAST : public cPtr_abstractEnumeratedCollectionAST {
//--- Attributes
  public : GALGAS_foreachInstructionEnumeratedObjectElementListAST mAttribute_mElementList ;
  public : GALGAS_bool mAttribute_mEndsWithEllipsis ;
  public : GALGAS_semanticExpressionAST mAttribute_mEnumeratedExpression ;
  public : GALGAS_location mAttribute_mEndOfEnumerationExpression ;

//--- Constructor
  public : cPtr_enumeratedCollectionCstListInExpAST (const GALGAS_foreachInstructionEnumeratedObjectElementListAST & in_mElementList,
                                                     const GALGAS_bool & in_mEndsWithEllipsis,
                                                     const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                     const GALGAS_location & in_mEndOfEnumerationExpression
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_foreachInstructionEnumeratedObjectElementListAST reader_mElementList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mEndsWithEllipsis (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mEnumeratedExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfEnumerationExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @enumeratedCollectionImplicitVarInExpAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumeratedCollectionImplicitVarInExpAST : public GALGAS_abstractEnumeratedCollectionAST {
//--- Constructor
  public : GALGAS_enumeratedCollectionImplicitVarInExpAST (void) ;

//---
  public : inline const class cPtr_enumeratedCollectionImplicitVarInExpAST * ptr (void) const { return (const cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enumeratedCollectionImplicitVarInExpAST (const cPtr_enumeratedCollectionImplicitVarInExpAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumeratedCollectionImplicitVarInExpAST extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumeratedCollectionImplicitVarInExpAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                  const class GALGAS_location & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumeratedCollectionImplicitVarInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfEnumerationExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mEnumeratedExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mPrefix (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumeratedCollectionImplicitVarInExpAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @enumeratedCollectionImplicitVarInExpAST class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_enumeratedCollectionImplicitVarInExpAST : public cPtr_abstractEnumeratedCollectionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mPrefix ;
  public : GALGAS_semanticExpressionAST mAttribute_mEnumeratedExpression ;
  public : GALGAS_location mAttribute_mEndOfEnumerationExpression ;

//--- Constructor
  public : cPtr_enumeratedCollectionImplicitVarInExpAST (const GALGAS_lstring & in_mPrefix,
                                                         const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                         const GALGAS_location & in_mEndOfEnumerationExpression
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mPrefix (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mEnumeratedExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfEnumerationExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @enumeratedCollectionVarInExpAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumeratedCollectionVarInExpAST : public GALGAS_abstractEnumeratedCollectionAST {
//--- Constructor
  public : GALGAS_enumeratedCollectionVarInExpAST (void) ;

//---
  public : inline const class cPtr_enumeratedCollectionVarInExpAST * ptr (void) const { return (const cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enumeratedCollectionVarInExpAST (const cPtr_enumeratedCollectionVarInExpAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumeratedCollectionVarInExpAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumeratedCollectionVarInExpAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_semanticExpressionAST & inOperand2,
                                                                          const class GALGAS_location & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumeratedCollectionVarInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfEnumerationExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mEnumeratedExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mEnumerationOptionalTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mEnumerationVariable (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumeratedCollectionVarInExpAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @enumeratedCollectionVarInExpAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_enumeratedCollectionVarInExpAST : public cPtr_abstractEnumeratedCollectionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mEnumerationOptionalTypeName ;
  public : GALGAS_lstring mAttribute_mEnumerationVariable ;
  public : GALGAS_semanticExpressionAST mAttribute_mEnumeratedExpression ;
  public : GALGAS_location mAttribute_mEndOfEnumerationExpression ;

//--- Constructor
  public : cPtr_enumeratedCollectionVarInExpAST (const GALGAS_lstring & in_mEnumerationOptionalTypeName,
                                                 const GALGAS_lstring & in_mEnumerationVariable,
                                                 const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                 const GALGAS_location & in_mEndOfEnumerationExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mEnumerationOptionalTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mEnumerationVariable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mEnumeratedExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfEnumerationExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @errorInstructionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_errorInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_errorInstructionAST (void) ;

//---
  public : inline const class cPtr_errorInstructionAST * ptr (void) const { return (const cPtr_errorInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_errorInstructionAST (const cPtr_errorInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_errorInstructionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_errorInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                              const class GALGAS_semanticExpressionAST & inOperand1,
                                                              const class GALGAS_semanticExpressionAST & inOperand2,
                                                              const class GALGAS_lstringlist & inOperand3
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_errorInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mBuiltVariableList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLocationExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mMessageExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_errorInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @errorInstructionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_errorInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mLocationExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mMessageExpression ;
  public : GALGAS_lstringlist mAttribute_mBuiltVariableList ;

//--- Constructor
  public : cPtr_errorInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                     const GALGAS_semanticExpressionAST & in_mLocationExpression,
                                     const GALGAS_semanticExpressionAST & in_mMessageExpression,
                                     const GALGAS_lstringlist & in_mBuiltVariableList
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLocationExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mMessageExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mBuiltVariableList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @externFunctionDeclarationAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externFunctionDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_externFunctionDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_externFunctionDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_externFunctionDeclarationAST * ptr (void) const { return (const cPtr_externFunctionDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_externFunctionDeclarationAST (const cPtr_externFunctionDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externFunctionDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_externFunctionDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_formalInputParameterListAST & inOperand2,
                                                                       const class GALGAS_lstring & inOperand3,
                                                                       const class GALGAS_lstring & inOperand4
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externFunctionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST reader_mFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mResultTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mResultVariableName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externFunctionDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @externFunctionDeclarationAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_externFunctionDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mFunctionName ;
  public : GALGAS_formalInputParameterListAST mAttribute_mFormalArgumentList ;
  public : GALGAS_lstring mAttribute_mResultTypeName ;
  public : GALGAS_lstring mAttribute_mResultVariableName ;

//--- Constructor
  public : cPtr_externFunctionDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                              const GALGAS_lstring & in_mFunctionName,
                                              const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                              const GALGAS_lstring & in_mResultTypeName,
                                              const GALGAS_lstring & in_mResultVariableName
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListAST reader_mFormalArgumentList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mResultTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mResultVariableName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @externRoutineDeclarationAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externRoutineDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_externRoutineDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_externRoutineDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_externRoutineDeclarationAST * ptr (void) const { return (const cPtr_externRoutineDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_externRoutineDeclarationAST (const cPtr_externRoutineDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externRoutineDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_externRoutineDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_bool & inOperand1,
                                                                      const class GALGAS_lstring & inOperand2,
                                                                      const class GALGAS_formalParameterListAST & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externRoutineDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST reader_mFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsInternal (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externRoutineDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @externRoutineDeclarationAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_externRoutineDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_bool mAttribute_mIsInternal ;
  public : GALGAS_lstring mAttribute_mRoutineName ;
  public : GALGAS_formalParameterListAST mAttribute_mFormalArgumentList ;

//--- Constructor
  public : cPtr_externRoutineDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                             const GALGAS_bool & in_mIsInternal,
                                             const GALGAS_lstring & in_mRoutineName,
                                             const GALGAS_formalParameterListAST & in_mFormalArgumentList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsInternal (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST reader_mFormalArgumentList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @forInstructionAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_forInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_forInstructionAST (void) ;

//---
  public : inline const class cPtr_forInstructionAST * ptr (void) const { return (const cPtr_forInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_forInstructionAST (const cPtr_forInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_forInstructionAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_forInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                            const class GALGAS_forInstructionEnumeratedObjectListAST & inOperand1,
                                                            const class GALGAS_lstring & inOperand2,
                                                            const class GALGAS_semanticExpressionAST & inOperand3,
                                                            const class GALGAS_location & inOperand4,
                                                            const class GALGAS_semanticInstructionListAST & inOperand5,
                                                            const class GALGAS_location & inOperand6,
                                                            const class GALGAS_semanticInstructionListAST & inOperand7,
                                                            const class GALGAS_location & inOperand8,
                                                            const class GALGAS_semanticInstructionListAST & inOperand9,
                                                            const class GALGAS_location & inOperand10,
                                                            const class GALGAS_semanticInstructionListAST & inOperand11,
                                                            const class GALGAS_location & inOperand12,
                                                            const class GALGAS_location & inOperand13
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_forInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mAfterInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mBeforeInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mBetweenInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_after_5F_branch (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_before_5F_branch (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_between_5F_branch (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_do_5F_branch (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_foreach_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_while_5F_expression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectListAST reader_mEnumeratedObjectList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mIndexVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mWhileExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @forInstructionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_forInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_forInstructionEnumeratedObjectListAST mAttribute_mEnumeratedObjectList ;
  public : GALGAS_lstring mAttribute_mIndexVariableName ;
  public : GALGAS_semanticExpressionAST mAttribute_mWhileExpression ;
  public : GALGAS_location mAttribute_mEndOf_5F_while_5F_expression ;
  public : GALGAS_semanticInstructionListAST mAttribute_mBeforeInstructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_before_5F_branch ;
  public : GALGAS_semanticInstructionListAST mAttribute_mBetweenInstructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_between_5F_branch ;
  public : GALGAS_semanticInstructionListAST mAttribute_mDoInstructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_do_5F_branch ;
  public : GALGAS_semanticInstructionListAST mAttribute_mAfterInstructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_after_5F_branch ;
  public : GALGAS_location mAttribute_mEndOf_5F_foreach_5F_instruction ;

//--- Constructor
  public : cPtr_forInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                   const GALGAS_forInstructionEnumeratedObjectListAST & in_mEnumeratedObjectList,
                                   const GALGAS_lstring & in_mIndexVariableName,
                                   const GALGAS_semanticExpressionAST & in_mWhileExpression,
                                   const GALGAS_location & in_mEndOf_5F_while_5F_expression,
                                   const GALGAS_semanticInstructionListAST & in_mBeforeInstructionList,
                                   const GALGAS_location & in_mEndOf_5F_before_5F_branch,
                                   const GALGAS_semanticInstructionListAST & in_mBetweenInstructionList,
                                   const GALGAS_location & in_mEndOf_5F_between_5F_branch,
                                   const GALGAS_semanticInstructionListAST & in_mDoInstructionList,
                                   const GALGAS_location & in_mEndOf_5F_do_5F_branch,
                                   const GALGAS_semanticInstructionListAST & in_mAfterInstructionList,
                                   const GALGAS_location & in_mEndOf_5F_after_5F_branch,
                                   const GALGAS_location & in_mEndOf_5F_foreach_5F_instruction
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_forInstructionEnumeratedObjectListAST reader_mEnumeratedObjectList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mIndexVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mWhileExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_while_5F_expression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mBeforeInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_before_5F_branch (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mBetweenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_between_5F_branch (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mDoInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_do_5F_branch (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mAfterInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_after_5F_branch (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_foreach_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @foreachInstructionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_foreachInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_foreachInstructionAST (void) ;

//---
  public : inline const class cPtr_foreachInstructionAST * ptr (void) const { return (const cPtr_foreachInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_foreachInstructionAST (const cPtr_foreachInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_foreachInstructionAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_foreachInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_foreachInstructionEnumeratedObjectListAST & inOperand1,
                                                                const class GALGAS_lstring & inOperand2,
                                                                const class GALGAS_semanticExpressionAST & inOperand3,
                                                                const class GALGAS_location & inOperand4,
                                                                const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                const class GALGAS_location & inOperand6,
                                                                const class GALGAS_semanticInstructionListAST & inOperand7,
                                                                const class GALGAS_location & inOperand8,
                                                                const class GALGAS_semanticInstructionListAST & inOperand9,
                                                                const class GALGAS_location & inOperand10,
                                                                const class GALGAS_semanticInstructionListAST & inOperand11,
                                                                const class GALGAS_location & inOperand12,
                                                                const class GALGAS_location & inOperand13
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_foreachInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mAfterInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mBeforeInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mBetweenInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_after_5F_branch (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_before_5F_branch (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_between_5F_branch (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_do_5F_branch (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_foreach_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_while_5F_expression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_foreachInstructionEnumeratedObjectListAST reader_mEnumeratedObjectList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mIndexVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mWhileExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_foreachInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_foreachInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @foreachInstructionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_foreachInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_foreachInstructionEnumeratedObjectListAST mAttribute_mEnumeratedObjectList ;
  public : GALGAS_lstring mAttribute_mIndexVariableName ;
  public : GALGAS_semanticExpressionAST mAttribute_mWhileExpression ;
  public : GALGAS_location mAttribute_mEndOf_5F_while_5F_expression ;
  public : GALGAS_semanticInstructionListAST mAttribute_mBeforeInstructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_before_5F_branch ;
  public : GALGAS_semanticInstructionListAST mAttribute_mBetweenInstructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_between_5F_branch ;
  public : GALGAS_semanticInstructionListAST mAttribute_mDoInstructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_do_5F_branch ;
  public : GALGAS_semanticInstructionListAST mAttribute_mAfterInstructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_after_5F_branch ;
  public : GALGAS_location mAttribute_mEndOf_5F_foreach_5F_instruction ;

//--- Constructor
  public : cPtr_foreachInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                       const GALGAS_foreachInstructionEnumeratedObjectListAST & in_mEnumeratedObjectList,
                                       const GALGAS_lstring & in_mIndexVariableName,
                                       const GALGAS_semanticExpressionAST & in_mWhileExpression,
                                       const GALGAS_location & in_mEndOf_5F_while_5F_expression,
                                       const GALGAS_semanticInstructionListAST & in_mBeforeInstructionList,
                                       const GALGAS_location & in_mEndOf_5F_before_5F_branch,
                                       const GALGAS_semanticInstructionListAST & in_mBetweenInstructionList,
                                       const GALGAS_location & in_mEndOf_5F_between_5F_branch,
                                       const GALGAS_semanticInstructionListAST & in_mDoInstructionList,
                                       const GALGAS_location & in_mEndOf_5F_do_5F_branch,
                                       const GALGAS_semanticInstructionListAST & in_mAfterInstructionList,
                                       const GALGAS_location & in_mEndOf_5F_after_5F_branch,
                                       const GALGAS_location & in_mEndOf_5F_foreach_5F_instruction
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_foreachInstructionEnumeratedObjectListAST reader_mEnumeratedObjectList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mIndexVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mWhileExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_while_5F_expression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mBeforeInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_before_5F_branch (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mBetweenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_between_5F_branch (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mDoInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_do_5F_branch (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mAfterInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_after_5F_branch (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_foreach_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @functionDeclarationAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionDeclarationAST : public GALGAS_externFunctionDeclarationAST {
//--- Constructor
  public : GALGAS_functionDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_functionDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_functionDeclarationAST * ptr (void) const { return (const cPtr_functionDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_functionDeclarationAST (const cPtr_functionDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionDeclarationAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_functionDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1,
                                                                 const class GALGAS_formalInputParameterListAST & inOperand2,
                                                                 const class GALGAS_lstring & inOperand3,
                                                                 const class GALGAS_lstring & inOperand4,
                                                                 const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                 const class GALGAS_location & inOperand6,
                                                                 const class GALGAS_bool & inOperand7
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfFunctionInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mFunctionInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsInternal (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @functionDeclarationAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_functionDeclarationAST : public cPtr_externFunctionDeclarationAST {
//--- Attributes
  public : GALGAS_semanticInstructionListAST mAttribute_mFunctionInstructionList ;
  public : GALGAS_location mAttribute_mEndOfFunctionInstructionList ;
  public : GALGAS_bool mAttribute_mIsInternal ;

//--- Constructor
  public : cPtr_functionDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                        const GALGAS_lstring & in_mFunctionName,
                                        const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                        const GALGAS_lstring & in_mResultTypeName,
                                        const GALGAS_lstring & in_mResultVariableName,
                                        const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                        const GALGAS_location & in_mEndOfFunctionInstructionList,
                                        const GALGAS_bool & in_mIsInternal
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mFunctionInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfFunctionInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsInternal (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @grammarInstructionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_grammarInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_grammarInstructionAST (void) ;

//---
  public : inline const class cPtr_grammarInstructionAST * ptr (void) const { return (const cPtr_grammarInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_grammarInstructionAST (const cPtr_grammarInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarInstructionAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_grammarInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_lstring & inOperand1,
                                                                const class GALGAS_lstring & inOperand2,
                                                                const class GALGAS_semanticExpressionAST & inOperand3,
                                                                const class GALGAS_location & inOperand4,
                                                                const class GALGAS_bool & inOperand5,
                                                                const class GALGAS_actualParameterListAST & inOperand6,
                                                                const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand7
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_grammarInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult reader_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST reader_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mGrammarComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLabelName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mSourceExpressionIsFile (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @grammarInstructionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_grammarInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mGrammarComponentName ;
  public : GALGAS_lstring mAttribute_mLabelName ;
  public : GALGAS_semanticExpressionAST mAttribute_mSourceExpression ;
  public : GALGAS_location mAttribute_mEndOfSourceExpression ;
  public : GALGAS_bool mAttribute_mSourceExpressionIsFile ;
  public : GALGAS_actualParameterListAST mAttribute_mActualParameterList ;
  public : GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;

//--- Constructor
  public : cPtr_grammarInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                       const GALGAS_lstring & in_mGrammarComponentName,
                                       const GALGAS_lstring & in_mLabelName,
                                       const GALGAS_semanticExpressionAST & in_mSourceExpression,
                                       const GALGAS_location & in_mEndOfSourceExpression,
                                       const GALGAS_bool & in_mSourceExpressionIsFile,
                                       const GALGAS_actualParameterListAST & in_mActualParameterList,
                                       const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mGrammarComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLabelName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mSourceExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfSourceExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mSourceExpressionIsFile (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListAST reader_mActualParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult reader_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @grammarInstructionSyntaxDirectedTranslationDropResult class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Constructor
  public : GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * ptr (void) const { return (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult constructor_new (const class GALGAS_location & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Pointer class for @grammarInstructionSyntaxDirectedTranslationDropResult class                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_grammarInstructionSyntaxDirectedTranslationDropResult : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Attributes
  public : GALGAS_location mAttribute_mLocation ;

//--- Constructor
  public : cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (const GALGAS_location & in_mLocation
                                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Constructor
  public : GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * ptr (void) const { return (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst extractObject (const GALGAS_object & inObject,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                           const class GALGAS_lstring & inOperand1
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mActualParameterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mActualParameterTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Attributes
  public : GALGAS_lstring mAttribute_mActualParameterTypeName ;
  public : GALGAS_lstring mAttribute_mActualParameterName ;

//--- Constructor
  public : cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                  const GALGAS_lstring & in_mActualParameterName
                                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualParameterTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualParameterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Constructor
  public : GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * ptr (void) const { return (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar extractObject (const GALGAS_object & inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                         const class GALGAS_lstring & inOperand1
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mActualParameterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mActualParameterTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Attributes
  public : GALGAS_lstring mAttribute_mActualParameterTypeName ;
  public : GALGAS_lstring mAttribute_mActualParameterName ;

//--- Constructor
  public : cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                const GALGAS_lstring & in_mActualParameterName
                                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualParameterTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualParameterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @grammarInstructionSyntaxDirectedTranslationResultInVar class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Constructor
  public : GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * ptr (void) const { return (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar constructor_new (const class GALGAS_lstring & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mActualParameterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInVar class                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Attributes
  public : GALGAS_lstring mAttribute_mActualParameterName ;

//--- Constructor
  public : cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (const GALGAS_lstring & in_mActualParameterName
                                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualParameterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @grammarInstructionSyntaxDirectedTranslationResultNone class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Constructor
  public : GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * ptr (void) const { return (const cPtr_grammarInstructionSyntaxDirectedTranslationResultNone *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone (const cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Pointer class for @grammarInstructionSyntaxDirectedTranslationResultNone class                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_grammarInstructionSyntaxDirectedTranslationResultNone : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Attributes

//--- Constructor
  public : cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @ifInstructionAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ifInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_ifInstructionAST (void) ;

//---
  public : inline const class cPtr_ifInstructionAST * ptr (void) const { return (const cPtr_ifInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ifInstructionAST (const cPtr_ifInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ifInstructionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ifInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                           const class GALGAS_semanticExpressionAST & inOperand1,
                                                           const class GALGAS_semanticInstructionListAST & inOperand2,
                                                           const class GALGAS_location & inOperand3,
                                                           const class GALGAS_semanticInstructionListAST & inOperand4,
                                                           const class GALGAS_location & inOperand5
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ifInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_if_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_then_5F_branch (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_m_5F_else_5F_instructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_m_5F_if_5F_expression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_m_5F_then_5F_instructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @ifInstructionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ifInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_m_5F_if_5F_expression ;
  public : GALGAS_semanticInstructionListAST mAttribute_m_5F_then_5F_instructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_then_5F_branch ;
  public : GALGAS_semanticInstructionListAST mAttribute_m_5F_else_5F_instructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_if_5F_instruction ;

//--- Constructor
  public : cPtr_ifInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                  const GALGAS_semanticExpressionAST & in_m_5F_if_5F_expression,
                                  const GALGAS_semanticInstructionListAST & in_m_5F_then_5F_instructionList,
                                  const GALGAS_location & in_mEndOf_5F_then_5F_branch,
                                  const GALGAS_semanticInstructionListAST & in_m_5F_else_5F_instructionList,
                                  const GALGAS_location & in_mEndOf_5F_if_5F_instruction
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_m_5F_if_5F_expression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_m_5F_then_5F_instructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_then_5F_branch (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_m_5F_else_5F_instructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_if_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @incDecInstructionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_incDecInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_incDecInstructionAST (void) ;

//---
  public : inline const class cPtr_incDecInstructionAST * ptr (void) const { return (const cPtr_incDecInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_incDecInstructionAST (const cPtr_incDecInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_incDecInstructionAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_incDecInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                               const class GALGAS_lstring & inOperand1,
                                                               const class GALGAS_lstringlist & inOperand2,
                                                               const class GALGAS_incDecKind & inOperand3
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_incDecInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_incDecKind reader_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mReceiverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_incDecInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @incDecInstructionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_incDecInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mReceiverName ;
  public : GALGAS_lstringlist mAttribute_mStructAttributeList ;
  public : GALGAS_incDecKind mAttribute_mKind ;

//--- Constructor
  public : cPtr_incDecInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                      const GALGAS_lstring & in_mReceiverName,
                                      const GALGAS_lstringlist & in_mStructAttributeList,
                                      const GALGAS_incDecKind & in_mKind
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_incDecKind reader_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @inputParameterAnonymousVariable class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_inputParameterAnonymousVariable : public GALGAS_abstractInputParameter {
//--- Constructor
  public : GALGAS_inputParameterAnonymousVariable (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputParameterAnonymousVariable constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputParameterAnonymousVariable * ptr (void) const { return (const cPtr_inputParameterAnonymousVariable *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputParameterAnonymousVariable (const cPtr_inputParameterAnonymousVariable * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputParameterAnonymousVariable extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_inputParameterAnonymousVariable constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputParameterAnonymousVariable & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputParameterAnonymousVariable class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @inputParameterAnonymousVariable class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_inputParameterAnonymousVariable : public cPtr_abstractInputParameter {
//--- Attributes

//--- Constructor
  public : cPtr_inputParameterAnonymousVariable (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @inputParameterDeclaredConstant class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_inputParameterDeclaredConstant : public GALGAS_abstractInputParameter {
//--- Constructor
  public : GALGAS_inputParameterDeclaredConstant (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputParameterDeclaredConstant constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputParameterDeclaredConstant * ptr (void) const { return (const cPtr_inputParameterDeclaredConstant *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputParameterDeclaredConstant (const cPtr_inputParameterDeclaredConstant * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputParameterDeclaredConstant extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_inputParameterDeclaredConstant constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputParameterDeclaredConstant & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mActualParameterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mActualParameterTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputParameterDeclaredConstant class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @inputParameterDeclaredConstant class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_inputParameterDeclaredConstant : public cPtr_abstractInputParameter {
//--- Attributes
  public : GALGAS_lstring mAttribute_mActualParameterTypeName ;
  public : GALGAS_lstring mAttribute_mActualParameterName ;

//--- Constructor
  public : cPtr_inputParameterDeclaredConstant (const GALGAS_lstring & in_mActualParameterTypeName,
                                                const GALGAS_lstring & in_mActualParameterName
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualParameterTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualParameterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @inputParameterDeclaredVariable class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_inputParameterDeclaredVariable : public GALGAS_abstractInputParameter {
//--- Constructor
  public : GALGAS_inputParameterDeclaredVariable (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputParameterDeclaredVariable constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputParameterDeclaredVariable * ptr (void) const { return (const cPtr_inputParameterDeclaredVariable *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputParameterDeclaredVariable (const cPtr_inputParameterDeclaredVariable * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputParameterDeclaredVariable extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_inputParameterDeclaredVariable constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputParameterDeclaredVariable & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mActualParameterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mActualParameterTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputParameterDeclaredVariable class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @inputParameterDeclaredVariable class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_inputParameterDeclaredVariable : public cPtr_abstractInputParameter {
//--- Attributes
  public : GALGAS_lstring mAttribute_mActualParameterTypeName ;
  public : GALGAS_lstring mAttribute_mActualParameterName ;

//--- Constructor
  public : cPtr_inputParameterDeclaredVariable (const GALGAS_lstring & in_mActualParameterTypeName,
                                                const GALGAS_lstring & in_mActualParameterName
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualParameterTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualParameterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @inputParameterVariable class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_inputParameterVariable : public GALGAS_abstractInputParameter {
//--- Constructor
  public : GALGAS_inputParameterVariable (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputParameterVariable constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputParameterVariable * ptr (void) const { return (const cPtr_inputParameterVariable *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputParameterVariable (const cPtr_inputParameterVariable * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputParameterVariable extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_inputParameterVariable constructor_new (const class GALGAS_lstring & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputParameterVariable & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mActualParameterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputParameterVariable class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterVariable ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @inputParameterVariable class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_inputParameterVariable : public cPtr_abstractInputParameter {
//--- Attributes
  public : GALGAS_lstring mAttribute_mActualParameterName ;

//--- Constructor
  public : cPtr_inputParameterVariable (const GALGAS_lstring & in_mActualParameterName
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualParameterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @localConstantDeclarationWithAssignmentAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_localConstantDeclarationWithAssignmentAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_localConstantDeclarationWithAssignmentAST (void) ;

//---
  public : inline const class cPtr_localConstantDeclarationWithAssignmentAST * ptr (void) const { return (const cPtr_localConstantDeclarationWithAssignmentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_localConstantDeclarationWithAssignmentAST (const cPtr_localConstantDeclarationWithAssignmentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_localConstantDeclarationWithAssignmentAST extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_localConstantDeclarationWithAssignmentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_semanticExpressionAST & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_localConstantDeclarationWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mVariableName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localConstantDeclarationWithAssignmentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Pointer class for @localConstantDeclarationWithAssignmentAST class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_localConstantDeclarationWithAssignmentAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mVariableName ;
  public : GALGAS_semanticExpressionAST mAttribute_mSourceExpression ;

//--- Constructor
  public : cPtr_localConstantDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_lstring & in_mVariableName,
                                                           const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @localVariableDeclarationAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_localVariableDeclarationAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_localVariableDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_localVariableDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_localVariableDeclarationAST * ptr (void) const { return (const cPtr_localVariableDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_localVariableDeclarationAST (const cPtr_localVariableDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_localVariableDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_localVariableDeclarationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_lstring & inOperand2,
                                                                      const class GALGAS_bool & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsUndefinedConstant (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mVariableName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @localVariableDeclarationAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_localVariableDeclarationAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mVariableName ;
  public : GALGAS_bool mAttribute_mIsUndefinedConstant ;

//--- Constructor
  public : cPtr_localVariableDeclarationAST (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_lstring & in_mTypeName,
                                             const GALGAS_lstring & in_mVariableName,
                                             const GALGAS_bool & in_mIsUndefinedConstant
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsUndefinedConstant (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @localVariableDeclarationWithAssignmentAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_localVariableDeclarationWithAssignmentAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_localVariableDeclarationWithAssignmentAST (void) ;

//---
  public : inline const class cPtr_localVariableDeclarationWithAssignmentAST * ptr (void) const { return (const cPtr_localVariableDeclarationWithAssignmentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_localVariableDeclarationWithAssignmentAST (const cPtr_localVariableDeclarationWithAssignmentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_localVariableDeclarationWithAssignmentAST extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_localVariableDeclarationWithAssignmentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_semanticExpressionAST & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mVariableName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationWithAssignmentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Pointer class for @localVariableDeclarationWithAssignmentAST class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_localVariableDeclarationWithAssignmentAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mVariableName ;
  public : GALGAS_semanticExpressionAST mAttribute_mSourceExpression ;

//--- Constructor
  public : cPtr_localVariableDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_lstring & in_mVariableName,
                                                           const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @localVariableOrConstantDeclarationWithAssignmentAST class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_localVariableOrConstantDeclarationWithAssignmentAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (void) ;

//---
  public : inline const class cPtr_localVariableOrConstantDeclarationWithAssignmentAST * ptr (void) const { return (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_localVariableOrConstantDeclarationWithAssignmentAST extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_localVariableOrConstantDeclarationWithAssignmentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                              const class GALGAS_bool & inOperand1,
                                                                                              const class GALGAS_lstring & inOperand2,
                                                                                              const class GALGAS_lstring & inOperand3,
                                                                                              const class GALGAS_semanticExpressionAST & inOperand4
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsConstant (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionalTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mVariableName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableOrConstantDeclarationWithAssignmentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Pointer class for @localVariableOrConstantDeclarationWithAssignmentAST class                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_localVariableOrConstantDeclarationWithAssignmentAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_bool mAttribute_mIsConstant ;
  public : GALGAS_lstring mAttribute_mOptionalTypeName ;
  public : GALGAS_lstring mAttribute_mVariableName ;
  public : GALGAS_semanticExpressionAST mAttribute_mSourceExpression ;

//--- Constructor
  public : cPtr_localVariableOrConstantDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                     const GALGAS_bool & in_mIsConstant,
                                                                     const GALGAS_lstring & in_mOptionalTypeName,
                                                                     const GALGAS_lstring & in_mVariableName,
                                                                     const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsConstant (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOptionalTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           @localVariableOrConstantDeclarationWithConstructorCallAST class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_localVariableOrConstantDeclarationWithConstructorCallAST * ptr (void) const { return (const cPtr_localVariableOrConstantDeclarationWithConstructorCallAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST (const cPtr_localVariableOrConstantDeclarationWithConstructorCallAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST extractObject (const GALGAS_object & inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                                   const class GALGAS_bool & inOperand1,
                                                                                                   const class GALGAS_lstring & inOperand2,
                                                                                                   const class GALGAS_lstring & inOperand3,
                                                                                                   const class GALGAS_lstring & inOperand4,
                                                                                                   const class GALGAS_actualOutputExpressionList & inOperand5
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList reader_mConstructorExpressions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mConstructorName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsConstant (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionalTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mVariableName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Pointer class for @localVariableOrConstantDeclarationWithConstructorCallAST class                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_localVariableOrConstantDeclarationWithConstructorCallAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_bool mAttribute_mIsConstant ;
  public : GALGAS_lstring mAttribute_mOptionalTypeName ;
  public : GALGAS_lstring mAttribute_mVariableName ;
  public : GALGAS_lstring mAttribute_mConstructorName ;
  public : GALGAS_actualOutputExpressionList mAttribute_mConstructorExpressions ;

//--- Constructor
  public : cPtr_localVariableOrConstantDeclarationWithConstructorCallAST (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_bool & in_mIsConstant,
                                                                          const GALGAS_lstring & in_mOptionalTypeName,
                                                                          const GALGAS_lstring & in_mVariableName,
                                                                          const GALGAS_lstring & in_mConstructorName,
                                                                          const GALGAS_actualOutputExpressionList & in_mConstructorExpressions
                                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsConstant (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOptionalTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mConstructorName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList reader_mConstructorExpressions (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         @localVariableOrConstantDeclarationWithDefaultConstructorAST class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST * ptr (void) const { return (const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorAST (const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorAST extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                                      const class GALGAS_bool & inOperand1,
                                                                                                      const class GALGAS_lstring & inOperand2,
                                                                                                      const class GALGAS_lstring & inOperand3
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsConstant (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mVariableName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Pointer class for @localVariableOrConstantDeclarationWithDefaultConstructorAST class                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_bool mAttribute_mIsConstant ;
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mVariableName ;

//--- Constructor
  public : cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST (const GALGAS_location & in_mInstructionLocation,
                                                                             const GALGAS_bool & in_mIsConstant,
                                                                             const GALGAS_lstring & in_mTypeName,
                                                                             const GALGAS_lstring & in_mVariableName
                                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsConstant (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mVariableName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @logInstructionAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_logInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_logInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_logInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_logInstructionAST * ptr (void) const { return (const cPtr_logInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_logInstructionAST (const cPtr_logInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_logInstructionAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_logInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                            const class GALGAS_logListAST & inOperand1
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_logInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_logListAST reader_mLogList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_logInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @logInstructionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_logInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_logListAST mAttribute_mLogList ;

//--- Constructor
  public : cPtr_logInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                   const GALGAS_logListAST & in_mLogList
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_logListAST reader_mLogList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @loopInstructionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_loopInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_loopInstructionAST (void) ;

//---
  public : inline const class cPtr_loopInstructionAST * ptr (void) const { return (const cPtr_loopInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_loopInstructionAST (const cPtr_loopInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_loopInstructionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_loopInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                             const class GALGAS_semanticExpressionAST & inOperand1,
                                                             const class GALGAS_location & inOperand2,
                                                             const class GALGAS_semanticInstructionListAST & inOperand3,
                                                             const class GALGAS_location & inOperand4,
                                                             const class GALGAS_semanticExpressionAST & inOperand5,
                                                             const class GALGAS_location & inOperand6,
                                                             const class GALGAS_semanticInstructionListAST & inOperand7,
                                                             const class GALGAS_location & inOperand8,
                                                             const class GALGAS_location & inOperand9
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_loopInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfFirstInstructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfLoopExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfLoopInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfSecondInstructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfVariantExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mFirstInstructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLoopExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mSecondInstructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mVariantExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_loopInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @loopInstructionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_loopInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mVariantExpression ;
  public : GALGAS_location mAttribute_mEndOfVariantExpression ;
  public : GALGAS_semanticInstructionListAST mAttribute_mFirstInstructions ;
  public : GALGAS_location mAttribute_mEndOfFirstInstructions ;
  public : GALGAS_semanticExpressionAST mAttribute_mLoopExpression ;
  public : GALGAS_location mAttribute_mEndOfLoopExpression ;
  public : GALGAS_semanticInstructionListAST mAttribute_mSecondInstructions ;
  public : GALGAS_location mAttribute_mEndOfSecondInstructions ;
  public : GALGAS_location mAttribute_mEndOfLoopInstruction ;

//--- Constructor
  public : cPtr_loopInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                    const GALGAS_semanticExpressionAST & in_mVariantExpression,
                                    const GALGAS_location & in_mEndOfVariantExpression,
                                    const GALGAS_semanticInstructionListAST & in_mFirstInstructions,
                                    const GALGAS_location & in_mEndOfFirstInstructions,
                                    const GALGAS_semanticExpressionAST & in_mLoopExpression,
                                    const GALGAS_location & in_mEndOfLoopExpression,
                                    const GALGAS_semanticInstructionListAST & in_mSecondInstructions,
                                    const GALGAS_location & in_mEndOfSecondInstructions,
                                    const GALGAS_location & in_mEndOfLoopInstruction
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mVariantExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfVariantExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mFirstInstructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfFirstInstructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLoopExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfLoopExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mSecondInstructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfSecondInstructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfLoopInstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @matchInstructionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_matchInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_matchInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_matchInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_matchInstructionAST * ptr (void) const { return (const cPtr_matchInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_matchInstructionAST (const cPtr_matchInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_matchInstructionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_matchInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                              const class GALGAS_semanticExpressionListAST & inOperand1,
                                                              const class GALGAS_matchInstructionBranchListAST & inOperand2,
                                                              const class GALGAS_semanticInstructionListAST & inOperand3,
                                                              const class GALGAS_location & inOperand4
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_matchInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_match_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_matchInstructionBranchListAST reader_mMatchInstructionBranchList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListAST reader_mMatchedExpressionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_matchInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_matchInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @matchInstructionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_matchInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_semanticExpressionListAST mAttribute_mMatchedExpressionList ;
  public : GALGAS_matchInstructionBranchListAST mAttribute_mMatchInstructionBranchList ;
  public : GALGAS_semanticInstructionListAST mAttribute_mElseInstructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_match_5F_instruction ;

//--- Constructor
  public : cPtr_matchInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                     const GALGAS_semanticExpressionListAST & in_mMatchedExpressionList,
                                     const GALGAS_matchInstructionBranchListAST & in_mMatchInstructionBranchList,
                                     const GALGAS_semanticInstructionListAST & in_mElseInstructionList,
                                     const GALGAS_location & in_mEndOf_5F_match_5F_instruction
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListAST reader_mMatchedExpressionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_matchInstructionBranchListAST reader_mMatchInstructionBranchList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mElseInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_match_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @messageInstructionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_messageInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_messageInstructionAST (void) ;

//---
  public : inline const class cPtr_messageInstructionAST * ptr (void) const { return (const cPtr_messageInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_messageInstructionAST (const cPtr_messageInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_messageInstructionAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_messageInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_semanticExpressionAST & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_messageInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_messageInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_messageInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @messageInstructionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_messageInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mExpression ;

//--- Constructor
  public : cPtr_messageInstructionAST (const GALGAS_location & in_mInstructionLocation,
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
//                                           @methodCallInstructionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_methodCallInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_methodCallInstructionAST (void) ;

//---
  public : inline const class cPtr_methodCallInstructionAST * ptr (void) const { return (const cPtr_methodCallInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_methodCallInstructionAST (const cPtr_methodCallInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_methodCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_methodCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_semanticExpressionAST & inOperand1,
                                                                   const class GALGAS_lstring & inOperand2,
                                                                   const class GALGAS_actualParameterListAST & inOperand3
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_methodCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST reader_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mReceiverExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_methodCallInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodCallInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @methodCallInstructionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_methodCallInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mReceiverExpression ;
  public : GALGAS_lstring mAttribute_mMethodName ;
  public : GALGAS_actualParameterListAST mAttribute_mActualParameterList ;

//--- Constructor
  public : cPtr_methodCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                          const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                          const GALGAS_lstring & in_mMethodName,
                                          const GALGAS_actualParameterListAST & in_mActualParameterList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListAST reader_mActualParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @onceFunctionDeclarationAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_onceFunctionDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_onceFunctionDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_onceFunctionDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_onceFunctionDeclarationAST * ptr (void) const { return (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_onceFunctionDeclarationAST (const cPtr_onceFunctionDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_onceFunctionDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_onceFunctionDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2,
                                                                     const class GALGAS_lstring & inOperand3,
                                                                     const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                     const class GALGAS_location & inOperand5,
                                                                     const class GALGAS_bool & inOperand6
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_onceFunctionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfFunctionInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mFunctionInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsInternal (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mResultTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mResultVariableName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_onceFunctionDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @onceFunctionDeclarationAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_onceFunctionDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mFunctionName ;
  public : GALGAS_lstring mAttribute_mResultTypeName ;
  public : GALGAS_lstring mAttribute_mResultVariableName ;
  public : GALGAS_semanticInstructionListAST mAttribute_mFunctionInstructionList ;
  public : GALGAS_location mAttribute_mEndOfFunctionInstructionList ;
  public : GALGAS_bool mAttribute_mIsInternal ;

//--- Constructor
  public : cPtr_onceFunctionDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                            const GALGAS_lstring & in_mFunctionName,
                                            const GALGAS_lstring & in_mResultTypeName,
                                            const GALGAS_lstring & in_mResultVariableName,
                                            const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                            const GALGAS_location & in_mEndOfFunctionInstructionList,
                                            const GALGAS_bool & in_mIsInternal
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mResultTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mResultVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mFunctionInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfFunctionInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsInternal (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @plusEqualElementsInstructionAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_plusEqualElementsInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_plusEqualElementsInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_plusEqualElementsInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_plusEqualElementsInstructionAST * ptr (void) const { return (const cPtr_plusEqualElementsInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_plusEqualElementsInstructionAST (const cPtr_plusEqualElementsInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_plusEqualElementsInstructionAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_plusEqualElementsInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_lstringlist & inOperand2,
                                                                          const class GALGAS_actualOutputExpressionList & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_plusEqualElementsInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList reader_mExpressions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mReceiverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_plusEqualElementsInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @plusEqualElementsInstructionAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_plusEqualElementsInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mReceiverName ;
  public : GALGAS_lstringlist mAttribute_mStructAttributeList ;
  public : GALGAS_actualOutputExpressionList mAttribute_mExpressions ;

//--- Constructor
  public : cPtr_plusEqualElementsInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mReceiverName,
                                                 const GALGAS_lstringlist & in_mStructAttributeList,
                                                 const GALGAS_actualOutputExpressionList & in_mExpressions
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList reader_mExpressions (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @plusEqualExpressionInstructionAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_plusEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_plusEqualExpressionInstructionAST (void) ;

//---
  public : inline const class cPtr_plusEqualExpressionInstructionAST * ptr (void) const { return (const cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_plusEqualExpressionInstructionAST (const cPtr_plusEqualExpressionInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_plusEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_plusEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_lstringlist & inOperand2,
                                                                            const class GALGAS_semanticExpressionAST & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_plusEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mReceiverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_plusEqualExpressionInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @plusEqualExpressionInstructionAST class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_plusEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mReceiverName ;
  public : GALGAS_lstringlist mAttribute_mStructAttributeList ;
  public : GALGAS_semanticExpressionAST mAttribute_mExpression ;

//--- Constructor
  public : cPtr_plusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_lstring & in_mReceiverName,
                                                   const GALGAS_lstringlist & in_mStructAttributeList,
                                                   const GALGAS_semanticExpressionAST & in_mExpression
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @readAccessWithInstructionAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_readAccessWithInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_readAccessWithInstructionAST (void) ;

//---
  public : inline const class cPtr_readAccessWithInstructionAST * ptr (void) const { return (const cPtr_readAccessWithInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_readAccessWithInstructionAST (const cPtr_readAccessWithInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_readAccessWithInstructionAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_readAccessWithInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_semanticExpressionAST & inOperand2,
                                                                       const class GALGAS_location & inOperand3,
                                                                       const class GALGAS_semanticExpressionAST & inOperand4,
                                                                       const class GALGAS_location & inOperand5,
                                                                       const class GALGAS_lstring & inOperand6,
                                                                       const class GALGAS_semanticInstructionListAST & inOperand7,
                                                                       const class GALGAS_location & inOperand8,
                                                                       const class GALGAS_semanticInstructionListAST & inOperand9,
                                                                       const class GALGAS_location & inOperand10
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_readAccessWithInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mDoBranchInstructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mElseBranchInstructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfKeyExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfReceiverExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_do_5F_instructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_else_5F_instructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mKeyExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mPrefix (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mReceiverExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mSearchMethodNameForErrorSignaling (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readAccessWithInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readAccessWithInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @readAccessWithInstructionAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_readAccessWithInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mPrefix ;
  public : GALGAS_semanticExpressionAST mAttribute_mReceiverExpression ;
  public : GALGAS_location mAttribute_mEndOfReceiverExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mKeyExpression ;
  public : GALGAS_location mAttribute_mEndOfKeyExpression ;
  public : GALGAS_lstring mAttribute_mSearchMethodNameForErrorSignaling ;
  public : GALGAS_semanticInstructionListAST mAttribute_mDoBranchInstructions ;
  public : GALGAS_location mAttribute_mEndOf_5F_do_5F_instructions ;
  public : GALGAS_semanticInstructionListAST mAttribute_mElseBranchInstructions ;
  public : GALGAS_location mAttribute_mEndOf_5F_else_5F_instructions ;

//--- Constructor
  public : cPtr_readAccessWithInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mPrefix,
                                              const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                              const GALGAS_location & in_mEndOfReceiverExpression,
                                              const GALGAS_semanticExpressionAST & in_mKeyExpression,
                                              const GALGAS_location & in_mEndOfKeyExpression,
                                              const GALGAS_lstring & in_mSearchMethodNameForErrorSignaling,
                                              const GALGAS_semanticInstructionListAST & in_mDoBranchInstructions,
                                              const GALGAS_location & in_mEndOf_5F_do_5F_instructions,
                                              const GALGAS_semanticInstructionListAST & in_mElseBranchInstructions,
                                              const GALGAS_location & in_mEndOf_5F_else_5F_instructions
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mPrefix (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mKeyExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfKeyExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mSearchMethodNameForErrorSignaling (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mDoBranchInstructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_do_5F_instructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mElseBranchInstructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_else_5F_instructions (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @readWriteAccessWithInstructionAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_readWriteAccessWithInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_readWriteAccessWithInstructionAST (void) ;

//---
  public : inline const class cPtr_readWriteAccessWithInstructionAST * ptr (void) const { return (const cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_readWriteAccessWithInstructionAST (const cPtr_readWriteAccessWithInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_readWriteAccessWithInstructionAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_readWriteAccessWithInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_lstringlist & inOperand3,
                                                                            const class GALGAS_location & inOperand4,
                                                                            const class GALGAS_semanticExpressionAST & inOperand5,
                                                                            const class GALGAS_location & inOperand6,
                                                                            const class GALGAS_lstring & inOperand7,
                                                                            const class GALGAS_semanticInstructionListAST & inOperand8,
                                                                            const class GALGAS_location & inOperand9,
                                                                            const class GALGAS_semanticInstructionListAST & inOperand10,
                                                                            const class GALGAS_location & inOperand11
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_readWriteAccessWithInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfKeyExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfReceiverExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_do_5F_instructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_else_5F_instructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mFieldList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mKeyExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mPrefix (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mReceiverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mSearchMethodNameForErrorSignaling (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_m_5F_do_5F_Instructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_m_5F_else_5F_Instructions (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readWriteAccessWithInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @readWriteAccessWithInstructionAST class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_readWriteAccessWithInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mPrefix ;
  public : GALGAS_lstring mAttribute_mReceiverName ;
  public : GALGAS_lstringlist mAttribute_mFieldList ;
  public : GALGAS_location mAttribute_mEndOfReceiverExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mKeyExpression ;
  public : GALGAS_location mAttribute_mEndOfKeyExpression ;
  public : GALGAS_lstring mAttribute_mSearchMethodNameForErrorSignaling ;
  public : GALGAS_semanticInstructionListAST mAttribute_m_5F_do_5F_Instructions ;
  public : GALGAS_location mAttribute_mEndOf_5F_do_5F_instructions ;
  public : GALGAS_semanticInstructionListAST mAttribute_m_5F_else_5F_Instructions ;
  public : GALGAS_location mAttribute_mEndOf_5F_else_5F_instructions ;

//--- Constructor
  public : cPtr_readWriteAccessWithInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_lstring & in_mPrefix,
                                                   const GALGAS_lstring & in_mReceiverName,
                                                   const GALGAS_lstringlist & in_mFieldList,
                                                   const GALGAS_location & in_mEndOfReceiverExpression,
                                                   const GALGAS_semanticExpressionAST & in_mKeyExpression,
                                                   const GALGAS_location & in_mEndOfKeyExpression,
                                                   const GALGAS_lstring & in_mSearchMethodNameForErrorSignaling,
                                                   const GALGAS_semanticInstructionListAST & in_m_5F_do_5F_Instructions,
                                                   const GALGAS_location & in_mEndOf_5F_do_5F_instructions,
                                                   const GALGAS_semanticInstructionListAST & in_m_5F_else_5F_Instructions,
                                                   const GALGAS_location & in_mEndOf_5F_else_5F_instructions
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mPrefix (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mFieldList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mKeyExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfKeyExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mSearchMethodNameForErrorSignaling (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_m_5F_do_5F_Instructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_do_5F_instructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_m_5F_else_5F_Instructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_else_5F_instructions (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @routineCallInstructionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineCallInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_routineCallInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_routineCallInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_routineCallInstructionAST * ptr (void) const { return (const cPtr_routineCallInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_routineCallInstructionAST (const cPtr_routineCallInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_routineCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_actualParameterListAST & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST reader_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineCallInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineCallInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @routineCallInstructionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_routineCallInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mRoutineName ;
  public : GALGAS_actualParameterListAST mAttribute_mActualParameterList ;

//--- Constructor
  public : cPtr_routineCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                           const GALGAS_lstring & in_mRoutineName,
                                           const GALGAS_actualParameterListAST & in_mActualParameterList
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListAST reader_mActualParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @routineDeclarationAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineDeclarationAST : public GALGAS_externRoutineDeclarationAST {
//--- Constructor
  public : GALGAS_routineDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_routineDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_routineDeclarationAST * ptr (void) const { return (const cPtr_routineDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_routineDeclarationAST (const cPtr_routineDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineDeclarationAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_routineDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                const class GALGAS_bool & inOperand1,
                                                                const class GALGAS_lstring & inOperand2,
                                                                const class GALGAS_formalParameterListAST & inOperand3,
                                                                const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                const class GALGAS_location & inOperand5
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfRoutineInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mRoutineInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @routineDeclarationAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_routineDeclarationAST : public cPtr_externRoutineDeclarationAST {
//--- Attributes
  public : GALGAS_semanticInstructionListAST mAttribute_mRoutineInstructionList ;
  public : GALGAS_location mAttribute_mEndOfRoutineInstructionList ;

//--- Constructor
  public : cPtr_routineDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                       const GALGAS_bool & in_mIsInternal,
                                       const GALGAS_lstring & in_mRoutineName,
                                       const GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                       const GALGAS_semanticInstructionListAST & in_mRoutineInstructionList,
                                       const GALGAS_location & in_mEndOfRoutineInstructionList
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mRoutineInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfRoutineInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @selfAssignmentInstructionAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_selfAssignmentInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_selfAssignmentInstructionAST (void) ;

//---
  public : inline const class cPtr_selfAssignmentInstructionAST * ptr (void) const { return (const cPtr_selfAssignmentInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selfAssignmentInstructionAST (const cPtr_selfAssignmentInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selfAssignmentInstructionAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_selfAssignmentInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_semanticExpressionAST & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selfAssignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mSourceExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfAssignmentInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @selfAssignmentInstructionAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selfAssignmentInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mSourceExpression ;

//--- Constructor
  public : cPtr_selfAssignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_semanticExpressionAST & in_mSourceExpression
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @selfConcatInstructionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_selfConcatInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_selfConcatInstructionAST (void) ;

//---
  public : inline const class cPtr_selfConcatInstructionAST * ptr (void) const { return (const cPtr_selfConcatInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selfConcatInstructionAST (const cPtr_selfConcatInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selfConcatInstructionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_selfConcatInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_semanticExpressionAST & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selfConcatInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mSourceExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfConcatInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfConcatInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @selfConcatInstructionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selfConcatInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mSourceExpression ;

//--- Constructor
  public : cPtr_selfConcatInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                          const GALGAS_semanticExpressionAST & in_mSourceExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @selfIncDecInstructionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_selfIncDecInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_selfIncDecInstructionAST (void) ;

//---
  public : inline const class cPtr_selfIncDecInstructionAST * ptr (void) const { return (const cPtr_selfIncDecInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selfIncDecInstructionAST (const cPtr_selfIncDecInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selfIncDecInstructionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_selfIncDecInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_incDecKind & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selfIncDecInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_incDecKind reader_mKind (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfIncDecInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @selfIncDecInstructionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selfIncDecInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_incDecKind mAttribute_mKind ;

//--- Constructor
  public : cPtr_selfIncDecInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                          const GALGAS_incDecKind & in_mKind
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_incDecKind reader_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @selfModifierCallInstructionAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_selfModifierCallInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_selfModifierCallInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_selfModifierCallInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_selfModifierCallInstructionAST * ptr (void) const { return (const cPtr_selfModifierCallInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selfModifierCallInstructionAST (const cPtr_selfModifierCallInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selfModifierCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_selfModifierCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_actualParameterListAST & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selfModifierCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST reader_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mModifierName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfModifierCallInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfModifierCallInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @selfModifierCallInstructionAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selfModifierCallInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mModifierName ;
  public : GALGAS_actualParameterListAST mAttribute_mActualParameterList ;

//--- Constructor
  public : cPtr_selfModifierCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mModifierName,
                                                const GALGAS_actualParameterListAST & in_mActualParameterList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mModifierName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListAST reader_mActualParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @selfPlusEqualElementsInstructionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_selfPlusEqualElementsInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_selfPlusEqualElementsInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_selfPlusEqualElementsInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_selfPlusEqualElementsInstructionAST * ptr (void) const { return (const cPtr_selfPlusEqualElementsInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selfPlusEqualElementsInstructionAST (const cPtr_selfPlusEqualElementsInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selfPlusEqualElementsInstructionAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_selfPlusEqualElementsInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_actualOutputExpressionList & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selfPlusEqualElementsInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList reader_mExpressions (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfPlusEqualElementsInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @selfPlusEqualElementsInstructionAST class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selfPlusEqualElementsInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_actualOutputExpressionList mAttribute_mExpressions ;

//--- Constructor
  public : cPtr_selfPlusEqualElementsInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_actualOutputExpressionList & in_mExpressions
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList reader_mExpressions (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @selfPlusEqualExpressionInstructionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_selfPlusEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_selfPlusEqualExpressionInstructionAST (void) ;

//---
  public : inline const class cPtr_selfPlusEqualExpressionInstructionAST * ptr (void) const { return (const cPtr_selfPlusEqualExpressionInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selfPlusEqualExpressionInstructionAST (const cPtr_selfPlusEqualExpressionInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selfPlusEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_selfPlusEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_semanticExpressionAST & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selfPlusEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfPlusEqualExpressionInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @selfPlusEqualExpressionInstructionAST class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selfPlusEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mExpression ;

//--- Constructor
  public : cPtr_selfPlusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
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
//                                           @setterCallInstructionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_setterCallInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_setterCallInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_setterCallInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_setterCallInstructionAST * ptr (void) const { return (const cPtr_setterCallInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_setterCallInstructionAST (const cPtr_setterCallInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_setterCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_setterCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_lstringlist & inOperand2,
                                                                   const class GALGAS_lstring & inOperand3,
                                                                   const class GALGAS_lstring & inOperand4,
                                                                   const class GALGAS_actualParameterListAST & inOperand5
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_setterCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST reader_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mModifierName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mReceiverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mReceiverStructAttributes (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeNameForCasting (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_setterCallInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterCallInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @setterCallInstructionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_setterCallInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mReceiverName ;
  public : GALGAS_lstringlist mAttribute_mReceiverStructAttributes ;
  public : GALGAS_lstring mAttribute_mTypeNameForCasting ;
  public : GALGAS_lstring mAttribute_mModifierName ;
  public : GALGAS_actualParameterListAST mAttribute_mActualParameterList ;

//--- Constructor
  public : cPtr_setterCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                          const GALGAS_lstring & in_mReceiverName,
                                          const GALGAS_lstringlist & in_mReceiverStructAttributes,
                                          const GALGAS_lstring & in_mTypeNameForCasting,
                                          const GALGAS_lstring & in_mModifierName,
                                          const GALGAS_actualParameterListAST & in_mActualParameterList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mReceiverStructAttributes (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeNameForCasting (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mModifierName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListAST reader_mActualParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @structuredCastInstructionAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structuredCastInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_structuredCastInstructionAST (void) ;

//---
  public : inline const class cPtr_structuredCastInstructionAST * ptr (void) const { return (const cPtr_structuredCastInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_structuredCastInstructionAST (const cPtr_structuredCastInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structuredCastInstructionAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_structuredCastInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_semanticExpressionAST & inOperand1,
                                                                       const class GALGAS_castInstructionBranchListAST & inOperand2,
                                                                       const class GALGAS_semanticInstructionListAST & inOperand3,
                                                                       const class GALGAS_location & inOperand4
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structuredCastInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mCastExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_castInstructionBranchListAST reader_mCastInstructionBranchList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfCastInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structuredCastInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structuredCastInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @structuredCastInstructionAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_structuredCastInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mCastExpression ;
  public : GALGAS_castInstructionBranchListAST mAttribute_mCastInstructionBranchList ;
  public : GALGAS_semanticInstructionListAST mAttribute_mElseInstructionList ;
  public : GALGAS_location mAttribute_mEndOfCastInstruction ;

//--- Constructor
  public : cPtr_structuredCastInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_semanticExpressionAST & in_mCastExpression,
                                              const GALGAS_castInstructionBranchListAST & in_mCastInstructionBranchList,
                                              const GALGAS_semanticInstructionListAST & in_mElseInstructionList,
                                              const GALGAS_location & in_mEndOfCastInstruction
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mCastExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_castInstructionBranchListAST reader_mCastInstructionBranchList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mElseInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfCastInstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @switchInstructionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_switchInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_switchInstructionAST (void) ;

//---
  public : inline const class cPtr_switchInstructionAST * ptr (void) const { return (const cPtr_switchInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_switchInstructionAST (const cPtr_switchInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_switchInstructionAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_switchInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                               const class GALGAS_semanticExpressionAST & inOperand1,
                                                               const class GALGAS_location & inOperand2,
                                                               const class GALGAS_switchBranchesAST & inOperand3,
                                                               const class GALGAS_location & inOperand4
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_switchInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_switchBranchesAST reader_mBranches (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfSwitchExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_switch_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mSwitchExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @switchInstructionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_switchInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mSwitchExpression ;
  public : GALGAS_location mAttribute_mEndOfSwitchExpression ;
  public : GALGAS_switchBranchesAST mAttribute_mBranches ;
  public : GALGAS_location mAttribute_mEndOf_5F_switch_5F_instruction ;

//--- Constructor
  public : cPtr_switchInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                      const GALGAS_semanticExpressionAST & in_mSwitchExpression,
                                      const GALGAS_location & in_mEndOfSwitchExpression,
                                      const GALGAS_switchBranchesAST & in_mBranches,
                                      const GALGAS_location & in_mEndOf_5F_switch_5F_instruction
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mSwitchExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfSwitchExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_switchBranchesAST reader_mBranches (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_switch_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @typeMethodCallInstructionAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeMethodCallInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_typeMethodCallInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typeMethodCallInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_typeMethodCallInstructionAST * ptr (void) const { return (const cPtr_typeMethodCallInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typeMethodCallInstructionAST (const cPtr_typeMethodCallInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeMethodCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_typeMethodCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_lstring & inOperand2,
                                                                       const class GALGAS_actualParameterListAST & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeMethodCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListAST reader_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeMethodCallInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @typeMethodCallInstructionAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_typeMethodCallInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mMethodName ;
  public : GALGAS_actualParameterListAST mAttribute_mActualParameterList ;

//--- Constructor
  public : cPtr_typeMethodCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mTypeName,
                                              const GALGAS_lstring & in_mMethodName,
                                              const GALGAS_actualParameterListAST & in_mActualParameterList
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListAST reader_mActualParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @warningInstructionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_warningInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_warningInstructionAST (void) ;

//---
  public : inline const class cPtr_warningInstructionAST * ptr (void) const { return (const cPtr_warningInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_warningInstructionAST (const cPtr_warningInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_warningInstructionAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_warningInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_semanticExpressionAST & inOperand1,
                                                                const class GALGAS_semanticExpressionAST & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_warningInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mLocationExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST reader_mMessageExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_warningInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_warningInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @warningInstructionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_warningInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mLocationExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mMessageExpression ;

//--- Constructor
  public : cPtr_warningInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                       const GALGAS_semanticExpressionAST & in_mLocationExpression,
                                       const GALGAS_semanticExpressionAST & in_mMessageExpression
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mLocationExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mMessageExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Function 'generateGalgas3InstructionTerminator'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool function_generateGalgas_33_InstructionTerminator (class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

#endif
